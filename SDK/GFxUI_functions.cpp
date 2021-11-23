// Name: LOSTARK, Version: 1

#include "../SDK.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxFSCmdHandler.FSCommand
//		Flags  -> ()
// Parameters:
//		class UGFxMoviePlayer*                             Movie                                                      (Parm)
//		class UGFxEvent_FSCommand*                         Event                                                      (Parm)
//		struct FString                                     Cmd                                                        (Parm, NeedCtorLink)
//		struct FString                                     Arg                                                        (Parm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxFSCmdHandler::FSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, const struct FString& Cmd, const struct FString& Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxFSCmdHandler.FSCommand");

	UGFxFSCmdHandler_FSCommand_Params params {};
	params.Movie = Movie;
	params.Event = Event;
	params.Cmd = Cmd;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxInteraction.CloseAllMoviePlayers
//		Flags  -> ()
void UGFxInteraction::CloseAllMoviePlayers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxInteraction.CloseAllMoviePlayers");

	UGFxInteraction_CloseAllMoviePlayers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged
//		Flags  -> ()
void UGFxInteraction::NotifySplitscreenLayoutChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged");

	UGFxInteraction_NotifySplitscreenLayoutChanged_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxInteraction.NotifyPlayerRemoved
//		Flags  -> ()
// Parameters:
//		int                                                PlayerIndex                                                (Parm)
//		class ULocalPlayer*                                RemovedPlayer                                              (Parm)
void UGFxInteraction::NotifyPlayerRemoved(int PlayerIndex, class ULocalPlayer* RemovedPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxInteraction.NotifyPlayerRemoved");

	UGFxInteraction_NotifyPlayerRemoved_Params params {};
	params.PlayerIndex = PlayerIndex;
	params.RemovedPlayer = RemovedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxInteraction.NotifyPlayerAdded
//		Flags  -> ()
// Parameters:
//		int                                                PlayerIndex                                                (Parm)
//		class ULocalPlayer*                                AddedPlayer                                                (Parm)
void UGFxInteraction::NotifyPlayerAdded(int PlayerIndex, class ULocalPlayer* AddedPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxInteraction.NotifyPlayerAdded");

	UGFxInteraction_NotifyPlayerAdded_Params params {};
	params.PlayerIndex = PlayerIndex;
	params.AddedPlayer = AddedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxInteraction.NotifyGameSessionEnded
//		Flags  -> ()
void UGFxInteraction::NotifyGameSessionEnded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxInteraction.NotifyGameSessionEnded");

	UGFxInteraction_NotifyGameSessionEnded_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxInteraction.GetFocusMovie
//		Flags  -> ()
// Parameters:
//		int                                                ControllerId                                               (Parm)
//		class UGFxMoviePlayer*                             ReturnValue                                                (Parm, OutParm, ReturnParm)
class UGFxMoviePlayer* UGFxInteraction::GetFocusMovie(int ControllerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxInteraction.GetFocusMovie");

	UGFxInteraction_GetFocusMovie_Params params {};
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout
//		Flags  -> ()
void UGFxMoviePlayer::UpdateSplitscreenLayout()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout");

	UGFxMoviePlayer_UpdateSplitscreenLayout_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect
//		Flags  -> ()
// Parameters:
//		bool                                               bRemoveEffect                                              (Parm)
void UGFxMoviePlayer::ApplyPriorityVisibilityEffect(bool bRemoveEffect)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect");

	UGFxMoviePlayer_ApplyPriorityVisibilityEffect_Params params {};
	params.bRemoveEffect = bRemoveEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect
//		Flags  -> ()
// Parameters:
//		bool                                               bRemoveEffect                                              (Parm)
void UGFxMoviePlayer::ApplyPriorityBlurEffect(bool bRemoveEffect)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect");

	UGFxMoviePlayer_ApplyPriorityBlurEffect_Params params {};
	params.bRemoveEffect = bRemoveEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect
//		Flags  -> ()
// Parameters:
//		bool                                               bRequestedBlurState                                        (Parm)
//		bool                                               bRequestedHiddenState                                      (Parm)
void UGFxMoviePlayer::ApplyPriorityEffect(bool bRequestedBlurState, bool bRequestedHiddenState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect");

	UGFxMoviePlayer_ApplyPriorityEffect_Params params {};
	params.bRequestedBlurState = bRequestedBlurState;
	params.bRequestedHiddenState = bRequestedHiddenState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.PlaySoundFromTheme
//		Flags  -> ()
// Parameters:
//		struct FName                                       EventName                                                  (Parm)
//		struct FName                                       SoundThemeName                                             (OptionalParm, Parm)
void UGFxMoviePlayer::PlaySoundFromTheme(const struct FName& EventName, const struct FName& SoundThemeName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.PlaySoundFromTheme");

	UGFxMoviePlayer_PlaySoundFromTheme_Params params {};
	params.EventName = EventName;
	params.SoundThemeName = SoundThemeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.OnFocusLost
//		Flags  -> ()
// Parameters:
//		int                                                LocalPlayerIndex                                           (Parm)
void UGFxMoviePlayer::OnFocusLost(int LocalPlayerIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.OnFocusLost");

	UGFxMoviePlayer_OnFocusLost_Params params {};
	params.LocalPlayerIndex = LocalPlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.OnFocusGained
//		Flags  -> ()
// Parameters:
//		int                                                LocalPlayerIndex                                           (Parm)
void UGFxMoviePlayer::OnFocusGained(int LocalPlayerIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.OnFocusGained");

	UGFxMoviePlayer_OnFocusGained_Params params {};
	params.LocalPlayerIndex = LocalPlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.ConsoleCommand
//		Flags  -> ()
// Parameters:
//		struct FString                                     Command                                                    (Parm, NeedCtorLink)
void UGFxMoviePlayer::ConsoleCommand(const struct FString& Command)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ConsoleCommand");

	UGFxMoviePlayer_ConsoleCommand_Params params {};
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.GetPC
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           ReturnValue                                                (Parm, OutParm, ReturnParm)
class APlayerController* UGFxMoviePlayer::GetPC()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetPC");

	UGFxMoviePlayer_GetPC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.GetLP
//		Flags  -> ()
// Parameters:
//		class ULocalPlayer*                                ReturnValue                                                (Parm, OutParm, ReturnParm)
class ULocalPlayer* UGFxMoviePlayer::GetLP()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetLP");

	UGFxMoviePlayer_GetLP_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.Init
//		Flags  -> ()
// Parameters:
//		class ULocalPlayer*                                LocPlay                                                    (OptionalParm, Parm)
void UGFxMoviePlayer::Init(class ULocalPlayer* LocPlay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.Init");

	UGFxMoviePlayer_Init_Params params {};
	params.LocPlay = LocPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding
//		Flags  -> ()
// Parameters:
//		class UGFxObject*                                  WidgetToBind                                               (Parm)
//		struct FName                                       Path                                                       (Parm)
void UGFxMoviePlayer::SetWidgetPathBinding(class UGFxObject* WidgetToBind, const struct FName& Path)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding");

	UGFxMoviePlayer_SetWidgetPathBinding_Params params {};
	params.WidgetToBind = WidgetToBind;
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.PostWidgetInit
//		Flags  -> ()
void UGFxMoviePlayer::PostWidgetInit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.PostWidgetInit");

	UGFxMoviePlayer_PostWidgetInit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.WidgetUnloaded
//		Flags  -> ()
// Parameters:
//		struct FName                                       WidgetName                                                 (Parm)
//		struct FName                                       WidgetPath                                                 (Parm)
//		class UGFxObject*                                  Widget                                                     (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxMoviePlayer::WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.WidgetUnloaded");

	UGFxMoviePlayer_WidgetUnloaded_Params params {};
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.WidgetInitialized
//		Flags  -> ()
// Parameters:
//		struct FName                                       WidgetName                                                 (Parm)
//		struct FName                                       WidgetPath                                                 (Parm)
//		class UGFxObject*                                  Widget                                                     (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxMoviePlayer::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.WidgetInitialized");

	UGFxMoviePlayer_WidgetInitialized_Params params {};
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.ActionScriptString
//		Flags  -> ()
// Parameters:
//		struct FString                                     Path                                                       (Parm, NeedCtorLink)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UGFxMoviePlayer::ActionScriptString(const struct FString& Path)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ActionScriptString");

	UGFxMoviePlayer_ActionScriptString_Params params {};
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.ActionScriptFloat
//		Flags  -> ()
// Parameters:
//		struct FString                                     Path                                                       (Parm, NeedCtorLink)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UGFxMoviePlayer::ActionScriptFloat(const struct FString& Path)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ActionScriptFloat");

	UGFxMoviePlayer_ActionScriptFloat_Params params {};
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.ActionScriptInt
//		Flags  -> ()
// Parameters:
//		struct FString                                     Path                                                       (Parm, NeedCtorLink)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UGFxMoviePlayer::ActionScriptInt(const struct FString& Path)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ActionScriptInt");

	UGFxMoviePlayer_ActionScriptInt_Params params {};
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.ActionScriptVoid
//		Flags  -> ()
// Parameters:
//		struct FString                                     Path                                                       (Parm, NeedCtorLink)
void UGFxMoviePlayer::ActionScriptVoid(const struct FString& Path)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ActionScriptVoid");

	UGFxMoviePlayer_ActionScriptVoid_Params params {};
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer._Invoke
//		Flags  -> ()
// Parameters:
//		struct FString                                     method                                                     (Parm, NeedCtorLink)
//		TArray<struct FASValue>                            args                                                       (Parm, NeedCtorLink)
//		struct FASValue                                    ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FASValue UGFxMoviePlayer::_Invoke(const struct FString& method, TArray<struct FASValue> args)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer._Invoke");

	UGFxMoviePlayer__Invoke_Params params {};
	params.method = method;
	params.args = args;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction
//		Flags  -> ()
// Parameters:
//		class UGFxObject*                                  Object                                                     (Parm)
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
void UGFxMoviePlayer::ActionScriptSetFunction(class UGFxObject* Object, const struct FString& Member)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction");

	UGFxMoviePlayer_ActionScriptSetFunction_Params params {};
	params.Object = Object;
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.CreateArray
//		Flags  -> ()
// Parameters:
//		class UClass*                                      Type                                                       (OptionalParm, Parm)
//		class UGFxObject*                                  ReturnValue                                                (Parm, OutParm, ReturnParm)
class UGFxObject* UGFxMoviePlayer::CreateArray(class UClass* Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.CreateArray");

	UGFxMoviePlayer_CreateArray_Params params {};
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.CreateObject
//		Flags  -> ()
// Parameters:
//		struct FString                                     ASClass                                                    (Parm, NeedCtorLink)
//		class UClass*                                      Type                                                       (OptionalParm, Parm)
//		TArray<struct FASValue>                            args                                                       (OptionalParm, Parm, NeedCtorLink)
//		class UGFxObject*                                  ReturnValue                                                (Parm, OutParm, ReturnParm)
class UGFxObject* UGFxMoviePlayer::CreateObject(const struct FString& ASClass, class UClass* Type, TArray<struct FASValue> args)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.CreateObject");

	UGFxMoviePlayer_CreateObject_Params params {};
	params.ASClass = ASClass;
	params.Type = Type;
	params.args = args;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.SetVariableStringArray
//		Flags  -> ()
// Parameters:
//		struct FString                                     Path                                                       (Parm, NeedCtorLink)
//		int                                                Index                                                      (Parm)
//		TArray<struct FString>                             Arg                                                        (Parm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxMoviePlayer::SetVariableStringArray(const struct FString& Path, int Index, TArray<struct FString> Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableStringArray");

	UGFxMoviePlayer_SetVariableStringArray_Params params {};
	params.Path = Path;
	params.Index = Index;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.SetVariableFloatArray
//		Flags  -> ()
// Parameters:
//		struct FString                                     Path                                                       (Parm, NeedCtorLink)
//		int                                                Index                                                      (Parm)
//		TArray<float>                                      Arg                                                        (Parm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxMoviePlayer::SetVariableFloatArray(const struct FString& Path, int Index, TArray<float> Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableFloatArray");

	UGFxMoviePlayer_SetVariableFloatArray_Params params {};
	params.Path = Path;
	params.Index = Index;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.SetVariableIntArray
//		Flags  -> ()
// Parameters:
//		struct FString                                     Path                                                       (Parm, NeedCtorLink)
//		int                                                Index                                                      (Parm)
//		TArray<int>                                        Arg                                                        (Parm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxMoviePlayer::SetVariableIntArray(const struct FString& Path, int Index, TArray<int> Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableIntArray");

	UGFxMoviePlayer_SetVariableIntArray_Params params {};
	params.Path = Path;
	params.Index = Index;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.SetVariableArray
//		Flags  -> ()
// Parameters:
//		struct FString                                     Path                                                       (Parm, NeedCtorLink)
//		int                                                Index                                                      (Parm)
//		TArray<struct FASValue>                            Arg                                                        (Parm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxMoviePlayer::SetVariableArray(const struct FString& Path, int Index, TArray<struct FASValue> Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableArray");

	UGFxMoviePlayer_SetVariableArray_Params params {};
	params.Path = Path;
	params.Index = Index;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.GetVariableStringArray
//		Flags  -> ()
// Parameters:
//		struct FString                                     Path                                                       (Parm, NeedCtorLink)
//		int                                                Index                                                      (Parm)
//		TArray<struct FString>                             Arg                                                        (Parm, OutParm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxMoviePlayer::GetVariableStringArray(const struct FString& Path, int Index, TArray<struct FString>* Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableStringArray");

	UGFxMoviePlayer_GetVariableStringArray_Params params {};
	params.Path = Path;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Arg != nullptr)
		*Arg = params.Arg;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.GetVariableFloatArray
//		Flags  -> ()
// Parameters:
//		struct FString                                     Path                                                       (Parm, NeedCtorLink)
//		int                                                Index                                                      (Parm)
//		TArray<float>                                      Arg                                                        (Parm, OutParm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxMoviePlayer::GetVariableFloatArray(const struct FString& Path, int Index, TArray<float>* Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableFloatArray");

	UGFxMoviePlayer_GetVariableFloatArray_Params params {};
	params.Path = Path;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Arg != nullptr)
		*Arg = params.Arg;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.GetVariableIntArray
//		Flags  -> ()
// Parameters:
//		struct FString                                     Path                                                       (Parm, NeedCtorLink)
//		int                                                Index                                                      (Parm)
//		TArray<int>                                        Arg                                                        (Parm, OutParm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxMoviePlayer::GetVariableIntArray(const struct FString& Path, int Index, TArray<int>* Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableIntArray");

	UGFxMoviePlayer_GetVariableIntArray_Params params {};
	params.Path = Path;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Arg != nullptr)
		*Arg = params.Arg;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.GetVariableArray
//		Flags  -> ()
// Parameters:
//		struct FString                                     Path                                                       (Parm, NeedCtorLink)
//		int                                                Index                                                      (Parm)
//		TArray<struct FASValue>                            Arg                                                        (Parm, OutParm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxMoviePlayer::GetVariableArray(const struct FString& Path, int Index, TArray<struct FASValue>* Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableArray");

	UGFxMoviePlayer_GetVariableArray_Params params {};
	params.Path = Path;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Arg != nullptr)
		*Arg = params.Arg;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.SetVariableObject
//		Flags  -> ()
// Parameters:
//		struct FString                                     Path                                                       (Parm, NeedCtorLink)
//		class UGFxObject*                                  Object                                                     (Parm)
void UGFxMoviePlayer::SetVariableObject(const struct FString& Path, class UGFxObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableObject");

	UGFxMoviePlayer_SetVariableObject_Params params {};
	params.Path = Path;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.SetVariableString
//		Flags  -> ()
// Parameters:
//		struct FString                                     Path                                                       (Parm, NeedCtorLink)
//		struct FString                                     S                                                          (Parm, NeedCtorLink)
void UGFxMoviePlayer::SetVariableString(const struct FString& Path, const struct FString& S)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableString");

	UGFxMoviePlayer_SetVariableString_Params params {};
	params.Path = Path;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.SetVariableInt
//		Flags  -> ()
// Parameters:
//		struct FString                                     Path                                                       (Parm, NeedCtorLink)
//		int                                                I                                                          (Parm)
void UGFxMoviePlayer::SetVariableInt(const struct FString& Path, int I)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableInt");

	UGFxMoviePlayer_SetVariableInt_Params params {};
	params.Path = Path;
	params.I = I;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.SetVariableNumber
//		Flags  -> ()
// Parameters:
//		struct FString                                     Path                                                       (Parm, NeedCtorLink)
//		float                                              F                                                          (Parm)
void UGFxMoviePlayer::SetVariableNumber(const struct FString& Path, float F)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableNumber");

	UGFxMoviePlayer_SetVariableNumber_Params params {};
	params.Path = Path;
	params.F = F;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.SetVariableBool
//		Flags  -> ()
// Parameters:
//		struct FString                                     Path                                                       (Parm, NeedCtorLink)
//		bool                                               B                                                          (Parm)
void UGFxMoviePlayer::SetVariableBool(const struct FString& Path, bool B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableBool");

	UGFxMoviePlayer_SetVariableBool_Params params {};
	params.Path = Path;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.SetVariable
//		Flags  -> ()
// Parameters:
//		struct FString                                     Path                                                       (Parm, NeedCtorLink)
//		struct FASValue                                    Arg                                                        (Parm, NeedCtorLink)
void UGFxMoviePlayer::SetVariable(const struct FString& Path, const struct FASValue& Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariable");

	UGFxMoviePlayer_SetVariable_Params params {};
	params.Path = Path;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.GetVariableObject
//		Flags  -> ()
// Parameters:
//		struct FString                                     Path                                                       (Parm, NeedCtorLink)
//		class UClass*                                      Type                                                       (OptionalParm, Parm)
//		class UGFxObject*                                  ReturnValue                                                (Parm, OutParm, ReturnParm)
class UGFxObject* UGFxMoviePlayer::GetVariableObject(const struct FString& Path, class UClass* Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableObject");

	UGFxMoviePlayer_GetVariableObject_Params params {};
	params.Path = Path;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.GetVariableString
//		Flags  -> ()
// Parameters:
//		struct FString                                     Path                                                       (Parm, NeedCtorLink)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UGFxMoviePlayer::GetVariableString(const struct FString& Path)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableString");

	UGFxMoviePlayer_GetVariableString_Params params {};
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.GetVariableInt
//		Flags  -> ()
// Parameters:
//		struct FString                                     Path                                                       (Parm, NeedCtorLink)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UGFxMoviePlayer::GetVariableInt(const struct FString& Path)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableInt");

	UGFxMoviePlayer_GetVariableInt_Params params {};
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.GetVariableNumber
//		Flags  -> ()
// Parameters:
//		struct FString                                     Path                                                       (Parm, NeedCtorLink)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UGFxMoviePlayer::GetVariableNumber(const struct FString& Path)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableNumber");

	UGFxMoviePlayer_GetVariableNumber_Params params {};
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.GetVariableBool
//		Flags  -> ()
// Parameters:
//		struct FString                                     Path                                                       (Parm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxMoviePlayer::GetVariableBool(const struct FString& Path)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableBool");

	UGFxMoviePlayer_GetVariableBool_Params params {};
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.GetVariable
//		Flags  -> ()
// Parameters:
//		struct FString                                     Path                                                       (Parm, NeedCtorLink)
//		struct FASValue                                    ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FASValue UGFxMoviePlayer::GetVariable(const struct FString& Path)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariable");

	UGFxMoviePlayer_GetVariable_Params params {};
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.GetAVMVersion
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UGFxMoviePlayer::GetAVMVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetAVMVersion");

	UGFxMoviePlayer_GetAVMVersion_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.FilterButtonInput
//		Flags  -> ()
// Parameters:
//		int                                                ControllerId                                               (Parm)
//		struct FName                                       ButtonName                                                 (Parm)
//		TEnumAsByte<Core_EInputEvent>                      InputEvent                                                 (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxMoviePlayer::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<Core_EInputEvent> InputEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.FilterButtonInput");

	UGFxMoviePlayer_FilterButtonInput_Params params {};
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.FlushPlayerInput
//		Flags  -> ()
// Parameters:
//		bool                                               capturekeysonly                                            (Parm)
void UGFxMoviePlayer::FlushPlayerInput(bool capturekeysonly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.FlushPlayerInput");

	UGFxMoviePlayer_FlushPlayerInput_Params params {};
	params.capturekeysonly = capturekeysonly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys
//		Flags  -> ()
void UGFxMoviePlayer::ClearFocusIgnoreKeys()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys");

	UGFxMoviePlayer_ClearFocusIgnoreKeys_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey
//		Flags  -> ()
// Parameters:
//		struct FName                                       Key                                                        (Parm)
void UGFxMoviePlayer::AddFocusIgnoreKey(const struct FName& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey");

	UGFxMoviePlayer_AddFocusIgnoreKey_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.ClearCaptureKeys
//		Flags  -> ()
void UGFxMoviePlayer::ClearCaptureKeys()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ClearCaptureKeys");

	UGFxMoviePlayer_ClearCaptureKeys_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.AddCaptureKey
//		Flags  -> ()
// Parameters:
//		struct FName                                       Key                                                        (Parm)
void UGFxMoviePlayer::AddCaptureKey(const struct FName& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.AddCaptureKey");

	UGFxMoviePlayer_AddCaptureKey_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput
//		Flags  -> ()
// Parameters:
//		bool                                               bCanReceiveInput                                           (Parm)
void UGFxMoviePlayer::SetMovieCanReceiveInput(bool bCanReceiveInput)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput");

	UGFxMoviePlayer_SetMovieCanReceiveInput_Params params {};
	params.bCanReceiveInput = bCanReceiveInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus
//		Flags  -> ()
// Parameters:
//		bool                                               bCanReceiveFocus                                           (Parm)
void UGFxMoviePlayer::SetMovieCanReceiveFocus(bool bCanReceiveFocus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus");

	UGFxMoviePlayer_SetMovieCanReceiveFocus_Params params {};
	params.bCanReceiveFocus = bCanReceiveFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.SetPerspective3D
//		Flags  -> ()
// Parameters:
//		struct FMatrix                                     matPersp                                                   (Const, Parm, OutParm)
void UGFxMoviePlayer::SetPerspective3D(struct FMatrix* matPersp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetPerspective3D");

	UGFxMoviePlayer_SetPerspective3D_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (matPersp != nullptr)
		*matPersp = params.matPersp;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.SetView3D
//		Flags  -> ()
// Parameters:
//		struct FMatrix                                     matView                                                    (Const, Parm, OutParm)
void UGFxMoviePlayer::SetView3D(struct FMatrix* matView)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetView3D");

	UGFxMoviePlayer_SetView3D_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (matView != nullptr)
		*matView = params.matView;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect
//		Flags  -> ()
// Parameters:
//		float                                              x0                                                         (Parm, OutParm)
//		float                                              y0                                                         (Parm, OutParm)
//		float                                              X1                                                         (Parm, OutParm)
//		float                                              Y1                                                         (Parm, OutParm)
void UGFxMoviePlayer::GetVisibleFrameRect(float* x0, float* y0, float* X1, float* Y1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect");

	UGFxMoviePlayer_GetVisibleFrameRect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (x0 != nullptr)
		*x0 = params.x0;
	if (y0 != nullptr)
		*y0 = params.y0;
	if (X1 != nullptr)
		*X1 = params.X1;
	if (Y1 != nullptr)
		*Y1 = params.Y1;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.SetAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GFxUI_EGFxAlign>                       A                                                          (Parm)
void UGFxMoviePlayer::SetAlignment(TEnumAsByte<GFxUI_EGFxAlign> A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetAlignment");

	UGFxMoviePlayer_SetAlignment_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.SetViewScaleMode
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GFxUI_EGFxScaleMode>                   SM                                                         (Parm)
void UGFxMoviePlayer::SetViewScaleMode(TEnumAsByte<GFxUI_EGFxScaleMode> SM)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetViewScaleMode");

	UGFxMoviePlayer_SetViewScaleMode_Params params {};
	params.SM = SM;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.SetViewport
//		Flags  -> ()
// Parameters:
//		int                                                X                                                          (Parm)
//		int                                                Y                                                          (Parm)
//		int                                                Width                                                      (Parm)
//		int                                                Height                                                     (Parm)
void UGFxMoviePlayer::SetViewport(int X, int Y, int Width, int Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetViewport");

	UGFxMoviePlayer_SetViewport_Params params {};
	params.X = X;
	params.Y = Y;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.GetGameViewportClient
//		Flags  -> ()
// Parameters:
//		class UGameViewportClient*                         ReturnValue                                                (Parm, OutParm, ReturnParm)
class UGameViewportClient* UGFxMoviePlayer::GetGameViewportClient()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetGameViewportClient");

	UGFxMoviePlayer_GetGameViewportClient_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.SetPriority
//		Flags  -> ()
// Parameters:
//		unsigned char                                      NewPriority                                                (Parm)
void UGFxMoviePlayer::SetPriority(unsigned char NewPriority)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetPriority");

	UGFxMoviePlayer_SetPriority_Params params {};
	params.NewPriority = NewPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.SetExternalTextureEx
//		Flags  -> ()
// Parameters:
//		struct FString                                     Resource                                                   (Parm, NeedCtorLink)
//		class UTexture*                                    Texture                                                    (Parm)
//		int                                                targetWidth                                                (Parm)
//		int                                                targetHeight                                               (Parm)
//		bool                                               targetStretch                                              (OptionalParm, Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxMoviePlayer::SetExternalTextureEx(const struct FString& Resource, class UTexture* Texture, int targetWidth, int targetHeight, bool targetStretch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetExternalTextureEx");

	UGFxMoviePlayer_SetExternalTextureEx_Params params {};
	params.Resource = Resource;
	params.Texture = Texture;
	params.targetWidth = targetWidth;
	params.targetHeight = targetHeight;
	params.targetStretch = targetStretch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.SetExternalTexture
//		Flags  -> ()
// Parameters:
//		struct FString                                     Resource                                                   (Parm, NeedCtorLink)
//		class UTexture*                                    Texture                                                    (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxMoviePlayer::SetExternalTexture(const struct FString& Resource, class UTexture* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetExternalTexture");

	UGFxMoviePlayer_SetExternalTexture_Params params {};
	params.Resource = Resource;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.SetExternalInterface
//		Flags  -> ()
// Parameters:
//		class UObject*                                     H                                                          (Parm)
void UGFxMoviePlayer::SetExternalInterface(class UObject* H)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetExternalInterface");

	UGFxMoviePlayer_SetExternalInterface_Params params {};
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.SetTimingMode
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GFxUI_EGFxTimingMode>                  Mode                                                       (Parm)
void UGFxMoviePlayer::SetTimingMode(TEnumAsByte<GFxUI_EGFxTimingMode> Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetTimingMode");

	UGFxMoviePlayer_SetTimingMode_Params params {};
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.SetMovieInfo
//		Flags  -> ()
// Parameters:
//		class USwfMovie*                                   Data                                                       (Parm)
void UGFxMoviePlayer::SetMovieInfo(class USwfMovie* Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetMovieInfo");

	UGFxMoviePlayer_SetMovieInfo_Params params {};
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.ConditionalClearPause
//		Flags  -> ()
void UGFxMoviePlayer::ConditionalClearPause()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ConditionalClearPause");

	UGFxMoviePlayer_ConditionalClearPause_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.OnCleanup
//		Flags  -> ()
void UGFxMoviePlayer::OnCleanup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.OnCleanup");

	UGFxMoviePlayer_OnCleanup_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.OnClose
//		Flags  -> ()
void UGFxMoviePlayer::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.OnClose");

	UGFxMoviePlayer_OnClose_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.Close
//		Flags  -> ()
// Parameters:
//		bool                                               Unload                                                     (OptionalParm, Parm)
void UGFxMoviePlayer::Close(bool Unload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.Close");

	UGFxMoviePlayer_Close_Params params {};
	params.Unload = Unload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.SetPause
//		Flags  -> ()
// Parameters:
//		bool                                               bPausePlayback                                             (OptionalParm, Parm)
void UGFxMoviePlayer::SetPause(bool bPausePlayback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetPause");

	UGFxMoviePlayer_SetPause_Params params {};
	params.bPausePlayback = bPausePlayback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.OnPostAdvance
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (Parm)
void UGFxMoviePlayer::OnPostAdvance(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.OnPostAdvance");

	UGFxMoviePlayer_OnPostAdvance_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.PostAdvance
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (Parm)
void UGFxMoviePlayer::PostAdvance(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.PostAdvance");

	UGFxMoviePlayer_PostAdvance_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.Advance
//		Flags  -> ()
// Parameters:
//		float                                              Time                                                       (Parm)
void UGFxMoviePlayer::Advance(float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.Advance");

	UGFxMoviePlayer_Advance_Params params {};
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxMoviePlayer.Start
//		Flags  -> ()
// Parameters:
//		bool                                               StartPaused                                                (OptionalParm, Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxMoviePlayer::Start(bool StartPaused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.Start");

	UGFxMoviePlayer_Start_Params params {};
	params.StartPaused = StartPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.DestroyGFxObject
//		Flags  -> ()
void UGFxObject::DestroyGFxObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.DestroyGFxObject");

	UGFxObject_DestroyGFxObject_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.WidgetUnloaded
//		Flags  -> ()
// Parameters:
//		struct FName                                       WidgetName                                                 (Parm)
//		struct FName                                       WidgetPath                                                 (Parm)
//		class UGFxObject*                                  Widget                                                     (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxObject::WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.WidgetUnloaded");

	UGFxObject_WidgetUnloaded_Params params {};
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.WidgetInitialized
//		Flags  -> ()
// Parameters:
//		struct FName                                       WidgetName                                                 (Parm)
//		struct FName                                       WidgetPath                                                 (Parm)
//		class UGFxObject*                                  Widget                                                     (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxObject::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.WidgetInitialized");

	UGFxObject_WidgetInitialized_Params params {};
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GotoAndStopI
//		Flags  -> ()
// Parameters:
//		int                                                frame                                                      (Parm)
void UGFxObject::GotoAndStopI(int frame)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GotoAndStopI");

	UGFxObject_GotoAndStopI_Params params {};
	params.frame = frame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GotoAndStop
//		Flags  -> ()
// Parameters:
//		struct FString                                     frame                                                      (Parm, NeedCtorLink)
void UGFxObject::GotoAndStop(const struct FString& frame)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GotoAndStop");

	UGFxObject_GotoAndStop_Params params {};
	params.frame = frame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GotoAndPlayI
//		Flags  -> ()
// Parameters:
//		int                                                frame                                                      (Parm)
void UGFxObject::GotoAndPlayI(int frame)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GotoAndPlayI");

	UGFxObject_GotoAndPlayI_Params params {};
	params.frame = frame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GotoAndPlay
//		Flags  -> ()
// Parameters:
//		struct FString                                     frame                                                      (Parm, NeedCtorLink)
void UGFxObject::GotoAndPlay(const struct FString& frame)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GotoAndPlay");

	UGFxObject_GotoAndPlay_Params params {};
	params.frame = frame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.ActionScriptString
//		Flags  -> ()
// Parameters:
//		struct FString                                     method                                                     (Parm, NeedCtorLink)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UGFxObject::ActionScriptString(const struct FString& method)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.ActionScriptString");

	UGFxObject_ActionScriptString_Params params {};
	params.method = method;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.ActionScriptFloat
//		Flags  -> ()
// Parameters:
//		struct FString                                     method                                                     (Parm, NeedCtorLink)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UGFxObject::ActionScriptFloat(const struct FString& method)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.ActionScriptFloat");

	UGFxObject_ActionScriptFloat_Params params {};
	params.method = method;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.ActionScriptInt
//		Flags  -> ()
// Parameters:
//		struct FString                                     method                                                     (Parm, NeedCtorLink)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UGFxObject::ActionScriptInt(const struct FString& method)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.ActionScriptInt");

	UGFxObject_ActionScriptInt_Params params {};
	params.method = method;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.ActionScriptVoid
//		Flags  -> ()
// Parameters:
//		struct FString                                     method                                                     (Parm, NeedCtorLink)
void UGFxObject::ActionScriptVoid(const struct FString& method)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.ActionScriptVoid");

	UGFxObject_ActionScriptVoid_Params params {};
	params.method = method;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject._Invoke
//		Flags  -> ()
// Parameters:
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		TArray<struct FASValue>                            args                                                       (Parm, NeedCtorLink)
//		struct FASValue                                    ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FASValue UGFxObject::_Invoke(const struct FString& Member, TArray<struct FASValue> args)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject._Invoke");

	UGFxObject__Invoke_Params params {};
	params.Member = Member;
	params.args = args;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.ActionScriptSetFunctionOn
//		Flags  -> ()
// Parameters:
//		class UGFxObject*                                  Target                                                     (Parm)
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
void UGFxObject::ActionScriptSetFunctionOn(class UGFxObject* Target, const struct FString& Member)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.ActionScriptSetFunctionOn");

	UGFxObject_ActionScriptSetFunctionOn_Params params {};
	params.Target = Target;
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.ActionScriptSetFunction
//		Flags  -> ()
// Parameters:
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
void UGFxObject::ActionScriptSetFunction(const struct FString& Member)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.ActionScriptSetFunction");

	UGFxObject_ActionScriptSetFunction_Params params {};
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.SetElementMemberString
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		struct FString                                     S                                                          (Parm, NeedCtorLink)
void UGFxObject::SetElementMemberString(int Index, const struct FString& Member, const struct FString& S)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementMemberString");

	UGFxObject_SetElementMemberString_Params params {};
	params.Index = Index;
	params.Member = Member;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.SetElementMemberInt
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		int                                                I                                                          (Parm)
void UGFxObject::SetElementMemberInt(int Index, const struct FString& Member, int I)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementMemberInt");

	UGFxObject_SetElementMemberInt_Params params {};
	params.Index = Index;
	params.Member = Member;
	params.I = I;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.SetElementMemberFloat
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		float                                              F                                                          (Parm)
void UGFxObject::SetElementMemberFloat(int Index, const struct FString& Member, float F)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementMemberFloat");

	UGFxObject_SetElementMemberFloat_Params params {};
	params.Index = Index;
	params.Member = Member;
	params.F = F;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.SetElementMemberBool
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		bool                                               B                                                          (Parm)
void UGFxObject::SetElementMemberBool(int Index, const struct FString& Member, bool B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementMemberBool");

	UGFxObject_SetElementMemberBool_Params params {};
	params.Index = Index;
	params.Member = Member;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.SetElementMemberObject
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		class UGFxObject*                                  val                                                        (Parm)
void UGFxObject::SetElementMemberObject(int Index, const struct FString& Member, class UGFxObject* val)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementMemberObject");

	UGFxObject_SetElementMemberObject_Params params {};
	params.Index = Index;
	params.Member = Member;
	params.val = val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.SetElementMember
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		struct FASValue                                    Arg                                                        (Parm, NeedCtorLink)
void UGFxObject::SetElementMember(int Index, const struct FString& Member, const struct FASValue& Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementMember");

	UGFxObject_SetElementMember_Params params {};
	params.Index = Index;
	params.Member = Member;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GetElementMemberString
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UGFxObject::GetElementMemberString(int Index, const struct FString& Member)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementMemberString");

	UGFxObject_GetElementMemberString_Params params {};
	params.Index = Index;
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GetElementMemberInt
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UGFxObject::GetElementMemberInt(int Index, const struct FString& Member)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementMemberInt");

	UGFxObject_GetElementMemberInt_Params params {};
	params.Index = Index;
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GetElementMemberFloat
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UGFxObject::GetElementMemberFloat(int Index, const struct FString& Member)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementMemberFloat");

	UGFxObject_GetElementMemberFloat_Params params {};
	params.Index = Index;
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GetElementMemberBool
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxObject::GetElementMemberBool(int Index, const struct FString& Member)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementMemberBool");

	UGFxObject_GetElementMemberBool_Params params {};
	params.Index = Index;
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GetElementMemberObject
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		struct FString                                     SourceFile                                                 (OptionalParm, Parm, NeedCtorLink)
//		int                                                SourceLine                                                 (OptionalParm, Parm)
//		class UClass*                                      Type                                                       (OptionalParm, Parm)
//		class UGFxObject*                                  ReturnValue                                                (Parm, OutParm, ReturnParm)
class UGFxObject* UGFxObject::GetElementMemberObject(int Index, const struct FString& Member, const struct FString& SourceFile, int SourceLine, class UClass* Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementMemberObject");

	UGFxObject_GetElementMemberObject_Params params {};
	params.Index = Index;
	params.Member = Member;
	params.SourceFile = SourceFile;
	params.SourceLine = SourceLine;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GetElementMemberObjectEx
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		struct FString                                     SourceFile                                                 (OptionalParm, Parm, NeedCtorLink)
//		int                                                SourceLine                                                 (OptionalParm, Parm)
//		class UClass*                                      Type                                                       (OptionalParm, Parm)
//		struct FString                                     ASClass                                                    (OptionalParm, Parm, NeedCtorLink)
//		class UGFxObject*                                  ReturnValue                                                (Parm, OutParm, ReturnParm)
class UGFxObject* UGFxObject::GetElementMemberObjectEx(int Index, const struct FString& Member, const struct FString& SourceFile, int SourceLine, class UClass* Type, const struct FString& ASClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementMemberObjectEx");

	UGFxObject_GetElementMemberObjectEx_Params params {};
	params.Index = Index;
	params.Member = Member;
	params.SourceFile = SourceFile;
	params.SourceLine = SourceLine;
	params.Type = Type;
	params.ASClass = ASClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GetElementMember
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		struct FASValue                                    ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FASValue UGFxObject::GetElementMember(int Index, const struct FString& Member)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementMember");

	UGFxObject_GetElementMember_Params params {};
	params.Index = Index;
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.SetElementColorTransform
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		struct FASColorTransform                           cxform                                                     (Parm)
void UGFxObject::SetElementColorTransform(int Index, const struct FASColorTransform& cxform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementColorTransform");

	UGFxObject_SetElementColorTransform_Params params {};
	params.Index = Index;
	params.cxform = cxform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.SetElementPosition
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		float                                              X                                                          (Parm)
//		float                                              Y                                                          (Parm)
void UGFxObject::SetElementPosition(int Index, float X, float Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementPosition");

	UGFxObject_SetElementPosition_Params params {};
	params.Index = Index;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.SetElementVisible
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		bool                                               Visible                                                    (Parm)
void UGFxObject::SetElementVisible(int Index, bool Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementVisible");

	UGFxObject_SetElementVisible_Params params {};
	params.Index = Index;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.SetElementDisplayMatrix
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		struct FMatrix                                     M                                                          (Parm)
void UGFxObject::SetElementDisplayMatrix(int Index, const struct FMatrix& M)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementDisplayMatrix");

	UGFxObject_SetElementDisplayMatrix_Params params {};
	params.Index = Index;
	params.M = M;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.SetElementDisplayInfo
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		struct FASDisplayInfo                              D                                                          (Parm)
void UGFxObject::SetElementDisplayInfo(int Index, const struct FASDisplayInfo& D)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementDisplayInfo");

	UGFxObject_SetElementDisplayInfo_Params params {};
	params.Index = Index;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GetElementDisplayMatrix
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		struct FMatrix                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FMatrix UGFxObject::GetElementDisplayMatrix(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementDisplayMatrix");

	UGFxObject_GetElementDisplayMatrix_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GetElementDisplayInfo
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		struct FASDisplayInfo                              ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FASDisplayInfo UGFxObject::GetElementDisplayInfo(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementDisplayInfo");

	UGFxObject_GetElementDisplayInfo_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.SetElementString
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		struct FString                                     S                                                          (Parm, NeedCtorLink)
void UGFxObject::SetElementString(int Index, const struct FString& S)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementString");

	UGFxObject_SetElementString_Params params {};
	params.Index = Index;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.SetElementInt
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		int                                                I                                                          (Parm)
void UGFxObject::SetElementInt(int Index, int I)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementInt");

	UGFxObject_SetElementInt_Params params {};
	params.Index = Index;
	params.I = I;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.SetElementFloat
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		float                                              F                                                          (Parm)
void UGFxObject::SetElementFloat(int Index, float F)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementFloat");

	UGFxObject_SetElementFloat_Params params {};
	params.Index = Index;
	params.F = F;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.SetElementBool
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		bool                                               B                                                          (Parm)
void UGFxObject::SetElementBool(int Index, bool B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementBool");

	UGFxObject_SetElementBool_Params params {};
	params.Index = Index;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.SetElementObject
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		class UGFxObject*                                  val                                                        (Parm)
void UGFxObject::SetElementObject(int Index, class UGFxObject* val)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementObject");

	UGFxObject_SetElementObject_Params params {};
	params.Index = Index;
	params.val = val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.SetElement
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		struct FASValue                                    Arg                                                        (Parm, NeedCtorLink)
void UGFxObject::SetElement(int Index, const struct FASValue& Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElement");

	UGFxObject_SetElement_Params params {};
	params.Index = Index;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GetElementString
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UGFxObject::GetElementString(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementString");

	UGFxObject_GetElementString_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GetElementInt
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UGFxObject::GetElementInt(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementInt");

	UGFxObject_GetElementInt_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GetElementFloat
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UGFxObject::GetElementFloat(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementFloat");

	UGFxObject_GetElementFloat_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GetElementBool
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxObject::GetElementBool(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementBool");

	UGFxObject_GetElementBool_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GetElementObject
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		struct FString                                     SourceFile                                                 (OptionalParm, Parm, NeedCtorLink)
//		int                                                SourceLine                                                 (OptionalParm, Parm)
//		class UClass*                                      Type                                                       (OptionalParm, Parm)
//		class UGFxObject*                                  ReturnValue                                                (Parm, OutParm, ReturnParm)
class UGFxObject* UGFxObject::GetElementObject(int Index, const struct FString& SourceFile, int SourceLine, class UClass* Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementObject");

	UGFxObject_GetElementObject_Params params {};
	params.Index = Index;
	params.SourceFile = SourceFile;
	params.SourceLine = SourceLine;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GetElementObjectEx
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		struct FString                                     SourceFile                                                 (OptionalParm, Parm, NeedCtorLink)
//		int                                                SourceLine                                                 (OptionalParm, Parm)
//		class UClass*                                      Type                                                       (OptionalParm, Parm)
//		struct FString                                     ASClass                                                    (OptionalParm, Parm, NeedCtorLink)
//		class UGFxObject*                                  ReturnValue                                                (Parm, OutParm, ReturnParm)
class UGFxObject* UGFxObject::GetElementObjectEx(int Index, const struct FString& SourceFile, int SourceLine, class UClass* Type, const struct FString& ASClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementObjectEx");

	UGFxObject_GetElementObjectEx_Params params {};
	params.Index = Index;
	params.SourceFile = SourceFile;
	params.SourceLine = SourceLine;
	params.Type = Type;
	params.ASClass = ASClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GetElement
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
//		struct FASValue                                    ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FASValue UGFxObject::GetElement(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElement");

	UGFxObject_GetElement_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.SetText
//		Flags  -> ()
// Parameters:
//		struct FString                                     Text                                                       (Parm, CoerceParm, NeedCtorLink)
//		class UTranslationContext*                         InContext                                                  (OptionalParm, Parm)
void UGFxObject::SetText(const struct FString& Text, class UTranslationContext* InContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetText");

	UGFxObject_SetText_Params params {};
	params.Text = Text;
	params.InContext = InContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GetText
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UGFxObject::GetText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetText");

	UGFxObject_GetText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.SetVisible
//		Flags  -> ()
// Parameters:
//		bool                                               Visible                                                    (Parm)
void UGFxObject::SetVisible(bool Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetVisible");

	UGFxObject_SetVisible_Params params {};
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.SetDisplayMatrix3D
//		Flags  -> ()
// Parameters:
//		struct FMatrix                                     M                                                          (Parm)
void UGFxObject::SetDisplayMatrix3D(const struct FMatrix& M)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetDisplayMatrix3D");

	UGFxObject_SetDisplayMatrix3D_Params params {};
	params.M = M;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.SetDisplayMatrix
//		Flags  -> ()
// Parameters:
//		struct FMatrix                                     M                                                          (Parm)
void UGFxObject::SetDisplayMatrix(const struct FMatrix& M)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetDisplayMatrix");

	UGFxObject_SetDisplayMatrix_Params params {};
	params.M = M;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.SetColorTransform
//		Flags  -> ()
// Parameters:
//		struct FASColorTransform                           cxform                                                     (Parm)
void UGFxObject::SetColorTransform(const struct FASColorTransform& cxform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetColorTransform");

	UGFxObject_SetColorTransform_Params params {};
	params.cxform = cxform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.SetPosition
//		Flags  -> ()
// Parameters:
//		float                                              X                                                          (Parm)
//		float                                              Y                                                          (Parm)
void UGFxObject::SetPosition(float X, float Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetPosition");

	UGFxObject_SetPosition_Params params {};
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.SetDisplayInfo
//		Flags  -> ()
// Parameters:
//		struct FASDisplayInfo                              D                                                          (Parm)
void UGFxObject::SetDisplayInfo(const struct FASDisplayInfo& D)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetDisplayInfo");

	UGFxObject_SetDisplayInfo_Params params {};
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GetDisplayMatrix3D
//		Flags  -> ()
// Parameters:
//		struct FMatrix                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FMatrix UGFxObject::GetDisplayMatrix3D()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetDisplayMatrix3D");

	UGFxObject_GetDisplayMatrix3D_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GetDisplayMatrix
//		Flags  -> ()
// Parameters:
//		struct FMatrix                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FMatrix UGFxObject::GetDisplayMatrix()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetDisplayMatrix");

	UGFxObject_GetDisplayMatrix_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GetColorTransform
//		Flags  -> ()
// Parameters:
//		struct FASColorTransform                           ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FASColorTransform UGFxObject::GetColorTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetColorTransform");

	UGFxObject_GetColorTransform_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GetPosition
//		Flags  -> ()
// Parameters:
//		float                                              X                                                          (Parm, OutParm)
//		float                                              Y                                                          (Parm, OutParm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxObject::GetPosition(float* X, float* Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetPosition");

	UGFxObject_GetPosition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GetDisplayInfo
//		Flags  -> ()
// Parameters:
//		struct FASDisplayInfo                              ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FASDisplayInfo UGFxObject::GetDisplayInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetDisplayInfo");

	UGFxObject_GetDisplayInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.TranslateString
//		Flags  -> ()
// Parameters:
//		struct FString                                     StringToTranslate                                          (Parm, NeedCtorLink)
//		class UTranslationContext*                         InContext                                                  (OptionalParm, Parm)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UGFxObject::TranslateString(const struct FString& StringToTranslate, class UTranslationContext* InContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.TranslateString");

	UGFxObject_TranslateString_Params params {};
	params.StringToTranslate = StringToTranslate;
	params.InContext = InContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.SetFunction
//		Flags  -> ()
// Parameters:
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		class UObject*                                     context                                                    (Parm)
//		struct FName                                       fname                                                      (Parm)
void UGFxObject::SetFunction(const struct FString& Member, class UObject* context, const struct FName& fname)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetFunction");

	UGFxObject_SetFunction_Params params {};
	params.Member = Member;
	params.context = context;
	params.fname = fname;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.SetObject
//		Flags  -> ()
// Parameters:
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		class UGFxObject*                                  val                                                        (Parm)
void UGFxObject::SetObject(const struct FString& Member, class UGFxObject* val)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetObject");

	UGFxObject_SetObject_Params params {};
	params.Member = Member;
	params.val = val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.SetString
//		Flags  -> ()
// Parameters:
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		struct FString                                     S                                                          (Parm, NeedCtorLink)
//		class UTranslationContext*                         InContext                                                  (OptionalParm, Parm)
void UGFxObject::SetString(const struct FString& Member, const struct FString& S, class UTranslationContext* InContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetString");

	UGFxObject_SetString_Params params {};
	params.Member = Member;
	params.S = S;
	params.InContext = InContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.SetInt
//		Flags  -> ()
// Parameters:
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		int                                                I                                                          (Parm)
void UGFxObject::SetInt(const struct FString& Member, int I)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetInt");

	UGFxObject_SetInt_Params params {};
	params.Member = Member;
	params.I = I;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.SetFloat
//		Flags  -> ()
// Parameters:
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		float                                              F                                                          (Parm)
void UGFxObject::SetFloat(const struct FString& Member, float F)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetFloat");

	UGFxObject_SetFloat_Params params {};
	params.Member = Member;
	params.F = F;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.SetBool
//		Flags  -> ()
// Parameters:
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		bool                                               B                                                          (Parm)
void UGFxObject::SetBool(const struct FString& Member, bool B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetBool");

	UGFxObject_SetBool_Params params {};
	params.Member = Member;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.Set
//		Flags  -> ()
// Parameters:
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		struct FASValue                                    Arg                                                        (Parm, NeedCtorLink)
void UGFxObject::Set(const struct FString& Member, const struct FASValue& Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.Set");

	UGFxObject_Set_Params params {};
	params.Member = Member;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.IsObject
//		Flags  -> ()
// Parameters:
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxObject::IsObject(const struct FString& Member)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.IsObject");

	UGFxObject_IsObject_Params params {};
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.IsString
//		Flags  -> ()
// Parameters:
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxObject::IsString(const struct FString& Member)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.IsString");

	UGFxObject_IsString_Params params {};
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.IsInt
//		Flags  -> ()
// Parameters:
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxObject::IsInt(const struct FString& Member)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.IsInt");

	UGFxObject_IsInt_Params params {};
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.IsFloat
//		Flags  -> ()
// Parameters:
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxObject::IsFloat(const struct FString& Member)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.IsFloat");

	UGFxObject_IsFloat_Params params {};
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.IsBool
//		Flags  -> ()
// Parameters:
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxObject::IsBool(const struct FString& Member)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.IsBool");

	UGFxObject_IsBool_Params params {};
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GetObject
//		Flags  -> ()
// Parameters:
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		struct FString                                     SourceFile                                                 (OptionalParm, Parm, NeedCtorLink)
//		int                                                SourceLine                                                 (OptionalParm, Parm)
//		class UClass*                                      Type                                                       (OptionalParm, Parm)
//		class UGFxObject*                                  ReturnValue                                                (Parm, OutParm, ReturnParm)
class UGFxObject* UGFxObject::GetObject(const struct FString& Member, const struct FString& SourceFile, int SourceLine, class UClass* Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetObject");

	UGFxObject_GetObject_Params params {};
	params.Member = Member;
	params.SourceFile = SourceFile;
	params.SourceLine = SourceLine;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GetString
//		Flags  -> ()
// Parameters:
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UGFxObject::GetString(const struct FString& Member)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetString");

	UGFxObject_GetString_Params params {};
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GetInt
//		Flags  -> ()
// Parameters:
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UGFxObject::GetInt(const struct FString& Member)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetInt");

	UGFxObject_GetInt_Params params {};
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GetFloat
//		Flags  -> ()
// Parameters:
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UGFxObject::GetFloat(const struct FString& Member)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetFloat");

	UGFxObject_GetFloat_Params params {};
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.GetBool
//		Flags  -> ()
// Parameters:
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxObject::GetBool(const struct FString& Member)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetBool");

	UGFxObject_GetBool_Params params {};
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxObject.Get
//		Flags  -> ()
// Parameters:
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		struct FASValue                                    ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FASValue UGFxObject::Get(const struct FString& Member)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.Get");

	UGFxObject_Get_Params params {};
	params.Member = Member;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxClikWidget.ASRemoveAllEventListeners
//		Flags  -> ()
// Parameters:
//		struct FString                                     Event                                                      (Parm, NeedCtorLink)
void UGFxClikWidget::ASRemoveAllEventListeners(const struct FString& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.ASRemoveAllEventListeners");

	UGFxClikWidget_ASRemoveAllEventListeners_Params params {};
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxClikWidget.AS3AddEventListener
//		Flags  -> ()
// Parameters:
//		struct FString                                     Type                                                       (Parm, NeedCtorLink)
//		class UGFxObject*                                  O                                                          (Parm)
//		bool                                               useCapture                                                 (OptionalParm, Parm)
//		int                                                listenerPriority                                           (OptionalParm, Parm)
//		bool                                               useWeakReference                                           (OptionalParm, Parm)
void UGFxClikWidget::AS3AddEventListener(const struct FString& Type, class UGFxObject* O, bool useCapture, int listenerPriority, bool useWeakReference)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.AS3AddEventListener");

	UGFxClikWidget_AS3AddEventListener_Params params {};
	params.Type = Type;
	params.O = O;
	params.useCapture = useCapture;
	params.listenerPriority = listenerPriority;
	params.useWeakReference = useWeakReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxClikWidget.ASAddEventListener
//		Flags  -> ()
// Parameters:
//		struct FString                                     Type                                                       (Parm, NeedCtorLink)
//		class UGFxObject*                                  O                                                          (Parm)
//		struct FString                                     func                                                       (Parm, NeedCtorLink)
void UGFxClikWidget::ASAddEventListener(const struct FString& Type, class UGFxObject* O, const struct FString& func)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.ASAddEventListener");

	UGFxClikWidget_ASAddEventListener_Params params {};
	params.Type = Type;
	params.O = O;
	params.func = func;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxClikWidget.SetListener
//		Flags  -> ()
// Parameters:
//		class UGFxObject*                                  O                                                          (Parm)
//		struct FString                                     Member                                                     (Parm, NeedCtorLink)
//		struct FScriptDelegate                             Listener                                                   (Parm, NeedCtorLink)
void UGFxClikWidget::SetListener(class UGFxObject* O, const struct FString& Member, const struct FScriptDelegate& Listener)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.SetListener");

	UGFxClikWidget_SetListener_Params params {};
	params.O = O;
	params.Member = Member;
	params.Listener = Listener;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxClikWidget.GetEventStringFromTypename
//		Flags  -> ()
// Parameters:
//		struct FName                                       Typename                                                   (Parm)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UGFxClikWidget::GetEventStringFromTypename(const struct FName& Typename)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.GetEventStringFromTypename");

	UGFxClikWidget_GetEventStringFromTypename_Params params {};
	params.Typename = Typename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxClikWidget.RemoveAllEventListeners
//		Flags  -> ()
// Parameters:
//		struct FString                                     Event                                                      (Parm, NeedCtorLink)
void UGFxClikWidget::RemoveAllEventListeners(const struct FString& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.RemoveAllEventListeners");

	UGFxClikWidget_RemoveAllEventListeners_Params params {};
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxClikWidget.AddEventListener
//		Flags  -> ()
// Parameters:
//		struct FName                                       Type                                                       (Parm)
//		struct FScriptDelegate                             Listener                                                   (Parm, NeedCtorLink)
//		bool                                               useCapture                                                 (OptionalParm, Parm)
//		int                                                listenerPriority                                           (OptionalParm, Parm)
//		bool                                               useWeakReference                                           (OptionalParm, Parm)
void UGFxClikWidget::AddEventListener(const struct FName& Type, const struct FScriptDelegate& Listener, bool useCapture, int listenerPriority, bool useWeakReference)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.AddEventListener");

	UGFxClikWidget_AddEventListener_Params params {};
	params.Type = Type;
	params.Listener = Listener;
	params.useCapture = useCapture;
	params.listenerPriority = listenerPriority;
	params.useWeakReference = useWeakReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxClikWidget.EventListener
//		Flags  -> ()
// Parameters:
//		struct FEventData                                  Data                                                       (Parm, NeedCtorLink)
void UGFxClikWidget::EventListener(const struct FEventData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.EventListener");

	UGFxClikWidget_EventListener_Params params {};
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxAction_CloseMovie::IsValidLevelSequenceObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject");

	UGFxAction_CloseMovie_IsValidLevelSequenceObject_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxAction_GetVariable::IsValidLevelSequenceObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject");

	UGFxAction_GetVariable_IsValidLevelSequenceObject_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxAction_Invoke::IsValidLevelSequenceObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject");

	UGFxAction_Invoke_IsValidLevelSequenceObject_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxAction_OpenMovie::IsValidLevelSequenceObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject");

	UGFxAction_OpenMovie_IsValidLevelSequenceObject_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxAction_SetVariable::IsValidLevelSequenceObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject");

	UGFxAction_SetVariable_IsValidLevelSequenceObject_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand
//		Flags  -> ()
// Parameters:
//		class UGFxMoviePlayer*                             Movie                                                      (Parm)
//		class UGFxEvent_FSCommand*                         Event                                                      (Parm)
//		struct FString                                     Cmd                                                        (Parm, NeedCtorLink)
//		struct FString                                     Arg                                                        (Parm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGFxFSCmdHandler_Kismet::FSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, const struct FString& Cmd, const struct FString& Arg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand");

	UGFxFSCmdHandler_Kismet_FSCommand_Params params {};
	params.Movie = Movie;
	params.Event = Event;
	params.Cmd = Cmd;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
