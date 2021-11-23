// 헤더.
#include <Windows.h>
#include <iostream>
#include <detours.h>
#include "SDK.h"

// 링커 라이브러리.
#pragma comment (lib, "detours.lib")

// 오류 무시.
#pragma warning ( disable : 4996 )

// 정의.
BYTE* _GObjects = nullptr;
BYTE* _GNames = nullptr;
UWorld* GWorld = nullptr;

APlayerController* player = nullptr;
AEFPawn* playerPawn = nullptr;
UEFGameViewportClient* viewport = nullptr;

// 색상.
#define MakeColor(R, G, B) { B, G, R, 255 }
FColor Yellow MakeColor(255, 255, 0);

// 프로세스이벤트 타입 주소 지정.
#define g_dwProcessEvent 0x7FFC1F716E20 // 0x7FFC05E46E20 수동검색 EFEngine.UObject::ProcessEvent
typedef void(__thiscall* tProcessEvent)(class UObject*, class UFunction*, void*, void*); // UE3 프로세스이벤트 기본 인자 4개.
tProcessEvent vProcessEvent = (tProcessEvent)g_dwProcessEvent;

// PostRender.
void PostRender(UCanvas* canvas)
{
	if (canvas == nullptr)
		return;

		if (GWorld != nullptr && GWorld->PersistentLevel != NULL && GWorld->PersistentLevel->Actors.Num())
		{
			for (int i = 0; i < GWorld->PersistentLevel->Actors.Num(); i++)
			{
				if (GWorld->PersistentLevel->Actors[i])
				{
					if (GWorld->PersistentLevel->Actors[i]->IsA(AEFPawn::StaticClass()))
					{
						AEFPawn* pawn = static_cast<AEFPawn*>(GWorld->PersistentLevel->Actors[i]);

						if (pawn->Mesh)
						{
							auto name = pawn->Name.GetName();

							FBoxSphereBounds PlayerBounds = pawn->Mesh->Bounds;
							FVector corrected = pawn->Location;
							corrected.Z += 80.0;

							/*
              Actors 이름.
							EFPlayer
							EFNonPlayer
							EFPet
							EFVehicle
							EFMonster
							*/
              
							// 몬스터 3DBox Esp
							if (name.find("EFMonster") != std::string::npos)
							{
								player->DrawDebugBox(corrected, PlayerBounds.BoxExtent, Yellow.R, Yellow.G, Yellow.B, false);
							}

              // 몹 내위치로 끌어당기기. < 몬스터들의 좌표값이 전부 서버사이드라 내 눈에만 끌려온걸로 보임. >
							if (GetAsyncKeyState(VK_HOME))
							{
								if (name.find("EFMonster") != std::string::npos)
								{
									pawn->Location = { playerPawn->Location.X + 50, playerPawn->Location.Y + 50, playerPawn->Location.Z };
								}
							}

              // 줌핵 기본 50 100이면 2배.
							if (GetAsyncKeyState(VK_PRIOR))
							{
								player->FOV(100);
							}
							if (GetAsyncKeyState(VK_NEXT))
							{
								player->FOV(50);
							}
					}
				}
			}
		}
	}
}

// FPS 체크 함수.
void inline FPS(UCanvas* canvas)
{
	CurrentTickCount = clock() * 0.001f;
	Fps++;
	if ((CurrentTickCount - LastTickCount) > 1.0f)
	{
		LastTickCount = CurrentTickCount;
		swprintf(FrameRate, 50, L"[ FPS: %d ]", Fps);
		Fps = 0;
	}
	canvas->DrawTextE(canvas, FString(FrameRate), canvas->ClipX - 5 - (StrLen(canvas, FString(FrameRate))), 2.5f, White);
}

// ProcessEvent 후킹.
void __fastcall MyProcessEvent(UObject* pObject, UFunction* pFunction, void* pParams, void* pResult)
{
	if (pFunction)
	{
		auto szNmae = pFunction->GetFullName();
    
		if (szNmae.find(es("Function EFGame.EFPlayerController.PlayerTick")) != std::string::npos)
		{
			if (efplayer == nullptr)
			{
				efplayer = static_cast<AEFPlayerController*>(pObject);
				std::cout << efplayer << std::endl;
			}
		}

		//if (szNmae.find(es("Function EFGame.EFGameViewportClient.PostRender")) != std::string::npos) InternalIndex 체크용.
		if (pFunction->InternalIndex == 41995)
		{
			//std::cout << pFunction->InternalIndex << std::endl;
			//std::cout << pFunction->GetFullName() << std::endl;
			if (pParams != nullptr && viewport == nullptr)
			{
				viewport = (UEFGameViewportClient*)(pObject);
			}
		}
    
		//if (szNmae.find(es("Function Engine.Interaction.PostRender")) != std::string::npos) InternalIndex 체크용.
		if (pFunction->InternalIndex == 14572)
		{
			if (pParams != nullptr)
			{
				PostRender(((UInteraction_PostRender_Params*)(pParams))->Canvas);
			}
		}
	}

	vProcessEvent(pObject, pFunction, pParams, pResult);
}

// 패턴스캔.
DWORD64 FindPattern(DWORD64 startAddress, unsigned int size, char* pattern, BYTE len)
{
    DWORD64 retval = 0;

    for (unsigned int i = 0; i < size; i++) {
        BYTE* checkByte = (BYTE*)(startAddress + i);

        if ((*checkByte & 0xFF) == (pattern[0] & 0xFF)) {
            if (!memcmp((void*)(startAddress + i), pattern, len)) {
                retval = startAddress + i;
                break;
            }
        }
    }
    return retval;
}

// 메인스레드
void OnAttach()
{
  EFEngine = (uintptr_t)GetModuleHandleA(es("EFEngine.dll"));
  
  	BYTE* __GObjects = (BYTE*)(FindPattern(EFEngine, 0x2600000, es("\x48\x63\xC9\x48\x8B\x04\xC8\xC3\x33\xC0\xC3\xCC\xCC"), 13) - 7); // 수동검색 EFEngine.UObject::GObjObjects
	if (__GObjects == nullptr)
		return;

	BYTE* _GObjects = (BYTE*)*(DWORD*)(__GObjects + 0x03); // 옵코드 48 8B 05 E321A501 - mov rax,[EFEngine.UObject::GObjObjects]
	_GObjects += (unsigned __int64)__GObjects + 0x03 + sizeof(DWORD); // 옵코드 E321A501 + 3 (mov rax), + 4 "E321A501"
	UObject::GObjects = reinterpret_cast<decltype(UObject::GObjects)>(_GObjects);

	BYTE* __GNames = (BYTE*)(FindPattern(EFEngine, 0x2600000, es("\x4C\x8B\x04\xD0\x48\x8B\x81\x9C\x00\x00\x00\x48\xBA\x00\x00\x00\x00\x10\x00\x00\x00"), 21) - 7); // 수동검색 EFEngine.FName::Names

	if (__GNames == nullptr)
		return;

	BYTE* _GNames = (BYTE*)*(DWORD*)(__GNames + 0x03);
	_GNames += (unsigned __int64)__GNames + 0x03 + sizeof(DWORD);
	FName::GNames = reinterpret_cast<decltype(FName::GNames)>(_GNames);

	BYTE* __UWorld = (BYTE*)(FindPattern(EFEngine, 0x2600000, es("\x48\x8B\xFA\x48\x8B\x88\x78\x01\x00\x00\x48\x85\xC9"), 13) - 7); // 수동검색 EFEngine.UWorld::UWorld
	if (__UWorld == nullptr)
		return;

	BYTE* _UWorld = (BYTE*)*(DWORD*)(__UWorld + 3);
	_UWorld += (unsigned __int64)__UWorld + 3 + sizeof(DWORD);
	GWorld = (UWorld*)*(DWORD64*)(_UWorld);
  
  DetourTransactionBegin();
  DetourUpdateThread(GetCurrentThread());
  DetourAttach(&(PVOID&)vProcessEvent, MyProcessEvent);
  DetourTransactionCommit();
}

// 메인
BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hModule);
		CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)OnAttach, NULL, NULL, NULL);

		break;

	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}
