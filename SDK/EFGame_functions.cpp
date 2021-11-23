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
//		Name   -> Function EFGame.EFCharacterParts.OnParticleSystemFinished
//		Flags  -> ()
// Parameters:
//		class UParticleSystemComponent*                    PSC                                                        (Parm, EditInline)
void AEFCharacterParts::OnParticleSystemFinished(class UParticleSystemComponent* PSC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCharacterParts.OnParticleSystemFinished");

	AEFCharacterParts_OnParticleSystemFinished_Params params {};
	params.PSC = PSC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCharacterParts.ClearAttachedPSIIndex
//		Flags  -> ()
void AEFCharacterParts::ClearAttachedPSIIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCharacterParts.ClearAttachedPSIIndex");

	AEFCharacterParts_ClearAttachedPSIIndex_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCharacterParts.BaseChange
//		Flags  -> ()
void AEFCharacterParts::BaseChange()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCharacterParts.BaseChange");

	AEFCharacterParts_BaseChange_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCharacterParts.EncroachingOn
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Other                                                      (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AEFCharacterParts::EncroachingOn(class AActor* Other)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCharacterParts.EncroachingOn");

	AEFCharacterParts_EncroachingOn_Params params {};
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCharacterParts.EncroachedBy
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Other                                                      (Parm)
void AEFCharacterParts::EncroachedBy(class AActor* Other)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCharacterParts.EncroachedBy");

	AEFCharacterParts_EncroachedBy_Params params {};
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCharacterParts.Destroyed
//		Flags  -> ()
void AEFCharacterParts::Destroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCharacterParts.Destroyed");

	AEFCharacterParts_Destroyed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCheatManager.InternalDebugLookAt
//		Flags  -> ()
void UEFCheatManager::InternalDebugLookAt()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalDebugLookAt");

	UEFCheatManager_InternalDebugLookAt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCheatManager.InternalVisualizePhysicsCompartmentUsage
//		Flags  -> ()
void UEFCheatManager::InternalVisualizePhysicsCompartmentUsage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalVisualizePhysicsCompartmentUsage");

	UEFCheatManager_InternalVisualizePhysicsCompartmentUsage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCheatManager.InternalSetPhysicsCompartmentCount
//		Flags  -> ()
// Parameters:
//		int                                                inCount                                                    (Parm)
void UEFCheatManager::InternalSetPhysicsCompartmentCount(int inCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalSetPhysicsCompartmentCount");

	UEFCheatManager_InternalSetPhysicsCompartmentCount_Params params {};
	params.inCount = inCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCheatManager.InternalTogglePhysicsCompartmentForEFPawns
//		Flags  -> ()
void UEFCheatManager::InternalTogglePhysicsCompartmentForEFPawns()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalTogglePhysicsCompartmentForEFPawns");

	UEFCheatManager_InternalTogglePhysicsCompartmentForEFPawns_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCheatManager.InternalSetCamTargetBlendTime
//		Flags  -> ()
// Parameters:
//		float                                              a_Time                                                     (Parm)
//		float                                              a_Exp                                                      (Parm)
void UEFCheatManager::InternalSetCamTargetBlendTime(float a_Time, float a_Exp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalSetCamTargetBlendTime");

	UEFCheatManager_InternalSetCamTargetBlendTime_Params params {};
	params.a_Time = a_Time;
	params.a_Exp = a_Exp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCheatManager.InternalClearCamTarget
//		Flags  -> ()
void UEFCheatManager::InternalClearCamTarget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalClearCamTarget");

	UEFCheatManager_InternalClearCamTarget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCheatManager.InternalSetCamTarget
//		Flags  -> ()
// Parameters:
//		struct FString                                     a_Nickname                                                 (Parm, NeedCtorLink)
void UEFCheatManager::InternalSetCamTarget(const struct FString& a_Nickname)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalSetCamTarget");

	UEFCheatManager_InternalSetCamTarget_Params params {};
	params.a_Nickname = a_Nickname;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCheatManager.InternalCamPrevTarget
//		Flags  -> ()
void UEFCheatManager::InternalCamPrevTarget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalCamPrevTarget");

	UEFCheatManager_InternalCamPrevTarget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCheatManager.InternalCamNextTarget
//		Flags  -> ()
void UEFCheatManager::InternalCamNextTarget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalCamNextTarget");

	UEFCheatManager_InternalCamNextTarget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCheatManager.InternalGetPlayerCamera
//		Flags  -> ()
// Parameters:
//		class AEFPlayerCamera*                             ReturnValue                                                (Parm, OutParm, ReturnParm)
class AEFPlayerCamera* UEFCheatManager::InternalGetPlayerCamera()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalGetPlayerCamera");

	UEFCheatManager_InternalGetPlayerCamera_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCheatManager.InternalToggleCullDistanceVolume
//		Flags  -> ()
void UEFCheatManager::InternalToggleCullDistanceVolume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalToggleCullDistanceVolume");

	UEFCheatManager_InternalToggleCullDistanceVolume_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCheatManager.InternalToggleCPUSkinning
//		Flags  -> ()
// Parameters:
//		struct FString                                     InMeshName                                                 (Parm, NeedCtorLink)
void UEFCheatManager::InternalToggleCPUSkinning(const struct FString& InMeshName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalToggleCPUSkinning");

	UEFCheatManager_InternalToggleCPUSkinning_Params params {};
	params.InMeshName = InMeshName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCheatManager.InternalToggleOneFrameThreadLag
//		Flags  -> ()
void UEFCheatManager::InternalToggleOneFrameThreadLag()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalToggleOneFrameThreadLag");

	UEFCheatManager_InternalToggleOneFrameThreadLag_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCheatManager.InternalToggleUpdateDLEOptimize
//		Flags  -> ()
void UEFCheatManager::InternalToggleUpdateDLEOptimize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalToggleUpdateDLEOptimize");

	UEFCheatManager_InternalToggleUpdateDLEOptimize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCheatManager.InternalToggleMeshObjectUpdateOptimize
//		Flags  -> ()
void UEFCheatManager::InternalToggleMeshObjectUpdateOptimize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalToggleMeshObjectUpdateOptimize");

	UEFCheatManager_InternalToggleMeshObjectUpdateOptimize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCheatManager.InternalToggleUpdateBoundsOptimize
//		Flags  -> ()
void UEFCheatManager::InternalToggleUpdateBoundsOptimize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalToggleUpdateBoundsOptimize");

	UEFCheatManager_InternalToggleUpdateBoundsOptimize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCheatManager.InternalToggleDynamicFoliageOptimize
//		Flags  -> ()
void UEFCheatManager::InternalToggleDynamicFoliageOptimize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalToggleDynamicFoliageOptimize");

	UEFCheatManager_InternalToggleDynamicFoliageOptimize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCheatManager.InternalToggleParticleOptimizeILG
//		Flags  -> ()
void UEFCheatManager::InternalToggleParticleOptimizeILG()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCheatManager.InternalToggleParticleOptimizeILG");

	UEFCheatManager_InternalToggleParticleOptimizeILG_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFConsole.IsValidEFCommand
//		Flags  -> ()
// Parameters:
//		int                                                Idx                                                        (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFConsole::IsValidEFCommand(int Idx)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFConsole.IsValidEFCommand");

	UEFConsole_IsValidEFCommand_Params params {};
	params.Idx = Idx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFConsole.InputAxis
//		Flags  -> ()
// Parameters:
//		int                                                ControllerId                                               (Parm)
//		struct FName                                       Key                                                        (Parm)
//		float                                              Delta                                                      (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		bool                                               bGamepad                                                   (OptionalParm, Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFConsole::InputAxis(int ControllerId, const struct FName& Key, float Delta, float DeltaTime, bool bGamepad)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFConsole.InputAxis");

	UEFConsole_InputAxis_Params params {};
	params.ControllerId = ControllerId;
	params.Key = Key;
	params.Delta = Delta;
	params.DeltaTime = DeltaTime;
	params.bGamepad = bGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFConsole.InputKey
//		Flags  -> ()
// Parameters:
//		int                                                ControllerId                                               (Parm)
//		struct FName                                       Key                                                        (Parm)
//		TEnumAsByte<Core_EInputEvent>                      Event                                                      (Parm)
//		float                                              AmountDepressed                                            (OptionalParm, Parm)
//		bool                                               bGamepad                                                   (OptionalParm, Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFConsole::InputKey(int ControllerId, const struct FName& Key, TEnumAsByte<Core_EInputEvent> Event, float AmountDepressed, bool bGamepad)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFConsole.InputKey");

	UEFConsole_InputKey_Params params {};
	params.ControllerId = ControllerId;
	params.Key = Key;
	params.Event = Event;
	params.AmountDepressed = AmountDepressed;
	params.bGamepad = bGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFDecalFloorActor.GetBoundingCylinder
//		Flags  -> ()
// Parameters:
//		float                                              CollisionRadius                                            (Parm, OutParm)
//		float                                              CollisionHeight                                            (Parm, OutParm)
void AEFDecalFloorActor::GetBoundingCylinder(float* CollisionRadius, float* CollisionHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFDecalFloorActor.GetBoundingCylinder");

	AEFDecalFloorActor_GetBoundingCylinder_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CollisionRadius != nullptr)
		*CollisionRadius = params.CollisionRadius;
	if (CollisionHeight != nullptr)
		*CollisionHeight = params.CollisionHeight;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFDecalManager.SpawnDecalMinimal
//		Flags  -> ()
// Parameters:
//		class UMaterialInterface*                          DecalMaterial                                              (Parm)
//		struct FVector                                     DecalLocation                                              (Parm)
//		struct FRotator                                    DecalOrientation                                           (Parm)
//		float                                              Width                                                      (Parm)
//		float                                              Height                                                     (Parm)
//		float                                              InLifeSpan                                                 (Parm)
//		float                                              Thickness                                                  (Parm)
//		bool                                               bNoClip                                                    (Parm)
//		float                                              DecalRotation                                              (Parm)
//		class UDecalComponent*                             ReturnValue                                                (Parm, OutParm, ReturnParm, EditInline)
class UDecalComponent* AEFDecalManager::SpawnDecalMinimal(class UMaterialInterface* DecalMaterial, const struct FVector& DecalLocation, const struct FRotator& DecalOrientation, float Width, float Height, float InLifeSpan, float Thickness, bool bNoClip, float DecalRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFDecalManager.SpawnDecalMinimal");

	AEFDecalManager_SpawnDecalMinimal_Params params {};
	params.DecalMaterial = DecalMaterial;
	params.DecalLocation = DecalLocation;
	params.DecalOrientation = DecalOrientation;
	params.Width = Width;
	params.Height = Height;
	params.InLifeSpan = InLifeSpan;
	params.Thickness = Thickness;
	params.bNoClip = bNoClip;
	params.DecalRotation = DecalRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFFracturedStaticMeshActor.ClearManagedSpawnParts
//		Flags  -> ()
void AEFFracturedStaticMeshActor::ClearManagedSpawnParts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFFracturedStaticMeshActor.ClearManagedSpawnParts");

	AEFFracturedStaticMeshActor_ClearManagedSpawnParts_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFFracturedStaticMeshActor.ClearAttachedPSIIndex
//		Flags  -> ()
void AEFFracturedStaticMeshActor::ClearAttachedPSIIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFFracturedStaticMeshActor.ClearAttachedPSIIndex");

	AEFFracturedStaticMeshActor_ClearAttachedPSIIndex_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFFracturedStaticMeshActor.NotifyChangedBase
//		Flags  -> ()
void AEFFracturedStaticMeshActor::NotifyChangedBase()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFFracturedStaticMeshActor.NotifyChangedBase");

	AEFFracturedStaticMeshActor_NotifyChangedBase_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFFracturedStaticMeshActor.BreakOffPartsInRadius
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Origin                                                     (Parm)
//		float                                              Radius                                                     (Parm)
//		float                                              RBStrength                                                 (Parm)
//		bool                                               bWantPhysChunksAndParticles                                (Parm)
void AEFFracturedStaticMeshActor::BreakOffPartsInRadius(const struct FVector& Origin, float Radius, float RBStrength, bool bWantPhysChunksAndParticles)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFFracturedStaticMeshActor.BreakOffPartsInRadius");

	AEFFracturedStaticMeshActor_BreakOffPartsInRadius_Params params {};
	params.Origin = Origin;
	params.Radius = Radius;
	params.RBStrength = RBStrength;
	params.bWantPhysChunksAndParticles = bWantPhysChunksAndParticles;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFFracturedStaticMeshActor.BreakOffIsolatedIslands
//		Flags  -> ()
// Parameters:
//		TArray<unsigned char>                              FragmentVis                                                (Parm, OutParm, NeedCtorLink)
//		TArray<int>                                        IgnoreFrags                                                (Parm, NeedCtorLink)
//		struct FVector                                     ChunkDir                                                   (Parm)
//		TArray<class AFracturedStaticMeshPart*>            DisableCollWithPart                                        (Parm, NeedCtorLink)
//		bool                                               bWantPhysChunks                                            (Parm)
void AEFFracturedStaticMeshActor::BreakOffIsolatedIslands(TArray<unsigned char>* FragmentVis, TArray<int> IgnoreFrags, const struct FVector& ChunkDir, TArray<class AFracturedStaticMeshPart*> DisableCollWithPart, bool bWantPhysChunks)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFFracturedStaticMeshActor.BreakOffIsolatedIslands");

	AEFFracturedStaticMeshActor_BreakOffIsolatedIslands_Params params {};
	params.IgnoreFrags = IgnoreFrags;
	params.ChunkDir = ChunkDir;
	params.DisableCollWithPart = DisableCollWithPart;
	params.bWantPhysChunks = bWantPhysChunks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FragmentVis != nullptr)
		*FragmentVis = params.FragmentVis;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFFracturedStaticMeshActor.SpawnDeferredParts
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AEFFracturedStaticMeshActor::SpawnDeferredParts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFFracturedStaticMeshActor.SpawnDeferredParts");

	AEFFracturedStaticMeshActor_SpawnDeferredParts_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFFracturedStaticMeshActor.Explode
//		Flags  -> ()
void AEFFracturedStaticMeshActor::Explode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFFracturedStaticMeshActor.Explode");

	AEFFracturedStaticMeshActor_Explode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFFracturedStaticMeshActor.TakeDamage
//		Flags  -> ()
// Parameters:
//		int                                                Damage                                                     (Parm)
//		class AController*                                 EventInstigator                                            (Parm)
//		struct FVector                                     HitLocation                                                (Parm)
//		struct FVector                                     Momentum                                                   (Parm)
//		class UClass*                                      DamageType                                                 (Parm)
//		struct FTraceHitInfo                               HitInfo                                                    (OptionalParm, Parm)
//		class AActor*                                      DamageCauser                                               (OptionalParm, Parm)
void AEFFracturedStaticMeshActor::TakeDamage(int Damage, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFFracturedStaticMeshActor.TakeDamage");

	AEFFracturedStaticMeshActor_TakeDamage_Params params {};
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;
	params.HitInfo = HitInfo;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFFracturedStaticMeshActor.BaseChange
//		Flags  -> ()
void AEFFracturedStaticMeshActor::BaseChange()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFFracturedStaticMeshActor.BaseChange");

	AEFFracturedStaticMeshActor_BaseChange_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFFracturedStaticMeshActor.Destroyed
//		Flags  -> ()
void AEFFracturedStaticMeshActor::Destroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFFracturedStaticMeshActor.Destroyed");

	AEFFracturedStaticMeshActor_Destroyed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFFracturedStaticMeshActor.PostBeginPlay
//		Flags  -> ()
void AEFFracturedStaticMeshActor::PostBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFFracturedStaticMeshActor.PostBeginPlay");

	AEFFracturedStaticMeshActor_PostBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFFracturedStaticMeshPart.BreakOffPartsInRadius
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Origin                                                     (Parm)
//		float                                              Radius                                                     (Parm)
//		float                                              RBStrength                                                 (Parm)
//		bool                                               bWantPhysChunksAndParticles                                (Parm)
void AEFFracturedStaticMeshPart::BreakOffPartsInRadius(const struct FVector& Origin, float Radius, float RBStrength, bool bWantPhysChunksAndParticles)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFFracturedStaticMeshPart.BreakOffPartsInRadius");

	AEFFracturedStaticMeshPart_BreakOffPartsInRadius_Params params {};
	params.Origin = Origin;
	params.Radius = Radius;
	params.RBStrength = RBStrength;
	params.bWantPhysChunksAndParticles = bWantPhysChunksAndParticles;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFFracturedStaticMeshPart.BreakOffIsolatedIslands
//		Flags  -> ()
// Parameters:
//		TArray<unsigned char>                              FragmentVis                                                (Parm, OutParm, NeedCtorLink)
//		TArray<int>                                        IgnoreFrags                                                (Parm, NeedCtorLink)
//		struct FVector                                     ChunkDir                                                   (Parm)
//		TArray<class AFracturedStaticMeshPart*>            DisableCollWithPart                                        (Parm, NeedCtorLink)
//		bool                                               bWantPhysChunks                                            (Parm)
void AEFFracturedStaticMeshPart::BreakOffIsolatedIslands(TArray<unsigned char>* FragmentVis, TArray<int> IgnoreFrags, const struct FVector& ChunkDir, TArray<class AFracturedStaticMeshPart*> DisableCollWithPart, bool bWantPhysChunks)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFFracturedStaticMeshPart.BreakOffIsolatedIslands");

	AEFFracturedStaticMeshPart_BreakOffIsolatedIslands_Params params {};
	params.IgnoreFrags = IgnoreFrags;
	params.ChunkDir = ChunkDir;
	params.DisableCollWithPart = DisableCollWithPart;
	params.bWantPhysChunks = bWantPhysChunks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FragmentVis != nullptr)
		*FragmentVis = params.FragmentVis;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFFracturedStaticMeshPart.SpawnDeferredParts
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AEFFracturedStaticMeshPart::SpawnDeferredParts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFFracturedStaticMeshPart.SpawnDeferredParts");

	AEFFracturedStaticMeshPart_SpawnDeferredParts_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFFracturedStaticMeshPart.Explode
//		Flags  -> ()
void AEFFracturedStaticMeshPart::Explode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFFracturedStaticMeshPart.Explode");

	AEFFracturedStaticMeshPart_Explode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFFracturedStaticMeshPart.DoExplode
//		Flags  -> ()
void AEFFracturedStaticMeshPart::DoExplode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFFracturedStaticMeshPart.DoExplode");

	AEFFracturedStaticMeshPart_DoExplode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFFracturedStaticMeshPart.TakeDamage
//		Flags  -> ()
// Parameters:
//		int                                                Damage                                                     (Parm)
//		class AController*                                 EventInstigator                                            (Parm)
//		struct FVector                                     HitLocation                                                (Parm)
//		struct FVector                                     Momentum                                                   (Parm)
//		class UClass*                                      DamageType                                                 (Parm)
//		struct FTraceHitInfo                               HitInfo                                                    (OptionalParm, Parm)
//		class AActor*                                      DamageCauser                                               (OptionalParm, Parm)
void AEFFracturedStaticMeshPart::TakeDamage(int Damage, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFFracturedStaticMeshPart.TakeDamage");

	AEFFracturedStaticMeshPart_TakeDamage_Params params {};
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;
	params.HitInfo = HitInfo;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFFracturedStaticMeshPart.PostBeginPlay
//		Flags  -> ()
void AEFFracturedStaticMeshPart::PostBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFFracturedStaticMeshPart.PostBeginPlay");

	AEFFracturedStaticMeshPart_PostBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFFracturedStaticMeshPart.RecyclePart
//		Flags  -> ()
// Parameters:
//		bool                                               bAddToFreePool                                             (Parm)
void AEFFracturedStaticMeshPart::RecyclePart(bool bAddToFreePool)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFFracturedStaticMeshPart.RecyclePart");

	AEFFracturedStaticMeshPart_RecyclePart_Params params {};
	params.bAddToFreePool = bAddToFreePool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFFracturedStaticMeshPart.Initialize
//		Flags  -> ()
void AEFFracturedStaticMeshPart::Initialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFFracturedStaticMeshPart.Initialize");

	AEFFracturedStaticMeshPart_Initialize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGameInfo.AllowCheats
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           P                                                          (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AEFGameInfo::AllowCheats(class APlayerController* P)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.AllowCheats");

	AEFGameInfo_AllowCheats_Params params {};
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGameInfo.PostSeamlessTravel
//		Flags  -> ()
void AEFGameInfo::PostSeamlessTravel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.PostSeamlessTravel");

	AEFGameInfo_PostSeamlessTravel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGameInfo.GameEnding
//		Flags  -> ()
void AEFGameInfo::GameEnding()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.GameEnding");

	AEFGameInfo_GameEnding_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGameInfo.NotifyMapLoaded
//		Flags  -> ()
void AEFGameInfo::NotifyMapLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.NotifyMapLoaded");

	AEFGameInfo_NotifyMapLoaded_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGameInfo.NotfiyLoadingStep
//		Flags  -> ()
// Parameters:
//		struct FString                                     InStepName                                                 (Parm, NeedCtorLink)
void AEFGameInfo::NotfiyLoadingStep(const struct FString& InStepName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.NotfiyLoadingStep");

	AEFGameInfo_NotfiyLoadingStep_Params params {};
	params.InStepName = InStepName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGameInfo.Tick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (Parm)
void AEFGameInfo::Tick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.Tick");

	AEFGameInfo_Tick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGameInfo.PostLogin
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           NewPlayer                                                  (Parm)
void AEFGameInfo::PostLogin(class APlayerController* NewPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.PostLogin");

	AEFGameInfo_PostLogin_Params params {};
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGameInfo.Login
//		Flags  -> ()
// Parameters:
//		struct FString                                     Portal                                                     (Parm, NeedCtorLink)
//		struct FString                                     Options                                                    (Parm, NeedCtorLink)
//		struct FUniqueNetId                                UniqueId                                                   (Const, Parm)
//		struct FString                                     ErrorMessage                                               (Parm, OutParm, NeedCtorLink)
//		class APlayerController*                           ReturnValue                                                (Parm, OutParm, ReturnParm)
class APlayerController* AEFGameInfo::Login(const struct FString& Portal, const struct FString& Options, const struct FUniqueNetId& UniqueId, struct FString* ErrorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.Login");

	AEFGameInfo_Login_Params params {};
	params.Portal = Portal;
	params.Options = Options;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ErrorMessage != nullptr)
		*ErrorMessage = params.ErrorMessage;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGameInfo.LoadLevel
//		Flags  -> ()
// Parameters:
//		struct FString                                     LevelName                                                  (Parm, NeedCtorLink)
void AEFGameInfo::LoadLevel(const struct FString& LevelName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.LoadLevel");

	AEFGameInfo_LoadLevel_Params params {};
	params.LevelName = LevelName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGameInfo.RestartPlayer
//		Flags  -> ()
// Parameters:
//		class AController*                                 NewPlayer                                                  (Parm)
void AEFGameInfo::RestartPlayer(class AController* NewPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGameInfo.RestartPlayer");

	AEFGameInfo_RestartPlayer_Params params {};
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFEnvironmentInfoVolume.UnTouch
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Other                                                      (Parm)
void AEFEnvironmentInfoVolume::UnTouch(class AActor* Other)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFEnvironmentInfoVolume.UnTouch");

	AEFEnvironmentInfoVolume_UnTouch_Params params {};
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFEnvironmentInfoVolume.Touch
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Other                                                      (Parm)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, EditInline)
//		struct FVector                                     HitLocation                                                (Parm)
//		struct FVector                                     HitNormal                                                  (Parm)
void AEFEnvironmentInfoVolume::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFEnvironmentInfoVolume.Touch");

	AEFEnvironmentInfoVolume_Touch_Params params {};
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFEnvironmentInfoVolume.UpdateEnvironment
//		Flags  -> ()
// Parameters:
//		float                                              InAlpha                                                    (Parm)
//		bool                                               bUpdateComponent                                           (OptionalParm, Parm)
//		bool                                               bIgnoreOverride                                            (OptionalParm, Parm)
void AEFEnvironmentInfoVolume::UpdateEnvironment(float InAlpha, bool bUpdateComponent, bool bIgnoreOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFEnvironmentInfoVolume.UpdateEnvironment");

	AEFEnvironmentInfoVolume_UpdateEnvironment_Params params {};
	params.InAlpha = InAlpha;
	params.bUpdateComponent = bUpdateComponent;
	params.bIgnoreOverride = bIgnoreOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFEnvironmentInfoVolume.OnToggle
//		Flags  -> ()
// Parameters:
//		class USeqAct_Toggle*                              Action                                                     (Parm)
void AEFEnvironmentInfoVolume::OnToggle(class USeqAct_Toggle* Action)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFEnvironmentInfoVolume.OnToggle");

	AEFEnvironmentInfoVolume_OnToggle_Params params {};
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFVolume.UnTouch
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Other                                                      (Parm)
void AEFVolume::UnTouch(class AActor* Other)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFVolume.UnTouch");

	AEFVolume_UnTouch_Params params {};
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFVolume.Touch
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Other                                                      (Parm)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, EditInline)
//		struct FVector                                     HitLocation                                                (Parm)
//		struct FVector                                     HitNormal                                                  (Parm)
void AEFVolume::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFVolume.Touch");

	AEFVolume_Touch_Params params {};
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPathBlockingVolume.StopsProjectile
//		Flags  -> ()
// Parameters:
//		class AProjectile*                                 P                                                          (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AEFPathBlockingVolume::StopsProjectile(class AProjectile* P)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPathBlockingVolume.StopsProjectile");

	AEFPathBlockingVolume_StopsProjectile_Params params {};
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTranslucentVolume.OnChangeTranslucentVolumeAction
//		Flags  -> ()
// Parameters:
//		class UEFSeqAct_ChangeTranslucentVolumeAction*     InSeqAction                                                (Parm)
void AEFTranslucentVolume::OnChangeTranslucentVolumeAction(class UEFSeqAct_ChangeTranslucentVolumeAction* InSeqAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTranslucentVolume.OnChangeTranslucentVolumeAction");

	AEFTranslucentVolume_OnChangeTranslucentVolumeAction_Params params {};
	params.InSeqAction = InSeqAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxMoviePlayer.GetStringINI
//		Flags  -> ()
// Parameters:
//		struct FString                                     Type                                                       (Parm, NeedCtorLink)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UEFGFxMoviePlayer::GetStringINI(const struct FString& Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMoviePlayer.GetStringINI");

	UEFGFxMoviePlayer_GetStringINI_Params params {};
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxMoviePlayer.SetStringINI
//		Flags  -> (NetReliable, Event, Operator, Static, HasOptionalParms, Const, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, K2Override)
// Parameters:
//		struct FString                                     Type                                                       (Parm, NeedCtorLink)
//		struct FString                                     Value                                                      (Parm, NeedCtorLink)
void UEFGFxMoviePlayer::STATIC_SetStringINI(const struct FString& Type, const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMoviePlayer.SetStringINI");

	UEFGFxMoviePlayer_SetStringINI_Params params {};
	params.Type = Type;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxMoviePlayer.CreateArrayEx
//		Flags  -> ()
// Parameters:
//		struct FString                                     SourceFile                                                 (OptionalParm, Parm, NeedCtorLink)
//		int                                                SourceLine                                                 (OptionalParm, Parm)
//		class UGFxObject*                                  ReturnValue                                                (Parm, OutParm, ReturnParm)
class UGFxObject* UEFGFxMoviePlayer::CreateArrayEx(const struct FString& SourceFile, int SourceLine)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMoviePlayer.CreateArrayEx");

	UEFGFxMoviePlayer_CreateArrayEx_Params params {};
	params.SourceFile = SourceFile;
	params.SourceLine = SourceLine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxMoviePlayer.CreateObjectEx
//		Flags  -> ()
// Parameters:
//		struct FString                                     ASClass                                                    (Parm, NeedCtorLink)
//		class UClass*                                      Type                                                       (OptionalParm, Parm)
//		TArray<struct FASValue>                            args                                                       (OptionalParm, Parm, NeedCtorLink)
//		struct FString                                     SourceFile                                                 (OptionalParm, Parm, NeedCtorLink)
//		int                                                SourceLine                                                 (OptionalParm, Parm)
//		class UGFxObject*                                  ReturnValue                                                (Parm, OutParm, ReturnParm)
class UGFxObject* UEFGFxMoviePlayer::CreateObjectEx(const struct FString& ASClass, class UClass* Type, TArray<struct FASValue> args, const struct FString& SourceFile, int SourceLine)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMoviePlayer.CreateObjectEx");

	UEFGFxMoviePlayer_CreateObjectEx_Params params {};
	params.ASClass = ASClass;
	params.Type = Type;
	params.args = args;
	params.SourceFile = SourceFile;
	params.SourceLine = SourceLine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxMoviePlayer.PostAdvance
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (Parm)
void UEFGFxMoviePlayer::PostAdvance(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMoviePlayer.PostAdvance");

	UEFGFxMoviePlayer_PostAdvance_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxMoviePlayer.WidgetUnloaded
//		Flags  -> ()
// Parameters:
//		struct FName                                       WidgetName                                                 (Parm)
//		struct FName                                       WidgetPath                                                 (Parm)
//		class UGFxObject*                                  Widget                                                     (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFGFxMoviePlayer::WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMoviePlayer.WidgetUnloaded");

	UEFGFxMoviePlayer_WidgetUnloaded_Params params {};
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
//		Name   -> Function EFGame.EFGFxMoviePlayer.WidgetInitialized
//		Flags  -> ()
// Parameters:
//		struct FName                                       WidgetName                                                 (Parm)
//		struct FName                                       WidgetPath                                                 (Parm)
//		class UGFxObject*                                  Widget                                                     (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFGFxMoviePlayer::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMoviePlayer.WidgetInitialized");

	UEFGFxMoviePlayer_WidgetInitialized_Params params {};
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
//		Name   -> Function EFGame.EFGFxEditorMoviePlayer.Start
//		Flags  -> ()
// Parameters:
//		bool                                               StartPaused                                                (OptionalParm, Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFGFxEditorMoviePlayer::Start(bool StartPaused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxEditorMoviePlayer.Start");

	UEFGFxEditorMoviePlayer_Start_Params params {};
	params.StartPaused = StartPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxMovieWidget.GetExternalTexture
//		Flags  -> ()
// Parameters:
//		struct FString                                     Resource                                                   (Parm, NeedCtorLink)
//		class UTexture*                                    ReturnValue                                                (Parm, OutParm, ReturnParm)
class UTexture* UEFGFxMovieWidget::GetExternalTexture(const struct FString& Resource)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidget.GetExternalTexture");

	UEFGFxMovieWidget_GetExternalTexture_Params params {};
	params.Resource = Resource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxMovieWidget.HasGFxObjectBinding
//		Flags  -> ()
// Parameters:
//		class UGFxObject*                                  Widget                                                     (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFGFxMovieWidget::HasGFxObjectBinding(class UGFxObject* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidget.HasGFxObjectBinding");

	UEFGFxMovieWidget_HasGFxObjectBinding_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxMovieWidget.DelGFxObjectBinding
//		Flags  -> ()
// Parameters:
//		class UGFxObject*                                  Widget                                                     (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFGFxMovieWidget::DelGFxObjectBinding(class UGFxObject* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidget.DelGFxObjectBinding");

	UEFGFxMovieWidget_DelGFxObjectBinding_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxMovieWidget.AddGFxObjectBinding
//		Flags  -> ()
// Parameters:
//		class UGFxObject*                                  Widget                                                     (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFGFxMovieWidget::AddGFxObjectBinding(class UGFxObject* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidget.AddGFxObjectBinding");

	UEFGFxMovieWidget_AddGFxObjectBinding_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxMovieWidget.SetVisible
//		Flags  -> ()
// Parameters:
//		bool                                               bVisible                                                   (Parm)
void UEFGFxMovieWidget::SetVisible(bool bVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidget.SetVisible");

	UEFGFxMovieWidget_SetVisible_Params params {};
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxMovieWidget.GFxFristFrameCallback
//		Flags  -> ()
void UEFGFxMovieWidget::GFxFristFrameCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidget.GFxFristFrameCallback");

	UEFGFxMovieWidget_GFxFristFrameCallback_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxMovieWidget.PostWidgetInit
//		Flags  -> ()
void UEFGFxMovieWidget::PostWidgetInit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidget.PostWidgetInit");

	UEFGFxMovieWidget_PostWidgetInit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxMovieWidget.Start
//		Flags  -> ()
// Parameters:
//		bool                                               StartPaused                                                (OptionalParm, Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFGFxMovieWidget::Start(bool StartPaused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidget.Start");

	UEFGFxMovieWidget_Start_Params params {};
	params.StartPaused = StartPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxMovieWidgetMain.ActivateFrame
//		Flags  -> ()
// Parameters:
//		class UGFxObject*                                  FrameObject                                                (Parm)
//		bool                                               ActivateWhenShow                                           (Parm)
//		bool                                               OnlyModal                                                  (Parm)
void UEFGFxMovieWidgetMain::ActivateFrame(class UGFxObject* FrameObject, bool ActivateWhenShow, bool OnlyModal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.ActivateFrame");

	UEFGFxMovieWidgetMain_ActivateFrame_Params params {};
	params.FrameObject = FrameObject;
	params.ActivateWhenShow = ActivateWhenShow;
	params.OnlyModal = OnlyModal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxMovieWidgetMain.ARKSlotMouseDoubleClick
//		Flags  -> ()
// Parameters:
//		class UEFUISlot*                                   SlotObj                                                    (Parm)
void UEFGFxMovieWidgetMain::ARKSlotMouseDoubleClick(class UEFUISlot* SlotObj)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.ARKSlotMouseDoubleClick");

	UEFGFxMovieWidgetMain_ARKSlotMouseDoubleClick_Params params {};
	params.SlotObj = SlotObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxMovieWidgetMain.ARKSlotMouseRightClick
//		Flags  -> ()
// Parameters:
//		class UEFUISlot*                                   SlotObj                                                    (Parm)
void UEFGFxMovieWidgetMain::ARKSlotMouseRightClick(class UEFUISlot* SlotObj)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.ARKSlotMouseRightClick");

	UEFGFxMovieWidgetMain_ARKSlotMouseRightClick_Params params {};
	params.SlotObj = SlotObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxMovieWidgetMain.ARKSlotMouseLeftClick
//		Flags  -> ()
// Parameters:
//		class UEFUISlot*                                   SlotObj                                                    (Parm)
void UEFGFxMovieWidgetMain::ARKSlotMouseLeftClick(class UEFUISlot* SlotObj)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.ARKSlotMouseLeftClick");

	UEFGFxMovieWidgetMain_ARKSlotMouseLeftClick_Params params {};
	params.SlotObj = SlotObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxMovieWidgetMain.ClearBindWidgetByName
//		Flags  -> ()
// Parameters:
//		struct FName                                       WidgetPath                                                 (Parm)
void UEFGFxMovieWidgetMain::ClearBindWidgetByName(const struct FName& WidgetPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.ClearBindWidgetByName");

	UEFGFxMovieWidgetMain_ClearBindWidgetByName_Params params {};
	params.WidgetPath = WidgetPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxMovieWidgetMain.ClearBindWidgetByWidget
//		Flags  -> ()
// Parameters:
//		class UGFxObject*                                  Widget                                                     (Parm)
void UEFGFxMovieWidgetMain::ClearBindWidgetByWidget(class UGFxObject* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.ClearBindWidgetByWidget");

	UEFGFxMovieWidgetMain_ClearBindWidgetByWidget_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxMovieWidgetMain.UnBindWidget
//		Flags  -> ()
// Parameters:
//		struct FName                                       WidgetName                                                 (Parm)
//		struct FName                                       WidgetPath                                                 (Parm)
//		class UGFxObject*                                  Widget                                                     (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFGFxMovieWidgetMain::UnBindWidget(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.UnBindWidget");

	UEFGFxMovieWidgetMain_UnBindWidget_Params params {};
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
//		Name   -> Function EFGame.EFGFxMovieWidgetMain.BindWidget
//		Flags  -> ()
// Parameters:
//		struct FName                                       WidgetName                                                 (Parm)
//		struct FName                                       WidgetPath                                                 (Parm)
//		class UGFxObject*                                  Widget                                                     (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFGFxMovieWidgetMain::BindWidget(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.BindWidget");

	UEFGFxMovieWidgetMain_BindWidget_Params params {};
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
//		Name   -> Function EFGame.EFGFxMovieWidgetMain.IsRegisteredWidget
//		Flags  -> ()
// Parameters:
//		struct FName                                       WidgetName                                                 (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFGFxMovieWidgetMain::IsRegisteredWidget(const struct FName& WidgetName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.IsRegisteredWidget");

	UEFGFxMovieWidgetMain_IsRegisteredWidget_Params params {};
	params.WidgetName = WidgetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxMovieWidgetMain.WidgetUnloaded
//		Flags  -> ()
// Parameters:
//		struct FName                                       WidgetName                                                 (Parm)
//		struct FName                                       WidgetPath                                                 (Parm)
//		class UGFxObject*                                  Widget                                                     (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFGFxMovieWidgetMain::WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.WidgetUnloaded");

	UEFGFxMovieWidgetMain_WidgetUnloaded_Params params {};
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
//		Name   -> Function EFGame.EFGFxMovieWidgetMain.WidgetInitialized
//		Flags  -> ()
// Parameters:
//		struct FName                                       WidgetName                                                 (Parm)
//		struct FName                                       WidgetPath                                                 (Parm)
//		class UGFxObject*                                  Widget                                                     (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFGFxMovieWidgetMain::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.WidgetInitialized");

	UEFGFxMovieWidgetMain_WidgetInitialized_Params params {};
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
//		Name   -> Function EFGame.EFGFxMovieWidgetMain.ComponentMagnetRectangle
//		Flags  -> ()
// Parameters:
//		int                                                X                                                          (Parm)
//		int                                                Y                                                          (Parm)
//		int                                                Width                                                      (Parm)
//		int                                                Height                                                     (Parm)
void UEFGFxMovieWidgetMain::ComponentMagnetRectangle(int X, int Y, int Width, int Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxMovieWidgetMain.ComponentMagnetRectangle");

	UEFGFxMovieWidgetMain_ComponentMagnetRectangle_Params params {};
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
//		Name   -> Function EFGame.EFUIComponent.InvalidateSize
//		Flags  -> ()
void UEFUIComponent::InvalidateSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.InvalidateSize");

	UEFUIComponent_InvalidateSize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIComponent.InvalidateData
//		Flags  -> ()
void UEFUIComponent::InvalidateData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.InvalidateData");

	UEFUIComponent_InvalidateData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIComponent.Invalidate
//		Flags  -> ()
// Parameters:
//		struct FString                                     Keyword                                                    (Parm, NeedCtorLink)
void UEFUIComponent::Invalidate(const struct FString& Keyword)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.Invalidate");

	UEFUIComponent_Invalidate_Params params {};
	params.Keyword = Keyword;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIComponent.ValidateNow
//		Flags  -> ()
void UEFUIComponent::ValidateNow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.ValidateNow");

	UEFUIComponent_ValidateNow_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIComponent.HasFocus
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFUIComponent::HasFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.HasFocus");

	UEFUIComponent_HasFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIComponent.GetY
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UEFUIComponent::GetY()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.GetY");

	UEFUIComponent_GetY_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIComponent.SetY
//		Flags  -> ()
// Parameters:
//		float                                              Y                                                          (Parm)
void UEFUIComponent::SetY(float Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.SetY");

	UEFUIComponent_SetY_Params params {};
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIComponent.GetX
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UEFUIComponent::GetX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.GetX");

	UEFUIComponent_GetX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIComponent.SetX
//		Flags  -> ()
// Parameters:
//		float                                              X                                                          (Parm)
void UEFUIComponent::SetX(float X)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.SetX");

	UEFUIComponent_SetX_Params params {};
	params.X = X;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIComponent.GetHeight
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UEFUIComponent::GetHeight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.GetHeight");

	UEFUIComponent_GetHeight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIComponent.SetHeight
//		Flags  -> ()
// Parameters:
//		float                                              Height                                                     (Parm)
void UEFUIComponent::SetHeight(float Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.SetHeight");

	UEFUIComponent_SetHeight_Params params {};
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIComponent.GetWidth
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UEFUIComponent::GetWidth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.GetWidth");

	UEFUIComponent_GetWidth_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIComponent.SetWidth
//		Flags  -> ()
// Parameters:
//		float                                              Width                                                      (Parm)
void UEFUIComponent::SetWidth(float Width)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.SetWidth");

	UEFUIComponent_SetWidth_Params params {};
	params.Width = Width;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIComponent.GetEnabled
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFUIComponent::GetEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.GetEnabled");

	UEFUIComponent_GetEnabled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIComponent.SetEnabled
//		Flags  -> ()
// Parameters:
//		bool                                               Enabled                                                    (Parm)
void UEFUIComponent::SetEnabled(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.SetEnabled");

	UEFUIComponent_SetEnabled_Params params {};
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIComponent.GetVisible
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFUIComponent::GetVisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.GetVisible");

	UEFUIComponent_GetVisible_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIComponent.SetVisible
//		Flags  -> ()
// Parameters:
//		bool                                               Visible                                                    (Parm)
void UEFUIComponent::SetVisible(bool Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.SetVisible");

	UEFUIComponent_SetVisible_Params params {};
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIComponent.GetName
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UEFUIComponent::GetName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.GetName");

	UEFUIComponent_GetName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIComponent.SetName
//		Flags  -> ()
// Parameters:
//		struct FString                                     strName                                                    (Parm, NeedCtorLink)
void UEFUIComponent::SetName(const struct FString& strName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.SetName");

	UEFUIComponent_SetName_Params params {};
	params.strName = strName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIComponent.WidgetInitialized
//		Flags  -> ()
// Parameters:
//		struct FName                                       WidgetName                                                 (Parm)
//		struct FName                                       WidgetPath                                                 (Parm)
//		class UGFxObject*                                  Widget                                                     (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFUIComponent::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIComponent.WidgetInitialized");

	UEFUIComponent_WidgetInitialized_Params params {};
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
//		Name   -> Function EFGame.EFUISlot.SetItemData
//		Flags  -> ()
// Parameters:
//		class UGFxObject*                                  SlotDataObject                                             (Parm)
void UEFUISlot::SetItemData(class UGFxObject* SlotDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetItemData");

	UEFUISlot_SetItemData_Params params {};
	params.SlotDataObject = SlotDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.SetDisableType
//		Flags  -> ()
// Parameters:
//		int                                                iType                                                      (Parm)
void UEFUISlot::SetDisableType(int iType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetDisableType");

	UEFUISlot_SetDisableType_Params params {};
	params.iType = iType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.SetUniqueData
//		Flags  -> ()
// Parameters:
//		struct FString                                     NewUniqueData                                              (Parm, NeedCtorLink)
void UEFUISlot::SetUniqueData(const struct FString& NewUniqueData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetUniqueData");

	UEFUISlot_SetUniqueData_Params params {};
	params.NewUniqueData = NewUniqueData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.GetUniqueData
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UEFUISlot::GetUniqueData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetUniqueData");

	UEFUISlot_GetUniqueData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.SetLocked
//		Flags  -> ()
// Parameters:
//		int                                                iLockType                                                  (Parm)
void UEFUISlot::SetLocked(int iLockType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetLocked");

	UEFUISlot_SetLocked_Params params {};
	params.iLockType = iLockType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.IsLocked
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFUISlot::IsLocked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.IsLocked");

	UEFUISlot_IsLocked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.SetItemGrade
//		Flags  -> ()
// Parameters:
//		int                                                NewGrade                                                   (Parm)
void UEFUISlot::SetItemGrade(int NewGrade)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetItemGrade");

	UEFUISlot_SetItemGrade_Params params {};
	params.NewGrade = NewGrade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.GetItemGrade
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFUISlot::GetItemGrade()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetItemGrade");

	UEFUISlot_GetItemGrade_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.SetSoundTheme
//		Flags  -> ()
// Parameters:
//		struct FString                                     NewSoundTheme                                              (Parm, NeedCtorLink)
void UEFUISlot::SetSoundTheme(const struct FString& NewSoundTheme)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetSoundTheme");

	UEFUISlot_SetSoundTheme_Params params {};
	params.NewSoundTheme = NewSoundTheme;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.GetSoundTheme
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UEFUISlot::GetSoundTheme()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetSoundTheme");

	UEFUISlot_GetSoundTheme_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.SetDisabled
//		Flags  -> ()
// Parameters:
//		bool                                               bValue                                                     (Parm)
void UEFUISlot::SetDisabled(bool bValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetDisabled");

	UEFUISlot_SetDisabled_Params params {};
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.IsDisabled
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFUISlot::IsDisabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.IsDisabled");

	UEFUISlot_IsDisabled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.SetCooltime
//		Flags  -> ()
// Parameters:
//		float                                              NewRemainTime                                              (Parm)
//		float                                              NewTotalTime                                               (Parm)
void UEFUISlot::SetCooltime(float NewRemainTime, float NewTotalTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetCooltime");

	UEFUISlot_SetCooltime_Params params {};
	params.NewRemainTime = NewRemainTime;
	params.NewTotalTime = NewTotalTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.GetTotalCoolTime
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UEFUISlot::GetTotalCoolTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetTotalCoolTime");

	UEFUISlot_GetTotalCoolTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.GetRemainCoolTime
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UEFUISlot::GetRemainCoolTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetRemainCoolTime");

	UEFUISlot_GetRemainCoolTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.SetIconHeight
//		Flags  -> ()
// Parameters:
//		int                                                NewIconHeight                                              (Parm)
void UEFUISlot::SetIconHeight(int NewIconHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetIconHeight");

	UEFUISlot_SetIconHeight_Params params {};
	params.NewIconHeight = NewIconHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.GetIconHeight
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFUISlot::GetIconHeight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetIconHeight");

	UEFUISlot_GetIconHeight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.SetIconWidth
//		Flags  -> ()
// Parameters:
//		int                                                NewIconWidth                                               (Parm)
void UEFUISlot::SetIconWidth(int NewIconWidth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetIconWidth");

	UEFUISlot_SetIconWidth_Params params {};
	params.NewIconWidth = NewIconWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.GetIconWidth
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFUISlot::GetIconWidth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetIconWidth");

	UEFUISlot_GetIconWidth_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.SetIconY
//		Flags  -> ()
// Parameters:
//		int                                                NewIconY                                                   (Parm)
void UEFUISlot::SetIconY(int NewIconY)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetIconY");

	UEFUISlot_SetIconY_Params params {};
	params.NewIconY = NewIconY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.GetIconY
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFUISlot::GetIconY()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetIconY");

	UEFUISlot_GetIconY_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.SetIconX
//		Flags  -> ()
// Parameters:
//		int                                                NewIconX                                                   (Parm)
void UEFUISlot::SetIconX(int NewIconX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetIconX");

	UEFUISlot_SetIconX_Params params {};
	params.NewIconX = NewIconX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.GetIconX
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFUISlot::GetIconX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetIconX");

	UEFUISlot_GetIconX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.SetIconCount
//		Flags  -> ()
// Parameters:
//		int                                                NewIconIndex                                               (Parm)
void UEFUISlot::SetIconCount(int NewIconIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetIconCount");

	UEFUISlot_SetIconCount_Params params {};
	params.NewIconIndex = NewIconIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.GetIconCount
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFUISlot::GetIconCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetIconCount");

	UEFUISlot_GetIconCount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.SetIconPath
//		Flags  -> ()
// Parameters:
//		struct FString                                     NewIconPath                                                (Parm, NeedCtorLink)
void UEFUISlot::SetIconPath(const struct FString& NewIconPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetIconPath");

	UEFUISlot_SetIconPath_Params params {};
	params.NewIconPath = NewIconPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.GetIconPath
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UEFUISlot::GetIconPath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetIconPath");

	UEFUISlot_GetIconPath_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.SetWindowType
//		Flags  -> ()
// Parameters:
//		int                                                NewWindowType                                              (Parm)
void UEFUISlot::SetWindowType(int NewWindowType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetWindowType");

	UEFUISlot_SetWindowType_Params params {};
	params.NewWindowType = NewWindowType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.GetWindowType
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFUISlot::GetWindowType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetWindowType");

	UEFUISlot_GetWindowType_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.SetSlotIndex
//		Flags  -> ()
// Parameters:
//		int                                                NewSlotIndex                                               (Parm)
void UEFUISlot::SetSlotIndex(int NewSlotIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetSlotIndex");

	UEFUISlot_SetSlotIndex_Params params {};
	params.NewSlotIndex = NewSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.GetSlotIndex
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFUISlot::GetSlotIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetSlotIndex");

	UEFUISlot_GetSlotIndex_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.SetBindID
//		Flags  -> ()
// Parameters:
//		struct FString                                     NewSlotID                                                  (Parm, NeedCtorLink)
void UEFUISlot::SetBindID(const struct FString& NewSlotID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetBindID");

	UEFUISlot_SetBindID_Params params {};
	params.NewSlotID = NewSlotID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.GetBindID
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UEFUISlot::GetBindID()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetBindID");

	UEFUISlot_GetBindID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.SetSlotType
//		Flags  -> ()
// Parameters:
//		int                                                NewSlotType                                                (Parm)
void UEFUISlot::SetSlotType(int NewSlotType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetSlotType");

	UEFUISlot_SetSlotType_Params params {};
	params.NewSlotType = NewSlotType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.GetSlotType
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFUISlot::GetSlotType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetSlotType");

	UEFUISlot_GetSlotType_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.SetIconData
//		Flags  -> ()
// Parameters:
//		int                                                SlotType                                                   (Parm)
//		int                                                SlotIndex                                                  (Parm)
//		struct FString                                     BindID                                                     (Parm, NeedCtorLink)
//		struct FString                                     IconPath                                                   (Parm, NeedCtorLink)
//		int                                                IconIndex                                                  (Parm)
//		TEnumAsByte<EFGame_EItemGrade>                     eItemGrade                                                 (Parm)
//		int                                                TableID                                                    (OptionalParm, Parm)
//		int                                                IconCount                                                  (OptionalParm, Parm)
void UEFUISlot::SetIconData(int SlotType, int SlotIndex, const struct FString& BindID, const struct FString& IconPath, int IconIndex, TEnumAsByte<EFGame_EItemGrade> eItemGrade, int TableID, int IconCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.SetIconData");

	UEFUISlot_SetIconData_Params params {};
	params.SlotType = SlotType;
	params.SlotIndex = SlotIndex;
	params.BindID = BindID;
	params.IconPath = IconPath;
	params.IconIndex = IconIndex;
	params.eItemGrade = eItemGrade;
	params.TableID = TableID;
	params.IconCount = IconCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlot.GetSlotItemData
//		Flags  -> ()
// Parameters:
//		class UEFUISlotData*                               ReturnValue                                                (Parm, OutParm, ReturnParm)
class UEFUISlotData* UEFUISlot::GetSlotItemData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlot.GetSlotItemData");

	UEFUISlot_GetSlotItemData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIChatTabControl.ChatLogInputSelectType
//		Flags  -> ()
// Parameters:
//		int                                                InChannelType                                              (Parm)
void UEFUIChatTabControl::ChatLogInputSelectType(int InChannelType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIChatTabControl.ChatLogInputSelectType");

	UEFUIChatTabControl_ChatLogInputSelectType_Params params {};
	params.InChannelType = InChannelType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIChatTabControl.ChatLogMainWidgetTabInsertGroup
//		Flags  -> ()
// Parameters:
//		int                                                InTabID                                                    (Parm)
void UEFUIChatTabControl::ChatLogMainWidgetTabInsertGroup(int InTabID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIChatTabControl.ChatLogMainWidgetTabInsertGroup");

	UEFUIChatTabControl_ChatLogMainWidgetTabInsertGroup_Params params {};
	params.InTabID = InTabID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIChatTabControl.ChatLogInTabGroupElementStartDrag
//		Flags  -> ()
// Parameters:
//		int                                                InTabID                                                    (Parm)
//		float                                              InTabX                                                     (Parm)
//		float                                              InTabY                                                     (Parm)
void UEFUIChatTabControl::ChatLogInTabGroupElementStartDrag(int InTabID, float InTabX, float InTabY)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIChatTabControl.ChatLogInTabGroupElementStartDrag");

	UEFUIChatTabControl_ChatLogInTabGroupElementStartDrag_Params params {};
	params.InTabID = InTabID;
	params.InTabX = InTabX;
	params.InTabY = InTabY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIChatTabControl.ChatLogLinkClick
//		Flags  -> ()
// Parameters:
//		struct FString                                     InLinkName                                                 (Parm, NeedCtorLink)
//		int                                                InLinkCode                                                 (Parm)
//		int                                                InMouseClick                                               (Parm)
void UEFUIChatTabControl::ChatLogLinkClick(const struct FString& InLinkName, int InLinkCode, int InMouseClick)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIChatTabControl.ChatLogLinkClick");

	UEFUIChatTabControl_ChatLogLinkClick_Params params {};
	params.InLinkName = InLinkName;
	params.InLinkCode = InLinkCode;
	params.InMouseClick = InMouseClick;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIChatTabControl.ChatLogTabContextMenuShow
//		Flags  -> ()
// Parameters:
//		int                                                InTabID                                                    (Parm)
void UEFUIChatTabControl::ChatLogTabContextMenuShow(int InTabID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIChatTabControl.ChatLogTabContextMenuShow");

	UEFUIChatTabControl_ChatLogTabContextMenuShow_Params params {};
	params.InTabID = InTabID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIChatTabControl.ChatLogMainWidgetSizeUpdated
//		Flags  -> ()
void UEFUIChatTabControl::ChatLogMainWidgetSizeUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIChatTabControl.ChatLogMainWidgetSizeUpdated");

	UEFUIChatTabControl_ChatLogMainWidgetSizeUpdated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIList.SetSelectedIndex
//		Flags  -> ()
// Parameters:
//		int                                                NewListIndex                                               (Parm)
void UEFUIList::SetSelectedIndex(int NewListIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIList.SetSelectedIndex");

	UEFUIList_SetSelectedIndex_Params params {};
	params.NewListIndex = NewListIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIList.GetSelectedIndex
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFUIList::GetSelectedIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIList.GetSelectedIndex");

	UEFUIList_GetSelectedIndex_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIList.GetData
//		Flags  -> ()
// Parameters:
//		int                                                DataIndex                                                  (Parm)
//		class UClass*                                      ListItemClass                                              (Parm)
//		class UEFUIListItem*                               ReturnValue                                                (Parm, OutParm, ReturnParm)
class UEFUIListItem* UEFUIList::GetData(int DataIndex, class UClass* ListItemClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIList.GetData");

	UEFUIList_GetData_Params params {};
	params.DataIndex = DataIndex;
	params.ListItemClass = ListItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItem.HasAttribute
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFUIListItem::HasAttribute()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItem.HasAttribute");

	UEFUIListItem_HasAttribute_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.SetIslandIcon
//		Flags  -> ()
// Parameters:
//		bool                                               bValue                                                     (Parm)
void UEFUIListItemSlot::SetIslandIcon(bool bValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetIslandIcon");

	UEFUIListItemSlot_SetIslandIcon_Params params {};
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.SetTownShow
//		Flags  -> ()
// Parameters:
//		bool                                               bValue                                                     (Parm)
void UEFUIListItemSlot::SetTownShow(bool bValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetTownShow");

	UEFUIListItemSlot_SetTownShow_Params params {};
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.SetFriendshipShow
//		Flags  -> ()
// Parameters:
//		bool                                               bValue                                                     (Parm)
void UEFUIListItemSlot::SetFriendshipShow(bool bValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetFriendshipShow");

	UEFUIListItemSlot_SetFriendshipShow_Params params {};
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.SetTripodBookmarkShow
//		Flags  -> ()
// Parameters:
//		bool                                               bValue                                                     (Parm)
void UEFUIListItemSlot::SetTripodBookmarkShow(bool bValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetTripodBookmarkShow");

	UEFUIListItemSlot_SetTripodBookmarkShow_Params params {};
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.SetEngraveBookmarkShow
//		Flags  -> ()
// Parameters:
//		bool                                               bValue                                                     (Parm)
void UEFUIListItemSlot::SetEngraveBookmarkShow(bool bValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetEngraveBookmarkShow");

	UEFUIListItemSlot_SetEngraveBookmarkShow_Params params {};
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.SetSealShow
//		Flags  -> ()
// Parameters:
//		bool                                               bValue                                                     (Parm)
void UEFUIListItemSlot::SetSealShow(bool bValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetSealShow");

	UEFUIListItemSlot_SetSealShow_Params params {};
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.SetAdvBookShow
//		Flags  -> ()
// Parameters:
//		bool                                               bValue                                                     (Parm)
void UEFUIListItemSlot::SetAdvBookShow(bool bValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetAdvBookShow");

	UEFUIListItemSlot_SetAdvBookShow_Params params {};
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.SetTemporary
//		Flags  -> ()
// Parameters:
//		bool                                               bValue                                                     (Parm)
void UEFUIListItemSlot::SetTemporary(bool bValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetTemporary");

	UEFUIListItemSlot_SetTemporary_Params params {};
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.SetTrash
//		Flags  -> ()
// Parameters:
//		bool                                               bValue                                                     (Parm)
void UEFUIListItemSlot::SetTrash(bool bValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetTrash");

	UEFUIListItemSlot_SetTrash_Params params {};
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.SetDisableType
//		Flags  -> ()
// Parameters:
//		int                                                iType                                                      (Parm)
void UEFUIListItemSlot::SetDisableType(int iType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetDisableType");

	UEFUIListItemSlot_SetDisableType_Params params {};
	params.iType = iType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.SetTableID
//		Flags  -> ()
// Parameters:
//		int                                                NewTableID                                                 (Parm)
void UEFUIListItemSlot::SetTableID(int NewTableID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetTableID");

	UEFUIListItemSlot_SetTableID_Params params {};
	params.NewTableID = NewTableID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.GetTableID
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFUIListItemSlot::GetTableID()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetTableID");

	UEFUIListItemSlot_GetTableID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.SetUniqueData
//		Flags  -> ()
// Parameters:
//		struct FString                                     NewUniqueData                                              (Parm, NeedCtorLink)
void UEFUIListItemSlot::SetUniqueData(const struct FString& NewUniqueData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetUniqueData");

	UEFUIListItemSlot_SetUniqueData_Params params {};
	params.NewUniqueData = NewUniqueData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.GetUniqueData
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UEFUIListItemSlot::GetUniqueData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetUniqueData");

	UEFUIListItemSlot_GetUniqueData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.SetLocked
//		Flags  -> ()
// Parameters:
//		int                                                iLockType                                                  (Parm)
void UEFUIListItemSlot::SetLocked(int iLockType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetLocked");

	UEFUIListItemSlot_SetLocked_Params params {};
	params.iLockType = iLockType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.IsLocked
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFUIListItemSlot::IsLocked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.IsLocked");

	UEFUIListItemSlot_IsLocked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.SetItemGrade
//		Flags  -> ()
// Parameters:
//		int                                                NewGrade                                                   (Parm)
void UEFUIListItemSlot::SetItemGrade(int NewGrade)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetItemGrade");

	UEFUIListItemSlot_SetItemGrade_Params params {};
	params.NewGrade = NewGrade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.GetItemGrade
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFUIListItemSlot::GetItemGrade()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetItemGrade");

	UEFUIListItemSlot_GetItemGrade_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.SetSoundTheme
//		Flags  -> ()
// Parameters:
//		struct FString                                     NewSoundTheme                                              (Parm, NeedCtorLink)
void UEFUIListItemSlot::SetSoundTheme(const struct FString& NewSoundTheme)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetSoundTheme");

	UEFUIListItemSlot_SetSoundTheme_Params params {};
	params.NewSoundTheme = NewSoundTheme;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.GetSoundTheme
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UEFUIListItemSlot::GetSoundTheme()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetSoundTheme");

	UEFUIListItemSlot_GetSoundTheme_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.SetDisabled
//		Flags  -> ()
// Parameters:
//		bool                                               bValue                                                     (Parm)
void UEFUIListItemSlot::SetDisabled(bool bValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetDisabled");

	UEFUIListItemSlot_SetDisabled_Params params {};
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.IsDisabled
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFUIListItemSlot::IsDisabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.IsDisabled");

	UEFUIListItemSlot_IsDisabled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.SetItemName
//		Flags  -> ()
// Parameters:
//		struct FString                                     ItemName                                                   (Parm, NeedCtorLink)
void UEFUIListItemSlot::SetItemName(const struct FString& ItemName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetItemName");

	UEFUIListItemSlot_SetItemName_Params params {};
	params.ItemName = ItemName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.GetItemName
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UEFUIListItemSlot::GetItemName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetItemName");

	UEFUIListItemSlot_GetItemName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.SetLabel
//		Flags  -> ()
// Parameters:
//		struct FString                                     Label                                                      (Parm, NeedCtorLink)
void UEFUIListItemSlot::SetLabel(const struct FString& Label)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetLabel");

	UEFUIListItemSlot_SetLabel_Params params {};
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.GetLabel
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UEFUIListItemSlot::GetLabel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetLabel");

	UEFUIListItemSlot_GetLabel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.SetCooltime
//		Flags  -> ()
// Parameters:
//		float                                              NewRemainTime                                              (Parm)
//		float                                              NewTotalTime                                               (Parm)
void UEFUIListItemSlot::SetCooltime(float NewRemainTime, float NewTotalTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetCooltime");

	UEFUIListItemSlot_SetCooltime_Params params {};
	params.NewRemainTime = NewRemainTime;
	params.NewTotalTime = NewTotalTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.GetTotalCoolTime
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UEFUIListItemSlot::GetTotalCoolTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetTotalCoolTime");

	UEFUIListItemSlot_GetTotalCoolTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.GetRemainCoolTime
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UEFUIListItemSlot::GetRemainCoolTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetRemainCoolTime");

	UEFUIListItemSlot_GetRemainCoolTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.SetIconHeight
//		Flags  -> ()
// Parameters:
//		int                                                NewIconHeight                                              (Parm)
void UEFUIListItemSlot::SetIconHeight(int NewIconHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetIconHeight");

	UEFUIListItemSlot_SetIconHeight_Params params {};
	params.NewIconHeight = NewIconHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.GetIconHeight
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFUIListItemSlot::GetIconHeight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetIconHeight");

	UEFUIListItemSlot_GetIconHeight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.SetIconWidth
//		Flags  -> ()
// Parameters:
//		int                                                NewIconWidth                                               (Parm)
void UEFUIListItemSlot::SetIconWidth(int NewIconWidth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetIconWidth");

	UEFUIListItemSlot_SetIconWidth_Params params {};
	params.NewIconWidth = NewIconWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.GetIconWidth
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFUIListItemSlot::GetIconWidth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetIconWidth");

	UEFUIListItemSlot_GetIconWidth_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.SetIconY
//		Flags  -> ()
// Parameters:
//		int                                                NewIconY                                                   (Parm)
void UEFUIListItemSlot::SetIconY(int NewIconY)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetIconY");

	UEFUIListItemSlot_SetIconY_Params params {};
	params.NewIconY = NewIconY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.GetIconY
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFUIListItemSlot::GetIconY()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetIconY");

	UEFUIListItemSlot_GetIconY_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.SetIconX
//		Flags  -> ()
// Parameters:
//		int                                                NewIconX                                                   (Parm)
void UEFUIListItemSlot::SetIconX(int NewIconX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetIconX");

	UEFUIListItemSlot_SetIconX_Params params {};
	params.NewIconX = NewIconX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.GetIconX
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFUIListItemSlot::GetIconX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetIconX");

	UEFUIListItemSlot_GetIconX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.SetIconCount
//		Flags  -> ()
// Parameters:
//		int                                                NewIconIndex                                               (Parm)
void UEFUIListItemSlot::SetIconCount(int NewIconIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetIconCount");

	UEFUIListItemSlot_SetIconCount_Params params {};
	params.NewIconIndex = NewIconIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.GetIconCount
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFUIListItemSlot::GetIconCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetIconCount");

	UEFUIListItemSlot_GetIconCount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.SetIconPath
//		Flags  -> ()
// Parameters:
//		struct FString                                     NewIconPath                                                (Parm, NeedCtorLink)
void UEFUIListItemSlot::SetIconPath(const struct FString& NewIconPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetIconPath");

	UEFUIListItemSlot_SetIconPath_Params params {};
	params.NewIconPath = NewIconPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.GetIconPath
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UEFUIListItemSlot::GetIconPath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetIconPath");

	UEFUIListItemSlot_GetIconPath_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.SetWindowType
//		Flags  -> ()
// Parameters:
//		int                                                NewWindowType                                              (Parm)
void UEFUIListItemSlot::SetWindowType(int NewWindowType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetWindowType");

	UEFUIListItemSlot_SetWindowType_Params params {};
	params.NewWindowType = NewWindowType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.GetWindowType
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFUIListItemSlot::GetWindowType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetWindowType");

	UEFUIListItemSlot_GetWindowType_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.SetSlotIndex
//		Flags  -> ()
// Parameters:
//		int                                                NewSlotIndex                                               (Parm)
void UEFUIListItemSlot::SetSlotIndex(int NewSlotIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetSlotIndex");

	UEFUIListItemSlot_SetSlotIndex_Params params {};
	params.NewSlotIndex = NewSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.GetSlotIndex
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFUIListItemSlot::GetSlotIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetSlotIndex");

	UEFUIListItemSlot_GetSlotIndex_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.SetBindID
//		Flags  -> ()
// Parameters:
//		struct FString                                     NewSlotID                                                  (Parm, NeedCtorLink)
void UEFUIListItemSlot::SetBindID(const struct FString& NewSlotID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetBindID");

	UEFUIListItemSlot_SetBindID_Params params {};
	params.NewSlotID = NewSlotID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.GetBindID
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UEFUIListItemSlot::GetBindID()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetBindID");

	UEFUIListItemSlot_GetBindID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.SetSlotType
//		Flags  -> ()
// Parameters:
//		int                                                NewSlotType                                                (Parm)
void UEFUIListItemSlot::SetSlotType(int NewSlotType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetSlotType");

	UEFUIListItemSlot_SetSlotType_Params params {};
	params.NewSlotType = NewSlotType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.GetSlotType
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFUIListItemSlot::GetSlotType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.GetSlotType");

	UEFUIListItemSlot_GetSlotType_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIListItemSlot.SetIconData
//		Flags  -> ()
// Parameters:
//		int                                                SlotType                                                   (Parm)
//		int                                                SlotIndex                                                  (Parm)
//		struct FString                                     BindID                                                     (Parm, NeedCtorLink)
//		struct FString                                     IconPath                                                   (Parm, NeedCtorLink)
//		int                                                IconIndex                                                  (Parm)
//		int                                                TableID                                                    (OptionalParm, Parm)
//		int                                                IconCount                                                  (OptionalParm, Parm)
//		bool                                               bTrash                                                     (OptionalParm, Parm)
//		bool                                               bTemporary                                                 (OptionalParm, Parm)
void UEFUIListItemSlot::SetIconData(int SlotType, int SlotIndex, const struct FString& BindID, const struct FString& IconPath, int IconIndex, int TableID, int IconCount, bool bTrash, bool bTemporary)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIListItemSlot.SetIconData");

	UEFUIListItemSlot_SetIconData_Params params {};
	params.SlotType = SlotType;
	params.SlotIndex = SlotIndex;
	params.BindID = BindID;
	params.IconPath = IconPath;
	params.IconIndex = IconIndex;
	params.TableID = TableID;
	params.IconCount = IconCount;
	params.bTrash = bTrash;
	params.bTemporary = bTemporary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetAnchorModeCrew.AnchorCrewSkillSlotClick
//		Flags  -> ()
// Parameters:
//		int                                                slotIndexInPage                                            (Parm)
void UEFGFxWidgetAnchorModeCrew::AnchorCrewSkillSlotClick(int slotIndexInPage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnchorModeCrew.AnchorCrewSkillSlotClick");

	UEFGFxWidgetAnchorModeCrew_AnchorCrewSkillSlotClick_Params params {};
	params.slotIndexInPage = slotIndexInPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetAnchorModeCrew.AnchorCrewPageIndexChanged
//		Flags  -> ()
// Parameters:
//		int                                                pageIndex                                                  (Parm)
void UEFGFxWidgetAnchorModeCrew::AnchorCrewPageIndexChanged(int pageIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnchorModeCrew.AnchorCrewPageIndexChanged");

	UEFGFxWidgetAnchorModeCrew_AnchorCrewPageIndexChanged_Params params {};
	params.pageIndex = pageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetBuddy.showNew
//		Flags  -> ()
void UEFGFxWidgetBuddy::showNew()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.showNew");

	UEFGFxWidgetBuddy_showNew_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetBuddy.setSelectedTab
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
void UEFGFxWidgetBuddy::setSelectedTab(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.setSelectedTab");

	UEFGFxWidgetBuddy_setSelectedTab_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetBuddy.setAFK
//		Flags  -> ()
// Parameters:
//		bool                                               bAFK                                                       (Parm)
void UEFGFxWidgetBuddy::setAFK(bool bAFK)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.setAFK");

	UEFGFxWidgetBuddy_setAFK_Params params {};
	params.bAFK = bAFK;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetBuddy.FriendsGroupRendererMouseOver
//		Flags  -> ()
// Parameters:
//		struct FString                                     strUID                                                     (Parm, NeedCtorLink)
void UEFGFxWidgetBuddy::FriendsGroupRendererMouseOver(const struct FString& strUID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.FriendsGroupRendererMouseOver");

	UEFGFxWidgetBuddy_FriendsGroupRendererMouseOver_Params params {};
	params.strUID = strUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetBuddy.FriendsGroupRendererRightClick
//		Flags  -> ()
// Parameters:
//		struct FString                                     strUID                                                     (Parm, NeedCtorLink)
void UEFGFxWidgetBuddy::FriendsGroupRendererRightClick(const struct FString& strUID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.FriendsGroupRendererRightClick");

	UEFGFxWidgetBuddy_FriendsGroupRendererRightClick_Params params {};
	params.strUID = strUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetBuddy.FriendsGroupRendererExtended
//		Flags  -> ()
// Parameters:
//		struct FString                                     strUID                                                     (Parm, NeedCtorLink)
//		bool                                               bShow                                                      (Parm)
void UEFGFxWidgetBuddy::FriendsGroupRendererExtended(const struct FString& strUID, bool bShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.FriendsGroupRendererExtended");

	UEFGFxWidgetBuddy_FriendsGroupRendererExtended_Params params {};
	params.strUID = strUID;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetBuddy.FriendsRendererRightClick
//		Flags  -> ()
// Parameters:
//		struct FString                                     strUID                                                     (Parm, NeedCtorLink)
void UEFGFxWidgetBuddy::FriendsRendererRightClick(const struct FString& strUID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.FriendsRendererRightClick");

	UEFGFxWidgetBuddy_FriendsRendererRightClick_Params params {};
	params.strUID = strUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetBuddy.FriendsInvite
//		Flags  -> ()
// Parameters:
//		struct FString                                     strUID                                                     (Parm, NeedCtorLink)
void UEFGFxWidgetBuddy::FriendsInvite(const struct FString& strUID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.FriendsInvite");

	UEFGFxWidgetBuddy_FriendsInvite_Params params {};
	params.strUID = strUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetBuddy.FriendsBlock
//		Flags  -> ()
// Parameters:
//		struct FString                                     strUID                                                     (Parm, NeedCtorLink)
void UEFGFxWidgetBuddy::FriendsBlock(const struct FString& strUID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.FriendsBlock");

	UEFGFxWidgetBuddy_FriendsBlock_Params params {};
	params.strUID = strUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetBuddy.FriendsUnBlock
//		Flags  -> ()
// Parameters:
//		struct FString                                     strUID                                                     (Parm, NeedCtorLink)
void UEFGFxWidgetBuddy::FriendsUnBlock(const struct FString& strUID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.FriendsUnBlock");

	UEFGFxWidgetBuddy_FriendsUnBlock_Params params {};
	params.strUID = strUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetBuddy.FriendsBuddyCancel
//		Flags  -> ()
// Parameters:
//		struct FString                                     strUID                                                     (Parm, NeedCtorLink)
void UEFGFxWidgetBuddy::FriendsBuddyCancel(const struct FString& strUID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.FriendsBuddyCancel");

	UEFGFxWidgetBuddy_FriendsBuddyCancel_Params params {};
	params.strUID = strUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetBuddy.FriendsBuddyReject
//		Flags  -> ()
// Parameters:
//		struct FString                                     strUID                                                     (Parm, NeedCtorLink)
void UEFGFxWidgetBuddy::FriendsBuddyReject(const struct FString& strUID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.FriendsBuddyReject");

	UEFGFxWidgetBuddy_FriendsBuddyReject_Params params {};
	params.strUID = strUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetBuddy.FriendsBuddyAgree
//		Flags  -> ()
// Parameters:
//		struct FString                                     strUID                                                     (Parm, NeedCtorLink)
void UEFGFxWidgetBuddy::FriendsBuddyAgree(const struct FString& strUID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetBuddy.FriendsBuddyAgree");

	UEFGFxWidgetBuddy_FriendsBuddyAgree_Params params {};
	params.strUID = strUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetCandidate.SetCandidateFocus
//		Flags  -> ()
// Parameters:
//		bool                                               isFocus                                                    (Parm)
void UEFGFxWidgetCandidate::SetCandidateFocus(bool isFocus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCandidate.SetCandidateFocus");

	UEFGFxWidgetCandidate_SetCandidateFocus_Params params {};
	params.isFocus = isFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetChattingOption.SetChannelColor
//		Flags  -> ()
// Parameters:
//		int                                                ChannelIndex                                               (Parm)
//		struct FString                                     colorCode                                                  (Parm, NeedCtorLink)
void UEFGFxWidgetChattingOption::SetChannelColor(int ChannelIndex, const struct FString& colorCode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetChattingOption.SetChannelColor");

	UEFGFxWidgetChattingOption_SetChannelColor_Params params {};
	params.ChannelIndex = ChannelIndex;
	params.colorCode = colorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionAddTab
//		Flags  -> ()
// Parameters:
//		TArray<int>                                        ArrFilterList                                              (Parm, NeedCtorLink)
void UEFGFxWidgetChattingOption::ChatLogFilterOptionAddTab(TArray<int> ArrFilterList)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionAddTab");

	UEFGFxWidgetChattingOption_ChatLogFilterOptionAddTab_Params params {};
	params.ArrFilterList = ArrFilterList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionOKWnd
//		Flags  -> ()
// Parameters:
//		TArray<int>                                        ArrFilterList                                              (Parm, NeedCtorLink)
void UEFGFxWidgetChattingOption::ChatLogFilterOptionOKWnd(TArray<int> ArrFilterList)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionOKWnd");

	UEFGFxWidgetChattingOption_ChatLogFilterOptionOKWnd_Params params {};
	params.ArrFilterList = ArrFilterList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionResetData
//		Flags  -> ()
void UEFGFxWidgetChattingOption::ChatLogFilterOptionResetData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionResetData");

	UEFGFxWidgetChattingOption_ChatLogFilterOptionResetData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionAppliedChannelList
//		Flags  -> ()
// Parameters:
//		TArray<int>                                        ArrFilterList                                              (Parm, NeedCtorLink)
void UEFGFxWidgetChattingOption::ChatLogFilterOptionAppliedChannelList(TArray<int> ArrFilterList)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionAppliedChannelList");

	UEFGFxWidgetChattingOption_ChatLogFilterOptionAppliedChannelList_Params params {};
	params.ArrFilterList = ArrFilterList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetColorPicker.SetTargetPosition
//		Flags  -> ()
// Parameters:
//		float                                              X                                                          (Parm)
//		float                                              Y                                                          (Parm)
//		float                                              W                                                          (Parm)
//		float                                              H                                                          (Parm)
void UEFGFxWidgetColorPicker::SetTargetPosition(float X, float Y, float W, float H)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColorPicker.SetTargetPosition");

	UEFGFxWidgetColorPicker_SetTargetPosition_Params params {};
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetColorPicker.SetTargetCode
//		Flags  -> ()
// Parameters:
//		int                                                InCode                                                     (Parm)
void UEFGFxWidgetColorPicker::SetTargetCode(int InCode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColorPicker.SetTargetCode");

	UEFGFxWidgetColorPicker_SetTargetCode_Params params {};
	params.InCode = InCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetColorPicker.SetColor
//		Flags  -> ()
// Parameters:
//		struct FString                                     InColor                                                    (Parm, NeedCtorLink)
void UEFGFxWidgetColorPicker::SetColor(const struct FString& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColorPicker.SetColor");

	UEFGFxWidgetColorPicker_SetColor_Params params {};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetColorPicker.SetDefaultColor
//		Flags  -> ()
// Parameters:
//		struct FString                                     InColor                                                    (Parm, NeedCtorLink)
void UEFGFxWidgetColorPicker::SetDefaultColor(const struct FString& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColorPicker.SetDefaultColor");

	UEFGFxWidgetColorPicker_SetDefaultColor_Params params {};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetColorPicker.RequestEventColorPickerTextInputChange
//		Flags  -> ()
// Parameters:
//		struct FString                                     InColor                                                    (Parm, NeedCtorLink)
void UEFGFxWidgetColorPicker::RequestEventColorPickerTextInputChange(const struct FString& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColorPicker.RequestEventColorPickerTextInputChange");

	UEFGFxWidgetColorPicker_RequestEventColorPickerTextInputChange_Params params {};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetColorPicker.RequestEventColorPickerCursorDragEnd
//		Flags  -> ()
// Parameters:
//		struct FString                                     InColor                                                    (Parm, NeedCtorLink)
void UEFGFxWidgetColorPicker::RequestEventColorPickerCursorDragEnd(const struct FString& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColorPicker.RequestEventColorPickerCursorDragEnd");

	UEFGFxWidgetColorPicker_RequestEventColorPickerCursorDragEnd_Params params {};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetColorPicker.RequestEventColorPickerProgressValueChange
//		Flags  -> ()
// Parameters:
//		struct FString                                     InColor                                                    (Parm, NeedCtorLink)
void UEFGFxWidgetColorPicker::RequestEventColorPickerProgressValueChange(const struct FString& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColorPicker.RequestEventColorPickerProgressValueChange");

	UEFGFxWidgetColorPicker_RequestEventColorPickerProgressValueChange_Params params {};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetColorPicker.ChatMessageInputTextHasFocus
//		Flags  -> ()
// Parameters:
//		bool                                               InFocus                                                    (Parm)
void UEFGFxWidgetColorPicker::ChatMessageInputTextHasFocus(bool InFocus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColorPicker.ChatMessageInputTextHasFocus");

	UEFGFxWidgetColorPicker_ChatMessageInputTextHasFocus_Params params {};
	params.InFocus = InFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetColorPicker.RequestARKColorPickerDefaultSetting
//		Flags  -> ()
void UEFGFxWidgetColorPicker::RequestARKColorPickerDefaultSetting()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColorPicker.RequestARKColorPickerDefaultSetting");

	UEFGFxWidgetColorPicker_RequestARKColorPickerDefaultSetting_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetColorPicker.RequestARKColorPickerSaveSetting
//		Flags  -> ()
// Parameters:
//		struct FString                                     InChannelColor                                             (Parm, NeedCtorLink)
//		int                                                InTargetCode                                               (Parm)
void UEFGFxWidgetColorPicker::RequestARKColorPickerSaveSetting(const struct FString& InChannelColor, int InTargetCode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColorPicker.RequestARKColorPickerSaveSetting");

	UEFGFxWidgetColorPicker_RequestARKColorPickerSaveSetting_Params params {};
	params.InChannelColor = InChannelColor;
	params.InTargetCode = InTargetCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetColorPicker.RequestARKColorPickerClose
//		Flags  -> ()
void UEFGFxWidgetColorPicker::RequestARKColorPickerClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColorPicker.RequestARKColorPickerClose");

	UEFGFxWidgetColorPicker_RequestARKColorPickerClose_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetCurrencyInfo.CurrencyInfoTreeItemClick
//		Flags  -> ()
// Parameters:
//		int                                                InCurrencyIndex                                            (Parm)
void UEFGFxWidgetCurrencyInfo::CurrencyInfoTreeItemClick(int InCurrencyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCurrencyInfo.CurrencyInfoTreeItemClick");

	UEFGFxWidgetCurrencyInfo_CurrencyInfoTreeItemClick_Params params {};
	params.InCurrencyIndex = InCurrencyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetCustomColorPicker.SetTargetPosition
//		Flags  -> ()
// Parameters:
//		float                                              X                                                          (Parm)
//		float                                              Y                                                          (Parm)
//		float                                              W                                                          (Parm)
//		float                                              H                                                          (Parm)
void UEFGFxWidgetCustomColorPicker::SetTargetPosition(float X, float Y, float W, float H)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCustomColorPicker.SetTargetPosition");

	UEFGFxWidgetCustomColorPicker_SetTargetPosition_Params params {};
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetCustomColorPicker.SetTargetCode
//		Flags  -> ()
// Parameters:
//		int                                                InCode                                                     (Parm)
void UEFGFxWidgetCustomColorPicker::SetTargetCode(int InCode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCustomColorPicker.SetTargetCode");

	UEFGFxWidgetCustomColorPicker_SetTargetCode_Params params {};
	params.InCode = InCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetCustomColorPicker.SetColor
//		Flags  -> ()
// Parameters:
//		struct FString                                     InColor                                                    (Parm, NeedCtorLink)
void UEFGFxWidgetCustomColorPicker::SetColor(const struct FString& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCustomColorPicker.SetColor");

	UEFGFxWidgetCustomColorPicker_SetColor_Params params {};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetCustomColorPicker.SetInit
//		Flags  -> ()
// Parameters:
//		float                                              InRadian                                                   (Parm)
//		float                                              InDistance                                                 (Parm)
//		float                                              InLightness                                                (Parm)
//		struct FString                                     InColor                                                    (Parm, NeedCtorLink)
//		struct FString                                     InColorPalette                                             (Parm, NeedCtorLink)
//		float                                              InMinLightness                                             (Parm)
//		float                                              InMaxLightness                                             (Parm)
void UEFGFxWidgetCustomColorPicker::SetInit(float InRadian, float InDistance, float InLightness, const struct FString& InColor, const struct FString& InColorPalette, float InMinLightness, float InMaxLightness)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCustomColorPicker.SetInit");

	UEFGFxWidgetCustomColorPicker_SetInit_Params params {};
	params.InRadian = InRadian;
	params.InDistance = InDistance;
	params.InLightness = InLightness;
	params.InColor = InColor;
	params.InColorPalette = InColorPalette;
	params.InMinLightness = InMinLightness;
	params.InMaxLightness = InMaxLightness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetCustomColorPicker.ColorPickerColorChanged
//		Flags  -> ()
// Parameters:
//		float                                              InRadian                                                   (Parm)
//		float                                              InDistance                                                 (Parm)
void UEFGFxWidgetCustomColorPicker::ColorPickerColorChanged(float InRadian, float InDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCustomColorPicker.ColorPickerColorChanged");

	UEFGFxWidgetCustomColorPicker_ColorPickerColorChanged_Params params {};
	params.InRadian = InRadian;
	params.InDistance = InDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetCustomColorPicker.ColorPickerLightnessChanged
//		Flags  -> ()
// Parameters:
//		float                                              InLightness                                                (Parm)
void UEFGFxWidgetCustomColorPicker::ColorPickerLightnessChanged(float InLightness)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCustomColorPicker.ColorPickerLightnessChanged");

	UEFGFxWidgetCustomColorPicker_ColorPickerLightnessChanged_Params params {};
	params.InLightness = InLightness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetCustomColorPicker.RequestARKColorPickerDefaultSetting
//		Flags  -> ()
void UEFGFxWidgetCustomColorPicker::RequestARKColorPickerDefaultSetting()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCustomColorPicker.RequestARKColorPickerDefaultSetting");

	UEFGFxWidgetCustomColorPicker_RequestARKColorPickerDefaultSetting_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetCustomColorPicker.RequestARKColorPickerSaveSetting
//		Flags  -> ()
// Parameters:
//		int                                                InTargetCode                                               (Parm)
//		float                                              InRadian                                                   (Parm)
//		float                                              InDistance                                                 (Parm)
//		float                                              InLightness                                                (Parm)
void UEFGFxWidgetCustomColorPicker::RequestARKColorPickerSaveSetting(int InTargetCode, float InRadian, float InDistance, float InLightness)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCustomColorPicker.RequestARKColorPickerSaveSetting");

	UEFGFxWidgetCustomColorPicker_RequestARKColorPickerSaveSetting_Params params {};
	params.InTargetCode = InTargetCode;
	params.InRadian = InRadian;
	params.InDistance = InDistance;
	params.InLightness = InLightness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetCustomColorPicker.RequestARKColorPickerClose
//		Flags  -> ()
void UEFGFxWidgetCustomColorPicker::RequestARKColorPickerClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCustomColorPicker.RequestARKColorPickerClose");

	UEFGFxWidgetCustomColorPicker_RequestARKColorPickerClose_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetGuild.GuildPassword
//		Flags  -> ()
// Parameters:
//		struct FString                                     Uid                                                        (Parm, NeedCtorLink)
void UEFGFxWidgetGuild::GuildPassword(const struct FString& Uid)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildPassword");

	UEFGFxWidgetGuild_GuildPassword_Params params {};
	params.Uid = Uid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetGuild.GuildApplicantRightClick
//		Flags  -> ()
// Parameters:
//		struct FString                                     Uid                                                        (Parm, NeedCtorLink)
void UEFGFxWidgetGuild::GuildApplicantRightClick(const struct FString& Uid)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildApplicantRightClick");

	UEFGFxWidgetGuild_GuildApplicantRightClick_Params params {};
	params.Uid = Uid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetGuild.GuildMemberRightClick
//		Flags  -> ()
// Parameters:
//		struct FString                                     Uid                                                        (Parm, NeedCtorLink)
void UEFGFxWidgetGuild::GuildMemberRightClick(const struct FString& Uid)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildMemberRightClick");

	UEFGFxWidgetGuild_GuildMemberRightClick_Params params {};
	params.Uid = Uid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetGuild.GuildReject
//		Flags  -> ()
// Parameters:
//		struct FString                                     Uid                                                        (Parm, NeedCtorLink)
void UEFGFxWidgetGuild::GuildReject(const struct FString& Uid)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildReject");

	UEFGFxWidgetGuild_GuildReject_Params params {};
	params.Uid = Uid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetGuild.GuildAccept
//		Flags  -> ()
// Parameters:
//		struct FString                                     Uid                                                        (Parm, NeedCtorLink)
void UEFGFxWidgetGuild::GuildAccept(const struct FString& Uid)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildAccept");

	UEFGFxWidgetGuild_GuildAccept_Params params {};
	params.Uid = Uid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetGuild.GuildNoticeCopyButtonClick
//		Flags  -> ()
// Parameters:
//		struct FString                                     sNotice                                                    (Parm, NeedCtorLink)
void UEFGFxWidgetGuild::GuildNoticeCopyButtonClick(const struct FString& sNotice)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildNoticeCopyButtonClick");

	UEFGFxWidgetGuild_GuildNoticeCopyButtonClick_Params params {};
	params.sNotice = sNotice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetGuild.GuildChangeGuildIntroduction
//		Flags  -> ()
// Parameters:
//		struct FString                                     sIntroduction                                              (Parm, NeedCtorLink)
void UEFGFxWidgetGuild::GuildChangeGuildIntroduction(const struct FString& sIntroduction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildChangeGuildIntroduction");

	UEFGFxWidgetGuild_GuildChangeGuildIntroduction_Params params {};
	params.sIntroduction = sIntroduction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetGuild.GuildChangeGuildNotice
//		Flags  -> ()
// Parameters:
//		struct FString                                     sNotice                                                    (Parm, NeedCtorLink)
void UEFGFxWidgetGuild::GuildChangeGuildNotice(const struct FString& sNotice)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildChangeGuildNotice");

	UEFGFxWidgetGuild_GuildChangeGuildNotice_Params params {};
	params.sNotice = sNotice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetGuild.GuildChangeBtnClick
//		Flags  -> ()
// Parameters:
//		bool                                               bShow                                                      (Parm)
void UEFGFxWidgetGuild::GuildChangeBtnClick(bool bShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildChangeBtnClick");

	UEFGFxWidgetGuild_GuildChangeBtnClick_Params params {};
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetGuild.GuildChangeGuildMark
//		Flags  -> ()
// Parameters:
//		struct FString                                     sMarkIdx                                                   (Parm, NeedCtorLink)
void UEFGFxWidgetGuild::GuildChangeGuildMark(const struct FString& sMarkIdx)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildChangeGuildMark");

	UEFGFxWidgetGuild_GuildChangeGuildMark_Params params {};
	params.sMarkIdx = sMarkIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetGuild.GuildCreate
//		Flags  -> ()
// Parameters:
//		struct FString                                     imarkIdx                                                   (Parm, NeedCtorLink)
//		struct FString                                     sGuildName                                                 (Parm, NeedCtorLink)
//		struct FString                                     sGuildDesc                                                 (Parm, NeedCtorLink)
//		bool                                               bRecommend                                                 (Parm)
void UEFGFxWidgetGuild::GuildCreate(const struct FString& imarkIdx, const struct FString& sGuildName, const struct FString& sGuildDesc, bool bRecommend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildCreate");

	UEFGFxWidgetGuild_GuildCreate_Params params {};
	params.imarkIdx = imarkIdx;
	params.sGuildName = sGuildName;
	params.sGuildDesc = sGuildDesc;
	params.bRecommend = bRecommend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetGuild.GuildCancel
//		Flags  -> ()
// Parameters:
//		struct FString                                     Uid                                                        (Parm, NeedCtorLink)
void UEFGFxWidgetGuild::GuildCancel(const struct FString& Uid)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildCancel");

	UEFGFxWidgetGuild_GuildCancel_Params params {};
	params.Uid = Uid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetGuild.GuildJoinImmediately
//		Flags  -> ()
// Parameters:
//		struct FString                                     Uid                                                        (Parm, NeedCtorLink)
void UEFGFxWidgetGuild::GuildJoinImmediately(const struct FString& Uid)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildJoinImmediately");

	UEFGFxWidgetGuild_GuildJoinImmediately_Params params {};
	params.Uid = Uid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetGuild.GuildApply
//		Flags  -> ()
// Parameters:
//		struct FString                                     Uid                                                        (Parm, NeedCtorLink)
void UEFGFxWidgetGuild::GuildApply(const struct FString& Uid)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetGuild.GuildApply");

	UEFGFxWidgetGuild_GuildApply_Params params {};
	params.Uid = Uid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetHotKey.killOptionKey
//		Flags  -> ()
void UEFGFxWidgetHotKey::killOptionKey()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHotKey.killOptionKey");

	UEFGFxWidgetHotKey_killOptionKey_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetHotKey.selectOptionHotKeyMainMenu
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
void UEFGFxWidgetHotKey::selectOptionHotKeyMainMenu(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHotKey.selectOptionHotKeyMainMenu");

	UEFGFxWidgetHotKey_selectOptionHotKeyMainMenu_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetHotKey.OptionHotKeyCloseBtnClick
//		Flags  -> ()
void UEFGFxWidgetHotKey::OptionHotKeyCloseBtnClick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHotKey.OptionHotKeyCloseBtnClick");

	UEFGFxWidgetHotKey_OptionHotKeyCloseBtnClick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetHotKey.OptionHotKeyKillFocus
//		Flags  -> ()
void UEFGFxWidgetHotKey::OptionHotKeyKillFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHotKey.OptionHotKeyKillFocus");

	UEFGFxWidgetHotKey_OptionHotKeyKillFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetHotKey.OptionHotKeyCancelClick
//		Flags  -> ()
void UEFGFxWidgetHotKey::OptionHotKeyCancelClick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHotKey.OptionHotKeyCancelClick");

	UEFGFxWidgetHotKey_OptionHotKeyCancelClick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetHotKey.OptionHotKeyAcceptClick
//		Flags  -> ()
void UEFGFxWidgetHotKey::OptionHotKeyAcceptClick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHotKey.OptionHotKeyAcceptClick");

	UEFGFxWidgetHotKey_OptionHotKeyAcceptClick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetHotKey.OptionHotKeyConfirmClick
//		Flags  -> ()
void UEFGFxWidgetHotKey::OptionHotKeyConfirmClick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHotKey.OptionHotKeyConfirmClick");

	UEFGFxWidgetHotKey_OptionHotKeyConfirmClick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetHotKey.OptionHotKeyResetClick
//		Flags  -> ()
void UEFGFxWidgetHotKey::OptionHotKeyResetClick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHotKey.OptionHotKeyResetClick");

	UEFGFxWidgetHotKey_OptionHotKeyResetClick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetHotKey.OptionHotKeyButtonChange
//		Flags  -> ()
// Parameters:
//		int                                                mainListIndex                                              (Parm)
//		struct FString                                     buttonType                                                 (Parm, NeedCtorLink)
//		int                                                subListIndex                                               (Parm)
void UEFGFxWidgetHotKey::OptionHotKeyButtonChange(int mainListIndex, const struct FString& buttonType, int subListIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHotKey.OptionHotKeyButtonChange");

	UEFGFxWidgetHotKey_OptionHotKeyButtonChange_Params params {};
	params.mainListIndex = mainListIndex;
	params.buttonType = buttonType;
	params.subListIndex = subListIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetHotKey.OptionHotKeyMainListIndexChange
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
void UEFGFxWidgetHotKey::OptionHotKeyMainListIndexChange(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHotKey.OptionHotKeyMainListIndexChange");

	UEFGFxWidgetHotKey_OptionHotKeyMainListIndexChange_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneRollOut
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
void UEFGFxWidgetInteractionAbility_Refine::InteractionMarbleStoneRollOut(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneRollOut");

	UEFGFxWidgetInteractionAbility_Refine_InteractionMarbleStoneRollOut_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneRollOver
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
void UEFGFxWidgetInteractionAbility_Refine::InteractionMarbleStoneRollOver(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneRollOver");

	UEFGFxWidgetInteractionAbility_Refine_InteractionMarbleStoneRollOver_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteractionAbility_Refine.ChangeCursor
//		Flags  -> ()
// Parameters:
//		int                                                Row                                                        (Parm)
void UEFGFxWidgetInteractionAbility_Refine::ChangeCursor(int Row)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionAbility_Refine.ChangeCursor");

	UEFGFxWidgetInteractionAbility_Refine_ChangeCursor_Params params {};
	params.Row = Row;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneClick
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
void UEFGFxWidgetInteractionAbility_Refine::InteractionMarbleStoneClick(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneClick");

	UEFGFxWidgetInteractionAbility_Refine_InteractionMarbleStoneClick_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleChangeTabClick
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
void UEFGFxWidgetInteractionAbility_Refine::InteractionMarbleChangeTabClick(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleChangeTabClick");

	UEFGFxWidgetInteractionAbility_Refine_InteractionMarbleChangeTabClick_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneSelected
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
void UEFGFxWidgetInteractionAbility_Refine::InteractionMarbleStoneSelected(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneSelected");

	UEFGFxWidgetInteractionAbility_Refine_InteractionMarbleStoneSelected_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteractionBarter.BarterShopPurchaseItem
//		Flags  -> ()
// Parameters:
//		struct FString                                     strUniqueData                                              (Parm, NeedCtorLink)
void UEFGFxWidgetInteractionBarter::BarterShopPurchaseItem(const struct FString& strUniqueData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionBarter.BarterShopPurchaseItem");

	UEFGFxWidgetInteractionBarter_BarterShopPurchaseItem_Params params {};
	params.strUniqueData = strUniqueData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteractionMail.SetNextSlotDisable
//		Flags  -> ()
void UEFGFxWidgetInteractionMail::SetNextSlotDisable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionMail.SetNextSlotDisable");

	UEFGFxWidgetInteractionMail_SetNextSlotDisable_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteractionMail.ASSetNextSlotDisable
//		Flags  -> ()
void UEFGFxWidgetInteractionMail::ASSetNextSlotDisable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionMail.ASSetNextSlotDisable");

	UEFGFxWidgetInteractionMail_ASSetNextSlotDisable_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteractionMail.SetNextSlotEnable
//		Flags  -> ()
void UEFGFxWidgetInteractionMail::SetNextSlotEnable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionMail.SetNextSlotEnable");

	UEFGFxWidgetInteractionMail_SetNextSlotEnable_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteractionMail.ASSetNextSlotEnable
//		Flags  -> ()
void UEFGFxWidgetInteractionMail::ASSetNextSlotEnable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionMail.ASSetNextSlotEnable");

	UEFGFxWidgetInteractionMail_ASSetNextSlotEnable_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteractionMail.SetMailOpenType
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<EFGame_EFMailOpenType>                 MailOpenType                                               (Parm)
void UEFGFxWidgetInteractionMail::SetMailOpenType(TEnumAsByte<EFGame_EFMailOpenType> MailOpenType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionMail.SetMailOpenType");

	UEFGFxWidgetInteractionMail_SetMailOpenType_Params params {};
	params.MailOpenType = MailOpenType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteractionMail.SetOpenType
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<EFGame_EFMailOpenType>                 MailOpenType                                               (Parm)
void UEFGFxWidgetInteractionMail::SetOpenType(TEnumAsByte<EFGame_EFMailOpenType> MailOpenType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionMail.SetOpenType");

	UEFGFxWidgetInteractionMail_SetOpenType_Params params {};
	params.MailOpenType = MailOpenType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteractionMail.StopLoading
//		Flags  -> ()
void UEFGFxWidgetInteractionMail::StopLoading()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionMail.StopLoading");

	UEFGFxWidgetInteractionMail_StopLoading_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteractionMail.StructReceiverCacheData
//		Flags  -> ()
void UEFGFxWidgetInteractionMail::StructReceiverCacheData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionMail.StructReceiverCacheData");

	UEFGFxWidgetInteractionMail_StructReceiverCacheData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteractionMail.AddReceiverData
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<EFGame_EFMailReceiverType>             ReceiverType                                               (Parm)
//		struct FString                                     ReceiverName                                               (Parm, NeedCtorLink)
void UEFGFxWidgetInteractionMail::AddReceiverData(TEnumAsByte<EFGame_EFMailReceiverType> ReceiverType, const struct FString& ReceiverName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionMail.AddReceiverData");

	UEFGFxWidgetInteractionMail_AddReceiverData_Params params {};
	params.ReceiverType = ReceiverType;
	params.ReceiverName = ReceiverName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetMap.RequestResetMapRotation
//		Flags  -> ()
void UEFGFxWidgetMap::RequestResetMapRotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMap.RequestResetMapRotation");

	UEFGFxWidgetMap_RequestResetMapRotation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetMap.RequestWorldMapUpperDepth
//		Flags  -> ()
void UEFGFxWidgetMap::RequestWorldMapUpperDepth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMap.RequestWorldMapUpperDepth");

	UEFGFxWidgetMap_RequestWorldMapUpperDepth_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetMap.WorldMapZoneIndex
//		Flags  -> ()
// Parameters:
//		int                                                ZoneIndex                                                  (Parm)
void UEFGFxWidgetMap::WorldMapZoneIndex(int ZoneIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMap.WorldMapZoneIndex");

	UEFGFxWidgetMap_WorldMapZoneIndex_Params params {};
	params.ZoneIndex = ZoneIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetMap.WorldMapContinentType
//		Flags  -> ()
// Parameters:
//		int                                                ContinentType                                              (Parm)
void UEFGFxWidgetMap::WorldMapContinentType(int ContinentType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMap.WorldMapContinentType");

	UEFGFxWidgetMap_WorldMapContinentType_Params params {};
	params.ContinentType = ContinentType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetMODWatingInfo.MinimapAlarmListRightBtnClick
//		Flags  -> ()
// Parameters:
//		int                                                InListIndex                                                (Parm)
void UEFGFxWidgetMODWatingInfo::MinimapAlarmListRightBtnClick(int InListIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMODWatingInfo.MinimapAlarmListRightBtnClick");

	UEFGFxWidgetMODWatingInfo_MinimapAlarmListRightBtnClick_Params params {};
	params.InListIndex = InListIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetMoviePlayer.TestLabSendInputMessage
//		Flags  -> ()
// Parameters:
//		struct FString                                     InputText                                                  (Parm, NeedCtorLink)
void UEFGFxWidgetMoviePlayer::TestLabSendInputMessage(const struct FString& InputText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMoviePlayer.TestLabSendInputMessage");

	UEFGFxWidgetMoviePlayer_TestLabSendInputMessage_Params params {};
	params.InputText = InputText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetNormalBox.NormalBoxItemSelected
//		Flags  -> ()
void UEFGFxWidgetNormalBox::NormalBoxItemSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetNormalBox.NormalBoxItemSelected");

	UEFGFxWidgetNormalBox_NormalBoxItemSelected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetNoticeMOD.NoticeModWaitListItemClick
//		Flags  -> ()
// Parameters:
//		int                                                ListIndex                                                  (Parm)
void UEFGFxWidgetNoticeMOD::NoticeModWaitListItemClick(int ListIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetNoticeMOD.NoticeModWaitListItemClick");

	UEFGFxWidgetNoticeMOD_NoticeModWaitListItemClick_Params params {};
	params.ListIndex = ListIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetQuestJournal.SetMaxTreeItemCheckNumber
//		Flags  -> ()
// Parameters:
//		int                                                InMaxQuestCheckNumber                                      (Parm)
void UEFGFxWidgetQuestJournal::SetMaxTreeItemCheckNumber(int InMaxQuestCheckNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestJournal.SetMaxTreeItemCheckNumber");

	UEFGFxWidgetQuestJournal_SetMaxTreeItemCheckNumber_Params params {};
	params.InMaxQuestCheckNumber = InMaxQuestCheckNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetQuestJournal.SetMaxQuestCheckNumber
//		Flags  -> ()
// Parameters:
//		int                                                InMaxQuestCheckNumber                                      (Parm)
void UEFGFxWidgetQuestJournal::SetMaxQuestCheckNumber(int InMaxQuestCheckNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestJournal.SetMaxQuestCheckNumber");

	UEFGFxWidgetQuestJournal_SetMaxQuestCheckNumber_Params params {};
	params.InMaxQuestCheckNumber = InMaxQuestCheckNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetQuestJournal.ARKQuestTraceButtonClicked
//		Flags  -> ()
// Parameters:
//		int                                                InQuestIndex                                               (Parm)
void UEFGFxWidgetQuestJournal::ARKQuestTraceButtonClicked(int InQuestIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestJournal.ARKQuestTraceButtonClicked");

	UEFGFxWidgetQuestJournal_ARKQuestTraceButtonClicked_Params params {};
	params.InQuestIndex = InQuestIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetQuestJournal.OnClicked_TraceQuestButton
//		Flags  -> ()
// Parameters:
//		int                                                InQuestIndex                                               (Parm)
void UEFGFxWidgetQuestJournal::OnClicked_TraceQuestButton(int InQuestIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestJournal.OnClicked_TraceQuestButton");

	UEFGFxWidgetQuestJournal_OnClicked_TraceQuestButton_Params params {};
	params.InQuestIndex = InQuestIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetQuestJournal.ARKQuestGiveUpButtonClicked
//		Flags  -> ()
// Parameters:
//		int                                                InQuestIndex                                               (Parm)
void UEFGFxWidgetQuestJournal::ARKQuestGiveUpButtonClicked(int InQuestIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestJournal.ARKQuestGiveUpButtonClicked");

	UEFGFxWidgetQuestJournal_ARKQuestGiveUpButtonClicked_Params params {};
	params.InQuestIndex = InQuestIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetQuestJournal.OnClicked_GiveUpButton
//		Flags  -> ()
// Parameters:
//		int                                                InQuestIndex                                               (Parm)
void UEFGFxWidgetQuestJournal::OnClicked_GiveUpButton(int InQuestIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestJournal.OnClicked_GiveUpButton");

	UEFGFxWidgetQuestJournal_OnClicked_GiveUpButton_Params params {};
	params.InQuestIndex = InQuestIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetQuestSummary.OnHide
//		Flags  -> ()
void UEFGFxWidgetQuestSummary::OnHide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestSummary.OnHide");

	UEFGFxWidgetQuestSummary_OnHide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetQuestSummary.OnHideQuestSummary
//		Flags  -> ()
void UEFGFxWidgetQuestSummary::OnHideQuestSummary()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestSummary.OnHideQuestSummary");

	UEFGFxWidgetQuestSummary_OnHideQuestSummary_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetQuestSummary.ARKQuestSelectedRewardItem
//		Flags  -> ()
// Parameters:
//		int                                                InIndex                                                    (Parm)
void UEFGFxWidgetQuestSummary::ARKQuestSelectedRewardItem(int InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestSummary.ARKQuestSelectedRewardItem");

	UEFGFxWidgetQuestSummary_ARKQuestSelectedRewardItem_Params params {};
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetQuestSummary.OnClicked_SelectChoiceItem
//		Flags  -> ()
// Parameters:
//		int                                                InIndex                                                    (Parm)
void UEFGFxWidgetQuestSummary::OnClicked_SelectChoiceItem(int InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestSummary.OnClicked_SelectChoiceItem");

	UEFGFxWidgetQuestSummary_OnClicked_SelectChoiceItem_Params params {};
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetQuestSummary.ARKQuestCompleteButtonClicked
//		Flags  -> ()
// Parameters:
//		int                                                InQuestIndex                                               (Parm)
void UEFGFxWidgetQuestSummary::ARKQuestCompleteButtonClicked(int InQuestIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestSummary.ARKQuestCompleteButtonClicked");

	UEFGFxWidgetQuestSummary_ARKQuestCompleteButtonClicked_Params params {};
	params.InQuestIndex = InQuestIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetQuestSummary.OnClicked_CompleteButton
//		Flags  -> ()
// Parameters:
//		int                                                InQuestIndex                                               (Parm)
void UEFGFxWidgetQuestSummary::OnClicked_CompleteButton(int InQuestIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestSummary.OnClicked_CompleteButton");

	UEFGFxWidgetQuestSummary_OnClicked_CompleteButton_Params params {};
	params.InQuestIndex = InQuestIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetQuestSummary.ARKQuestAcceptButtonClicked
//		Flags  -> ()
// Parameters:
//		int                                                InQuestIndex                                               (Parm)
void UEFGFxWidgetQuestSummary::ARKQuestAcceptButtonClicked(int InQuestIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestSummary.ARKQuestAcceptButtonClicked");

	UEFGFxWidgetQuestSummary_ARKQuestAcceptButtonClicked_Params params {};
	params.InQuestIndex = InQuestIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetQuestSummary.OnClicked_AcceptButton
//		Flags  -> ()
// Parameters:
//		int                                                InQuestIndex                                               (Parm)
void UEFGFxWidgetQuestSummary::OnClicked_AcceptButton(int InQuestIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestSummary.OnClicked_AcceptButton");

	UEFGFxWidgetQuestSummary_OnClicked_AcceptButton_Params params {};
	params.InQuestIndex = InQuestIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetQuestSummary.SelectChoiceRewardItem
//		Flags  -> ()
// Parameters:
//		int                                                InSelectIndex                                              (Parm)
void UEFGFxWidgetQuestSummary::SelectChoiceRewardItem(int InSelectIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestSummary.SelectChoiceRewardItem");

	UEFGFxWidgetQuestSummary_SelectChoiceRewardItem_Params params {};
	params.InSelectIndex = InSelectIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetQuestSummary.SetSelectedIndex_ChoiceRewardItem
//		Flags  -> ()
// Parameters:
//		int                                                InSelectIndex                                              (Parm)
void UEFGFxWidgetQuestSummary::SetSelectedIndex_ChoiceRewardItem(int InSelectIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetQuestSummary.SetSelectedIndex_ChoiceRewardItem");

	UEFGFxWidgetQuestSummary_SetSelectedIndex_ChoiceRewardItem_Params params {};
	params.InSelectIndex = InSelectIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetRandomBox.Init
//		Flags  -> ()
void UEFGFxWidgetRandomBox::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetRandomBox.Init");

	UEFGFxWidgetRandomBox_Init_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetRandomBox.startAni
//		Flags  -> ()
void UEFGFxWidgetRandomBox::startAni()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetRandomBox.startAni");

	UEFGFxWidgetRandomBox_startAni_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetRandomBox.RandomBoxComplete
//		Flags  -> ()
void UEFGFxWidgetRandomBox::RandomBoxComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetRandomBox.RandomBoxComplete");

	UEFGFxWidgetRandomBox_RandomBoxComplete_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetRandomBox.RandomBoxClosed
//		Flags  -> ()
void UEFGFxWidgetRandomBox::RandomBoxClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetRandomBox.RandomBoxClosed");

	UEFGFxWidgetRandomBox_RandomBoxClosed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetSelectBox.SelectBoxItemReceiveAll
//		Flags  -> ()
// Parameters:
//		struct FString                                     ItemId                                                     (Parm, NeedCtorLink)
void UEFGFxWidgetSelectBox::SelectBoxItemReceiveAll(const struct FString& ItemId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSelectBox.SelectBoxItemReceiveAll");

	UEFGFxWidgetSelectBox_SelectBoxItemReceiveAll_Params params {};
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetSelectBox.SelectBoxItemSelected
//		Flags  -> ()
// Parameters:
//		struct FString                                     ItemId                                                     (Parm, NeedCtorLink)
void UEFGFxWidgetSelectBox::SelectBoxItemSelected(const struct FString& ItemId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSelectBox.SelectBoxItemSelected");

	UEFGFxWidgetSelectBox_SelectBoxItemSelected_Params params {};
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetSkillBook.closePreset
//		Flags  -> ()
void UEFGFxWidgetSkillBook::closePreset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.closePreset");

	UEFGFxWidgetSkillBook_closePreset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetSkillBook.openPreset
//		Flags  -> ()
void UEFGFxWidgetSkillBook::openPreset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.openPreset");

	UEFGFxWidgetSkillBook_openPreset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetSkillBook.cancelSelection
//		Flags  -> ()
void UEFGFxWidgetSkillBook::cancelSelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.cancelSelection");

	UEFGFxWidgetSkillBook_cancelSelection_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetUnlock
//		Flags  -> ()
// Parameters:
//		int                                                iIndex                                                     (Parm)
void UEFGFxWidgetSkillBook::SkillBookPresetUnlock(int iIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetUnlock");

	UEFGFxWidgetSkillBook_SkillBookPresetUnlock_Params params {};
	params.iIndex = iIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetApply
//		Flags  -> ()
// Parameters:
//		int                                                iIndex                                                     (Parm)
void UEFGFxWidgetSkillBook::SkillBookPresetApply(int iIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetApply");

	UEFGFxWidgetSkillBook_SkillBookPresetApply_Params params {};
	params.iIndex = iIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetSelected
//		Flags  -> ()
// Parameters:
//		int                                                iIndex                                                     (Parm)
void UEFGFxWidgetSkillBook::SkillBookPresetSelected(int iIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetSelected");

	UEFGFxWidgetSkillBook_SkillBookPresetSelected_Params params {};
	params.iIndex = iIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetEdit
//		Flags  -> ()
void UEFGFxWidgetSkillBook::SkillBookPresetEdit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetEdit");

	UEFGFxWidgetSkillBook_SkillBookPresetEdit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetSkillBook.DevSkillBookTierBtnClick
//		Flags  -> ()
// Parameters:
//		int                                                btnType                                                    (Parm)
//		int                                                TierId                                                     (Parm)
void UEFGFxWidgetSkillBook::DevSkillBookTierBtnClick(int btnType, int TierId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.DevSkillBookTierBtnClick");

	UEFGFxWidgetSkillBook_DevSkillBookTierBtnClick_Params params {};
	params.btnType = btnType;
	params.TierId = TierId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetSkillBook.SkillBookListSelected
//		Flags  -> ()
// Parameters:
//		int                                                TierId                                                     (Parm)
void UEFGFxWidgetSkillBook::SkillBookListSelected(int TierId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.SkillBookListSelected");

	UEFGFxWidgetSkillBook_SkillBookListSelected_Params params {};
	params.TierId = TierId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetSkillBook.SkillBookTierBtnClick
//		Flags  -> ()
// Parameters:
//		int                                                TierId                                                     (Parm)
void UEFGFxWidgetSkillBook::SkillBookTierBtnClick(int TierId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.SkillBookTierBtnClick");

	UEFGFxWidgetSkillBook_SkillBookTierBtnClick_Params params {};
	params.TierId = TierId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetSkillBook.SkillBookDownBtnClick
//		Flags  -> ()
// Parameters:
//		int                                                SkillId                                                    (Parm)
void UEFGFxWidgetSkillBook::SkillBookDownBtnClick(int SkillId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.SkillBookDownBtnClick");

	UEFGFxWidgetSkillBook_SkillBookDownBtnClick_Params params {};
	params.SkillId = SkillId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetSkillBook.SkillBookUpBtnClick
//		Flags  -> ()
// Parameters:
//		int                                                SkillId                                                    (Parm)
void UEFGFxWidgetSkillBook::SkillBookUpBtnClick(int SkillId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSkillBook.SkillBookUpBtnClick");

	UEFGFxWidgetSkillBook_SkillBookUpBtnClick_Params params {};
	params.SkillId = SkillId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetSystemOption.SystemOptionListBoxIndexChange
//		Flags  -> ()
// Parameters:
//		int                                                iUID                                                       (Parm)
//		int                                                iIndex                                                     (Parm)
void UEFGFxWidgetSystemOption::SystemOptionListBoxIndexChange(int iUID, int iIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSystemOption.SystemOptionListBoxIndexChange");

	UEFGFxWidgetSystemOption_SystemOptionListBoxIndexChange_Params params {};
	params.iUID = iUID;
	params.iIndex = iIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetSystemOption.SystemOptionAutoInputTextChange
//		Flags  -> ()
// Parameters:
//		int                                                iUID                                                       (Parm)
//		struct FString                                     Str                                                        (Parm, NeedCtorLink)
void UEFGFxWidgetSystemOption::SystemOptionAutoInputTextChange(int iUID, const struct FString& Str)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSystemOption.SystemOptionAutoInputTextChange");

	UEFGFxWidgetSystemOption_SystemOptionAutoInputTextChange_Params params {};
	params.iUID = iUID;
	params.Str = Str;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetSystemOption.SystemOptionAutoInputHideCloseBtn
//		Flags  -> ()
// Parameters:
//		int                                                iUID                                                       (Parm)
//		struct FString                                     Str                                                        (Parm, NeedCtorLink)
void UEFGFxWidgetSystemOption::SystemOptionAutoInputHideCloseBtn(int iUID, const struct FString& Str)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSystemOption.SystemOptionAutoInputHideCloseBtn");

	UEFGFxWidgetSystemOption_SystemOptionAutoInputHideCloseBtn_Params params {};
	params.iUID = iUID;
	params.Str = Str;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetSystemOption.SystemOptionAutoInputFocusOut
//		Flags  -> ()
// Parameters:
//		int                                                iUID                                                       (Parm)
//		struct FString                                     Str                                                        (Parm, NeedCtorLink)
void UEFGFxWidgetSystemOption::SystemOptionAutoInputFocusOut(int iUID, const struct FString& Str)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSystemOption.SystemOptionAutoInputFocusOut");

	UEFGFxWidgetSystemOption_SystemOptionAutoInputFocusOut_Params params {};
	params.iUID = iUID;
	params.Str = Str;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetSystemOption.SystemOptionAutoInputFocusIn
//		Flags  -> ()
// Parameters:
//		int                                                iUID                                                       (Parm)
//		struct FString                                     Str                                                        (Parm, NeedCtorLink)
void UEFGFxWidgetSystemOption::SystemOptionAutoInputFocusIn(int iUID, const struct FString& Str)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSystemOption.SystemOptionAutoInputFocusIn");

	UEFGFxWidgetSystemOption_SystemOptionAutoInputFocusIn_Params params {};
	params.iUID = iUID;
	params.Str = Str;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetSystemOption.SystemOptionButtonClickHandler
//		Flags  -> ()
// Parameters:
//		int                                                iUID                                                       (Parm)
void UEFGFxWidgetSystemOption::SystemOptionButtonClickHandler(int iUID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSystemOption.SystemOptionButtonClickHandler");

	UEFGFxWidgetSystemOption_SystemOptionButtonClickHandler_Params params {};
	params.iUID = iUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetSystemOption.SystemOptionListIndexChange
//		Flags  -> ()
// Parameters:
//		int                                                iUID                                                       (Parm)
//		int                                                iIndex                                                     (Parm)
void UEFGFxWidgetSystemOption::SystemOptionListIndexChange(int iUID, int iIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSystemOption.SystemOptionListIndexChange");

	UEFGFxWidgetSystemOption_SystemOptionListIndexChange_Params params {};
	params.iUID = iUID;
	params.iIndex = iIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetSystemOption.OpenChattingOptionColorPicker
//		Flags  -> ()
// Parameters:
//		int                                                iUID                                                       (Parm)
//		struct FString                                     sColor                                                     (Parm, NeedCtorLink)
//		float                                              X                                                          (Parm)
//		float                                              Y                                                          (Parm)
//		float                                              W                                                          (Parm)
//		float                                              H                                                          (Parm)
void UEFGFxWidgetSystemOption::OpenChattingOptionColorPicker(int iUID, const struct FString& sColor, float X, float Y, float W, float H)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSystemOption.OpenChattingOptionColorPicker");

	UEFGFxWidgetSystemOption_OpenChattingOptionColorPicker_Params params {};
	params.iUID = iUID;
	params.sColor = sColor;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetSystemOption.OptionHotKeyKillFocus
//		Flags  -> ()
void UEFGFxWidgetSystemOption::OptionHotKeyKillFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSystemOption.OptionHotKeyKillFocus");

	UEFGFxWidgetSystemOption_OptionHotKeyKillFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetSystemOption.OptionHotKeyButtonChange
//		Flags  -> ()
// Parameters:
//		int                                                iUID                                                       (Parm)
//		int                                                iIndex                                                     (Parm)
void UEFGFxWidgetSystemOption::OptionHotKeyButtonChange(int iUID, int iIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSystemOption.OptionHotKeyButtonChange");

	UEFGFxWidgetSystemOption_OptionHotKeyButtonChange_Params params {};
	params.iUID = iUID;
	params.iIndex = iIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetSystemOption.SystemOptionWndCloseButtonClicked
//		Flags  -> ()
void UEFGFxWidgetSystemOption::SystemOptionWndCloseButtonClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSystemOption.SystemOptionWndCloseButtonClicked");

	UEFGFxWidgetSystemOption_SystemOptionWndCloseButtonClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetSystemOption.SystemOptionChangedSlider
//		Flags  -> ()
// Parameters:
//		int                                                iUID                                                       (Parm)
//		int                                                iValue                                                     (Parm)
void UEFGFxWidgetSystemOption::SystemOptionChangedSlider(int iUID, int iValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSystemOption.SystemOptionChangedSlider");

	UEFGFxWidgetSystemOption_SystemOptionChangedSlider_Params params {};
	params.iUID = iUID;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetSystemOption.SystemOptionSelectedComboBox
//		Flags  -> ()
// Parameters:
//		int                                                iUID                                                       (Parm)
//		int                                                iIndex                                                     (Parm)
void UEFGFxWidgetSystemOption::SystemOptionSelectedComboBox(int iUID, int iIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSystemOption.SystemOptionSelectedComboBox");

	UEFGFxWidgetSystemOption_SystemOptionSelectedComboBox_Params params {};
	params.iUID = iUID;
	params.iIndex = iIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetSystemOption.SystemOptionSelectedCheckBox
//		Flags  -> ()
// Parameters:
//		int                                                iUID                                                       (Parm)
//		bool                                               bCheck                                                     (Parm)
void UEFGFxWidgetSystemOption::SystemOptionSelectedCheckBox(int iUID, bool bCheck)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetSystemOption.SystemOptionSelectedCheckBox");

	UEFGFxWidgetSystemOption_SystemOptionSelectedCheckBox_Params params {};
	params.iUID = iUID;
	params.bCheck = bCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetUnLockBox.UnlockBoxItemComplete
//		Flags  -> ()
void UEFGFxWidgetUnLockBox::UnlockBoxItemComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetUnLockBox.UnlockBoxItemComplete");

	UEFGFxWidgetUnLockBox_UnlockBoxItemComplete_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetUnLockBox.UnlockBoxItemClosed
//		Flags  -> ()
void UEFGFxWidgetUnLockBox::UnlockBoxItemClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetUnLockBox.UnlockBoxItemClosed");

	UEFGFxWidgetUnLockBox_UnlockBoxItemClosed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetUserTrade.SetOtherTradeReady
//		Flags  -> ()
// Parameters:
//		bool                                               Ready                                                      (Parm)
void UEFGFxWidgetUserTrade::SetOtherTradeReady(bool Ready)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetUserTrade.SetOtherTradeReady");

	UEFGFxWidgetUserTrade_SetOtherTradeReady_Params params {};
	params.Ready = Ready;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetUserTrade.ASSetOtherTradeReady
//		Flags  -> ()
// Parameters:
//		bool                                               Ready                                                      (Parm)
void UEFGFxWidgetUserTrade::ASSetOtherTradeReady(bool Ready)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetUserTrade.ASSetOtherTradeReady");

	UEFGFxWidgetUserTrade_ASSetOtherTradeReady_Params params {};
	params.Ready = Ready;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetUserTrade.SetMyTradeReady
//		Flags  -> ()
// Parameters:
//		bool                                               Ready                                                      (Parm)
void UEFGFxWidgetUserTrade::SetMyTradeReady(bool Ready)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetUserTrade.SetMyTradeReady");

	UEFGFxWidgetUserTrade_SetMyTradeReady_Params params {};
	params.Ready = Ready;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetUserTrade.ASSetMyTradeReady
//		Flags  -> ()
// Parameters:
//		bool                                               Ready                                                      (Parm)
void UEFGFxWidgetUserTrade::ASSetMyTradeReady(bool Ready)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetUserTrade.ASSetMyTradeReady");

	UEFGFxWidgetUserTrade_ASSetMyTradeReady_Params params {};
	params.Ready = Ready;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetUserTrade.SetOtherTradeConfirm
//		Flags  -> ()
void UEFGFxWidgetUserTrade::SetOtherTradeConfirm()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetUserTrade.SetOtherTradeConfirm");

	UEFGFxWidgetUserTrade_SetOtherTradeConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetUserTrade.ASSetOtherTradeConfirm
//		Flags  -> ()
void UEFGFxWidgetUserTrade::ASSetOtherTradeConfirm()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetUserTrade.ASSetOtherTradeConfirm");

	UEFGFxWidgetUserTrade_ASSetOtherTradeConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetUserTrade.SetMyTradeConfirm
//		Flags  -> ()
void UEFGFxWidgetUserTrade::SetMyTradeConfirm()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetUserTrade.SetMyTradeConfirm");

	UEFGFxWidgetUserTrade_SetMyTradeConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetUserTrade.ASSetMyTradeConfirm
//		Flags  -> ()
void UEFGFxWidgetUserTrade::ASSetMyTradeConfirm()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetUserTrade.ASSetMyTradeConfirm");

	UEFGFxWidgetUserTrade_ASSetMyTradeConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIFrame.WidgetInitialized
//		Flags  -> ()
// Parameters:
//		struct FName                                       WidgetName                                                 (Parm)
//		struct FName                                       WidgetPath                                                 (Parm)
//		class UGFxObject*                                  Widget                                                     (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFUIFrame::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIFrame.WidgetInitialized");

	UEFUIFrame_WidgetInitialized_Params params {};
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
//		Name   -> Function EFGame.EFUIFrame.IsRegisteredWidget
//		Flags  -> ()
// Parameters:
//		struct FName                                       WidgetName                                                 (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFUIFrame::IsRegisteredWidget(const struct FName& WidgetName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIFrame.IsRegisteredWidget");

	UEFUIFrame_IsRegisteredWidget_Params params {};
	params.WidgetName = WidgetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIFrame.Deactivate
//		Flags  -> ()
void UEFUIFrame::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIFrame.Deactivate");

	UEFUIFrame_Deactivate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUIFrame.Activate
//		Flags  -> ()
void UEFUIFrame::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUIFrame.Activate");

	UEFUIFrame_Activate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetAnnounce.AnnounceFrameMotionComplete
//		Flags  -> ()
// Parameters:
//		int                                                Layer                                                      (Parm)
void UEFGFxWidgetAnnounce::AnnounceFrameMotionComplete(int Layer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.AnnounceFrameMotionComplete");

	UEFGFxWidgetAnnounce_AnnounceFrameMotionComplete_Params params {};
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetAnnounce.cleanUpLayer
//		Flags  -> ()
// Parameters:
//		int                                                Layer                                                      (Parm)
void UEFGFxWidgetAnnounce::cleanUpLayer(int Layer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.cleanUpLayer");

	UEFGFxWidgetAnnounce_cleanUpLayer_Params params {};
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetAnnounce.setAnnouncePosition
//		Flags  -> ()
// Parameters:
//		int                                                Layer                                                      (Parm)
//		float                                              YPos                                                       (Parm)
void UEFGFxWidgetAnnounce::setAnnouncePosition(int Layer, float YPos)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.setAnnouncePosition");

	UEFGFxWidgetAnnounce_setAnnouncePosition_Params params {};
	params.Layer = Layer;
	params.YPos = YPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetAnnounce.getAnnounceListPosition
//		Flags  -> ()
// Parameters:
//		int                                                Layer                                                      (Parm)
//		class UGFxObject*                                  ReturnValue                                                (Parm, OutParm, ReturnParm)
class UGFxObject* UEFGFxWidgetAnnounce::getAnnounceListPosition(int Layer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.getAnnounceListPosition");

	UEFGFxWidgetAnnounce_getAnnounceListPosition_Params params {};
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetAnnounce.setAnnounceItemTime
//		Flags  -> ()
// Parameters:
//		int                                                Layer                                                      (Parm)
//		int                                                Index                                                      (Parm)
//		float                                              Time                                                       (Parm)
void UEFGFxWidgetAnnounce::setAnnounceItemTime(int Layer, int Index, float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.setAnnounceItemTime");

	UEFGFxWidgetAnnounce_setAnnounceItemTime_Params params {};
	params.Layer = Layer;
	params.Index = Index;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetAnnounce.getAnnounceItemTime
//		Flags  -> ()
// Parameters:
//		int                                                Layer                                                      (Parm)
//		int                                                Index                                                      (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UEFGFxWidgetAnnounce::getAnnounceItemTime(int Layer, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.getAnnounceItemTime");

	UEFGFxWidgetAnnounce_getAnnounceItemTime_Params params {};
	params.Layer = Layer;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetAnnounce.getAnnounceListItem
//		Flags  -> ()
// Parameters:
//		int                                                Layer                                                      (Parm)
//		int                                                Index                                                      (Parm)
//		class UGFxObject*                                  ReturnValue                                                (Parm, OutParm, ReturnParm)
class UGFxObject* UEFGFxWidgetAnnounce::getAnnounceListItem(int Layer, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.getAnnounceListItem");

	UEFGFxWidgetAnnounce_getAnnounceListItem_Params params {};
	params.Layer = Layer;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetAnnounce.setAnnounceTotalItem
//		Flags  -> ()
// Parameters:
//		int                                                Layer                                                      (Parm)
//		int                                                Count                                                      (Parm)
void UEFGFxWidgetAnnounce::setAnnounceTotalItem(int Layer, int Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.setAnnounceTotalItem");

	UEFGFxWidgetAnnounce_setAnnounceTotalItem_Params params {};
	params.Layer = Layer;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetAnnounce.getAnnounceMaxItem
//		Flags  -> ()
// Parameters:
//		int                                                Layer                                                      (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFGFxWidgetAnnounce::getAnnounceMaxItem(int Layer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.getAnnounceMaxItem");

	UEFGFxWidgetAnnounce_getAnnounceMaxItem_Params params {};
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetAnnounce.getAnnounceCurrentItem
//		Flags  -> ()
// Parameters:
//		int                                                Layer                                                      (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFGFxWidgetAnnounce::getAnnounceCurrentItem(int Layer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.getAnnounceCurrentItem");

	UEFGFxWidgetAnnounce_getAnnounceCurrentItem_Params params {};
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetAnnounce.addAnnounceMessage
//		Flags  -> ()
// Parameters:
//		int                                                Layer                                                      (Parm)
//		class UGFxObject*                                  Obj                                                        (Parm)
void UEFGFxWidgetAnnounce::addAnnounceMessage(int Layer, class UGFxObject* Obj)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetAnnounce.addAnnounceMessage");

	UEFGFxWidgetAnnounce_addAnnounceMessage_Params params {};
	params.Layer = Layer;
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetClassPreview.SetEnableResetButton
//		Flags  -> ()
// Parameters:
//		bool                                               bEnable                                                    (Parm)
void UEFGFxWidgetClassPreview::SetEnableResetButton(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.SetEnableResetButton");

	UEFGFxWidgetClassPreview_SetEnableResetButton_Params params {};
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetClassPreview.SetShowType
//		Flags  -> ()
// Parameters:
//		int                                                Type                                                       (Parm)
void UEFGFxWidgetClassPreview::SetShowType(int Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.SetShowType");

	UEFGFxWidgetClassPreview_SetShowType_Params params {};
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetClassPreview.SetClassUpgradeChoiceInfo
//		Flags  -> ()
// Parameters:
//		class UGFxObject*                                  ClassDataList                                              (Parm)
void UEFGFxWidgetClassPreview::SetClassUpgradeChoiceInfo(class UGFxObject* ClassDataList)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.SetClassUpgradeChoiceInfo");

	UEFGFxWidgetClassPreview_SetClassUpgradeChoiceInfo_Params params {};
	params.ClassDataList = ClassDataList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetClassPreview.SetPlayingClassData
//		Flags  -> ()
// Parameters:
//		int                                                ClassID                                                    (Parm)
//		struct FString                                     ClassName                                                  (Parm, NeedCtorLink)
//		struct FString                                     classInfo                                                  (Parm, NeedCtorLink)
void UEFGFxWidgetClassPreview::SetPlayingClassData(int ClassID, const struct FString& ClassName, const struct FString& classInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.SetPlayingClassData");

	UEFGFxWidgetClassPreview_SetPlayingClassData_Params params {};
	params.ClassID = ClassID;
	params.ClassName = ClassName;
	params.classInfo = classInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeCancelRelease
//		Flags  -> ()
void UEFGFxWidgetClassPreview::ClassUpgradeCancelRelease()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeCancelRelease");

	UEFGFxWidgetClassPreview_ClassUpgradeCancelRelease_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeSelectClassID
//		Flags  -> ()
// Parameters:
//		int                                                iIndex                                                     (Parm)
void UEFGFxWidgetClassPreview::ClassUpgradeSelectClassID(int iIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeSelectClassID");

	UEFGFxWidgetClassPreview_ClassUpgradeSelectClassID_Params params {};
	params.iIndex = iIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeConfirmClass
//		Flags  -> ()
// Parameters:
//		int                                                iIndex                                                     (Parm)
void UEFGFxWidgetClassPreview::ClassUpgradeConfirmClass(int iIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeConfirmClass");

	UEFGFxWidgetClassPreview_ClassUpgradeConfirmClass_Params params {};
	params.iIndex = iIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeReturnRelease
//		Flags  -> ()
void UEFGFxWidgetClassPreview::ClassUpgradeReturnRelease()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeReturnRelease");

	UEFGFxWidgetClassPreview_ClassUpgradeReturnRelease_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeAddBossMonster
//		Flags  -> ()
void UEFGFxWidgetClassPreview::ClassUpgradeAddBossMonster()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeAddBossMonster");

	UEFGFxWidgetClassPreview_ClassUpgradeAddBossMonster_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeAddNormalMonster
//		Flags  -> ()
void UEFGFxWidgetClassPreview::ClassUpgradeAddNormalMonster()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeAddNormalMonster");

	UEFGFxWidgetClassPreview_ClassUpgradeAddNormalMonster_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetClassPreview.ClassUpgradePlayReset
//		Flags  -> ()
void UEFGFxWidgetClassPreview::ClassUpgradePlayReset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.ClassUpgradePlayReset");

	UEFGFxWidgetClassPreview_ClassUpgradePlayReset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetClassPreview.RequestStopMovie
//		Flags  -> ()
void UEFGFxWidgetClassPreview::RequestStopMovie()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.RequestStopMovie");

	UEFGFxWidgetClassPreview_RequestStopMovie_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetClassPreview.RequestPlayMovieClassUpgradePreview
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
void UEFGFxWidgetClassPreview::RequestPlayMovieClassUpgradePreview(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.RequestPlayMovieClassUpgradePreview");

	UEFGFxWidgetClassPreview_RequestPlayMovieClassUpgradePreview_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetClassPreview.ClassUpgradePreviewRequestCloseWnd
//		Flags  -> ()
void UEFGFxWidgetClassPreview::ClassUpgradePreviewRequestCloseWnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.ClassUpgradePreviewRequestCloseWnd");

	UEFGFxWidgetClassPreview_ClassUpgradePreviewRequestCloseWnd_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetClassPreview.ClassUpgradePreviewPlaySelectClass
//		Flags  -> ()
// Parameters:
//		int                                                iIndex                                                     (Parm)
void UEFGFxWidgetClassPreview::ClassUpgradePreviewPlaySelectClass(int iIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetClassPreview.ClassUpgradePreviewPlaySelectClass");

	UEFGFxWidgetClassPreview_ClassUpgradePreviewPlaySelectClass_Params params {};
	params.iIndex = iIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetColosseum_New.setObserverMod
//		Flags  -> ()
// Parameters:
//		int                                                iMode                                                      (Parm)
//		int                                                iSide                                                      (Parm)
void UEFGFxWidgetColosseum_New::setObserverMod(int iMode, int iSide)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColosseum_New.setObserverMod");

	UEFGFxWidgetColosseum_New_setObserverMod_Params params {};
	params.iMode = iMode;
	params.iSide = iSide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetColosseum_New.setTimerPause
//		Flags  -> ()
// Parameters:
//		bool                                               bPause                                                     (Parm)
void UEFGFxWidgetColosseum_New::setTimerPause(bool bPause)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColosseum_New.setTimerPause");

	UEFGFxWidgetColosseum_New_setTimerPause_Params params {};
	params.bPause = bPause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetColosseum_New.AddItem
//		Flags  -> ()
// Parameters:
//		class UGFxObject*                                  Object                                                     (Parm)
void UEFGFxWidgetColosseum_New::AddItem(class UGFxObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColosseum_New.AddItem");

	UEFGFxWidgetColosseum_New_AddItem_Params params {};
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetColosseum_New.setModType
//		Flags  -> ()
// Parameters:
//		int                                                iType                                                      (Parm)
void UEFGFxWidgetColosseum_New::setModType(int iType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColosseum_New.setModType");

	UEFGFxWidgetColosseum_New_setModType_Params params {};
	params.iType = iType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetColosseum_New.roundAnnounceShowType
//		Flags  -> ()
// Parameters:
//		int                                                iType                                                      (Parm)
//		struct FString                                     Title                                                      (Parm, NeedCtorLink)
//		struct FString                                     Subtitle                                                   (Parm, NeedCtorLink)
//		int                                                iTeamType                                                  (Parm)
void UEFGFxWidgetColosseum_New::roundAnnounceShowType(int iType, const struct FString& Title, const struct FString& Subtitle, int iTeamType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColosseum_New.roundAnnounceShowType");

	UEFGFxWidgetColosseum_New_roundAnnounceShowType_Params params {};
	params.iType = iType;
	params.Title = Title;
	params.Subtitle = Subtitle;
	params.iTeamType = iTeamType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetColosseum_New.announceShowType
//		Flags  -> ()
// Parameters:
//		int                                                iType                                                      (Parm)
//		struct FString                                     Title                                                      (Parm, NeedCtorLink)
//		int                                                iTeamType                                                  (Parm)
void UEFGFxWidgetColosseum_New::announceShowType(int iType, const struct FString& Title, int iTeamType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColosseum_New.announceShowType");

	UEFGFxWidgetColosseum_New_announceShowType_Params params {};
	params.iType = iType;
	params.Title = Title;
	params.iTeamType = iTeamType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetColosseum_New.setStartData
//		Flags  -> ()
// Parameters:
//		class UGFxObject*                                  Object                                                     (Parm)
void UEFGFxWidgetColosseum_New::setStartData(class UGFxObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColosseum_New.setStartData");

	UEFGFxWidgetColosseum_New_setStartData_Params params {};
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetColosseum_New.setWaitData
//		Flags  -> ()
// Parameters:
//		class UGFxObject*                                  Object                                                     (Parm)
void UEFGFxWidgetColosseum_New::setWaitData(class UGFxObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetColosseum_New.setWaitData");

	UEFGFxWidgetColosseum_New_setWaitData_Params params {};
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetCommon.SetPartyMemberValue
//		Flags  -> ()
// Parameters:
//		struct FString                                     remainPartyMember                                          (Parm, NeedCtorLink)
void UEFGFxWidgetCommon::SetPartyMemberValue(const struct FString& remainPartyMember)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCommon.SetPartyMemberValue");

	UEFGFxWidgetCommon_SetPartyMemberValue_Params params {};
	params.remainPartyMember = remainPartyMember;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetCommon.SetCommonObjectAvailableSkip
//		Flags  -> ()
// Parameters:
//		bool                                               bShow                                                      (Parm)
//		int                                                skipType                                                   (Parm)
void UEFGFxWidgetCommon::SetCommonObjectAvailableSkip(bool bShow, int skipType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCommon.SetCommonObjectAvailableSkip");

	UEFGFxWidgetCommon_SetCommonObjectAvailableSkip_Params params {};
	params.bShow = bShow;
	params.skipType = skipType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetCommon.ShowCommonObjectAvailableSkip
//		Flags  -> ()
// Parameters:
//		bool                                               bShow                                                      (Parm)
void UEFGFxWidgetCommon::ShowCommonObjectAvailableSkip(bool bShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCommon.ShowCommonObjectAvailableSkip");

	UEFGFxWidgetCommon_ShowCommonObjectAvailableSkip_Params params {};
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetCommon.WidgetInitialized
//		Flags  -> ()
// Parameters:
//		struct FName                                       WidgetName                                                 (Parm)
//		struct FName                                       WidgetPath                                                 (Parm)
//		class UGFxObject*                                  Widget                                                     (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFGFxWidgetCommon::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetCommon.WidgetInitialized");

	UEFGFxWidgetCommon_WidgetInitialized_Params params {};
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
//		Name   -> Function EFGame.EFGFxWidgetContentsUnlock.ContentsUnlockCallbackTypeID
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
void UEFGFxWidgetContentsUnlock::ContentsUnlockCallbackTypeID(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetContentsUnlock.ContentsUnlockCallbackTypeID");

	UEFGFxWidgetContentsUnlock_ContentsUnlockCallbackTypeID_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetContentsUnlock.OnContentsUnlockCallbackTypeID
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
void UEFGFxWidgetContentsUnlock::OnContentsUnlockCallbackTypeID(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetContentsUnlock.OnContentsUnlockCallbackTypeID");

	UEFGFxWidgetContentsUnlock_OnContentsUnlockCallbackTypeID_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetDamage.EFDataBinding_UpdateData
//		Flags  -> ()
// Parameters:
//		struct FString                                     BindName                                                   (Parm, NeedCtorLink)
//		class UGFxObject*                                  DataProvider                                               (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFGFxWidgetDamage::EFDataBinding_UpdateData(const struct FString& BindName, class UGFxObject* DataProvider)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetDamage.EFDataBinding_UpdateData");

	UEFGFxWidgetDamage_EFDataBinding_UpdateData_Params params {};
	params.BindName = BindName;
	params.DataProvider = DataProvider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetExcavationMiniGame.MiniGameStateChanged
//		Flags  -> ()
// Parameters:
//		struct FString                                     WndName                                                    (Parm, NeedCtorLink)
//		int                                                currentGameState                                           (Parm)
//		int                                                lastGameState                                              (Parm)
void UEFGFxWidgetExcavationMiniGame::MiniGameStateChanged(const struct FString& WndName, int currentGameState, int lastGameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetExcavationMiniGame.MiniGameStateChanged");

	UEFGFxWidgetExcavationMiniGame_MiniGameStateChanged_Params params {};
	params.WndName = WndName;
	params.currentGameState = currentGameState;
	params.lastGameState = lastGameState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetExcavationMiniGame.OnChangeGameState
//		Flags  -> ()
// Parameters:
//		struct FString                                     WndName                                                    (Parm, NeedCtorLink)
//		int                                                currentGameState                                           (Parm)
//		int                                                lastGameState                                              (Parm)
void UEFGFxWidgetExcavationMiniGame::OnChangeGameState(const struct FString& WndName, int currentGameState, int lastGameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetExcavationMiniGame.OnChangeGameState");

	UEFGFxWidgetExcavationMiniGame_OnChangeGameState_Params params {};
	params.WndName = WndName;
	params.currentGameState = currentGameState;
	params.lastGameState = lastGameState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetExcavationMiniGame.ArcheologyResultComplete
//		Flags  -> ()
void UEFGFxWidgetExcavationMiniGame::ArcheologyResultComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetExcavationMiniGame.ArcheologyResultComplete");

	UEFGFxWidgetExcavationMiniGame_ArcheologyResultComplete_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetExcavationMiniGame.OnResultComplete
//		Flags  -> ()
void UEFGFxWidgetExcavationMiniGame::OnResultComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetExcavationMiniGame.OnResultComplete");

	UEFGFxWidgetExcavationMiniGame_OnResultComplete_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetFishingNetMiniGame.MiniGameStateChanged
//		Flags  -> ()
// Parameters:
//		struct FString                                     WndName                                                    (Parm, NeedCtorLink)
//		int                                                currentGameState                                           (Parm)
//		int                                                lastGameState                                              (Parm)
void UEFGFxWidgetFishingNetMiniGame::MiniGameStateChanged(const struct FString& WndName, int currentGameState, int lastGameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetFishingNetMiniGame.MiniGameStateChanged");

	UEFGFxWidgetFishingNetMiniGame_MiniGameStateChanged_Params params {};
	params.WndName = WndName;
	params.currentGameState = currentGameState;
	params.lastGameState = lastGameState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetFishingNetMiniGame.OnChangeGameState
//		Flags  -> ()
// Parameters:
//		struct FString                                     WndName                                                    (Parm, NeedCtorLink)
//		int                                                currentGameState                                           (Parm)
//		int                                                lastGameState                                              (Parm)
void UEFGFxWidgetFishingNetMiniGame::OnChangeGameState(const struct FString& WndName, int currentGameState, int lastGameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetFishingNetMiniGame.OnChangeGameState");

	UEFGFxWidgetFishingNetMiniGame_OnChangeGameState_Params params {};
	params.WndName = WndName;
	params.currentGameState = currentGameState;
	params.lastGameState = lastGameState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetFishingNetMiniGame.FishingGameOver
//		Flags  -> ()
// Parameters:
//		int                                                overType                                                   (Parm)
void UEFGFxWidgetFishingNetMiniGame::FishingGameOver(int overType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetFishingNetMiniGame.FishingGameOver");

	UEFGFxWidgetFishingNetMiniGame_FishingGameOver_Params params {};
	params.overType = overType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetFishingNetMiniGame.OnFishingGameOver
//		Flags  -> ()
// Parameters:
//		int                                                overType                                                   (Parm)
void UEFGFxWidgetFishingNetMiniGame::OnFishingGameOver(int overType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetFishingNetMiniGame.OnFishingGameOver");

	UEFGFxWidgetFishingNetMiniGame_OnFishingGameOver_Params params {};
	params.overType = overType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetHeadStatus.MoveHeadStatus
//		Flags  -> ()
// Parameters:
//		struct FString                                     strID                                                      (Parm, NeedCtorLink)
//		float                                              fX                                                         (Parm)
//		float                                              fY                                                         (Parm)
//		float                                              fZ                                                         (Parm)
void UEFGFxWidgetHeadStatus::MoveHeadStatus(const struct FString& strID, float fX, float fY, float fZ)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHeadStatus.MoveHeadStatus");

	UEFGFxWidgetHeadStatus_MoveHeadStatus_Params params {};
	params.strID = strID;
	params.fX = fX;
	params.fY = fY;
	params.fZ = fZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetHudCommonExp.HUD_CommonTabIndex
//		Flags  -> ()
// Parameters:
//		int                                                TabIndex                                                   (Parm)
void UEFGFxWidgetHudCommonExp::HUD_CommonTabIndex(int TabIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHudCommonExp.HUD_CommonTabIndex");

	UEFGFxWidgetHudCommonExp_HUD_CommonTabIndex_Params params {};
	params.TabIndex = TabIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetHudCommonExp.CommonTabIndex
//		Flags  -> ()
// Parameters:
//		int                                                TabIndex                                                   (Parm)
void UEFGFxWidgetHudCommonExp::CommonTabIndex(int TabIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHudCommonExp.CommonTabIndex");

	UEFGFxWidgetHudCommonExp_CommonTabIndex_Params params {};
	params.TabIndex = TabIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetHudIdentity.SummonerSkillButtonClick
//		Flags  -> ()
// Parameters:
//		int                                                iButtonIndex                                               (Parm)
void UEFGFxWidgetHudIdentity::SummonerSkillButtonClick(int iButtonIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHudIdentity.SummonerSkillButtonClick");

	UEFGFxWidgetHudIdentity_SummonerSkillButtonClick_Params params {};
	params.iButtonIndex = iButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetHudLeftTop.TopHUDAlarmListRightBtnClick
//		Flags  -> ()
// Parameters:
//		int                                                InListIndex                                                (Parm)
void UEFGFxWidgetHudLeftTop::TopHUDAlarmListRightBtnClick(int InListIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHudLeftTop.TopHUDAlarmListRightBtnClick");

	UEFGFxWidgetHudLeftTop_TopHUDAlarmListRightBtnClick_Params params {};
	params.InListIndex = InListIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetHudLeftTop.TopHUDAlarmListLeftBtnClick
//		Flags  -> ()
// Parameters:
//		int                                                InListIndex                                                (Parm)
void UEFGFxWidgetHudLeftTop::TopHUDAlarmListLeftBtnClick(int InListIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHudLeftTop.TopHUDAlarmListLeftBtnClick");

	UEFGFxWidgetHudLeftTop_TopHUDAlarmListLeftBtnClick_Params params {};
	params.InListIndex = InListIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetHudLeftTop.TopHUDAlarmListItemClick
//		Flags  -> ()
// Parameters:
//		int                                                InListIndex                                                (Parm)
void UEFGFxWidgetHudLeftTop::TopHUDAlarmListItemClick(int InListIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetHudLeftTop.TopHUDAlarmListItemClick");

	UEFGFxWidgetHudLeftTop_TopHUDAlarmListItemClick_Params params {};
	params.InListIndex = InListIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteraction.RelationShipLevelUp
//		Flags  -> ()
void UEFGFxWidgetInteraction::RelationShipLevelUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.RelationShipLevelUp");

	UEFGFxWidgetInteraction_RelationShipLevelUp_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteraction.CloseBackGround
//		Flags  -> ()
void UEFGFxWidgetInteraction::CloseBackGround()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.CloseBackGround");

	UEFGFxWidgetInteraction_CloseBackGround_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteraction.InteractionCloseBackGround
//		Flags  -> ()
void UEFGFxWidgetInteraction::InteractionCloseBackGround()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.InteractionCloseBackGround");

	UEFGFxWidgetInteraction_InteractionCloseBackGround_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteraction.OpenBackGround
//		Flags  -> ()
void UEFGFxWidgetInteraction::OpenBackGround()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.OpenBackGround");

	UEFGFxWidgetInteraction_OpenBackGround_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteraction.InteractionOpenBackGround
//		Flags  -> ()
void UEFGFxWidgetInteraction::InteractionOpenBackGround()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.InteractionOpenBackGround");

	UEFGFxWidgetInteraction_InteractionOpenBackGround_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteraction.SelectQuestListIndex
//		Flags  -> ()
// Parameters:
//		int                                                ListIndex                                                  (Parm)
void UEFGFxWidgetInteraction::SelectQuestListIndex(int ListIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.SelectQuestListIndex");

	UEFGFxWidgetInteraction_SelectQuestListIndex_Params params {};
	params.ListIndex = ListIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteraction.SelectQuestList
//		Flags  -> ()
// Parameters:
//		int                                                ListIndex                                                  (Parm)
void UEFGFxWidgetInteraction::SelectQuestList(int ListIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.SelectQuestList");

	UEFGFxWidgetInteraction_SelectQuestList_Params params {};
	params.ListIndex = ListIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteraction.SelectFunctionType
//		Flags  -> ()
// Parameters:
//		int                                                Type                                                       (Parm)
void UEFGFxWidgetInteraction::SelectFunctionType(int Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.SelectFunctionType");

	UEFGFxWidgetInteraction_SelectFunctionType_Params params {};
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteraction.SelectFunctionContainer
//		Flags  -> ()
// Parameters:
//		int                                                Type                                                       (Parm)
void UEFGFxWidgetInteraction::SelectFunctionContainer(int Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.SelectFunctionContainer");

	UEFGFxWidgetInteraction_SelectFunctionContainer_Params params {};
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteraction.ShowMaxIntimatePoint
//		Flags  -> ()
// Parameters:
//		bool                                               B                                                          (Parm)
void UEFGFxWidgetInteraction::ShowMaxIntimatePoint(bool B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.ShowMaxIntimatePoint");

	UEFGFxWidgetInteraction_ShowMaxIntimatePoint_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteraction.ShowMaximumIntimatePoint
//		Flags  -> ()
// Parameters:
//		bool                                               B                                                          (Parm)
void UEFGFxWidgetInteraction::ShowMaximumIntimatePoint(bool B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.ShowMaximumIntimatePoint");

	UEFGFxWidgetInteraction_ShowMaximumIntimatePoint_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteraction.ClearInteractionState
//		Flags  -> ()
void UEFGFxWidgetInteraction::ClearInteractionState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.ClearInteractionState");

	UEFGFxWidgetInteraction_ClearInteractionState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteraction.ClearFunctionButtonState
//		Flags  -> ()
void UEFGFxWidgetInteraction::ClearFunctionButtonState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.ClearFunctionButtonState");

	UEFGFxWidgetInteraction_ClearFunctionButtonState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteraction.InteractionCommonCloseBtnClick
//		Flags  -> ()
void UEFGFxWidgetInteraction::InteractionCommonCloseBtnClick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.InteractionCommonCloseBtnClick");

	UEFGFxWidgetInteraction_InteractionCommonCloseBtnClick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteraction.EndInteractionMode
//		Flags  -> ()
void UEFGFxWidgetInteraction::EndInteractionMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.EndInteractionMode");

	UEFGFxWidgetInteraction_EndInteractionMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteraction.InteractionCommonPlayerTalkListClick
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
void UEFGFxWidgetInteraction::InteractionCommonPlayerTalkListClick(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.InteractionCommonPlayerTalkListClick");

	UEFGFxWidgetInteraction_InteractionCommonPlayerTalkListClick_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteraction.ClickInteractionTalkSelectList
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
void UEFGFxWidgetInteraction::ClickInteractionTalkSelectList(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.ClickInteractionTalkSelectList");

	UEFGFxWidgetInteraction_ClickInteractionTalkSelectList_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteraction.InteractionCommonNPCTalkListClick
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
void UEFGFxWidgetInteraction::InteractionCommonNPCTalkListClick(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.InteractionCommonNPCTalkListClick");

	UEFGFxWidgetInteraction_InteractionCommonNPCTalkListClick_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteraction.ClickInteractionTalkList
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
void UEFGFxWidgetInteraction::ClickInteractionTalkList(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.ClickInteractionTalkList");

	UEFGFxWidgetInteraction_ClickInteractionTalkList_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteraction.InteractionCommonMenuListClick
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
void UEFGFxWidgetInteraction::InteractionCommonMenuListClick(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.InteractionCommonMenuListClick");

	UEFGFxWidgetInteraction_InteractionCommonMenuListClick_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteraction.ClickInteractionFunctionMenu
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
void UEFGFxWidgetInteraction::ClickInteractionFunctionMenu(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.ClickInteractionFunctionMenu");

	UEFGFxWidgetInteraction_ClickInteractionFunctionMenu_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteraction.WidgetInitialized
//		Flags  -> ()
// Parameters:
//		struct FName                                       WidgetName                                                 (Parm)
//		struct FName                                       WidgetPath                                                 (Parm)
//		class UGFxObject*                                  Widget                                                     (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFGFxWidgetInteraction::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteraction.WidgetInitialized");

	UEFGFxWidgetInteraction_WidgetInitialized_Params params {};
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
//		Name   -> Function EFGame.EFGFxWidgetInteractionKeyIcon.InteractionKeySelected
//		Flags  -> ()
void UEFGFxWidgetInteractionKeyIcon::InteractionKeySelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionKeyIcon.InteractionKeySelected");

	UEFGFxWidgetInteractionKeyIcon_InteractionKeySelected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetInteractionKeyIcon.FinishSwitchInteractionMode
//		Flags  -> ()
void UEFGFxWidgetInteractionKeyIcon::FinishSwitchInteractionMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetInteractionKeyIcon.FinishSwitchInteractionMode");

	UEFGFxWidgetInteractionKeyIcon_FinishSwitchInteractionMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetLifeToolDurability.HideLifeDurability
//		Flags  -> ()
void UEFGFxWidgetLifeToolDurability::HideLifeDurability()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeToolDurability.HideLifeDurability");

	UEFGFxWidgetLifeToolDurability_HideLifeDurability_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetLifeToolDurability.DecreaseLifeDurability
//		Flags  -> ()
// Parameters:
//		int                                                CurrentValue                                               (Parm)
//		int                                                decreaseValue                                              (Parm)
void UEFGFxWidgetLifeToolDurability::DecreaseLifeDurability(int CurrentValue, int decreaseValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeToolDurability.DecreaseLifeDurability");

	UEFGFxWidgetLifeToolDurability_DecreaseLifeDurability_Params params {};
	params.CurrentValue = CurrentValue;
	params.decreaseValue = decreaseValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetLifeToolDurability.ShowLifeDurability
//		Flags  -> ()
// Parameters:
//		int                                                iconType                                                   (Parm)
//		int                                                CurrentValue                                               (Parm)
void UEFGFxWidgetLifeToolDurability::ShowLifeDurability(int iconType, int CurrentValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeToolDurability.ShowLifeDurability");

	UEFGFxWidgetLifeToolDurability_ShowLifeDurability_Params params {};
	params.iconType = iconType;
	params.CurrentValue = CurrentValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetLifeVessel.LifeVesselCompleteAnimationEnd
//		Flags  -> ()
// Parameters:
//		int                                                iCompleteIndex                                             (Parm)
void UEFGFxWidgetLifeVessel::LifeVesselCompleteAnimationEnd(int iCompleteIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetLifeVessel.LifeVesselCompleteAnimationEnd");

	UEFGFxWidgetLifeVessel_LifeVesselCompleteAnimationEnd_Params params {};
	params.iCompleteIndex = iCompleteIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetMenu.QuickSlotMenuClick
//		Flags  -> ()
// Parameters:
//		int                                                iMenuIndex                                                 (Parm)
void UEFGFxWidgetMenu::QuickSlotMenuClick(int iMenuIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMenu.QuickSlotMenuClick");

	UEFGFxWidgetMenu_QuickSlotMenuClick_Params params {};
	params.iMenuIndex = iMenuIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetMenu.GetMenu
//		Flags  -> ()
// Parameters:
//		int                                                iSlotIndex                                                 (Parm)
//		class UGFxObject*                                  ReturnValue                                                (Parm, OutParm, ReturnParm)
class UGFxObject* UEFGFxWidgetMenu::GetMenu(int iSlotIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMenu.GetMenu");

	UEFGFxWidgetMenu_GetMenu_Params params {};
	params.iSlotIndex = iSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetMenu.SetEnableButton
//		Flags  -> ()
// Parameters:
//		int                                                iMenuIndex                                                 (Parm)
//		bool                                               bEnable                                                    (Parm)
void UEFGFxWidgetMenu::SetEnableButton(int iMenuIndex, bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMenu.SetEnableButton");

	UEFGFxWidgetMenu_SetEnableButton_Params params {};
	params.iMenuIndex = iMenuIndex;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetMenu.SetToolTip
//		Flags  -> ()
// Parameters:
//		int                                                iMenuIndex                                                 (Parm)
//		struct FString                                     strToolTip                                                 (Parm, NeedCtorLink)
void UEFGFxWidgetMenu::SetToolTip(int iMenuIndex, const struct FString& strToolTip)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMenu.SetToolTip");

	UEFGFxWidgetMenu_SetToolTip_Params params {};
	params.iMenuIndex = iMenuIndex;
	params.strToolTip = strToolTip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetMenu.SetBindKey
//		Flags  -> ()
// Parameters:
//		int                                                iMenuIndex                                                 (Parm)
//		struct FString                                     strBindKey                                                 (Parm, NeedCtorLink)
void UEFGFxWidgetMenu::SetBindKey(int iMenuIndex, const struct FString& strBindKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMenu.SetBindKey");

	UEFGFxWidgetMenu_SetBindKey_Params params {};
	params.iMenuIndex = iMenuIndex;
	params.strBindKey = strBindKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetMenu.SetSelectButton
//		Flags  -> ()
// Parameters:
//		int                                                iMenuIndex                                                 (Parm)
//		bool                                               bSelect                                                    (Parm)
void UEFGFxWidgetMenu::SetSelectButton(int iMenuIndex, bool bSelect)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMenu.SetSelectButton");

	UEFGFxWidgetMenu_SetSelectButton_Params params {};
	params.iMenuIndex = iMenuIndex;
	params.bSelect = bSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetMenu.SelectButton
//		Flags  -> ()
// Parameters:
//		int                                                iMenuIndex                                                 (Parm)
//		bool                                               bSelect                                                    (Parm)
void UEFGFxWidgetMenu::SelectButton(int iMenuIndex, bool bSelect)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMenu.SelectButton");

	UEFGFxWidgetMenu_SelectButton_Params params {};
	params.iMenuIndex = iMenuIndex;
	params.bSelect = bSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetMinimap.RequestShowMinimapChannelList
//		Flags  -> ()
void UEFGFxWidgetMinimap::RequestShowMinimapChannelList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMinimap.RequestShowMinimapChannelList");

	UEFGFxWidgetMinimap_RequestShowMinimapChannelList_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetMOD_Cube.ModCommonMergeCompensation
//		Flags  -> ()
void UEFGFxWidgetMOD_Cube::ModCommonMergeCompensation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.ModCommonMergeCompensation");

	UEFGFxWidgetMOD_Cube_ModCommonMergeCompensation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetMOD_Cube.FinishMergeCompensation
//		Flags  -> ()
void UEFGFxWidgetMOD_Cube::FinishMergeCompensation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.FinishMergeCompensation");

	UEFGFxWidgetMOD_Cube_FinishMergeCompensation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetMOD_Cube.ModCommonEndCubeEffect
//		Flags  -> ()
// Parameters:
//		int                                                TabIndex                                                   (Parm)
//		int                                                selectZoneID                                               (Parm)
//		int                                                selectDifficulty                                           (Parm)
void UEFGFxWidgetMOD_Cube::ModCommonEndCubeEffect(int TabIndex, int selectZoneID, int selectDifficulty)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.ModCommonEndCubeEffect");

	UEFGFxWidgetMOD_Cube_ModCommonEndCubeEffect_Params params {};
	params.TabIndex = TabIndex;
	params.selectZoneID = selectZoneID;
	params.selectDifficulty = selectDifficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetMOD_Cube.EndBuffEffect
//		Flags  -> ()
void UEFGFxWidgetMOD_Cube::EndBuffEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.EndBuffEffect");

	UEFGFxWidgetMOD_Cube_EndBuffEffect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetMOD_Cube.PlayModCommonMergeCompensation
//		Flags  -> ()
// Parameters:
//		bool                                               bSuccess                                                   (Parm)
void UEFGFxWidgetMOD_Cube::PlayModCommonMergeCompensation(bool bSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.PlayModCommonMergeCompensation");

	UEFGFxWidgetMOD_Cube_PlayModCommonMergeCompensation_Params params {};
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonRandomState
//		Flags  -> ()
// Parameters:
//		bool                                               bStart                                                     (Parm)
//		class UGFxObject*                                  Obj                                                        (Parm)
void UEFGFxWidgetMOD_Cube::SetModCommonRandomState(bool bStart, class UGFxObject* Obj)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonRandomState");

	UEFGFxWidgetMOD_Cube_SetModCommonRandomState_Params params {};
	params.bStart = bStart;
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonCurrentCompensation
//		Flags  -> ()
// Parameters:
//		class UGFxObject*                                  Obj                                                        (Parm)
void UEFGFxWidgetMOD_Cube::SetModCommonCurrentCompensation(class UGFxObject* Obj)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonCurrentCompensation");

	UEFGFxWidgetMOD_Cube_SetModCommonCurrentCompensation_Params params {};
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonAccumulateCompensation
//		Flags  -> ()
// Parameters:
//		class UGFxObject*                                  Obj                                                        (Parm)
void UEFGFxWidgetMOD_Cube::SetModCommonAccumulateCompensation(class UGFxObject* Obj)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonAccumulateCompensation");

	UEFGFxWidgetMOD_Cube_SetModCommonAccumulateCompensation_Params params {};
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetMOD_Cube.UpdateModCommonCubeState
//		Flags  -> ()
// Parameters:
//		int                                                SkillEffectIndex                                           (Parm)
//		int                                                StackCount                                                 (Parm)
//		int                                                ExpireStageIndex                                           (Parm)
void UEFGFxWidgetMOD_Cube::UpdateModCommonCubeState(int SkillEffectIndex, int StackCount, int ExpireStageIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.UpdateModCommonCubeState");

	UEFGFxWidgetMOD_Cube_UpdateModCommonCubeState_Params params {};
	params.SkillEffectIndex = SkillEffectIndex;
	params.StackCount = StackCount;
	params.ExpireStageIndex = ExpireStageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetMOD_Cube.RemoveModCommonCubeState
//		Flags  -> ()
// Parameters:
//		int                                                SkillEffectIndex                                           (Parm)
void UEFGFxWidgetMOD_Cube::RemoveModCommonCubeState(int SkillEffectIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.RemoveModCommonCubeState");

	UEFGFxWidgetMOD_Cube_RemoveModCommonCubeState_Params params {};
	params.SkillEffectIndex = SkillEffectIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetMOD_Cube.AddModCommonCubeState
//		Flags  -> ()
// Parameters:
//		class UGFxObject*                                  Obj                                                        (Parm)
void UEFGFxWidgetMOD_Cube::AddModCommonCubeState(class UGFxObject* Obj)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.AddModCommonCubeState");

	UEFGFxWidgetMOD_Cube_AddModCommonCubeState_Params params {};
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonStateList
//		Flags  -> ()
// Parameters:
//		class UGFxObject*                                  Obj                                                        (Parm)
void UEFGFxWidgetMOD_Cube::SetModCommonStateList(class UGFxObject* Obj)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonStateList");

	UEFGFxWidgetMOD_Cube_SetModCommonStateList_Params params {};
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonWaveStep
//		Flags  -> ()
// Parameters:
//		class UGFxObject*                                  Obj                                                        (Parm)
void UEFGFxWidgetMOD_Cube::SetModCommonWaveStep(class UGFxObject* Obj)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonWaveStep");

	UEFGFxWidgetMOD_Cube_SetModCommonWaveStep_Params params {};
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonHudType
//		Flags  -> ()
// Parameters:
//		int                                                ModType                                                    (Parm)
void UEFGFxWidgetMOD_Cube::SetModCommonHudType(int ModType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonHudType");

	UEFGFxWidgetMOD_Cube_SetModCommonHudType_Params params {};
	params.ModType = ModType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetMOD_PlatinumArea.ModPlatinumCoopComplete
//		Flags  -> ()
// Parameters:
//		int                                                InCompleteCoopStep                                         (Parm)
void UEFGFxWidgetMOD_PlatinumArea::ModPlatinumCoopComplete(int InCompleteCoopStep)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMOD_PlatinumArea.ModPlatinumCoopComplete");

	UEFGFxWidgetMOD_PlatinumArea_ModPlatinumCoopComplete_Params params {};
	params.InCompleteCoopStep = InCompleteCoopStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetMODEntrance.ModEntranceMapCanvasItemClick
//		Flags  -> ()
// Parameters:
//		int                                                ZoneID                                                     (Parm)
void UEFGFxWidgetMODEntrance::ModEntranceMapCanvasItemClick(int ZoneID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetMODEntrance.ModEntranceMapCanvasItemClick");

	UEFGFxWidgetMODEntrance_ModEntranceMapCanvasItemClick_Params params {};
	params.ZoneID = ZoneID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetNotice.setNoticeIcon
//		Flags  -> ()
// Parameters:
//		bool                                               show                                                       (Parm)
//		int                                                noticeType                                                 (Parm)
//		int                                                StackCount                                                 (Parm)
void UEFGFxWidgetNotice::setNoticeIcon(bool show, int noticeType, int StackCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetNotice.setNoticeIcon");

	UEFGFxWidgetNotice_setNoticeIcon_Params params {};
	params.show = show;
	params.noticeType = noticeType;
	params.StackCount = StackCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetNotice.NoticeFrameAlarmBtnClick
//		Flags  -> ()
// Parameters:
//		int                                                noticeType                                                 (Parm)
void UEFGFxWidgetNotice::NoticeFrameAlarmBtnClick(int noticeType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetNotice.NoticeFrameAlarmBtnClick");

	UEFGFxWidgetNotice_NoticeFrameAlarmBtnClick_Params params {};
	params.noticeType = noticeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetPcCreateHUD.SetDefaultClassData
//		Flags  -> ()
// Parameters:
//		TArray<class UGFxObject*>                          pObject                                                    (Parm, NeedCtorLink)
void UEFGFxWidgetPcCreateHUD::SetDefaultClassData(TArray<class UGFxObject*> pObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcCreateHUD.SetDefaultClassData");

	UEFGFxWidgetPcCreateHUD_SetDefaultClassData_Params params {};
	params.pObject = pObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetPcCreateHUD.RequestStopMovie
//		Flags  -> ()
void UEFGFxWidgetPcCreateHUD::RequestStopMovie()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcCreateHUD.RequestStopMovie");

	UEFGFxWidgetPcCreateHUD_RequestStopMovie_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetPcCreateHUD.RequestPlayMovieClassSelectPreview
//		Flags  -> ()
// Parameters:
//		int                                                ClassID                                                    (Parm)
void UEFGFxWidgetPcCreateHUD::RequestPlayMovieClassSelectPreview(int ClassID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcCreateHUD.RequestPlayMovieClassSelectPreview");

	UEFGFxWidgetPcCreateHUD_RequestPlayMovieClassSelectPreview_Params params {};
	params.ClassID = ClassID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetPcCreateHUD.RequestUpdateClassSelectData
//		Flags  -> ()
// Parameters:
//		int                                                ClassID                                                    (Parm)
void UEFGFxWidgetPcCreateHUD::RequestUpdateClassSelectData(int ClassID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcCreateHUD.RequestUpdateClassSelectData");

	UEFGFxWidgetPcCreateHUD_RequestUpdateClassSelectData_Params params {};
	params.ClassID = ClassID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetPcCustomizing.previewImg
//		Flags  -> ()
// Parameters:
//		class UGFxObject*                                  Obj                                                        (Parm)
void UEFGFxWidgetPcCustomizing::previewImg(class UGFxObject* Obj)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcCustomizing.previewImg");

	UEFGFxWidgetPcCustomizing_previewImg_Params params {};
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetPcCustomizing.setCostume
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
void UEFGFxWidgetPcCustomizing::setCostume(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcCustomizing.setCostume");

	UEFGFxWidgetPcCustomizing_setCostume_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetPcCustomizing.setClassID
//		Flags  -> ()
// Parameters:
//		int                                                ClassID                                                    (Parm)
void UEFGFxWidgetPcCustomizing::setClassID(int ClassID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcCustomizing.setClassID");

	UEFGFxWidgetPcCustomizing_setClassID_Params params {};
	params.ClassID = ClassID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetPcCustomizing.setPreviewcostumeData
//		Flags  -> ()
// Parameters:
//		TArray<unsigned long>                              Array                                                      (Parm, NeedCtorLink)
void UEFGFxWidgetPcCustomizing::setPreviewcostumeData(TArray<unsigned long> Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcCustomizing.setPreviewcostumeData");

	UEFGFxWidgetPcCustomizing_setPreviewcostumeData_Params params {};
	params.Array = Array;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetPcCustomizing.setPresetData
//		Flags  -> ()
// Parameters:
//		TArray<unsigned long>                              Array                                                      (Parm, NeedCtorLink)
void UEFGFxWidgetPcCustomizing::setPresetData(TArray<unsigned long> Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcCustomizing.setPresetData");

	UEFGFxWidgetPcCustomizing_setPresetData_Params params {};
	params.Array = Array;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetPcCustomizing.CustomizingSettingValueChanged
//		Flags  -> ()
// Parameters:
//		struct FString                                     InFirstCategory                                            (Parm, NeedCtorLink)
//		struct FString                                     InSecondCategory                                           (Parm, NeedCtorLink)
//		int                                                iValue                                                     (Parm)
//		float                                              fValue                                                     (Parm)
void UEFGFxWidgetPcCustomizing::CustomizingSettingValueChanged(const struct FString& InFirstCategory, const struct FString& InSecondCategory, int iValue, float fValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcCustomizing.CustomizingSettingValueChanged");

	UEFGFxWidgetPcCustomizing_CustomizingSettingValueChanged_Params params {};
	params.InFirstCategory = InFirstCategory;
	params.InSecondCategory = InSecondCategory;
	params.iValue = iValue;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetPcSelect.ShowAnim
//		Flags  -> ()
void UEFGFxWidgetPcSelect::ShowAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcSelect.ShowAnim");

	UEFGFxWidgetPcSelect_ShowAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetPcSelect.ShowNotice
//		Flags  -> ()
// Parameters:
//		struct FString                                     Str                                                        (Parm, NeedCtorLink)
void UEFGFxWidgetPcSelect::ShowNotice(const struct FString& Str)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcSelect.ShowNotice");

	UEFGFxWidgetPcSelect_ShowNotice_Params params {};
	params.Str = Str;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetPcSelect.SetCharacterSelect
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
void UEFGFxWidgetPcSelect::SetCharacterSelect(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcSelect.SetCharacterSelect");

	UEFGFxWidgetPcSelect_SetCharacterSelect_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetPcSelect.CharacterSelectMoving
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
void UEFGFxWidgetPcSelect::CharacterSelectMoving(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcSelect.CharacterSelectMoving");

	UEFGFxWidgetPcSelect_CharacterSelectMoving_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetPcSelect.WallpaperCancel
//		Flags  -> ()
void UEFGFxWidgetPcSelect::WallpaperCancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcSelect.WallpaperCancel");

	UEFGFxWidgetPcSelect_WallpaperCancel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetPcSelect.WallpaperSelected
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
void UEFGFxWidgetPcSelect::WallpaperSelected(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcSelect.WallpaperSelected");

	UEFGFxWidgetPcSelect_WallpaperSelected_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetPcSelect.WallpaperConfirm
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
void UEFGFxWidgetPcSelect::WallpaperConfirm(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcSelect.WallpaperConfirm");

	UEFGFxWidgetPcSelect_WallpaperConfirm_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetPcSelect.CharacterSelectDeleteCancel
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
void UEFGFxWidgetPcSelect::CharacterSelectDeleteCancel(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcSelect.CharacterSelectDeleteCancel");

	UEFGFxWidgetPcSelect_CharacterSelectDeleteCancel_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetPcSelect.CharacterSelectedIndex
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
void UEFGFxWidgetPcSelect::CharacterSelectedIndex(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcSelect.CharacterSelectedIndex");

	UEFGFxWidgetPcSelect_CharacterSelectedIndex_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetPcSelect.RequestNewCharacter
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm)
void UEFGFxWidgetPcSelect::RequestNewCharacter(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetPcSelect.RequestNewCharacter");

	UEFGFxWidgetPcSelect_RequestNewCharacter_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetRaidClear.RaidProcessResultComplete
//		Flags  -> ()
void UEFGFxWidgetRaidClear::RaidProcessResultComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetRaidClear.RaidProcessResultComplete");

	UEFGFxWidgetRaidClear_RaidProcessResultComplete_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetRaidExitNotice.RaidProcessNoticeTimeOut
//		Flags  -> ()
void UEFGFxWidgetRaidExitNotice::RaidProcessNoticeTimeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetRaidExitNotice.RaidProcessNoticeTimeOut");

	UEFGFxWidgetRaidExitNotice_RaidProcessNoticeTimeOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetRaidFail.RaidProcessResultComplete
//		Flags  -> ()
void UEFGFxWidgetRaidFail::RaidProcessResultComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetRaidFail.RaidProcessResultComplete");

	UEFGFxWidgetRaidFail_RaidProcessResultComplete_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxWidgetRaidHUD.RaidProcessTimeOut
//		Flags  -> ()
void UEFGFxWidgetRaidHUD::RaidProcessTimeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxWidgetRaidHUD.RaidProcessTimeOut");

	UEFGFxWidgetRaidHUD_RaidProcessTimeOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetPresetGemIcon
//		Flags  -> ()
// Parameters:
//		bool                                               bValue                                                     (Parm)
void UEFUISlotData::SetPresetGemIcon(bool bValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetPresetGemIcon");

	UEFUISlotData_SetPresetGemIcon_Params params {};
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetSortLocked
//		Flags  -> ()
// Parameters:
//		bool                                               bValue                                                     (Parm)
void UEFUISlotData::SetSortLocked(bool bValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetSortLocked");

	UEFUISlotData_SetSortLocked_Params params {};
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetItemLevelString
//		Flags  -> ()
// Parameters:
//		struct FString                                     ItemLevelString                                            (Parm, NeedCtorLink)
void UEFUISlotData::SetItemLevelString(const struct FString& ItemLevelString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetItemLevelString");

	UEFUISlotData_SetItemLevelString_Params params {};
	params.ItemLevelString = ItemLevelString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetRightTopString
//		Flags  -> ()
// Parameters:
//		struct FString                                     RTString                                                   (Parm, NeedCtorLink)
void UEFUISlotData::SetRightTopString(const struct FString& RTString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetRightTopString");

	UEFUISlotData_SetRightTopString_Params params {};
	params.RTString = RTString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetIslandIcon
//		Flags  -> ()
// Parameters:
//		bool                                               bValue                                                     (Parm)
void UEFUISlotData::SetIslandIcon(bool bValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetIslandIcon");

	UEFUISlotData_SetIslandIcon_Params params {};
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetTownShow
//		Flags  -> ()
// Parameters:
//		bool                                               bValue                                                     (Parm)
void UEFUISlotData::SetTownShow(bool bValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetTownShow");

	UEFUISlotData_SetTownShow_Params params {};
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetToolTip
//		Flags  -> ()
// Parameters:
//		struct FString                                     Tooltipdata                                                (Parm, NeedCtorLink)
void UEFUISlotData::SetToolTip(const struct FString& Tooltipdata)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetToolTip");

	UEFUISlotData_SetToolTip_Params params {};
	params.Tooltipdata = Tooltipdata;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetRecommend
//		Flags  -> ()
// Parameters:
//		bool                                               bValue                                                     (Parm)
void UEFUISlotData::SetRecommend(bool bValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetRecommend");

	UEFUISlotData_SetRecommend_Params params {};
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetFriendshipShow
//		Flags  -> ()
// Parameters:
//		bool                                               bValue                                                     (Parm)
void UEFUISlotData::SetFriendshipShow(bool bValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetFriendshipShow");

	UEFUISlotData_SetFriendshipShow_Params params {};
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetTripodBookmarkShow
//		Flags  -> ()
// Parameters:
//		bool                                               bValue                                                     (Parm)
void UEFUISlotData::SetTripodBookmarkShow(bool bValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetTripodBookmarkShow");

	UEFUISlotData_SetTripodBookmarkShow_Params params {};
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetEngraveBookmarkShow
//		Flags  -> ()
// Parameters:
//		bool                                               bValue                                                     (Parm)
void UEFUISlotData::SetEngraveBookmarkShow(bool bValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetEngraveBookmarkShow");

	UEFUISlotData_SetEngraveBookmarkShow_Params params {};
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetSealShow
//		Flags  -> ()
// Parameters:
//		bool                                               bValue                                                     (Parm)
void UEFUISlotData::SetSealShow(bool bValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetSealShow");

	UEFUISlotData_SetSealShow_Params params {};
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetAdvBookShow
//		Flags  -> ()
// Parameters:
//		bool                                               bValue                                                     (Parm)
void UEFUISlotData::SetAdvBookShow(bool bValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetAdvBookShow");

	UEFUISlotData_SetAdvBookShow_Params params {};
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetTemporary
//		Flags  -> ()
// Parameters:
//		bool                                               bValue                                                     (Parm)
void UEFUISlotData::SetTemporary(bool bValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetTemporary");

	UEFUISlotData_SetTemporary_Params params {};
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetTrash
//		Flags  -> ()
// Parameters:
//		bool                                               bValue                                                     (Parm)
void UEFUISlotData::SetTrash(bool bValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetTrash");

	UEFUISlotData_SetTrash_Params params {};
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetDisableType
//		Flags  -> ()
// Parameters:
//		int                                                iType                                                      (Parm)
void UEFUISlotData::SetDisableType(int iType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetDisableType");

	UEFUISlotData_SetDisableType_Params params {};
	params.iType = iType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetTableID
//		Flags  -> ()
// Parameters:
//		int                                                NewTableID                                                 (Parm)
void UEFUISlotData::SetTableID(int NewTableID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetTableID");

	UEFUISlotData_SetTableID_Params params {};
	params.NewTableID = NewTableID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.GetTableID
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFUISlotData::GetTableID()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetTableID");

	UEFUISlotData_GetTableID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetUniqueData
//		Flags  -> ()
// Parameters:
//		struct FString                                     NewUniqueData                                              (Parm, NeedCtorLink)
void UEFUISlotData::SetUniqueData(const struct FString& NewUniqueData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetUniqueData");

	UEFUISlotData_SetUniqueData_Params params {};
	params.NewUniqueData = NewUniqueData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.GetUniqueData
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UEFUISlotData::GetUniqueData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetUniqueData");

	UEFUISlotData_GetUniqueData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetLocked
//		Flags  -> ()
// Parameters:
//		int                                                iLockType                                                  (Parm)
void UEFUISlotData::SetLocked(int iLockType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetLocked");

	UEFUISlotData_SetLocked_Params params {};
	params.iLockType = iLockType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.IsLocked
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFUISlotData::IsLocked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.IsLocked");

	UEFUISlotData_IsLocked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetItemGrade
//		Flags  -> ()
// Parameters:
//		int                                                NewGrade                                                   (Parm)
void UEFUISlotData::SetItemGrade(int NewGrade)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetItemGrade");

	UEFUISlotData_SetItemGrade_Params params {};
	params.NewGrade = NewGrade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.GetItemGrade
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFUISlotData::GetItemGrade()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetItemGrade");

	UEFUISlotData_GetItemGrade_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetSoundTheme
//		Flags  -> ()
// Parameters:
//		struct FString                                     NewSoundTheme                                              (Parm, NeedCtorLink)
void UEFUISlotData::SetSoundTheme(const struct FString& NewSoundTheme)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetSoundTheme");

	UEFUISlotData_SetSoundTheme_Params params {};
	params.NewSoundTheme = NewSoundTheme;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.GetSoundTheme
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UEFUISlotData::GetSoundTheme()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetSoundTheme");

	UEFUISlotData_GetSoundTheme_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetDisabled
//		Flags  -> ()
// Parameters:
//		bool                                               bValue                                                     (Parm)
void UEFUISlotData::SetDisabled(bool bValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetDisabled");

	UEFUISlotData_SetDisabled_Params params {};
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.IsDisabled
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFUISlotData::IsDisabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.IsDisabled");

	UEFUISlotData_IsDisabled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetLabelName
//		Flags  -> ()
// Parameters:
//		struct FString                                     NewLabelName                                               (Parm, NeedCtorLink)
void UEFUISlotData::SetLabelName(const struct FString& NewLabelName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetLabelName");

	UEFUISlotData_SetLabelName_Params params {};
	params.NewLabelName = NewLabelName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.GetLabelName
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UEFUISlotData::GetLabelName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetLabelName");

	UEFUISlotData_GetLabelName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetCooltime
//		Flags  -> ()
// Parameters:
//		float                                              NewRemainTime                                              (Parm)
//		float                                              NewTotalTime                                               (Parm)
void UEFUISlotData::SetCooltime(float NewRemainTime, float NewTotalTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetCooltime");

	UEFUISlotData_SetCooltime_Params params {};
	params.NewRemainTime = NewRemainTime;
	params.NewTotalTime = NewTotalTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.GetTotalCoolTime
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UEFUISlotData::GetTotalCoolTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetTotalCoolTime");

	UEFUISlotData_GetTotalCoolTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.GetRemainCoolTime
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UEFUISlotData::GetRemainCoolTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetRemainCoolTime");

	UEFUISlotData_GetRemainCoolTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetIconHeight
//		Flags  -> ()
// Parameters:
//		int                                                NewIconHeight                                              (Parm)
void UEFUISlotData::SetIconHeight(int NewIconHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetIconHeight");

	UEFUISlotData_SetIconHeight_Params params {};
	params.NewIconHeight = NewIconHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.GetIconHeight
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFUISlotData::GetIconHeight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetIconHeight");

	UEFUISlotData_GetIconHeight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetIconWidth
//		Flags  -> ()
// Parameters:
//		int                                                NewIconWidth                                               (Parm)
void UEFUISlotData::SetIconWidth(int NewIconWidth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetIconWidth");

	UEFUISlotData_SetIconWidth_Params params {};
	params.NewIconWidth = NewIconWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.GetIconWidth
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFUISlotData::GetIconWidth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetIconWidth");

	UEFUISlotData_GetIconWidth_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetIconY
//		Flags  -> ()
// Parameters:
//		int                                                NewIconY                                                   (Parm)
void UEFUISlotData::SetIconY(int NewIconY)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetIconY");

	UEFUISlotData_SetIconY_Params params {};
	params.NewIconY = NewIconY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.GetIconY
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFUISlotData::GetIconY()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetIconY");

	UEFUISlotData_GetIconY_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetIconX
//		Flags  -> ()
// Parameters:
//		int                                                NewIconX                                                   (Parm)
void UEFUISlotData::SetIconX(int NewIconX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetIconX");

	UEFUISlotData_SetIconX_Params params {};
	params.NewIconX = NewIconX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.GetIconX
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFUISlotData::GetIconX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetIconX");

	UEFUISlotData_GetIconX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetIconCount
//		Flags  -> ()
// Parameters:
//		int                                                NewIconIndex                                               (Parm)
void UEFUISlotData::SetIconCount(int NewIconIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetIconCount");

	UEFUISlotData_SetIconCount_Params params {};
	params.NewIconIndex = NewIconIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.GetIconCount
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFUISlotData::GetIconCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetIconCount");

	UEFUISlotData_GetIconCount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetIconPath
//		Flags  -> ()
// Parameters:
//		struct FString                                     NewIconPath                                                (Parm, NeedCtorLink)
void UEFUISlotData::SetIconPath(const struct FString& NewIconPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetIconPath");

	UEFUISlotData_SetIconPath_Params params {};
	params.NewIconPath = NewIconPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.GetIconPath
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UEFUISlotData::GetIconPath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetIconPath");

	UEFUISlotData_GetIconPath_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetWindowType
//		Flags  -> ()
// Parameters:
//		int                                                NewWindowType                                              (Parm)
void UEFUISlotData::SetWindowType(int NewWindowType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetWindowType");

	UEFUISlotData_SetWindowType_Params params {};
	params.NewWindowType = NewWindowType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.GetWindowType
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFUISlotData::GetWindowType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetWindowType");

	UEFUISlotData_GetWindowType_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetSlotIndex
//		Flags  -> ()
// Parameters:
//		int                                                NewSlotIndex                                               (Parm)
void UEFUISlotData::SetSlotIndex(int NewSlotIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetSlotIndex");

	UEFUISlotData_SetSlotIndex_Params params {};
	params.NewSlotIndex = NewSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.GetSlotIndex
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFUISlotData::GetSlotIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetSlotIndex");

	UEFUISlotData_GetSlotIndex_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetBindID
//		Flags  -> ()
// Parameters:
//		struct FString                                     NewSlotID                                                  (Parm, NeedCtorLink)
void UEFUISlotData::SetBindID(const struct FString& NewSlotID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetBindID");

	UEFUISlotData_SetBindID_Params params {};
	params.NewSlotID = NewSlotID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.GetBindID
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UEFUISlotData::GetBindID()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetBindID");

	UEFUISlotData_GetBindID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetSlotType
//		Flags  -> ()
// Parameters:
//		int                                                NewSlotType                                                (Parm)
void UEFUISlotData::SetSlotType(int NewSlotType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetSlotType");

	UEFUISlotData_SetSlotType_Params params {};
	params.NewSlotType = NewSlotType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.GetSlotType
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFUISlotData::GetSlotType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.GetSlotType");

	UEFUISlotData_GetSlotType_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetIconData_New
//		Flags  -> ()
// Parameters:
//		int                                                SlotType                                                   (Parm)
//		int                                                SlotIndex                                                  (Parm)
//		struct FString                                     BindID                                                     (Parm, NeedCtorLink)
//		struct FString                                     IconKey                                                    (Parm, NeedCtorLink)
//		TEnumAsByte<EFGame_EItemGrade>                     eItemGrade                                                 (Parm)
//		int                                                TableID                                                    (OptionalParm, Parm)
//		int                                                IconCount                                                  (OptionalParm, Parm)
//		bool                                               bTrash                                                     (OptionalParm, Parm)
//		bool                                               bTemporary                                                 (OptionalParm, Parm)
void UEFUISlotData::SetIconData_New(int SlotType, int SlotIndex, const struct FString& BindID, const struct FString& IconKey, TEnumAsByte<EFGame_EItemGrade> eItemGrade, int TableID, int IconCount, bool bTrash, bool bTemporary)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetIconData_New");

	UEFUISlotData_SetIconData_New_Params params {};
	params.SlotType = SlotType;
	params.SlotIndex = SlotIndex;
	params.BindID = BindID;
	params.IconKey = IconKey;
	params.eItemGrade = eItemGrade;
	params.TableID = TableID;
	params.IconCount = IconCount;
	params.bTrash = bTrash;
	params.bTemporary = bTemporary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetIconData
//		Flags  -> ()
// Parameters:
//		int                                                SlotType                                                   (Parm)
//		int                                                SlotIndex                                                  (Parm)
//		struct FString                                     BindID                                                     (Parm, NeedCtorLink)
//		struct FString                                     IconPath                                                   (Parm, NeedCtorLink)
//		int                                                IconIndex                                                  (Parm)
//		TEnumAsByte<EFGame_EItemGrade>                     eItemGrade                                                 (Parm)
//		int                                                TableID                                                    (OptionalParm, Parm)
//		int                                                IconCount                                                  (OptionalParm, Parm)
//		bool                                               bTrash                                                     (OptionalParm, Parm)
//		bool                                               bTemporary                                                 (OptionalParm, Parm)
//		struct FString                                     Tooltipdata                                                (OptionalParm, Parm, NeedCtorLink)
void UEFUISlotData::SetIconData(int SlotType, int SlotIndex, const struct FString& BindID, const struct FString& IconPath, int IconIndex, TEnumAsByte<EFGame_EItemGrade> eItemGrade, int TableID, int IconCount, bool bTrash, bool bTemporary, const struct FString& Tooltipdata)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetIconData");

	UEFUISlotData_SetIconData_Params params {};
	params.SlotType = SlotType;
	params.SlotIndex = SlotIndex;
	params.BindID = BindID;
	params.IconPath = IconPath;
	params.IconIndex = IconIndex;
	params.eItemGrade = eItemGrade;
	params.TableID = TableID;
	params.IconCount = IconCount;
	params.bTrash = bTrash;
	params.bTemporary = bTemporary;
	params.Tooltipdata = Tooltipdata;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetImageData_New
//		Flags  -> ()
// Parameters:
//		int                                                SlotType                                                   (Parm)
//		int                                                SlotIndex                                                  (Parm)
//		struct FString                                     BindID                                                     (Parm, NeedCtorLink)
//		struct FString                                     IconKey                                                    (Parm, NeedCtorLink)
//		int                                                TableID                                                    (OptionalParm, Parm)
void UEFUISlotData::SetImageData_New(int SlotType, int SlotIndex, const struct FString& BindID, const struct FString& IconKey, int TableID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetImageData_New");

	UEFUISlotData_SetImageData_New_Params params {};
	params.SlotType = SlotType;
	params.SlotIndex = SlotIndex;
	params.BindID = BindID;
	params.IconKey = IconKey;
	params.TableID = TableID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFUISlotData.SetImageData
//		Flags  -> ()
// Parameters:
//		int                                                SlotType                                                   (Parm)
//		int                                                SlotIndex                                                  (Parm)
//		struct FString                                     BindID                                                     (Parm, NeedCtorLink)
//		struct FString                                     IconPath                                                   (Parm, NeedCtorLink)
//		int                                                IconIndex                                                  (Parm)
//		int                                                TableID                                                    (OptionalParm, Parm)
void UEFUISlotData::SetImageData(int SlotType, int SlotIndex, const struct FString& BindID, const struct FString& IconPath, int IconIndex, int TableID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFUISlotData.SetImageData");

	UEFUISlotData_SetImageData_Params params {};
	params.SlotType = SlotType;
	params.SlotIndex = SlotIndex;
	params.BindID = BindID;
	params.IconPath = IconPath;
	params.IconIndex = IconIndex;
	params.TableID = TableID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.StopAfterImageEffect
//		Flags  -> ()
// Parameters:
//		bool                                               bForceRemoveAllChildren                                    (Parm)
void AEFPawn::StopAfterImageEffect(bool bForceRemoveAllChildren)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.StopAfterImageEffect");

	AEFPawn_StopAfterImageEffect_Params params {};
	params.bForceRemoveAllChildren = bForceRemoveAllChildren;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.StartAfterImageEffect
//		Flags  -> ()
// Parameters:
//		struct FEFCharacterAfterImageEffectInfo            EffectParams                                               (Const, Parm, OutParm)
void AEFPawn::StartAfterImageEffect(struct FEFCharacterAfterImageEffectInfo* EffectParams)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.StartAfterImageEffect");

	AEFPawn_StartAfterImageEffect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EffectParams != nullptr)
		*EffectParams = params.EffectParams;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.GetAnimTrailParticleSystem
//		Flags  -> ()
// Parameters:
//		class UAnimNotify_Trails*                          AnimNotifyData                                             (Const, Parm)
//		class UParticleSystem*                             ReturnValue                                                (Parm, OutParm, ReturnParm)
class UParticleSystem* AEFPawn::GetAnimTrailParticleSystem(class UAnimNotify_Trails* AnimNotifyData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.GetAnimTrailParticleSystem");

	AEFPawn_GetAnimTrailParticleSystem_Params params {};
	params.AnimNotifyData = AnimNotifyData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.ApplyFluidSurfaceContinuousForce
//		Flags  -> ()
// Parameters:
//		class AFluidSurfaceActor*                          Fluid                                                      (Parm)
void AEFPawn::ApplyFluidSurfaceContinuousForce(class AFluidSurfaceActor* Fluid)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.ApplyFluidSurfaceContinuousForce");

	AEFPawn_ApplyFluidSurfaceContinuousForce_Params params {};
	params.Fluid = Fluid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.ApplyFluidSurfaceImpact
//		Flags  -> ()
// Parameters:
//		class AFluidSurfaceActor*                          Fluid                                                      (Parm)
//		struct FVector                                     HitLocation                                                (Const, Parm, OutParm)
void AEFPawn::ApplyFluidSurfaceImpact(class AFluidSurfaceActor* Fluid, struct FVector* HitLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.ApplyFluidSurfaceImpact");

	AEFPawn_ApplyFluidSurfaceImpact_Params params {};
	params.Fluid = Fluid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.NotifyChangedBase
//		Flags  -> ()
void AEFPawn::NotifyChangedBase()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.NotifyChangedBase");

	AEFPawn_NotifyChangedBase_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.BaseChange
//		Flags  -> ()
void AEFPawn::BaseChange()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.BaseChange");

	AEFPawn_BaseChange_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.MAT_FinishAnimControl
//		Flags  -> ()
// Parameters:
//		class UInterpGroup*                                InInterpGroup                                              (Parm)
void AEFPawn::MAT_FinishAnimControl(class UInterpGroup* InInterpGroup)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.MAT_FinishAnimControl");

	AEFPawn_MAT_FinishAnimControl_Params params {};
	params.InInterpGroup = InInterpGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.MAT_BeginAnimControl
//		Flags  -> ()
// Parameters:
//		class UInterpGroup*                                InInterpGroup                                              (Parm)
void AEFPawn::MAT_BeginAnimControl(class UInterpGroup* InInterpGroup)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.MAT_BeginAnimControl");

	AEFPawn_MAT_BeginAnimControl_Params params {};
	params.InInterpGroup = InInterpGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.InterpolationFinished
//		Flags  -> ()
// Parameters:
//		class USeqAct_Interp*                              InterpAction                                               (Parm)
void AEFPawn::InterpolationFinished(class USeqAct_Interp* InterpAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.InterpolationFinished");

	AEFPawn_InterpolationFinished_Params params {};
	params.InterpAction = InterpAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.InterpolationStarted
//		Flags  -> ()
// Parameters:
//		class USeqAct_Interp*                              InterpAction                                               (Parm)
//		class UInterpGroupInst*                            GroupInst                                                  (Parm)
void AEFPawn::InterpolationStarted(class USeqAct_Interp* InterpAction, class UInterpGroupInst* GroupInst)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.InterpolationStarted");

	AEFPawn_InterpolationStarted_Params params {};
	params.InterpAction = InterpAction;
	params.GroupInst = GroupInst;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.RigidBodyCollision
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         HitComponent                                               (Parm, EditInline)
//		class UPrimitiveComponent*                         OtherComponent                                             (Parm, EditInline)
//		struct FCollisionImpactData                        RigidCollisionData                                         (Const, Parm, OutParm, NeedCtorLink)
//		int                                                ContactIndex                                               (Parm)
void AEFPawn::RigidBodyCollision(class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, struct FCollisionImpactData* RigidCollisionData, int ContactIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.RigidBodyCollision");

	AEFPawn_RigidBodyCollision_Params params {};
	params.HitComponent = HitComponent;
	params.OtherComponent = OtherComponent;
	params.ContactIndex = ContactIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RigidCollisionData != nullptr)
		*RigidCollisionData = params.RigidCollisionData;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.DoKismetAttachment
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Attachment                                                 (Parm)
//		class USeqAct_AttachToActor*                       Action                                                     (Parm)
void AEFPawn::DoKismetAttachment(class AActor* Attachment, class USeqAct_AttachToActor* Action)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.DoKismetAttachment");

	AEFPawn_DoKismetAttachment_Params params {};
	params.Attachment = Attachment;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.AttachmentCameraActor
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Attachment                                                 (Parm)
//		struct FVector                                     RelativeViewOffset                                         (Parm)
void AEFPawn::AttachmentCameraActor(class AActor* Attachment, const struct FVector& RelativeViewOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.AttachmentCameraActor");

	AEFPawn_AttachmentCameraActor_Params params {};
	params.Attachment = Attachment;
	params.RelativeViewOffset = RelativeViewOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.GetGravityZ
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float AEFPawn::GetGravityZ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.GetGravityZ");

	AEFPawn_GetGravityZ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.OnForceFieldDestroy
//		Flags  -> ()
// Parameters:
//		class UNxForceFieldComponent*                      FFC                                                        (Parm, EditInline)
void AEFPawn::OnForceFieldDestroy(class UNxForceFieldComponent* FFC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.OnForceFieldDestroy");

	AEFPawn_OnForceFieldDestroy_Params params {};
	params.FFC = FFC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.CreateForceField
//		Flags  -> ()
// Parameters:
//		class UAnimNotify_ForceField*                      AnimNotifyData                                             (Const, Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AEFPawn::CreateForceField(class UAnimNotify_ForceField* AnimNotifyData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.CreateForceField");

	AEFPawn_CreateForceField_Params params {};
	params.AnimNotifyData = AnimNotifyData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.ExplodeActor
//		Flags  -> ()
// Parameters:
//		class AActor*                                      ExplodeActor                                               (Parm)
void AEFPawn::ExplodeActor(class AActor* ExplodeActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.ExplodeActor");

	AEFPawn_ExplodeActor_Params params {};
	params.ExplodeActor = ExplodeActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.FinishDyingDelay
//		Flags  -> ()
void AEFPawn::FinishDyingDelay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.FinishDyingDelay");

	AEFPawn_FinishDyingDelay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.SetDefaultStateColor
//		Flags  -> ()
void AEFPawn::SetDefaultStateColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.SetDefaultStateColor");

	AEFPawn_SetDefaultStateColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.SetStateColor
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                StateColor                                                 (Parm)
//		float                                              fIntensity                                                 (OptionalParm, Parm)
void AEFPawn::SetStateColor(const struct FLinearColor& StateColor, float fIntensity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.SetStateColor");

	AEFPawn_SetStateColor_Params params {};
	params.StateColor = StateColor;
	params.fIntensity = fIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.AttackFreezeAnim
//		Flags  -> ()
// Parameters:
//		float                                              PauseTime                                                  (OptionalParm, Parm)
void AEFPawn::AttackFreezeAnim(float PauseTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.AttackFreezeAnim");

	AEFPawn_AttackFreezeAnim_Params params {};
	params.PauseTime = PauseTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.AttackContinueAnim
//		Flags  -> ()
void AEFPawn::AttackContinueAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.AttackContinueAnim");

	AEFPawn_AttackContinueAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.SetPPOutlineWidth
//		Flags  -> ()
// Parameters:
//		float                                              Width                                                      (Parm)
void AEFPawn::SetPPOutlineWidth(float Width)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.SetPPOutlineWidth");

	AEFPawn_SetPPOutlineWidth_Params params {};
	params.Width = Width;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.SetPPOutlineColor
//		Flags  -> ()
// Parameters:
//		struct FVector                                     InColor                                                    (Parm)
void AEFPawn::SetPPOutlineColor(const struct FVector& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.SetPPOutlineColor");

	AEFPawn_SetPPOutlineColor_Params params {};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.SetPPOutline
//		Flags  -> ()
// Parameters:
//		bool                                               bPPOutline                                                 (Parm)
void AEFPawn::SetPPOutline(bool bPPOutline)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.SetPPOutline");

	AEFPawn_SetPPOutline_Params params {};
	params.bPPOutline = bPPOutline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.SetCloakMode
//		Flags  -> ()
// Parameters:
//		bool                                               bEnable                                                    (Parm)
//		float                                              CloakAlpha                                                 (Parm)
//		bool                                               bRimLight                                                  (Parm)
void AEFPawn::SetCloakMode(bool bEnable, float CloakAlpha, bool bRimLight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.SetCloakMode");

	AEFPawn_SetCloakMode_Params params {};
	params.bEnable = bEnable;
	params.CloakAlpha = CloakAlpha;
	params.bRimLight = bRimLight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.SetOccludedOutlineColor
//		Flags  -> ()
// Parameters:
//		struct FVector                                     InColor                                                    (Parm)
//		float                                              InScale                                                    (Parm)
void AEFPawn::SetOccludedOutlineColor(const struct FVector& InColor, float InScale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.SetOccludedOutlineColor");

	AEFPawn_SetOccludedOutlineColor_Params params {};
	params.InColor = InColor;
	params.InScale = InScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.SetOccludedOutline
//		Flags  -> ()
// Parameters:
//		bool                                               bOutline                                                   (Parm)
//		float                                              Width                                                      (OptionalParm, Parm)
void AEFPawn::SetOccludedOutline(bool bOutline, float Width)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.SetOccludedOutline");

	AEFPawn_SetOccludedOutline_Params params {};
	params.bOutline = bOutline;
	params.Width = Width;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.OutsideWorldBounds
//		Flags  -> ()
void AEFPawn::OutsideWorldBounds()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.OutsideWorldBounds");

	AEFPawn_OutsideWorldBounds_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.FellOutOfWorld
//		Flags  -> ()
// Parameters:
//		class UClass*                                      dmgType                                                    (Parm)
void AEFPawn::FellOutOfWorld(class UClass* dmgType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.FellOutOfWorld");

	AEFPawn_FellOutOfWorld_Params params {};
	params.dmgType = dmgType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.Landed
//		Flags  -> ()
// Parameters:
//		struct FVector                                     HitNormal                                                  (Parm)
//		class AActor*                                      FloorActor                                                 (Parm)
void AEFPawn::Landed(const struct FVector& HitNormal, class AActor* FloorActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.Landed");

	AEFPawn_Landed_Params params {};
	params.HitNormal = HitNormal;
	params.FloorActor = FloorActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.Falling
//		Flags  -> ()
void AEFPawn::Falling()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.Falling");

	AEFPawn_Falling_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.SetDesiredRotation
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    TargetDesiredRotation                                      (Parm)
//		bool                                               InLockDesiredRotation                                      (OptionalParm, Parm)
//		bool                                               InUnlockWhenReached                                        (OptionalParm, Parm)
//		float                                              InterpolationTime                                          (OptionalParm, Parm)
//		bool                                               bResetRotationRate                                         (OptionalParm, Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AEFPawn::SetDesiredRotation(const struct FRotator& TargetDesiredRotation, bool InLockDesiredRotation, bool InUnlockWhenReached, float InterpolationTime, bool bResetRotationRate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.SetDesiredRotation");

	AEFPawn_SetDesiredRotation_Params params {};
	params.TargetDesiredRotation = TargetDesiredRotation;
	params.InLockDesiredRotation = InLockDesiredRotation;
	params.InUnlockWhenReached = InUnlockWhenReached;
	params.InterpolationTime = InterpolationTime;
	params.bResetRotationRate = bResetRotationRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.OnParticleSystemFinished
//		Flags  -> ()
// Parameters:
//		class UParticleSystemComponent*                    PSC                                                        (Parm, EditInline)
void AEFPawn::OnParticleSystemFinished(class UParticleSystemComponent* PSC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.OnParticleSystemFinished");

	AEFPawn_OnParticleSystemFinished_Params params {};
	params.PSC = PSC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.PostInitAll
//		Flags  -> ()
void AEFPawn::PostInitAll()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.PostInitAll");

	AEFPawn_PostInitAll_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.ClearAttachedPSIIndex
//		Flags  -> ()
void AEFPawn::ClearAttachedPSIIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.ClearAttachedPSIIndex");

	AEFPawn_ClearAttachedPSIIndex_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.Destroyed
//		Flags  -> ()
void AEFPawn::Destroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.Destroyed");

	AEFPawn_Destroyed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.GetDefaultCameraMode
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           RequestedBy                                                (Parm)
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FName AEFPawn::GetDefaultCameraMode(class APlayerController* RequestedBy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.GetDefaultCameraMode");

	AEFPawn_GetDefaultCameraMode_Params params {};
	params.RequestedBy = RequestedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.GetObjectCameraStyle
//		Flags  -> ()
// Parameters:
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FName AEFPawn::GetObjectCameraStyle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.GetObjectCameraStyle");

	AEFPawn_GetObjectCameraStyle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.EncroachingOn
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Other                                                      (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AEFPawn::EncroachingOn(class AActor* Other)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.EncroachingOn");

	AEFPawn_EncroachingOn_Params params {};
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPawn.EncroachedBy
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Other                                                      (Parm)
void AEFPawn::EncroachedBy(class AActor* Other)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPawn.EncroachedBy");

	AEFPawn_EncroachedBy_Params params {};
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayer.OnUpdatePropertyDrawScale
//		Flags  -> ()
void AEFPlayer::OnUpdatePropertyDrawScale()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayer.OnUpdatePropertyDrawScale");

	AEFPlayer_OnUpdatePropertyDrawScale_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayer.OnUpdatePropertyDrawScale3D
//		Flags  -> ()
void AEFPlayer::OnUpdatePropertyDrawScale3D()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayer.OnUpdatePropertyDrawScale3D");

	AEFPlayer_OnUpdatePropertyDrawScale3D_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTransit.EncroachingOn
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Other                                                      (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AEFTransit::EncroachingOn(class AActor* Other)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTransit.EncroachingOn");

	AEFTransit_EncroachingOn_Params params {};
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerController.ModifyOnSetCameraTargetBlendTime
//		Flags  -> ()
// Parameters:
//		class AActor*                                      inEventOriginator                                          (Parm)
//		class AActor*                                      inRealCameraTarget                                         (Parm)
//		float                                              outBlendTime                                               (Parm, OutParm)
void AEFPlayerController::ModifyOnSetCameraTargetBlendTime(class AActor* inEventOriginator, class AActor* inRealCameraTarget, float* outBlendTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.ModifyOnSetCameraTargetBlendTime");

	AEFPlayerController_ModifyOnSetCameraTargetBlendTime_Params params {};
	params.inEventOriginator = inEventOriginator;
	params.inRealCameraTarget = inRealCameraTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (outBlendTime != nullptr)
		*outBlendTime = params.outBlendTime;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerController.ConsoleCommand
//		Flags  -> ()
// Parameters:
//		struct FString                                     Command                                                    (Parm, NeedCtorLink)
//		bool                                               bWriteToLog                                                (OptionalParm, Parm)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString AEFPlayerController::ConsoleCommand(const struct FString& Command, bool bWriteToLog)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.ConsoleCommand");

	AEFPlayerController_ConsoleCommand_Params params {};
	params.Command = Command;
	params.bWriteToLog = bWriteToLog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerController.ProcessCinematic
//		Flags  -> ()
// Parameters:
//		bool                                               bInCinematicMode                                           (Parm)
void AEFPlayerController::ProcessCinematic(bool bInCinematicMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.ProcessCinematic");

	AEFPlayerController_ProcessCinematic_Params params {};
	params.bInCinematicMode = bInCinematicMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerController.GetPlayerInitPosition
//		Flags  -> ()
// Parameters:
//		struct FVector                                     out_Location                                               (Parm, OutParm)
//		struct FRotator                                    out_Rotation                                               (Parm, OutParm)
void AEFPlayerController::GetPlayerInitPosition(struct FVector* out_Location, struct FRotator* out_Rotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.GetPlayerInitPosition");

	AEFPlayerController_GetPlayerInitPosition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (out_Location != nullptr)
		*out_Location = params.out_Location;
	if (out_Rotation != nullptr)
		*out_Rotation = params.out_Rotation;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerController.GetPlayerViewPointQuat
//		Flags  -> ()
// Parameters:
//		struct FVector                                     out_Location                                               (Parm, OutParm)
//		struct FQuat                                       out_Quaternion                                             (Parm, OutParm)
void AEFPlayerController::GetPlayerViewPointQuat(struct FVector* out_Location, struct FQuat* out_Quaternion)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.GetPlayerViewPointQuat");

	AEFPlayerController_GetPlayerViewPointQuat_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (out_Location != nullptr)
		*out_Location = params.out_Location;
	if (out_Quaternion != nullptr)
		*out_Quaternion = params.out_Quaternion;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerController.GetPlayerViewPoint
//		Flags  -> ()
// Parameters:
//		struct FVector                                     out_Location                                               (Parm, OutParm)
//		struct FRotator                                    out_Rotation                                               (Parm, OutParm)
void AEFPlayerController::GetPlayerViewPoint(struct FVector* out_Location, struct FRotator* out_Rotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.GetPlayerViewPoint");

	AEFPlayerController_GetPlayerViewPoint_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (out_Location != nullptr)
		*out_Location = params.out_Location;
	if (out_Rotation != nullptr)
		*out_Rotation = params.out_Rotation;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerController.DisplayDebug
//		Flags  -> ()
// Parameters:
//		class AHUD*                                        HUD                                                        (Parm)
//		float                                              out_YL                                                     (Parm, OutParm)
//		float                                              out_YPos                                                   (Parm, OutParm)
void AEFPlayerController::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.DisplayDebug");

	AEFPlayerController_DisplayDebug_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerController.DrawHUD
//		Flags  -> ()
// Parameters:
//		class AHUD*                                        H                                                          (Parm)
void AEFPlayerController::DrawHUD(class AHUD* H)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.DrawHUD");

	AEFPlayerController_DrawHUD_Params params {};
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerController.SpawnDefaultHUD
//		Flags  -> ()
void AEFPlayerController::SpawnDefaultHUD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.SpawnDefaultHUD");

	AEFPlayerController_SpawnDefaultHUD_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerController.IsStopMovieLoading
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AEFPlayerController::IsStopMovieLoading()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.IsStopMovieLoading");

	AEFPlayerController_IsStopMovieLoading_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerController.PlayerTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (Parm)
void AEFPlayerController::PlayerTick(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.PlayerTick");

	AEFPlayerController_PlayerTick_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerController.UpdateRotation
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (Parm)
void AEFPlayerController::UpdateRotation(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.UpdateRotation");

	AEFPlayerController_UpdateRotation_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerController.StopMovieLoading
//		Flags  -> ()
void AEFPlayerController::StopMovieLoading()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.StopMovieLoading");

	AEFPlayerController_StopMovieLoading_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerController.Destroyed
//		Flags  -> ()
void AEFPlayerController::Destroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.Destroyed");

	AEFPlayerController_Destroyed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerController.PostBeginPlay
//		Flags  -> ()
void AEFPlayerController::PostBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.PostBeginPlay");

	AEFPlayerController_PostBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerController.InitInputSystem
//		Flags  -> ()
void AEFPlayerController::InitInputSystem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerController.InitInputSystem");

	AEFPlayerController_InitInputSystem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerInput.DefaultPositionControlPanel
//		Flags  -> ()
void UEFPlayerInput::DefaultPositionControlPanel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerInput.DefaultPositionControlPanel");

	UEFPlayerInput_DefaultPositionControlPanel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerInput.FocusControlPanel
//		Flags  -> ()
void UEFPlayerInput::FocusControlPanel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerInput.FocusControlPanel");

	UEFPlayerInput_FocusControlPanel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerInput.ToggleControlPanel
//		Flags  -> ()
void UEFPlayerInput::ToggleControlPanel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerInput.ToggleControlPanel");

	UEFPlayerInput_ToggleControlPanel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerInput.OnMouseScrollDown
//		Flags  -> ()
void UEFPlayerInput::OnMouseScrollDown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerInput.OnMouseScrollDown");

	UEFPlayerInput_OnMouseScrollDown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerInput.OnMouseScrollUp
//		Flags  -> ()
void UEFPlayerInput::OnMouseScrollUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerInput.OnMouseScrollUp");

	UEFPlayerInput_OnMouseScrollUp_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerInput.PlayerInput
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (Parm)
void UEFPlayerInput::PlayerInput(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerInput.PlayerInput");

	UEFPlayerInput_PlayerInput_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerInput.InputAxis
//		Flags  -> ()
// Parameters:
//		int                                                ControllerId                                               (Parm)
//		struct FName                                       Key                                                        (Parm)
//		float                                              Delta                                                      (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		bool                                               bGamepad                                                   (OptionalParm, Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFPlayerInput::InputAxis(int ControllerId, const struct FName& Key, float Delta, float DeltaTime, bool bGamepad)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerInput.InputAxis");

	UEFPlayerInput_InputAxis_Params params {};
	params.ControllerId = ControllerId;
	params.Key = Key;
	params.Delta = Delta;
	params.DeltaTime = DeltaTime;
	params.bGamepad = bGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFProjectile.ClearAttachedPSIIndex
//		Flags  -> ()
void AEFProjectile::ClearAttachedPSIIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFProjectile.ClearAttachedPSIIndex");

	AEFProjectile_ClearAttachedPSIIndex_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFProjectile.Destroyed
//		Flags  -> ()
void AEFProjectile::Destroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFProjectile.Destroyed");

	AEFProjectile_Destroyed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFProjectile.BaseChange
//		Flags  -> ()
void AEFProjectile::BaseChange()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFProjectile.BaseChange");

	AEFProjectile_BaseChange_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFProjectile.NotifyBaseChange
//		Flags  -> ()
void AEFProjectile::NotifyBaseChange()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFProjectile.NotifyBaseChange");

	AEFProjectile_NotifyBaseChange_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFProjectile.ProcessTouch
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Other                                                      (Parm)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, EditInline)
//		struct FVector                                     HitLocation                                                (Parm)
//		struct FVector                                     HitNormal                                                  (Parm)
void AEFProjectile::ProcessTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFProjectile.ProcessTouch");

	AEFProjectile_ProcessTouch_Params params {};
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSkeletalMeshActor.ClearAttachedPSIIndex
//		Flags  -> ()
void AEFSkeletalMeshActor::ClearAttachedPSIIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSkeletalMeshActor.ClearAttachedPSIIndex");

	AEFSkeletalMeshActor_ClearAttachedPSIIndex_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSkeletalMeshActor.NotifyChangedBase
//		Flags  -> ()
void AEFSkeletalMeshActor::NotifyChangedBase()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSkeletalMeshActor.NotifyChangedBase");

	AEFSkeletalMeshActor_NotifyChangedBase_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSkeletalMeshActor.BaseChange
//		Flags  -> ()
void AEFSkeletalMeshActor::BaseChange()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSkeletalMeshActor.BaseChange");

	AEFSkeletalMeshActor_BaseChange_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSkeletalMeshActor.Destroyed
//		Flags  -> ()
void AEFSkeletalMeshActor::Destroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSkeletalMeshActor.Destroyed");

	AEFSkeletalMeshActor_Destroyed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFStaticMeshActor.ClearAttachedPSIIndex
//		Flags  -> ()
void AEFStaticMeshActor::ClearAttachedPSIIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFStaticMeshActor.ClearAttachedPSIIndex");

	AEFStaticMeshActor_ClearAttachedPSIIndex_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFStaticMeshActor.NotifyChangedBase
//		Flags  -> ()
void AEFStaticMeshActor::NotifyChangedBase()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFStaticMeshActor.NotifyChangedBase");

	AEFStaticMeshActor_NotifyChangedBase_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFStaticMeshActor.BaseChange
//		Flags  -> ()
void AEFStaticMeshActor::BaseChange()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFStaticMeshActor.BaseChange");

	AEFStaticMeshActor_BaseChange_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFStaticMeshActor.Destroyed
//		Flags  -> ()
void AEFStaticMeshActor::Destroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFStaticMeshActor.Destroyed");

	AEFStaticMeshActor_Destroyed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGameEngine.ShowLineChecks
//		Flags  -> ()
// Parameters:
//		bool                                               bLineCheck                                                 (Parm)
//		bool                                               bExtentLineCheck                                           (Parm)
void UEFGameEngine::ShowLineChecks(bool bLineCheck, bool bExtentLineCheck)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGameEngine.ShowLineChecks");

	UEFGameEngine_ShowLineChecks_Params params {};
	params.bLineCheck = bLineCheck;
	params.bExtentLineCheck = bExtentLineCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFMapInfo.SaveCameraValue
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               Camera                                                     (Parm)
void UEFMapInfo::SaveCameraValue(class UEFCameraBase* Camera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFMapInfo.SaveCameraValue");

	UEFMapInfo_SaveCameraValue_Params params {};
	params.Camera = Camera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFMapInfo.LoadCameraValue
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               Camera                                                     (Parm)
void UEFMapInfo::LoadCameraValue(class UEFCameraBase* Camera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFMapInfo.LoadCameraValue");

	UEFMapInfo_LoadCameraValue_Params params {};
	params.Camera = Camera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraBase.GetCurrentFOV
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UEFCameraBase::GetCurrentFOV()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.GetCurrentFOV");

	UEFCameraBase_GetCurrentFOV_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraBase.GetDefaultFOV
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UEFCameraBase::GetDefaultFOV()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.GetDefaultFOV");

	UEFCameraBase_GetDefaultFOV_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraBase.SetDefaultFOV
//		Flags  -> ()
// Parameters:
//		float                                              FOV                                                        (Parm)
void UEFCameraBase::SetDefaultFOV(float FOV)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.SetDefaultFOV");

	UEFCameraBase_SetDefaultFOV_Params params {};
	params.FOV = FOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraBase.DisplayDebug
//		Flags  -> ()
// Parameters:
//		class AHUD*                                        HUD                                                        (Parm)
//		float                                              out_YL                                                     (Parm, OutParm)
//		float                                              out_YPos                                                   (Parm, OutParm)
void UEFCameraBase::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.DisplayDebug");

	UEFCameraBase_DisplayDebug_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraBase.UpdateRotation
//		Flags  -> ()
void UEFCameraBase::UpdateRotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.UpdateRotation");

	UEFCameraBase_UpdateRotation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraBase.ProcessBlendingStyle
//		Flags  -> ()
// Parameters:
//		struct FTPOV                                       OutPOV                                                     (Parm, OutParm)
//		float                                              InDeltaSeconds                                             (Parm)
void UEFCameraBase::ProcessBlendingStyle(struct FTPOV* OutPOV, float InDeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.ProcessBlendingStyle");

	UEFCameraBase_ProcessBlendingStyle_Params params {};
	params.InDeltaSeconds = InDeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPOV != nullptr)
		*OutPOV = params.OutPOV;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraBase.ActivateBlendingStyle
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               InOldCamera                                                (Parm)
void UEFCameraBase::ActivateBlendingStyle(class UEFCameraBase* InOldCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.ActivateBlendingStyle");

	UEFCameraBase_ActivateBlendingStyle_Params params {};
	params.InOldCamera = InOldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraBase.SetCurrentCameraCut
//		Flags  -> ()
// Parameters:
//		struct FVector                                     InPos                                                      (Parm)
//		float                                              InLimitDistSeq                                             (Parm)
void UEFCameraBase::SetCurrentCameraCut(const struct FVector& InPos, float InLimitDistSeq)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.SetCurrentCameraCut");

	UEFCameraBase_SetCurrentCameraCut_Params params {};
	params.InPos = InPos;
	params.InLimitDistSeq = InLimitDistSeq;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraBase.SetContentsSettingTable
//		Flags  -> ()
// Parameters:
//		int                                                InTableId                                                  (Parm)
void UEFCameraBase::SetContentsSettingTable(int InTableId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.SetContentsSettingTable");

	UEFCameraBase_SetContentsSettingTable_Params params {};
	params.InTableId = InTableId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraBase.SetSettingTable
//		Flags  -> ()
// Parameters:
//		int                                                InTableId                                                  (Parm)
//		bool                                               InImmediateFlag                                            (OptionalParm, Parm)
void UEFCameraBase::SetSettingTable(int InTableId, bool InImmediateFlag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.SetSettingTable");

	UEFCameraBase_SetSettingTable_Params params {};
	params.InTableId = InTableId;
	params.InImmediateFlag = InImmediateFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraBase.InActivateSkeletalMeshForceLOD
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               InNextCamera                                               (Parm)
void UEFCameraBase::InActivateSkeletalMeshForceLOD(class UEFCameraBase* InNextCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.InActivateSkeletalMeshForceLOD");

	UEFCameraBase_InActivateSkeletalMeshForceLOD_Params params {};
	params.InNextCamera = InNextCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraBase.ActivateSkeletalMeshForceLOD
//		Flags  -> ()
void UEFCameraBase::ActivateSkeletalMeshForceLOD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.ActivateSkeletalMeshForceLOD");

	UEFCameraBase_ActivateSkeletalMeshForceLOD_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraBase.ChangeZoomStep
//		Flags  -> ()
// Parameters:
//		int                                                iStep                                                      (Parm)
void UEFCameraBase::ChangeZoomStep(int iStep)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.ChangeZoomStep");

	UEFCameraBase_ChangeZoomStep_Params params {};
	params.iStep = iStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraBase.CheckZoom
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFCameraBase::CheckZoom()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.CheckZoom");

	UEFCameraBase_CheckZoom_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraBase.ZoomOut
//		Flags  -> ()
void UEFCameraBase::ZoomOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.ZoomOut");

	UEFCameraBase_ZoomOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraBase.ZoomIn
//		Flags  -> ()
void UEFCameraBase::ZoomIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.ZoomIn");

	UEFCameraBase_ZoomIn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraBase.BecomeViewTarget
//		Flags  -> ()
// Parameters:
//		class AEFPlayerController*                         PC                                                         (Parm)
void UEFCameraBase::BecomeViewTarget(class AEFPlayerController* PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.BecomeViewTarget");

	UEFCameraBase_BecomeViewTarget_Params params {};
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraBase.UpdateCamera
//		Flags  -> ()
// Parameters:
//		class APawn*                                       P                                                          (Parm)
//		class AEFPlayerCamera*                             CameraActor                                                (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		struct FTViewTarget                                OutVT                                                      (Parm, OutParm)
void UEFCameraBase::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.UpdateCamera");

	UEFCameraBase_UpdateCamera_Params params {};
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraBase.ResetInterpolation
//		Flags  -> ()
void UEFCameraBase::ResetInterpolation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.ResetInterpolation");

	UEFCameraBase_ResetInterpolation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraBase.OnBecomeInActive
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               NewCamera                                                  (Parm)
void UEFCameraBase::OnBecomeInActive(class UEFCameraBase* NewCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.OnBecomeInActive");

	UEFCameraBase_OnBecomeInActive_Params params {};
	params.NewCamera = NewCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraBase.OnBecomeActive
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               OldCamera                                                  (Parm)
void UEFCameraBase::OnBecomeActive(class UEFCameraBase* OldCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.OnBecomeActive");

	UEFCameraBase_OnBecomeActive_Params params {};
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraBase.Init
//		Flags  -> ()
void UEFCameraBase::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraBase.Init");

	UEFCameraBase_Init_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFBackViewCamera.UpdateCamera
//		Flags  -> ()
// Parameters:
//		class APawn*                                       P                                                          (Parm)
//		class AEFPlayerCamera*                             CameraActor                                                (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		struct FTViewTarget                                OutVT                                                      (Parm, OutParm)
void UEFBackViewCamera::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFBackViewCamera.UpdateCamera");

	UEFBackViewCamera_UpdateCamera_Params params {};
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSeqAct_NPCController.Update
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFSeqAct_NPCController::Update(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_NPCController.Update");

	UEFSeqAct_NPCController_Update_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSeqAct_NPCController.Activated
//		Flags  -> ()
void UEFSeqAct_NPCController::Activated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_NPCController.Activated");

	UEFSeqAct_NPCController_Activated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSeqAct_NPCController.BackupMainMovingState
//		Flags  -> ()
void UEFSeqAct_NPCController::BackupMainMovingState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_NPCController.BackupMainMovingState");

	UEFSeqAct_NPCController_BackupMainMovingState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSeqAct_NPCController.SetEventMoveCompleteProcess
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<EFGame_EUNM_SNPC_workCompletedState>   swState                                                    (Parm)
void UEFSeqAct_NPCController::SetEventMoveCompleteProcess(TEnumAsByte<EFGame_EUNM_SNPC_workCompletedState> swState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_NPCController.SetEventMoveCompleteProcess");

	UEFSeqAct_NPCController_SetEventMoveCompleteProcess_Params params {};
	params.swState = swState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSeqAct_NPCController.SetMoving
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (Parm)
void UEFSeqAct_NPCController::SetMoving(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_NPCController.SetMoving");

	UEFSeqAct_NPCController_SetMoving_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSeqAct_NPCController.SettingReady
//		Flags  -> ()
// Parameters:
//		struct FSNPC_MovingState                           CData                                                      (Parm, NeedCtorLink)
void UEFSeqAct_NPCController::SettingReady(const struct FSNPC_MovingState& CData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_NPCController.SettingReady");

	UEFSeqAct_NPCController_SettingReady_Params params {};
	params.CData = CData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSeqAct_NPCController.setPlayWaitAnimation
//		Flags  -> ()
// Parameters:
//		struct FString                                     aniName                                                    (Parm, NeedCtorLink)
//		bool                                               isLoop                                                     (Parm)
//		float                                              BlendTime                                                  (Parm)
//		bool                                               isRandomStart                                              (Parm)
void UEFSeqAct_NPCController::setPlayWaitAnimation(const struct FString& aniName, bool isLoop, float BlendTime, bool isRandomStart)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_NPCController.setPlayWaitAnimation");

	UEFSeqAct_NPCController_setPlayWaitAnimation_Params params {};
	params.aniName = aniName;
	params.isLoop = isLoop;
	params.BlendTime = BlendTime;
	params.isRandomStart = isRandomStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSeqAct_NPCController.setPlayAnimation
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<EFGame_ENUM_SNPC_PlayAnimationName>    aniEnumName                                                (Parm)
//		bool                                               isLoop                                                     (Parm)
//		float                                              BlendTime                                                  (Parm)
//		bool                                               isRandomStart                                              (Parm)
void UEFSeqAct_NPCController::setPlayAnimation(TEnumAsByte<EFGame_ENUM_SNPC_PlayAnimationName> aniEnumName, bool isLoop, float BlendTime, bool isRandomStart)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_NPCController.setPlayAnimation");

	UEFSeqAct_NPCController_setPlayAnimation_Params params {};
	params.aniEnumName = aniEnumName;
	params.isLoop = isLoop;
	params.BlendTime = BlendTime;
	params.isRandomStart = isRandomStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSeqAct_NPCController.GetAnimationName
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<EFGame_ENUM_SNPC_PlayAnimationName>    typAnim                                                    (Parm)
//		bool                                               isSet                                                      (Parm)
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FName UEFSeqAct_NPCController::GetAnimationName(TEnumAsByte<EFGame_ENUM_SNPC_PlayAnimationName> typAnim, bool isSet)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_NPCController.GetAnimationName");

	UEFSeqAct_NPCController_GetAnimationName_Params params {};
	params.typAnim = typAnim;
	params.isSet = isSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSeqAct_NPCController.initial
//		Flags  -> ()
void UEFSeqAct_NPCController::initial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_NPCController.initial");

	UEFSeqAct_NPCController_initial_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFChangePlayerCameraVolume.UnTouch
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Other                                                      (Parm)
void AEFChangePlayerCameraVolume::UnTouch(class AActor* Other)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFChangePlayerCameraVolume.UnTouch");

	AEFChangePlayerCameraVolume_UnTouch_Params params {};
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFChangePlayerCameraVolume.Touch
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Other                                                      (Parm)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, EditInline)
//		struct FVector                                     HitLocation                                                (Parm)
//		struct FVector                                     HitNormal                                                  (Parm)
void AEFChangePlayerCameraVolume::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFChangePlayerCameraVolume.Touch");

	AEFChangePlayerCameraVolume_Touch_Params params {};
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCustomizingCamera.UpdateCamera
//		Flags  -> ()
// Parameters:
//		class APawn*                                       P                                                          (Parm)
//		class AEFPlayerCamera*                             CameraActor                                                (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		struct FTViewTarget                                OutVT                                                      (Parm, OutParm)
void UEFCustomizingCamera::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCustomizingCamera.UpdateCamera");

	UEFCustomizingCamera_UpdateCamera_Params params {};
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCustomizingCamera.ZoomOut
//		Flags  -> ()
void UEFCustomizingCamera::ZoomOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCustomizingCamera.ZoomOut");

	UEFCustomizingCamera_ZoomOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCustomizingCamera.ZoomIn
//		Flags  -> ()
void UEFCustomizingCamera::ZoomIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCustomizingCamera.ZoomIn");

	UEFCustomizingCamera_ZoomIn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCustomizingCamera.Init
//		Flags  -> (Singular, Net, NetReliable, Simulated, Exec, Operator, Const, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, K2Override)
void UEFCustomizingCamera::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCustomizingCamera.Init");

	UEFCustomizingCamera_Init_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFEditorViewCamera.OnBecomeInActive
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               NewCamera                                                  (Parm)
void UEFEditorViewCamera::OnBecomeInActive(class UEFCameraBase* NewCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFEditorViewCamera.OnBecomeInActive");

	UEFEditorViewCamera_OnBecomeInActive_Params params {};
	params.NewCamera = NewCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFEditorViewCamera.OnBecomeActive
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               OldCamera                                                  (Parm)
void UEFEditorViewCamera::OnBecomeActive(class UEFCameraBase* OldCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFEditorViewCamera.OnBecomeActive");

	UEFEditorViewCamera_OnBecomeActive_Params params {};
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFEditorViewCamera.ZoomOut
//		Flags  -> ()
void UEFEditorViewCamera::ZoomOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFEditorViewCamera.ZoomOut");

	UEFEditorViewCamera_ZoomOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFEditorViewCamera.ZoomIn
//		Flags  -> ()
void UEFEditorViewCamera::ZoomIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFEditorViewCamera.ZoomIn");

	UEFEditorViewCamera_ZoomIn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFEditorViewCamera.UpdateCamera
//		Flags  -> ()
// Parameters:
//		class APawn*                                       P                                                          (Parm)
//		class AEFPlayerCamera*                             CameraActor                                                (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		struct FTViewTarget                                OutVT                                                      (Parm, OutParm)
void UEFEditorViewCamera::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFEditorViewCamera.UpdateCamera");

	UEFEditorViewCamera_UpdateCamera_Params params {};
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFFreeCamera.OnBecomeInActive
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               NewCamera                                                  (Parm)
void UEFFreeCamera::OnBecomeInActive(class UEFCameraBase* NewCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFFreeCamera.OnBecomeInActive");

	UEFFreeCamera_OnBecomeInActive_Params params {};
	params.NewCamera = NewCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFFreeCamera.OnBecomeActive
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               OldCamera                                                  (Parm)
void UEFFreeCamera::OnBecomeActive(class UEFCameraBase* OldCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFFreeCamera.OnBecomeActive");

	UEFFreeCamera_OnBecomeActive_Params params {};
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFFreeCamera.HideOwnerPlayer
//		Flags  -> ()
void UEFFreeCamera::HideOwnerPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFFreeCamera.HideOwnerPlayer");

	UEFFreeCamera_HideOwnerPlayer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFFreeCamera.ShowOwnerPlayer
//		Flags  -> ()
void UEFFreeCamera::ShowOwnerPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFFreeCamera.ShowOwnerPlayer");

	UEFFreeCamera_ShowOwnerPlayer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFFreeCamera.ZoomOut
//		Flags  -> ()
void UEFFreeCamera::ZoomOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFFreeCamera.ZoomOut");

	UEFFreeCamera_ZoomOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFFreeCamera.ZoomIn
//		Flags  -> ()
void UEFFreeCamera::ZoomIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFFreeCamera.ZoomIn");

	UEFFreeCamera_ZoomIn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFFreeCamera.UpdateCamera
//		Flags  -> ()
// Parameters:
//		class APawn*                                       P                                                          (Parm)
//		class AEFPlayerCamera*                             CameraActor                                                (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		struct FTViewTarget                                OutVT                                                      (Parm, OutParm)
void UEFFreeCamera::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFFreeCamera.UpdateCamera");

	UEFFreeCamera_UpdateCamera_Params params {};
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFInteractionCamera.UpdateCamera
//		Flags  -> ()
// Parameters:
//		class APawn*                                       P                                                          (Parm)
//		class AEFPlayerCamera*                             CameraActor                                                (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		struct FTViewTarget                                OutVT                                                      (Parm, OutParm)
void UEFInteractionCamera::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFInteractionCamera.UpdateCamera");

	UEFInteractionCamera_UpdateCamera_Params params {};
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFInteractionCamera.GetCurrentFOV
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UEFInteractionCamera::GetCurrentFOV()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFInteractionCamera.GetCurrentFOV");

	UEFInteractionCamera_GetCurrentFOV_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFIsometricCamera.SetFixedCameraInterpSpeed
//		Flags  -> ()
// Parameters:
//		float                                              speedXY                                                    (Parm)
//		float                                              speedZ                                                     (Parm)
void UEFIsometricCamera::SetFixedCameraInterpSpeed(float speedXY, float speedZ)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.SetFixedCameraInterpSpeed");

	UEFIsometricCamera_SetFixedCameraInterpSpeed_Params params {};
	params.speedXY = speedXY;
	params.speedZ = speedZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFIsometricCamera.IsFixedCameraMode
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFIsometricCamera::IsFixedCameraMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.IsFixedCameraMode");

	UEFIsometricCamera_IsFixedCameraMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFIsometricCamera.ResetFixedCamera
//		Flags  -> ()
void UEFIsometricCamera::ResetFixedCamera()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.ResetFixedCamera");

	UEFIsometricCamera_ResetFixedCamera_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFIsometricCamera.SetFixedLookAtPos
//		Flags  -> ()
// Parameters:
//		struct FVector                                     InPos                                                      (Parm)
void UEFIsometricCamera::SetFixedLookAtPos(const struct FVector& InPos)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.SetFixedLookAtPos");

	UEFIsometricCamera_SetFixedLookAtPos_Params params {};
	params.InPos = InPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFIsometricCamera.UpdateCamera
//		Flags  -> ()
// Parameters:
//		class APawn*                                       P                                                          (Parm)
//		class AEFPlayerCamera*                             CameraActor                                                (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		struct FTViewTarget                                OutVT                                                      (Parm, OutParm)
void UEFIsometricCamera::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.UpdateCamera");

	UEFIsometricCamera_UpdateCamera_Params params {};
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFIsometricCamera.OnBecomeActive
//		Flags  -> (Net, NetReliable, Simulated, Exec, Native, HasOptionalParms, Const, Private, HasOutParms, HasDefaults, NetClient, DLLImport, K2Override)
// Parameters:
//		class UEFCameraBase*                               OldCamera                                                  (Parm)
void UEFIsometricCamera::OnBecomeActive(class UEFCameraBase* OldCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.OnBecomeActive");

	UEFIsometricCamera_OnBecomeActive_Params params {};
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFIsometricCamera.ActivateBlendingStyle
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               InOldCamera                                                (Parm)
void UEFIsometricCamera::ActivateBlendingStyle(class UEFCameraBase* InOldCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.ActivateBlendingStyle");

	UEFIsometricCamera_ActivateBlendingStyle_Params params {};
	params.InOldCamera = InOldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFIsometricCamera.SetContentsSettingTable
//		Flags  -> ()
// Parameters:
//		int                                                InTableId                                                  (Parm)
void UEFIsometricCamera::SetContentsSettingTable(int InTableId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.SetContentsSettingTable");

	UEFIsometricCamera_SetContentsSettingTable_Params params {};
	params.InTableId = InTableId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFIsometricCamera.SetSettingTable
//		Flags  -> ()
// Parameters:
//		int                                                InTableId                                                  (Parm)
//		bool                                               InImmediateFlag                                            (OptionalParm, Parm)
void UEFIsometricCamera::SetSettingTable(int InTableId, bool InImmediateFlag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.SetSettingTable");

	UEFIsometricCamera_SetSettingTable_Params params {};
	params.InTableId = InTableId;
	params.InImmediateFlag = InImmediateFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFIsometricCamera.RefineFOV
//		Flags  -> ()
// Parameters:
//		float                                              FOV                                                        (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UEFIsometricCamera::RefineFOV(float FOV)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.RefineFOV");

	UEFIsometricCamera_RefineFOV_Params params {};
	params.FOV = FOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFIsometricCamera.InActivateSkeletalMeshForceLOD
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               InNextCamera                                               (Parm)
void UEFIsometricCamera::InActivateSkeletalMeshForceLOD(class UEFCameraBase* InNextCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.InActivateSkeletalMeshForceLOD");

	UEFIsometricCamera_InActivateSkeletalMeshForceLOD_Params params {};
	params.InNextCamera = InNextCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFIsometricCamera.ActivateSkeletalMeshForceLOD
//		Flags  -> ()
void UEFIsometricCamera::ActivateSkeletalMeshForceLOD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.ActivateSkeletalMeshForceLOD");

	UEFIsometricCamera_ActivateSkeletalMeshForceLOD_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFIsometricCamera.ChangeZoomStep
//		Flags  -> ()
// Parameters:
//		int                                                iStep                                                      (Parm)
void UEFIsometricCamera::ChangeZoomStep(int iStep)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.ChangeZoomStep");

	UEFIsometricCamera_ChangeZoomStep_Params params {};
	params.iStep = iStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFIsometricCamera.CheckZoom
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFIsometricCamera::CheckZoom()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.CheckZoom");

	UEFIsometricCamera_CheckZoom_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFIsometricCamera.ZoomOut
//		Flags  -> ()
void UEFIsometricCamera::ZoomOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.ZoomOut");

	UEFIsometricCamera_ZoomOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFIsometricCamera.ZoomIn
//		Flags  -> ()
void UEFIsometricCamera::ZoomIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.ZoomIn");

	UEFIsometricCamera_ZoomIn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFIsometricCamera.ResetInterpolation
//		Flags  -> ()
void UEFIsometricCamera::ResetInterpolation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFIsometricCamera.ResetInterpolation");

	UEFIsometricCamera_ResetInterpolation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFMacroCamera.UpdateRotation
//		Flags  -> (Singular, Simulated, Exec, Native, Operator, Static, HasOptionalParms, Protected, HasOutParms, HasDefaults, NetClient, DLLImport, K2Override)
// Parameters:
void UEFMacroCamera::STATIC_UpdateRotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFMacroCamera.UpdateRotation");

	UEFMacroCamera_UpdateRotation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFMacroCamera.ZoomOut
//		Flags  -> ()
void UEFMacroCamera::ZoomOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFMacroCamera.ZoomOut");

	UEFMacroCamera_ZoomOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFMacroCamera.ZoomIn
//		Flags  -> ()
void UEFMacroCamera::ZoomIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFMacroCamera.ZoomIn");

	UEFMacroCamera_ZoomIn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFMacroCamera.UpdateCamera
//		Flags  -> ()
// Parameters:
//		class APawn*                                       P                                                          (Parm)
//		class AEFPlayerCamera*                             CameraActor                                                (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		struct FTViewTarget                                OutVT                                                      (Parm, OutParm)
void UEFMacroCamera::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFMacroCamera.UpdateCamera");

	UEFMacroCamera_UpdateCamera_Params params {};
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPanningCamera.OnBecomeInActive
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               NewCamera                                                  (Parm)
void UEFPanningCamera::OnBecomeInActive(class UEFCameraBase* NewCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPanningCamera.OnBecomeInActive");

	UEFPanningCamera_OnBecomeInActive_Params params {};
	params.NewCamera = NewCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPanningCamera.OnBecomeActive
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               OldCamera                                                  (Parm)
void UEFPanningCamera::OnBecomeActive(class UEFCameraBase* OldCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPanningCamera.OnBecomeActive");

	UEFPanningCamera_OnBecomeActive_Params params {};
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPanningCamera.EndPanningCamera
//		Flags  -> ()
void UEFPanningCamera::EndPanningCamera()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPanningCamera.EndPanningCamera");

	UEFPanningCamera_EndPanningCamera_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPanningCamera.StartPanningCamera
//		Flags  -> ()
void UEFPanningCamera::StartPanningCamera()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPanningCamera.StartPanningCamera");

	UEFPanningCamera_StartPanningCamera_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPanningCamera.ZoomOut
//		Flags  -> ()
void UEFPanningCamera::ZoomOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPanningCamera.ZoomOut");

	UEFPanningCamera_ZoomOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPanningCamera.ZoomIn
//		Flags  -> ()
void UEFPanningCamera::ZoomIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPanningCamera.ZoomIn");

	UEFPanningCamera_ZoomIn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPanningCamera.UpdateCamera
//		Flags  -> ()
// Parameters:
//		class APawn*                                       P                                                          (Parm)
//		class AEFPlayerCamera*                             CameraActor                                                (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		struct FTViewTarget                                OutVT                                                      (Parm, OutParm)
void UEFPanningCamera::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPanningCamera.UpdateCamera");

	UEFPanningCamera_UpdateCamera_Params params {};
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSelfCamera.SetContentsSettingTable
//		Flags  -> ()
// Parameters:
//		int                                                InTableId                                                  (Parm)
void UEFSelfCamera::SetContentsSettingTable(int InTableId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSelfCamera.SetContentsSettingTable");

	UEFSelfCamera_SetContentsSettingTable_Params params {};
	params.InTableId = InTableId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSelfCamera.SetSettingTable
//		Flags  -> ()
// Parameters:
//		int                                                InTableId                                                  (Parm)
//		bool                                               InImmediateFlag                                            (OptionalParm, Parm)
void UEFSelfCamera::SetSettingTable(int InTableId, bool InImmediateFlag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSelfCamera.SetSettingTable");

	UEFSelfCamera_SetSettingTable_Params params {};
	params.InTableId = InTableId;
	params.InImmediateFlag = InImmediateFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSelfCamera.ChangeZoomStep
//		Flags  -> ()
// Parameters:
//		int                                                iStep                                                      (Parm)
void UEFSelfCamera::ChangeZoomStep(int iStep)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSelfCamera.ChangeZoomStep");

	UEFSelfCamera_ChangeZoomStep_Params params {};
	params.iStep = iStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSelfCamera.CheckZoom
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFSelfCamera::CheckZoom()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSelfCamera.CheckZoom");

	UEFSelfCamera_CheckZoom_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSelfCamera.ZoomOut
//		Flags  -> ()
void UEFSelfCamera::ZoomOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSelfCamera.ZoomOut");

	UEFSelfCamera_ZoomOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSelfCamera.ZoomIn
//		Flags  -> ()
void UEFSelfCamera::ZoomIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSelfCamera.ZoomIn");

	UEFSelfCamera_ZoomIn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSelfCamera.UpdateCamera
//		Flags  -> ()
// Parameters:
//		class APawn*                                       P                                                          (Parm)
//		class AEFPlayerCamera*                             CameraActor                                                (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		struct FTViewTarget                                OutVT                                                      (Parm, OutParm)
void UEFSelfCamera::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSelfCamera.UpdateCamera");

	UEFSelfCamera_UpdateCamera_Params params {};
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSelfCamera.ResetInterpolation
//		Flags  -> ()
void UEFSelfCamera::ResetInterpolation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSelfCamera.ResetInterpolation");

	UEFSelfCamera_ResetInterpolation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSelfCamera.OnBecomeInActive
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               NewCamera                                                  (Parm)
void UEFSelfCamera::OnBecomeInActive(class UEFCameraBase* NewCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSelfCamera.OnBecomeInActive");

	UEFSelfCamera_OnBecomeInActive_Params params {};
	params.NewCamera = NewCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSelfCamera.OnBecomeActive
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               OldCamera                                                  (Parm)
void UEFSelfCamera::OnBecomeActive(class UEFCameraBase* OldCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSelfCamera.OnBecomeActive");

	UEFSelfCamera_OnBecomeActive_Params params {};
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSelfCamera.InActivateOperationMode
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               OldCamera                                                  (Parm)
void UEFSelfCamera::InActivateOperationMode(class UEFCameraBase* OldCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSelfCamera.InActivateOperationMode");

	UEFSelfCamera_InActivateOperationMode_Params params {};
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSelfCamera.ActivateOperationMode
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               OldCamera                                                  (Parm)
void UEFSelfCamera::ActivateOperationMode(class UEFCameraBase* OldCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSelfCamera.ActivateOperationMode");

	UEFSelfCamera_ActivateOperationMode_Params params {};
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSideViewCamera.OnBecomeInActive
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               NewCamera                                                  (Parm)
void UEFSideViewCamera::OnBecomeInActive(class UEFCameraBase* NewCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSideViewCamera.OnBecomeInActive");

	UEFSideViewCamera_OnBecomeInActive_Params params {};
	params.NewCamera = NewCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSideViewCamera.OnBecomeActive
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               OldCamera                                                  (Parm)
void UEFSideViewCamera::OnBecomeActive(class UEFCameraBase* OldCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSideViewCamera.OnBecomeActive");

	UEFSideViewCamera_OnBecomeActive_Params params {};
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSideViewCamera.InitCameraSetting
//		Flags  -> ()
void UEFSideViewCamera::InitCameraSetting()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSideViewCamera.InitCameraSetting");

	UEFSideViewCamera_InitCameraSetting_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSideViewCamera.ChangeZoomStep
//		Flags  -> ()
// Parameters:
//		int                                                iStep                                                      (Parm)
void UEFSideViewCamera::ChangeZoomStep(int iStep)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSideViewCamera.ChangeZoomStep");

	UEFSideViewCamera_ChangeZoomStep_Params params {};
	params.iStep = iStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSideViewCamera.CheckZoom
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFSideViewCamera::CheckZoom()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSideViewCamera.CheckZoom");

	UEFSideViewCamera_CheckZoom_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSideViewCamera.ZoomOut
//		Flags  -> ()
void UEFSideViewCamera::ZoomOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSideViewCamera.ZoomOut");

	UEFSideViewCamera_ZoomOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSideViewCamera.ZoomIn
//		Flags  -> ()
void UEFSideViewCamera::ZoomIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSideViewCamera.ZoomIn");

	UEFSideViewCamera_ZoomIn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSideViewCamera.UpdateCamera
//		Flags  -> ()
// Parameters:
//		class APawn*                                       P                                                          (Parm)
//		class AEFPlayerCamera*                             CameraActor                                                (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		struct FTViewTarget                                OutVT                                                      (Parm, OutParm)
void UEFSideViewCamera::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSideViewCamera.UpdateCamera");

	UEFSideViewCamera_UpdateCamera_Params params {};
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSideViewCamera.ResetInterpolation
//		Flags  -> ()
void UEFSideViewCamera::ResetInterpolation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSideViewCamera.ResetInterpolation");

	UEFSideViewCamera_ResetInterpolation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFThirdPersonCamera.UpdateRotation
//		Flags  -> (NetReliable, Simulated, Operator, Static, HasOptionalParms, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, K2Override)
// Parameters:
void UEFThirdPersonCamera::STATIC_UpdateRotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFThirdPersonCamera.UpdateRotation");

	UEFThirdPersonCamera_UpdateRotation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFThirdPersonCamera.ZoomOut
//		Flags  -> ()
void UEFThirdPersonCamera::ZoomOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFThirdPersonCamera.ZoomOut");

	UEFThirdPersonCamera_ZoomOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFThirdPersonCamera.ZoomIn
//		Flags  -> ()
void UEFThirdPersonCamera::ZoomIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFThirdPersonCamera.ZoomIn");

	UEFThirdPersonCamera_ZoomIn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFThirdPersonCamera.UpdateCamera
//		Flags  -> ()
// Parameters:
//		class APawn*                                       P                                                          (Parm)
//		class AEFPlayerCamera*                             CameraActor                                                (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		struct FTViewTarget                                OutVT                                                      (Parm, OutParm)
void UEFThirdPersonCamera::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFThirdPersonCamera.UpdateCamera");

	UEFThirdPersonCamera_UpdateCamera_Params params {};
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFThirdPersonCamera.GetCurrentFOV
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UEFThirdPersonCamera::GetCurrentFOV()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFThirdPersonCamera.GetCurrentFOV");

	UEFThirdPersonCamera_GetCurrentFOV_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTopViewCamera.UpdateCamera
//		Flags  -> ()
// Parameters:
//		class APawn*                                       P                                                          (Parm)
//		class AEFPlayerCamera*                             CameraActor                                                (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		struct FTViewTarget                                OutVT                                                      (Parm, OutParm)
void UEFTopViewCamera::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.UpdateCamera");

	UEFTopViewCamera_UpdateCamera_Params params {};
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTopViewCamera.OnBecomeInActive
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               NewCamera                                                  (Parm)
void UEFTopViewCamera::OnBecomeInActive(class UEFCameraBase* NewCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.OnBecomeInActive");

	UEFTopViewCamera_OnBecomeInActive_Params params {};
	params.NewCamera = NewCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTopViewCamera.OnBecomeActive
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               OldCamera                                                  (Parm)
void UEFTopViewCamera::OnBecomeActive(class UEFCameraBase* OldCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.OnBecomeActive");

	UEFTopViewCamera_OnBecomeActive_Params params {};
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTopViewCamera.ProcessInActivateCameraType
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               OldCamera                                                  (Parm)
void UEFTopViewCamera::ProcessInActivateCameraType(class UEFCameraBase* OldCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.ProcessInActivateCameraType");

	UEFTopViewCamera_ProcessInActivateCameraType_Params params {};
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTopViewCamera.ProcessActivateCameraType
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               OldCamera                                                  (Parm)
void UEFTopViewCamera::ProcessActivateCameraType(class UEFCameraBase* OldCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.ProcessActivateCameraType");

	UEFTopViewCamera_ProcessActivateCameraType_Params params {};
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTopViewCamera.SetContentsSettingTable
//		Flags  -> ()
// Parameters:
//		int                                                InTableId                                                  (Parm)
void UEFTopViewCamera::SetContentsSettingTable(int InTableId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.SetContentsSettingTable");

	UEFTopViewCamera_SetContentsSettingTable_Params params {};
	params.InTableId = InTableId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTopViewCamera.SetSettingTable
//		Flags  -> ()
// Parameters:
//		int                                                InTableId                                                  (Parm)
//		bool                                               InImmediateFlag                                            (OptionalParm, Parm)
void UEFTopViewCamera::SetSettingTable(int InTableId, bool InImmediateFlag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.SetSettingTable");

	UEFTopViewCamera_SetSettingTable_Params params {};
	params.InTableId = InTableId;
	params.InImmediateFlag = InImmediateFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTopViewCamera.InActivateSkeletalMeshForceLOD
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               InNextCamera                                               (Parm)
void UEFTopViewCamera::InActivateSkeletalMeshForceLOD(class UEFCameraBase* InNextCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.InActivateSkeletalMeshForceLOD");

	UEFTopViewCamera_InActivateSkeletalMeshForceLOD_Params params {};
	params.InNextCamera = InNextCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTopViewCamera.ActivateSkeletalMeshForceLOD
//		Flags  -> ()
void UEFTopViewCamera::ActivateSkeletalMeshForceLOD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.ActivateSkeletalMeshForceLOD");

	UEFTopViewCamera_ActivateSkeletalMeshForceLOD_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTopViewCamera.ChangeZoomStep
//		Flags  -> ()
// Parameters:
//		int                                                iStep                                                      (Parm)
void UEFTopViewCamera::ChangeZoomStep(int iStep)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.ChangeZoomStep");

	UEFTopViewCamera_ChangeZoomStep_Params params {};
	params.iStep = iStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTopViewCamera.CheckZoom
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFTopViewCamera::CheckZoom()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.CheckZoom");

	UEFTopViewCamera_CheckZoom_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTopViewCamera.ZoomOut
//		Flags  -> ()
void UEFTopViewCamera::ZoomOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.ZoomOut");

	UEFTopViewCamera_ZoomOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTopViewCamera.ZoomIn
//		Flags  -> ()
void UEFTopViewCamera::ZoomIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.ZoomIn");

	UEFTopViewCamera_ZoomIn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTopViewCamera.ResetInterpolation
//		Flags  -> ()
void UEFTopViewCamera::ResetInterpolation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTopViewCamera.ResetInterpolation");

	UEFTopViewCamera_ResetInterpolation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTownCamera.OnBecomeInActive
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               NewCamera                                                  (Parm)
void UEFTownCamera::OnBecomeInActive(class UEFCameraBase* NewCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTownCamera.OnBecomeInActive");

	UEFTownCamera_OnBecomeInActive_Params params {};
	params.NewCamera = NewCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTownCamera.OnBecomeActive
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               OldCamera                                                  (Parm)
void UEFTownCamera::OnBecomeActive(class UEFCameraBase* OldCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTownCamera.OnBecomeActive");

	UEFTownCamera_OnBecomeActive_Params params {};
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTownCamera.ChangeTownCameraType
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<EFGame_ETownCameraMode>                InType                                                     (Parm)
//		bool                                               InForce                                                    (OptionalParm, Parm)
void UEFTownCamera::ChangeTownCameraType(TEnumAsByte<EFGame_ETownCameraMode> InType, bool InForce)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTownCamera.ChangeTownCameraType");

	UEFTownCamera_ChangeTownCameraType_Params params {};
	params.InType = InType;
	params.InForce = InForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTownCamera.InActivateTownCamera
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               InNewCamera                                                (Parm)
void UEFTownCamera::InActivateTownCamera(class UEFCameraBase* InNewCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTownCamera.InActivateTownCamera");

	UEFTownCamera_InActivateTownCamera_Params params {};
	params.InNewCamera = InNewCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTownCamera.ActivateTownCamera
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               InOldCamrea                                                (Parm)
void UEFTownCamera::ActivateTownCamera(class UEFCameraBase* InOldCamrea)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTownCamera.ActivateTownCamera");

	UEFTownCamera_ActivateTownCamera_Params params {};
	params.InOldCamrea = InOldCamrea;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTownCamera.InActivateSkeletalMeshForceLOD
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               InNextCamera                                               (Parm)
void UEFTownCamera::InActivateSkeletalMeshForceLOD(class UEFCameraBase* InNextCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTownCamera.InActivateSkeletalMeshForceLOD");

	UEFTownCamera_InActivateSkeletalMeshForceLOD_Params params {};
	params.InNextCamera = InNextCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTownCamera.ActivateSkeletalMeshForceLOD
//		Flags  -> ()
void UEFTownCamera::ActivateSkeletalMeshForceLOD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTownCamera.ActivateSkeletalMeshForceLOD");

	UEFTownCamera_ActivateSkeletalMeshForceLOD_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTownCamera.ChangeZoomStep
//		Flags  -> ()
// Parameters:
//		int                                                iStep                                                      (Parm)
void UEFTownCamera::ChangeZoomStep(int iStep)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTownCamera.ChangeZoomStep");

	UEFTownCamera_ChangeZoomStep_Params params {};
	params.iStep = iStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTownCamera.CheckZoom
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFTownCamera::CheckZoom()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTownCamera.CheckZoom");

	UEFTownCamera_CheckZoom_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTownCamera.ZoomOut
//		Flags  -> ()
void UEFTownCamera::ZoomOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTownCamera.ZoomOut");

	UEFTownCamera_ZoomOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTownCamera.ZoomIn
//		Flags  -> ()
void UEFTownCamera::ZoomIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTownCamera.ZoomIn");

	UEFTownCamera_ZoomIn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTownCamera.UpdateCamera
//		Flags  -> ()
// Parameters:
//		class APawn*                                       P                                                          (Parm)
//		class AEFPlayerCamera*                             CameraActor                                                (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		struct FTViewTarget                                OutVT                                                      (Parm, OutParm)
void UEFTownCamera::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTownCamera.UpdateCamera");

	UEFTownCamera_UpdateCamera_Params params {};
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTownCamera.ResetInterpolation
//		Flags  -> ()
void UEFTownCamera::ResetInterpolation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTownCamera.ResetInterpolation");

	UEFTownCamera_ResetInterpolation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTPSCamera.SetFixedCameraInterpSpeed
//		Flags  -> ()
// Parameters:
//		float                                              speedXY                                                    (Parm)
//		float                                              speedZ                                                     (Parm)
void UEFTPSCamera::SetFixedCameraInterpSpeed(float speedXY, float speedZ)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.SetFixedCameraInterpSpeed");

	UEFTPSCamera_SetFixedCameraInterpSpeed_Params params {};
	params.speedXY = speedXY;
	params.speedZ = speedZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTPSCamera.IsFixedCameraMode
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFTPSCamera::IsFixedCameraMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.IsFixedCameraMode");

	UEFTPSCamera_IsFixedCameraMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTPSCamera.ResetFixedCamera
//		Flags  -> ()
void UEFTPSCamera::ResetFixedCamera()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.ResetFixedCamera");

	UEFTPSCamera_ResetFixedCamera_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTPSCamera.SetFixedLookAtPos
//		Flags  -> ()
// Parameters:
//		struct FVector                                     InPos                                                      (Parm)
void UEFTPSCamera::SetFixedLookAtPos(const struct FVector& InPos)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.SetFixedLookAtPos");

	UEFTPSCamera_SetFixedLookAtPos_Params params {};
	params.InPos = InPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTPSCamera.UpdateCamera
//		Flags  -> ()
// Parameters:
//		class APawn*                                       P                                                          (Parm)
//		class AEFPlayerCamera*                             CameraActor                                                (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		struct FTViewTarget                                OutVT                                                      (Parm, OutParm)
void UEFTPSCamera::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.UpdateCamera");

	UEFTPSCamera_UpdateCamera_Params params {};
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTPSCamera.OnBecomeActive
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               OldCamera                                                  (Parm)
void UEFTPSCamera::OnBecomeActive(class UEFCameraBase* OldCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.OnBecomeActive");

	UEFTPSCamera_OnBecomeActive_Params params {};
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTPSCamera.SetContentsSettingTable
//		Flags  -> ()
// Parameters:
//		int                                                InTableId                                                  (Parm)
void UEFTPSCamera::SetContentsSettingTable(int InTableId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.SetContentsSettingTable");

	UEFTPSCamera_SetContentsSettingTable_Params params {};
	params.InTableId = InTableId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTPSCamera.SetSettingTable
//		Flags  -> ()
// Parameters:
//		int                                                InTableId                                                  (Parm)
//		bool                                               InImmediateFlag                                            (OptionalParm, Parm)
void UEFTPSCamera::SetSettingTable(int InTableId, bool InImmediateFlag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.SetSettingTable");

	UEFTPSCamera_SetSettingTable_Params params {};
	params.InTableId = InTableId;
	params.InImmediateFlag = InImmediateFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTPSCamera.InActivateSkeletalMeshForceLOD
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               InNextCamera                                               (Parm)
void UEFTPSCamera::InActivateSkeletalMeshForceLOD(class UEFCameraBase* InNextCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.InActivateSkeletalMeshForceLOD");

	UEFTPSCamera_InActivateSkeletalMeshForceLOD_Params params {};
	params.InNextCamera = InNextCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTPSCamera.ActivateSkeletalMeshForceLOD
//		Flags  -> ()
void UEFTPSCamera::ActivateSkeletalMeshForceLOD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.ActivateSkeletalMeshForceLOD");

	UEFTPSCamera_ActivateSkeletalMeshForceLOD_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTPSCamera.ChangeZoomStep
//		Flags  -> ()
// Parameters:
//		int                                                iStep                                                      (Parm)
void UEFTPSCamera::ChangeZoomStep(int iStep)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.ChangeZoomStep");

	UEFTPSCamera_ChangeZoomStep_Params params {};
	params.iStep = iStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTPSCamera.CheckZoom
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFTPSCamera::CheckZoom()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.CheckZoom");

	UEFTPSCamera_CheckZoom_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTPSCamera.ZoomOut
//		Flags  -> ()
void UEFTPSCamera::ZoomOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.ZoomOut");

	UEFTPSCamera_ZoomOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTPSCamera.ZoomIn
//		Flags  -> ()
void UEFTPSCamera::ZoomIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.ZoomIn");

	UEFTPSCamera_ZoomIn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTPSCamera.ResetInterpolation
//		Flags  -> ()
void UEFTPSCamera::ResetInterpolation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTPSCamera.ResetInterpolation");

	UEFTPSCamera_ResetInterpolation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFVolumeCamera.OnBecomeInActive
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               NewCamera                                                  (Parm)
void UEFVolumeCamera::OnBecomeInActive(class UEFCameraBase* NewCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFVolumeCamera.OnBecomeInActive");

	UEFVolumeCamera_OnBecomeInActive_Params params {};
	params.NewCamera = NewCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFVolumeCamera.OnBecomeActive
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               OldCamera                                                  (Parm)
void UEFVolumeCamera::OnBecomeActive(class UEFCameraBase* OldCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFVolumeCamera.OnBecomeActive");

	UEFVolumeCamera_OnBecomeActive_Params params {};
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFVolumeCamera.NotifyActivate
//		Flags  -> ()
// Parameters:
//		bool                                               InActivated                                                (Parm)
void UEFVolumeCamera::NotifyActivate(bool InActivated)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFVolumeCamera.NotifyActivate");

	UEFVolumeCamera_NotifyActivate_Params params {};
	params.InActivated = InActivated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFVolumeCamera.SetContentsSettingTable
//		Flags  -> ()
// Parameters:
//		int                                                InTableId                                                  (Parm)
void UEFVolumeCamera::SetContentsSettingTable(int InTableId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFVolumeCamera.SetContentsSettingTable");

	UEFVolumeCamera_SetContentsSettingTable_Params params {};
	params.InTableId = InTableId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFVolumeCamera.SetSettingTable
//		Flags  -> ()
// Parameters:
//		int                                                InTableId                                                  (Parm)
//		bool                                               InImmediateFlag                                            (OptionalParm, Parm)
void UEFVolumeCamera::SetSettingTable(int InTableId, bool InImmediateFlag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFVolumeCamera.SetSettingTable");

	UEFVolumeCamera_SetSettingTable_Params params {};
	params.InTableId = InTableId;
	params.InImmediateFlag = InImmediateFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFVolumeCamera.InActivateSkeletalMeshForceLOD
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               InNextCamera                                               (Parm)
void UEFVolumeCamera::InActivateSkeletalMeshForceLOD(class UEFCameraBase* InNextCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFVolumeCamera.InActivateSkeletalMeshForceLOD");

	UEFVolumeCamera_InActivateSkeletalMeshForceLOD_Params params {};
	params.InNextCamera = InNextCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFVolumeCamera.ActivateSkeletalMeshForceLOD
//		Flags  -> ()
void UEFVolumeCamera::ActivateSkeletalMeshForceLOD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFVolumeCamera.ActivateSkeletalMeshForceLOD");

	UEFVolumeCamera_ActivateSkeletalMeshForceLOD_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFVolumeCamera.ChangeZoomStep
//		Flags  -> ()
// Parameters:
//		int                                                iStep                                                      (Parm)
void UEFVolumeCamera::ChangeZoomStep(int iStep)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFVolumeCamera.ChangeZoomStep");

	UEFVolumeCamera_ChangeZoomStep_Params params {};
	params.iStep = iStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFVolumeCamera.CheckZoom
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFVolumeCamera::CheckZoom()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFVolumeCamera.CheckZoom");

	UEFVolumeCamera_CheckZoom_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFVolumeCamera.ZoomOut
//		Flags  -> ()
void UEFVolumeCamera::ZoomOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFVolumeCamera.ZoomOut");

	UEFVolumeCamera_ZoomOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFVolumeCamera.ZoomIn
//		Flags  -> ()
void UEFVolumeCamera::ZoomIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFVolumeCamera.ZoomIn");

	UEFVolumeCamera_ZoomIn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFVolumeCamera.UpdateCamera
//		Flags  -> ()
// Parameters:
//		class APawn*                                       P                                                          (Parm)
//		class AEFPlayerCamera*                             CameraActor                                                (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		struct FTViewTarget                                OutVT                                                      (Parm, OutParm)
void UEFVolumeCamera::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFVolumeCamera.UpdateCamera");

	UEFVolumeCamera_UpdateCamera_Params params {};
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFVolumeCamera.ResetInterpolation
//		Flags  -> ()
void UEFVolumeCamera::ResetInterpolation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFVolumeCamera.ResetInterpolation");

	UEFVolumeCamera_ResetInterpolation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFVolumeCamera.ActivateBlendingStyle
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               InOldCamera                                                (Parm)
void UEFVolumeCamera::ActivateBlendingStyle(class UEFCameraBase* InOldCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFVolumeCamera.ActivateBlendingStyle");

	UEFVolumeCamera_ActivateBlendingStyle_Params params {};
	params.InOldCamera = InOldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFWatchCamera.SetFixedLookAtPos
//		Flags  -> ()
// Parameters:
//		struct FVector                                     InPos                                                      (Parm)
void UEFWatchCamera::SetFixedLookAtPos(const struct FVector& InPos)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFWatchCamera.SetFixedLookAtPos");

	UEFWatchCamera_SetFixedLookAtPos_Params params {};
	params.InPos = InPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFWatchCamera.SetWatchCameraType
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<EFGame_EFWatchCameraMode>              InType                                                     (Parm)
void UEFWatchCamera::SetWatchCameraType(TEnumAsByte<EFGame_EFWatchCameraMode> InType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFWatchCamera.SetWatchCameraType");

	UEFWatchCamera_SetWatchCameraType_Params params {};
	params.InType = InType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFWatchCamera.UpdateCamera
//		Flags  -> ()
// Parameters:
//		class APawn*                                       P                                                          (Parm)
//		class AEFPlayerCamera*                             CameraActor                                                (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		struct FTViewTarget                                OutVT                                                      (Parm, OutParm)
void UEFWatchCamera::UpdateCamera(class APawn* P, class AEFPlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFWatchCamera.UpdateCamera");

	UEFWatchCamera_UpdateCamera_Params params {};
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFWatchCamera.OnBecomeActive
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               OldCamera                                                  (Parm)
void UEFWatchCamera::OnBecomeActive(class UEFCameraBase* OldCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFWatchCamera.OnBecomeActive");

	UEFWatchCamera_OnBecomeActive_Params params {};
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFWatchCamera.ZoomOut
//		Flags  -> ()
void UEFWatchCamera::ZoomOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFWatchCamera.ZoomOut");

	UEFWatchCamera_ZoomOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFWatchCamera.ZoomIn
//		Flags  -> ()
void UEFWatchCamera::ZoomIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFWatchCamera.ZoomIn");

	UEFWatchCamera_ZoomIn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraModifier_CameraShake.AddCameraShakeGame
//		Flags  -> ()
// Parameters:
//		class UCameraShake*                                NewShake                                                   (Parm)
//		float                                              Scale                                                      (Parm)
//		struct FString                                     ShakeType                                                  (Parm, NeedCtorLink)
//		TEnumAsByte<Engine_ECameraAnimPlaySpace>           PlaySpace                                                  (OptionalParm, Parm)
//		struct FRotator                                    UserPlaySpaceRot                                           (OptionalParm, Parm)
void UEFCameraModifier_CameraShake::AddCameraShakeGame(class UCameraShake* NewShake, float Scale, const struct FString& ShakeType, TEnumAsByte<Engine_ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraModifier_CameraShake.AddCameraShakeGame");

	UEFCameraModifier_CameraShake_AddCameraShakeGame_Params params {};
	params.NewShake = NewShake;
	params.Scale = Scale;
	params.ShakeType = ShakeType;
	params.PlaySpace = PlaySpace;
	params.UserPlaySpaceRot = UserPlaySpaceRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraModifier_CameraShake.RemoveGameCameraShake
//		Flags  -> ()
// Parameters:
//		class UCameraShake*                                Shake                                                      (Parm)
//		struct FString                                     ShakeType                                                  (Parm, NeedCtorLink)
void UEFCameraModifier_CameraShake::RemoveGameCameraShake(class UCameraShake* Shake, const struct FString& ShakeType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraModifier_CameraShake.RemoveGameCameraShake");

	UEFCameraModifier_CameraShake_RemoveGameCameraShake_Params params {};
	params.Shake = Shake;
	params.ShakeType = ShakeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraModifier_CameraShake.OnRemoveGameCameraShake
//		Flags  -> ()
// Parameters:
//		class UCameraShake*                                Shake                                                      (Parm)
//		struct FString                                     ShakeType                                                  (Parm, NeedCtorLink)
void UEFCameraModifier_CameraShake::OnRemoveGameCameraShake(class UCameraShake* Shake, const struct FString& ShakeType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraModifier_CameraShake.OnRemoveGameCameraShake");

	UEFCameraModifier_CameraShake_OnRemoveGameCameraShake_Params params {};
	params.Shake = Shake;
	params.ShakeType = ShakeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraModifier_CameraShake.OnAddGameCameraShake
//		Flags  -> ()
// Parameters:
//		class UCameraShake*                                NewShake                                                   (Parm)
//		float                                              Scale                                                      (Parm)
//		struct FString                                     ShakeType                                                  (Parm, NeedCtorLink)
//		TEnumAsByte<Engine_ECameraAnimPlaySpace>           PlaySpace                                                  (OptionalParm, Parm)
//		struct FRotator                                    UserPlaySpaceRot                                           (OptionalParm, Parm)
void UEFCameraModifier_CameraShake::OnAddGameCameraShake(class UCameraShake* NewShake, float Scale, const struct FString& ShakeType, TEnumAsByte<Engine_ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraModifier_CameraShake.OnAddGameCameraShake");

	UEFCameraModifier_CameraShake_OnAddGameCameraShake_Params params {};
	params.NewShake = NewShake;
	params.Scale = Scale;
	params.ShakeType = ShakeType;
	params.PlaySpace = PlaySpace;
	params.UserPlaySpaceRot = UserPlaySpaceRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraModifier_CameraShake.ModifyCamera
//		Flags  -> ()
// Parameters:
//		class ACamera*                                     Camera                                                     (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		struct FTPOV                                       OutPOV                                                     (Parm, OutParm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFCameraModifier_CameraShake::ModifyCamera(class ACamera* Camera, float DeltaTime, struct FTPOV* OutPOV)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraModifier_CameraShake.ModifyCamera");

	UEFCameraModifier_CameraShake_ModifyCamera_Params params {};
	params.Camera = Camera;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPOV != nullptr)
		*OutPOV = params.OutPOV;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraModifier_CameraShake.RemoveAllEFViewShakes
//		Flags  -> ()
void UEFCameraModifier_CameraShake::RemoveAllEFViewShakes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraModifier_CameraShake.RemoveAllEFViewShakes");

	UEFCameraModifier_CameraShake_RemoveAllEFViewShakes_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraModifier_CameraShake.RemoveEFViewShake
//		Flags  -> ()
// Parameters:
//		struct FEFCameraViewShakePlayID                    InPlayID                                                   (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFCameraModifier_CameraShake::RemoveEFViewShake(const struct FEFCameraViewShakePlayID& InPlayID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraModifier_CameraShake.RemoveEFViewShake");

	UEFCameraModifier_CameraShake_RemoveEFViewShake_Params params {};
	params.InPlayID = InPlayID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraModifier_CameraShake.AddEFCameraViewShake
//		Flags  -> ()
// Parameters:
//		class UEFCameraViewShake*                          InShake                                                    (Parm)
//		class UEFCameraViewShakeAnim*                      InAnim                                                     (Parm)
//		bool                                               InLocalPlayer                                              (Parm)
//		float                                              InPlayrate                                                 (OptionalParm, Parm)
//		struct FVector                                     InLocation                                                 (OptionalParm, Parm)
//		class AActor*                                      InProvidedActor                                            (OptionalParm, Parm)
//		TEnumAsByte<Engine_ECameraAnimPlaySpace>           InPlaySpace                                                (OptionalParm, Parm)
//		struct FRotator                                    InUserPlaySpaceRot                                         (OptionalParm, Parm)
//		struct FEFCameraViewShakePlayID                    ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEFCameraViewShakePlayID UEFCameraModifier_CameraShake::AddEFCameraViewShake(class UEFCameraViewShake* InShake, class UEFCameraViewShakeAnim* InAnim, bool InLocalPlayer, float InPlayrate, const struct FVector& InLocation, class AActor* InProvidedActor, TEnumAsByte<Engine_ECameraAnimPlaySpace> InPlaySpace, const struct FRotator& InUserPlaySpaceRot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraModifier_CameraShake.AddEFCameraViewShake");

	UEFCameraModifier_CameraShake_AddEFCameraViewShake_Params params {};
	params.InShake = InShake;
	params.InAnim = InAnim;
	params.InLocalPlayer = InLocalPlayer;
	params.InPlayrate = InPlayrate;
	params.InLocation = InLocation;
	params.InProvidedActor = InProvidedActor;
	params.InPlaySpace = InPlaySpace;
	params.InUserPlaySpaceRot = InUserPlaySpaceRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraModifier_CameraShake.RemoveAllCameraShakes
//		Flags  -> ()
void UEFCameraModifier_CameraShake::RemoveAllCameraShakes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraModifier_CameraShake.RemoveAllCameraShakes");

	UEFCameraModifier_CameraShake_RemoveAllCameraShakes_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraShakePlayGroup.UpdateViewShake
//		Flags  -> ()
// Parameters:
//		class ACamera*                                     InCameraOwner                                              (Parm)
//		float                                              InDeltaTime                                                (Parm)
//		float                                              InModifierAlpha                                            (Parm)
//		struct FTPOV                                       OutPOV                                                     (Parm, OutParm)
void UEFCameraShakePlayGroup::UpdateViewShake(class ACamera* InCameraOwner, float InDeltaTime, float InModifierAlpha, struct FTPOV* OutPOV)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraShakePlayGroup.UpdateViewShake");

	UEFCameraShakePlayGroup_UpdateViewShake_Params params {};
	params.InCameraOwner = InCameraOwner;
	params.InDeltaTime = InDeltaTime;
	params.InModifierAlpha = InModifierAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPOV != nullptr)
		*OutPOV = params.OutPOV;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraShakePlayGroup.PreUpdateViewShake
//		Flags  -> ()
// Parameters:
//		class ACamera*                                     InCameraOwner                                              (Parm)
//		struct FVector                                     InPlayerLocation                                           (Const, Parm, OutParm)
//		float                                              InDeltaTime                                                (Parm)
//		TEnumAsByte<EFGame_EFShakePlayGroupState>          ReturnValue                                                (Parm, OutParm, ReturnParm)
TEnumAsByte<EFGame_EFShakePlayGroupState> UEFCameraShakePlayGroup::PreUpdateViewShake(class ACamera* InCameraOwner, struct FVector* InPlayerLocation, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraShakePlayGroup.PreUpdateViewShake");

	UEFCameraShakePlayGroup_PreUpdateViewShake_Params params {};
	params.InCameraOwner = InCameraOwner;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InPlayerLocation != nullptr)
		*InPlayerLocation = params.InPlayerLocation;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraShakePlayGroup.RemoveAllViewShake
//		Flags  -> ()
// Parameters:
//		class ACamera*                                     InCameraOwner                                              (Parm)
void UEFCameraShakePlayGroup::RemoveAllViewShake(class ACamera* InCameraOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraShakePlayGroup.RemoveAllViewShake");

	UEFCameraShakePlayGroup_RemoveAllViewShake_Params params {};
	params.InCameraOwner = InCameraOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraShakePlayGroup.RemoveViewShake
//		Flags  -> ()
// Parameters:
//		class ACamera*                                     InCameraOwner                                              (Parm)
//		int                                                InShakeID                                                  (Parm)
//		bool                                               InForceStop                                                (OptionalParm, Parm)
void UEFCameraShakePlayGroup::RemoveViewShake(class ACamera* InCameraOwner, int InShakeID, bool InForceStop)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraShakePlayGroup.RemoveViewShake");

	UEFCameraShakePlayGroup_RemoveViewShake_Params params {};
	params.InCameraOwner = InCameraOwner;
	params.InShakeID = InShakeID;
	params.InForceStop = InForceStop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraShakePlayGroup.AddViewShakeInstance
//		Flags  -> ()
// Parameters:
//		struct FEFShakeInstance                            OutShakeInstance                                           (Parm, OutParm)
//		class ACamera*                                     InCameraOwner                                              (Parm)
//		class UEFCameraViewShake*                          InShake                                                    (Parm)
//		class UEFCameraViewShakeAnim*                      InAnim                                                     (Parm)
//		int                                                InAmplitudeSize                                            (Parm)
//		float                                              InPlayrate                                                 (Parm)
//		struct FVector                                     InLocation                                                 (Parm)
//		TEnumAsByte<Engine_ECameraAnimPlaySpace>           InPlaySpace                                                (Parm)
//		struct FRotator                                    InUserPlaySpaceRot                                         (Parm)
void UEFCameraShakePlayGroup::AddViewShakeInstance(struct FEFShakeInstance* OutShakeInstance, class ACamera* InCameraOwner, class UEFCameraViewShake* InShake, class UEFCameraViewShakeAnim* InAnim, int InAmplitudeSize, float InPlayrate, const struct FVector& InLocation, TEnumAsByte<Engine_ECameraAnimPlaySpace> InPlaySpace, const struct FRotator& InUserPlaySpaceRot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraShakePlayGroup.AddViewShakeInstance");

	UEFCameraShakePlayGroup_AddViewShakeInstance_Params params {};
	params.InCameraOwner = InCameraOwner;
	params.InShake = InShake;
	params.InAnim = InAnim;
	params.InAmplitudeSize = InAmplitudeSize;
	params.InPlayrate = InPlayrate;
	params.InLocation = InLocation;
	params.InPlaySpace = InPlaySpace;
	params.InUserPlaySpaceRot = InUserPlaySpaceRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutShakeInstance != nullptr)
		*OutShakeInstance = params.OutShakeInstance;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraShakePlayGroup.AddViewShake
//		Flags  -> ()
// Parameters:
//		class ACamera*                                     InCameraOwner                                              (Parm)
//		class UEFCameraViewShake*                          InShake                                                    (Parm)
//		class UEFCameraViewShakeAnim*                      InAnim                                                     (Parm)
//		float                                              InPlayrate                                                 (Parm)
//		struct FVector                                     InLocation                                                 (Parm)
//		class AActor*                                      InProvidedActor                                            (OptionalParm, Parm)
//		TEnumAsByte<Engine_ECameraAnimPlaySpace>           InPlaySpace                                                (OptionalParm, Parm)
//		struct FRotator                                    InUserPlaySpaceRot                                         (OptionalParm, Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFCameraShakePlayGroup::AddViewShake(class ACamera* InCameraOwner, class UEFCameraViewShake* InShake, class UEFCameraViewShakeAnim* InAnim, float InPlayrate, const struct FVector& InLocation, class AActor* InProvidedActor, TEnumAsByte<Engine_ECameraAnimPlaySpace> InPlaySpace, const struct FRotator& InUserPlaySpaceRot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraShakePlayGroup.AddViewShake");

	UEFCameraShakePlayGroup_AddViewShake_Params params {};
	params.InCameraOwner = InCameraOwner;
	params.InShake = InShake;
	params.InAnim = InAnim;
	params.InPlayrate = InPlayrate;
	params.InLocation = InLocation;
	params.InProvidedActor = InProvidedActor;
	params.InPlaySpace = InPlaySpace;
	params.InUserPlaySpaceRot = InUserPlaySpaceRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFCameraViewShake.GetAmplitudeSize
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFCameraViewShake::GetAmplitudeSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFCameraViewShake.GetAmplitudeSize");

	UEFCameraViewShake_GetAmplitudeSize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFInputRotCameraActor.GetCameraView
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (Parm)
//		struct FTPOV                                       OutPOV                                                     (Parm, OutParm)
void AEFInputRotCameraActor::GetCameraView(float DeltaTime, struct FTPOV* OutPOV)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFInputRotCameraActor.GetCameraView");

	AEFInputRotCameraActor_GetCameraView_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPOV != nullptr)
		*OutPOV = params.OutPOV;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFInputRotCameraActor.EndViewTarget
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           PC                                                         (Parm)
void AEFInputRotCameraActor::EndViewTarget(class APlayerController* PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFInputRotCameraActor.EndViewTarget");

	AEFInputRotCameraActor_EndViewTarget_Params params {};
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFInputRotCameraActor.BecomeViewTarget
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           PC                                                         (Parm)
void AEFInputRotCameraActor::BecomeViewTarget(class APlayerController* PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFInputRotCameraActor.BecomeViewTarget");

	AEFInputRotCameraActor_BecomeViewTarget_Params params {};
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFInputRotCameraActor.ActivateInputRotMode
//		Flags  -> ()
// Parameters:
//		bool                                               InFlag                                                     (Parm)
//		class APlayerController*                           PC                                                         (Parm)
void AEFInputRotCameraActor::ActivateInputRotMode(bool InFlag, class APlayerController* PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFInputRotCameraActor.ActivateInputRotMode");

	AEFInputRotCameraActor_ActivateInputRotMode_Params params {};
	params.InFlag = InFlag;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFMacroCameraSplineActor.BreakAllConnections
//		Flags  -> ()
void AEFMacroCameraSplineActor::BreakAllConnections()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFMacroCameraSplineActor.BreakAllConnections");

	AEFMacroCameraSplineActor_BreakAllConnections_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFMacroCameraSplineActor.BreakConnectionTo
//		Flags  -> ()
// Parameters:
//		class AEFMacroCameraSplineActor*                   NextActor                                                  (Parm)
void AEFMacroCameraSplineActor::BreakConnectionTo(class AEFMacroCameraSplineActor* NextActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFMacroCameraSplineActor.BreakConnectionTo");

	AEFMacroCameraSplineActor_BreakConnectionTo_Params params {};
	params.NextActor = NextActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFMacroCameraSplineActor.IsConnectedTo
//		Flags  -> ()
// Parameters:
//		class AEFMacroCameraSplineActor*                   NextActor                                                  (Parm)
//		bool                                               bCheckForDisableDestination                                (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AEFMacroCameraSplineActor::IsConnectedTo(class AEFMacroCameraSplineActor* NextActor, bool bCheckForDisableDestination)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFMacroCameraSplineActor.IsConnectedTo");

	AEFMacroCameraSplineActor_IsConnectedTo_Params params {};
	params.NextActor = NextActor;
	params.bCheckForDisableDestination = bCheckForDisableDestination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFMacroCameraSplineActor.AddConnectionTo
//		Flags  -> ()
// Parameters:
//		class AEFMacroCameraSplineActor*                   NextActor                                                  (Parm)
void AEFMacroCameraSplineActor::AddConnectionTo(class AEFMacroCameraSplineActor* NextActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFMacroCameraSplineActor.AddConnectionTo");

	AEFMacroCameraSplineActor_AddConnectionTo_Params params {};
	params.NextActor = NextActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFMacroCameraSplineActor.UpdateConnectedSplineComponents
//		Flags  -> ()
// Parameters:
//		bool                                               bFinish                                                    (Parm)
void AEFMacroCameraSplineActor::UpdateConnectedSplineComponents(bool bFinish)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFMacroCameraSplineActor.UpdateConnectedSplineComponents");

	AEFMacroCameraSplineActor_UpdateConnectedSplineComponents_Params params {};
	params.bFinish = bFinish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFMacroCameraSplineActor.UpdateSplineComponents
//		Flags  -> ()
void AEFMacroCameraSplineActor::UpdateSplineComponents()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFMacroCameraSplineActor.UpdateSplineComponents");

	AEFMacroCameraSplineActor_UpdateSplineComponents_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.LoadOutlineData
//		Flags  -> ()
void AEFPlayerCamera::LoadOutlineData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.LoadOutlineData");

	AEFPlayerCamera_LoadOutlineData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.UpdatePlayerOccludingTownPlacementActors
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (Parm)
void AEFPlayerCamera::UpdatePlayerOccludingTownPlacementActors(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.UpdatePlayerOccludingTownPlacementActors");

	AEFPlayerCamera_UpdatePlayerOccludingTownPlacementActors_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.UpdateTranslucentActorBlend
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (Parm)
void AEFPlayerCamera::UpdateTranslucentActorBlend(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.UpdateTranslucentActorBlend");

	AEFPlayerCamera_UpdateTranslucentActorBlend_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.DisplayDebug
//		Flags  -> ()
// Parameters:
//		class AHUD*                                        HUD                                                        (Parm)
//		float                                              out_YL                                                     (Parm, OutParm)
//		float                                              out_YPos                                                   (Parm, OutParm)
void AEFPlayerCamera::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.DisplayDebug");

	AEFPlayerCamera_DisplayDebug_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.FOV
//		Flags  -> ()
// Parameters:
//		float                                              NewFOV                                                     (Parm)
void AEFPlayerCamera::FOV(float NewFOV)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.FOV");

	AEFPlayerCamera_FOV_Params params {};
	params.NewFOV = NewFOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.AdjustViewportFOV
//		Flags  -> ()
// Parameters:
//		float                                              InOutFOV                                                   (Parm, OutParm)
void AEFPlayerCamera::AdjustViewportFOV(float* InOutFOV)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.AdjustViewportFOV");

	AEFPlayerCamera_AdjustViewportFOV_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InOutFOV != nullptr)
		*InOutFOV = params.InOutFOV;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.SaveCameraValue
//		Flags  -> ()
void AEFPlayerCamera::SaveCameraValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.SaveCameraValue");

	AEFPlayerCamera_SaveCameraValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.SetCameraType
//		Flags  -> ()
// Parameters:
//		int                                                InType                                                     (Parm)
//		bool                                               bUpdateValue                                               (OptionalParm, Parm)
void AEFPlayerCamera::SetCameraType(int InType, bool bUpdateValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.SetCameraType");

	AEFPlayerCamera_SetCameraType_Params params {};
	params.InType = InType;
	params.bUpdateValue = bUpdateValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.UpdateRotation
//		Flags  -> ()
void AEFPlayerCamera::UpdateRotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.UpdateRotation");

	AEFPlayerCamera_UpdateRotation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.ZoomOut
//		Flags  -> ()
void AEFPlayerCamera::ZoomOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ZoomOut");

	AEFPlayerCamera_ZoomOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.ZoomIn
//		Flags  -> ()
void AEFPlayerCamera::ZoomIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ZoomIn");

	AEFPlayerCamera_ZoomIn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.UpdateViewTarget
//		Flags  -> ()
// Parameters:
//		struct FTViewTarget                                OutVT                                                      (Parm, OutParm)
//		float                                              DeltaTime                                                  (Parm)
void AEFPlayerCamera::UpdateViewTarget(struct FTViewTarget* OutVT, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.UpdateViewTarget");

	AEFPlayerCamera_UpdateViewTarget_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.DoUpdateCamera
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (Parm)
void AEFPlayerCamera::DoUpdateCamera(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.DoUpdateCamera");

	AEFPlayerCamera_DoUpdateCamera_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.ProcessTestInputCameraActor
//		Flags  -> ()
// Parameters:
//		class ACameraActor*                                InCamera                                                   (Parm)
//		struct FTPOV                                       OutPOV                                                     (Parm, OutParm)
void AEFPlayerCamera::ProcessTestInputCameraActor(class ACameraActor* InCamera, struct FTPOV* OutPOV)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ProcessTestInputCameraActor");

	AEFPlayerCamera_ProcessTestInputCameraActor_Params params {};
	params.InCamera = InCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPOV != nullptr)
		*OutPOV = params.OutPOV;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.ClearCameraActorGrabInterp
//		Flags  -> ()
void AEFPlayerCamera::ClearCameraActorGrabInterp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ClearCameraActorGrabInterp");

	AEFPlayerCamera_ClearCameraActorGrabInterp_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.ApplyCameraActorGrabInterp
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (Parm)
//		class ACameraActor*                                InCamera                                                   (Parm)
//		struct FTPOV                                       OutPOV                                                     (Parm, OutParm)
void AEFPlayerCamera::ApplyCameraActorGrabInterp(float DeltaTime, class ACameraActor* InCamera, struct FTPOV* OutPOV)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ApplyCameraActorGrabInterp");

	AEFPlayerCamera_ApplyCameraActorGrabInterp_Params params {};
	params.DeltaTime = DeltaTime;
	params.InCamera = InCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPOV != nullptr)
		*OutPOV = params.OutPOV;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.DeactivateVolumeCamera
//		Flags  -> ()
// Parameters:
//		class AActor*                                      InTriggerActor                                             (Parm)
void AEFPlayerCamera::DeactivateVolumeCamera(class AActor* InTriggerActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.DeactivateVolumeCamera");

	AEFPlayerCamera_DeactivateVolumeCamera_Params params {};
	params.InTriggerActor = InTriggerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.ActivateVolumeCamera
//		Flags  -> ()
// Parameters:
//		class AActor*                                      InTriggerActor                                             (Parm)
void AEFPlayerCamera::ActivateVolumeCamera(class AActor* InTriggerActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ActivateVolumeCamera");

	AEFPlayerCamera_ActivateVolumeCamera_Params params {};
	params.InTriggerActor = InTriggerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.RestoreCameraMode
//		Flags  -> ()
void AEFPlayerCamera::RestoreCameraMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.RestoreCameraMode");

	AEFPlayerCamera_RestoreCameraMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.ChangeCameraMode
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<EFGame_ECameraStyle>                   InEnum                                                     (Parm)
//		bool                                               InImmediateFlag                                            (OptionalParm, Parm)
//		bool                                               InBlendCameraMode                                          (OptionalParm, Parm)
void AEFPlayerCamera::ChangeCameraMode(TEnumAsByte<EFGame_ECameraStyle> InEnum, bool InImmediateFlag, bool InBlendCameraMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ChangeCameraMode");

	AEFPlayerCamera_ChangeCameraMode_Params params {};
	params.InEnum = InEnum;
	params.InImmediateFlag = InImmediateFlag;
	params.InBlendCameraMode = InBlendCameraMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.ChangeCameraContentsSetting
//		Flags  -> ()
// Parameters:
//		int                                                InTableId                                                  (Parm)
void AEFPlayerCamera::ChangeCameraContentsSetting(int InTableId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ChangeCameraContentsSetting");

	AEFPlayerCamera_ChangeCameraContentsSetting_Params params {};
	params.InTableId = InTableId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.ChangeCameraZoomStep
//		Flags  -> ()
// Parameters:
//		int                                                InZoomStep                                                 (Parm)
void AEFPlayerCamera::ChangeCameraZoomStep(int InZoomStep)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ChangeCameraZoomStep");

	AEFPlayerCamera_ChangeCameraZoomStep_Params params {};
	params.InZoomStep = InZoomStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.ChangeCameraSetting
//		Flags  -> ()
// Parameters:
//		int                                                InTableId                                                  (Parm)
//		bool                                               InImmediateFlag                                            (OptionalParm, Parm)
//		bool                                               InBlendCameraMode                                          (OptionalParm, Parm)
void AEFPlayerCamera::ChangeCameraSetting(int InTableId, bool InImmediateFlag, bool InBlendCameraMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ChangeCameraSetting");

	AEFPlayerCamera_ChangeCameraSetting_Params params {};
	params.InTableId = InTableId;
	params.InImmediateFlag = InImmediateFlag;
	params.InBlendCameraMode = InBlendCameraMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.ApplyVehicleFOVAngle
//		Flags  -> ()
// Parameters:
//		float                                              OutFOV                                                     (Parm, OutParm)
void AEFPlayerCamera::ApplyVehicleFOVAngle(float* OutFOV)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ApplyVehicleFOVAngle");

	AEFPlayerCamera_ApplyVehicleFOVAngle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutFOV != nullptr)
		*OutFOV = params.OutFOV;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.SetVehicleFOVAngle
//		Flags  -> ()
// Parameters:
//		float                                              InFOV                                                      (Parm)
void AEFPlayerCamera::SetVehicleFOVAngle(float InFOV)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.SetVehicleFOVAngle");

	AEFPlayerCamera_SetVehicleFOVAngle_Params params {};
	params.InFOV = InFOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.ApplyCamOverrideFogSetting
//		Flags  -> ()
void AEFPlayerCamera::ApplyCamOverrideFogSetting()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ApplyCamOverrideFogSetting");

	AEFPlayerCamera_ApplyCamOverrideFogSetting_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.ProcessTargetCameraActorBlend
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (Parm)
void AEFPlayerCamera::ProcessTargetCameraActorBlend(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ProcessTargetCameraActorBlend");

	AEFPlayerCamera_ProcessTargetCameraActorBlend_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.ResetAttachCameraActor
//		Flags  -> ()
void AEFPlayerCamera::ResetAttachCameraActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ResetAttachCameraActor");

	AEFPlayerCamera_ResetAttachCameraActor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.ModifyOnSetCameraTargetBlendTime
//		Flags  -> ()
// Parameters:
//		class AActor*                                      inEventOriginator                                          (Parm)
//		class AActor*                                      inRealCameraTarget                                         (Parm)
//		float                                              outBlendTime                                               (Parm, OutParm)
void AEFPlayerCamera::ModifyOnSetCameraTargetBlendTime(class AActor* inEventOriginator, class AActor* inRealCameraTarget, float* outBlendTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.ModifyOnSetCameraTargetBlendTime");

	AEFPlayerCamera_ModifyOnSetCameraTargetBlendTime_Params params {};
	params.inEventOriginator = inEventOriginator;
	params.inRealCameraTarget = inRealCameraTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (outBlendTime != nullptr)
		*outBlendTime = params.outBlendTime;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.FindBestCameraType
//		Flags  -> ()
// Parameters:
//		class AActor*                                      CameraTarget                                               (Parm)
//		class UEFCameraBase*                               ReturnValue                                                (Parm, OutParm, ReturnParm)
class UEFCameraBase* AEFPlayerCamera::FindBestCameraType(class AActor* CameraTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.FindBestCameraType");

	AEFPlayerCamera_FindBestCameraType_Params params {};
	params.CameraTarget = CameraTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.GetCurrentCameraMode
//		Flags  -> ()
// Parameters:
//		class UEFCameraBase*                               ReturnValue                                                (Parm, OutParm, ReturnParm)
class UEFCameraBase* AEFPlayerCamera::GetCurrentCameraMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.GetCurrentCameraMode");

	AEFPlayerCamera_GetCurrentCameraMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.CreateCamera
//		Flags  -> ()
// Parameters:
//		class UClass*                                      CameraClass                                                (Parm)
//		class UEFCameraBase*                               ReturnValue                                                (Parm, OutParm, ReturnParm)
class UEFCameraBase* AEFPlayerCamera::CreateCamera(class UClass* CameraClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.CreateCamera");

	AEFPlayerCamera_CreateCamera_Params params {};
	params.CameraClass = CameraClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.PostBeginPlay
//		Flags  -> ()
void AEFPlayerCamera::PostBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.PostBeginPlay");

	AEFPlayerCamera_PostBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.GetFOV
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float AEFPlayerCamera::GetFOV()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.GetFOV");

	AEFPlayerCamera_GetFOV_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.GetCameraDistance
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float AEFPlayerCamera::GetCameraDistance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.GetCameraDistance");

	AEFPlayerCamera_GetCameraDistance_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.Destroyed
//		Flags  -> ()
void AEFPlayerCamera::Destroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.Destroyed");

	AEFPlayerCamera_Destroyed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPlayerCamera.CalcVerticalFOV
//		Flags  -> ()
// Parameters:
//		float                                              OutFOV                                                     (Parm, OutParm)
void AEFPlayerCamera::CalcVerticalFOV(float* OutFOV)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPlayerCamera.CalcVerticalFOV");

	AEFPlayerCamera_CalcVerticalFOV_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutFOV != nullptr)
		*OutFOV = params.OutFOV;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFEmitter.HideSelf
//		Flags  -> ()
void AEFEmitter::HideSelf()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFEmitter.HideSelf");

	AEFEmitter_HideSelf_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFEmitter.PostBeginPlay
//		Flags  -> ()
void AEFEmitter::PostBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFEmitter.PostBeginPlay");

	AEFEmitter_PostBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFEnvironmentActionEmitter.ClearExtendPool
//		Flags  -> ()
// Parameters:
//		class UParticleSystemComponent*                    PSC                                                        (Parm, EditInline)
void AEFEnvironmentActionEmitter::ClearExtendPool(class UParticleSystemComponent* PSC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFEnvironmentActionEmitter.ClearExtendPool");

	AEFEnvironmentActionEmitter_ClearExtendPool_Params params {};
	params.PSC = PSC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFEnvironmentActionEmitter.OnParticleSystemFinished
//		Flags  -> ()
// Parameters:
//		class UParticleSystemComponent*                    FinishedComponent                                          (Parm, EditInline)
void AEFEnvironmentActionEmitter::OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFEnvironmentActionEmitter.OnParticleSystemFinished");

	AEFEnvironmentActionEmitter_OnParticleSystemFinished_Params params {};
	params.FinishedComponent = FinishedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSpawnedEmitter.HideBecauseFinished
//		Flags  -> ()
// Parameters:
//		class UParticleSystemComponent*                    FinishedComponent                                          (Parm, EditInline)
void AEFSpawnedEmitter::HideBecauseFinished(class UParticleSystemComponent* FinishedComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSpawnedEmitter.HideBecauseFinished");

	AEFSpawnedEmitter_HideBecauseFinished_Params params {};
	params.FinishedComponent = FinishedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSpawnedEmitter.ClearExtendPool
//		Flags  -> ()
// Parameters:
//		class UParticleSystemComponent*                    PSC                                                        (Parm, EditInline)
void AEFSpawnedEmitter::ClearExtendPool(class UParticleSystemComponent* PSC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSpawnedEmitter.ClearExtendPool");

	AEFSpawnedEmitter_ClearExtendPool_Params params {};
	params.PSC = PSC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSpawnedEmitter.OnParticleSystemFinished
//		Flags  -> ()
// Parameters:
//		class UParticleSystemComponent*                    FinishedComponent                                          (Parm, EditInline)
void AEFSpawnedEmitter::OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSpawnedEmitter.OnParticleSystemFinished");

	AEFSpawnedEmitter_OnParticleSystemFinished_Params params {};
	params.FinishedComponent = FinishedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFEmitterPool.ClearPoolPSInfoComponents
//		Flags  -> ()
// Parameters:
//		bool                                               bClearActive                                               (OptionalParm, Parm)
void AEFEmitterPool::ClearPoolPSInfoComponents(bool bClearActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFEmitterPool.ClearPoolPSInfoComponents");

	AEFEmitterPool_ClearPoolPSInfoComponents_Params params {};
	params.bClearActive = bClearActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFEmitterPool.OnPSInfoFinished
//		Flags  -> ()
// Parameters:
//		class UParticleSystemComponent*                    PSC                                                        (Parm, EditInline)
void AEFEmitterPool::OnPSInfoFinished(class UParticleSystemComponent* PSC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFEmitterPool.OnPSInfoFinished");

	AEFEmitterPool_OnPSInfoFinished_Params params {};
	params.PSC = PSC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFEmitterPool.ClearExtendPool
//		Flags  -> ()
void AEFEmitterPool::ClearExtendPool()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFEmitterPool.ClearExtendPool");

	AEFEmitterPool_ClearExtendPool_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFItem.SetLocationForceUpdateComponent
//		Flags  -> ()
// Parameters:
//		struct FVector                                     NewLocation                                                (Parm)
void AEFItem::SetLocationForceUpdateComponent(const struct FVector& NewLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFItem.SetLocationForceUpdateComponent");

	AEFItem_SetLocationForceUpdateComponent_Params params {};
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFItem.SetLocationForce
//		Flags  -> ()
// Parameters:
//		struct FVector                                     NewLocation                                                (Parm)
void AEFItem::SetLocationForce(const struct FVector& NewLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFItem.SetLocationForce");

	AEFItem_SetLocationForce_Params params {};
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFItem.ClearAttachedPSIIndex
//		Flags  -> ()
void AEFItem::ClearAttachedPSIIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFItem.ClearAttachedPSIIndex");

	AEFItem_ClearAttachedPSIIndex_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFItem.EncroachedBy
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Other                                                      (Parm)
void AEFItem::EncroachedBy(class AActor* Other)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFItem.EncroachedBy");

	AEFItem_EncroachedBy_Params params {};
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFItem.Destroyed
//		Flags  -> ()
void AEFItem::Destroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFItem.Destroyed");

	AEFItem_Destroyed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFInteractiveFoliageActor.TakeDamage
//		Flags  -> ()
// Parameters:
//		int                                                Damage                                                     (Parm)
//		class AController*                                 EventInstigator                                            (Parm)
//		struct FVector                                     HitLocation                                                (Parm)
//		struct FVector                                     Momentum                                                   (Parm)
//		class UClass*                                      DamageType                                                 (Parm)
//		struct FTraceHitInfo                               HitInfo                                                    (OptionalParm, Parm)
//		class AActor*                                      DamageCauser                                               (OptionalParm, Parm)
void AEFInteractiveFoliageActor::TakeDamage(int Damage, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFInteractiveFoliageActor.TakeDamage");

	AEFInteractiveFoliageActor_TakeDamage_Params params {};
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;
	params.HitInfo = HitInfo;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSeqAct_SetPostProcessEffectProperties.GetPostProcessEffects
//		Flags  -> ()
// Parameters:
//		TArray<class UPostProcessEffect*>                  PostProcessEffects                                         (Parm, OutParm, NeedCtorLink)
//		class UClass*                                      MatchingPostProcessEffectClass                             (OptionalParm, Parm)
void UEFSeqAct_SetPostProcessEffectProperties::GetPostProcessEffects(TArray<class UPostProcessEffect*>* PostProcessEffects, class UClass* MatchingPostProcessEffectClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_SetPostProcessEffectProperties.GetPostProcessEffects");

	UEFSeqAct_SetPostProcessEffectProperties_GetPostProcessEffects_Params params {};
	params.MatchingPostProcessEffectClass = MatchingPostProcessEffectClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PostProcessEffects != nullptr)
		*PostProcessEffects = params.PostProcessEffects;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSeqAct_SetAmbientOcclusionEffectProperties.Activated
//		Flags  -> ()
// Parameters:
void UEFSeqAct_SetAmbientOcclusionEffectProperties::Activated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_SetAmbientOcclusionEffectProperties.Activated");

	UEFSeqAct_SetAmbientOcclusionEffectProperties_Activated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSeqAct_SetBlurEffectProperties.Activated
//		Flags  -> ()
// Parameters:
void UEFSeqAct_SetBlurEffectProperties::Activated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_SetBlurEffectProperties.Activated");

	UEFSeqAct_SetBlurEffectProperties_Activated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPickingEmitter.IsActivateEffect
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AEFPickingEmitter::IsActivateEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPickingEmitter.IsActivateEffect");

	AEFPickingEmitter_IsActivateEffect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPickingEmitter.DeactivateEffect
//		Flags  -> ()
// Parameters:
//		bool                                               bForceKill                                                 (Parm)
void AEFPickingEmitter::DeactivateEffect(bool bForceKill)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPickingEmitter.DeactivateEffect");

	AEFPickingEmitter_DeactivateEffect_Params params {};
	params.bForceKill = bForceKill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPickingEmitter.ActivateEffect
//		Flags  -> ()
// Parameters:
//		class AActor*                                      BaseActor                                                  (Parm)
void AEFPickingEmitter::ActivateEffect(class AActor* BaseActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPickingEmitter.ActivateEffect");

	AEFPickingEmitter_ActivateEffect_Params params {};
	params.BaseActor = BaseActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFPickingEmitter.OnParticleSystemFinished
//		Flags  -> ()
// Parameters:
//		class UParticleSystemComponent*                    FinishedComponent                                          (Parm, EditInline)
void AEFPickingEmitter::OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFPickingEmitter.OnParticleSystemFinished");

	AEFPickingEmitter_OnParticleSystemFinished_Params params {};
	params.FinishedComponent = FinishedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGameViewportClient.Tick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (Parm)
void UEFGameViewportClient::Tick(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGameViewportClient.Tick");

	UEFGameViewportClient_Tick_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGameViewportClient.PostRender
//		Flags  -> ()
// Parameters:
//		class UCanvas*                                     Canvas                                                     (Parm)
void UEFGameViewportClient::PostRender(class UCanvas* Canvas)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGameViewportClient.PostRender");

	UEFGameViewportClient_PostRender_Params params {};
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGameViewportClient.CreateScreenshot
//		Flags  -> ()
// Parameters:
//		struct FString                                     ScreenshotFilename                                         (Const, Parm, OutParm, NeedCtorLink)
//		bool                                               bCreateAsync                                               (OptionalParm, Parm)
//		bool                                               bAddInputInfo                                              (OptionalParm, Parm)
//		bool                                               bUseBMP                                                    (OptionalParm, Parm)
void UEFGameViewportClient::CreateScreenshot(struct FString* ScreenshotFilename, bool bCreateAsync, bool bAddInputInfo, bool bUseBMP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGameViewportClient.CreateScreenshot");

	UEFGameViewportClient_CreateScreenshot_Params params {};
	params.bCreateAsync = bCreateAsync;
	params.bAddInputInfo = bAddInputInfo;
	params.bUseBMP = bUseBMP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScreenshotFilename != nullptr)
		*ScreenshotFilename = params.ScreenshotFilename;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGameViewportClient.InitRelativeTimeFadeInfo
//		Flags  -> ()
void UEFGameViewportClient::InitRelativeTimeFadeInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGameViewportClient.InitRelativeTimeFadeInfo");

	UEFGameViewportClient_InitRelativeTimeFadeInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGameViewportClient.CacheViewProjectionMatrix
//		Flags  -> ()
// Parameters:
//		bool                                               bForceUpdate                                               (OptionalParm, Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFGameViewportClient::CacheViewProjectionMatrix(bool bForceUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGameViewportClient.CacheViewProjectionMatrix");

	UEFGameViewportClient_CacheViewProjectionMatrix_Params params {};
	params.bForceUpdate = bForceUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGameViewportClient.PostFullScreenFilterRender
//		Flags  -> ()
// Parameters:
//		class UCanvas*                                     Canvas                                                     (Parm)
void UEFGameViewportClient::PostFullScreenFilterRender(class UCanvas* Canvas)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGameViewportClient.PostFullScreenFilterRender");

	UEFGameViewportClient_PostFullScreenFilterRender_Params params {};
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGameViewportClient.PostFullScreenRender
//		Flags  -> ()
// Parameters:
//		class UCanvas*                                     Canvas                                                     (Parm)
//		bool                                               bRenderToSceneColor                                        (Parm)
void UEFGameViewportClient::PostFullScreenRender(class UCanvas* Canvas, bool bRenderToSceneColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGameViewportClient.PostFullScreenRender");

	UEFGameViewportClient_PostFullScreenRender_Params params {};
	params.Canvas = Canvas;
	params.bRenderToSceneColor = bRenderToSceneColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGameViewportClient.PostFadeInOutRender
//		Flags  -> ()
// Parameters:
//		class UCanvas*                                     Canvas                                                     (Parm)
void UEFGameViewportClient::PostFadeInOutRender(class UCanvas* Canvas)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGameViewportClient.PostFadeInOutRender");

	UEFGameViewportClient_PostFadeInOutRender_Params params {};
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGameViewportClient.SetHardwareMouseCursorVisibility
//		Flags  -> ()
// Parameters:
//		bool                                               bIsVisible                                                 (Parm)
void UEFGameViewportClient::SetHardwareMouseCursorVisibility(bool bIsVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGameViewportClient.SetHardwareMouseCursorVisibility");

	UEFGameViewportClient_SetHardwareMouseCursorVisibility_Params params {};
	params.bIsVisible = bIsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFNxForceFieldTornado.UpdateDynamicProperty
//		Flags  -> ()
void AEFNxForceFieldTornado::UpdateDynamicProperty()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFNxForceFieldTornado.UpdateDynamicProperty");

	AEFNxForceFieldTornado_UpdateDynamicProperty_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyHeightOffset
//		Flags  -> ()
void AEFNxForceFieldTornado::OnUpdatePropertyHeightOffset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyHeightOffset");

	AEFNxForceFieldTornado_OnUpdatePropertyHeightOffset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyForceHeight
//		Flags  -> ()
void AEFNxForceFieldTornado::OnUpdatePropertyForceHeight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyForceHeight");

	AEFNxForceFieldTornado_OnUpdatePropertyForceHeight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyEscapeVelocity
//		Flags  -> ()
void AEFNxForceFieldTornado::OnUpdatePropertyEscapeVelocity()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyEscapeVelocity");

	AEFNxForceFieldTornado_OnUpdatePropertyEscapeVelocity_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyLiftFalloffHeight
//		Flags  -> ()
void AEFNxForceFieldTornado::OnUpdatePropertyLiftFalloffHeight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyLiftFalloffHeight");

	AEFNxForceFieldTornado_OnUpdatePropertyLiftFalloffHeight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyForceTopRadius
//		Flags  -> ()
void AEFNxForceFieldTornado::OnUpdatePropertyForceTopRadius()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyForceTopRadius");

	AEFNxForceFieldTornado_OnUpdatePropertyForceTopRadius_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyForceRadius
//		Flags  -> ()
void AEFNxForceFieldTornado::OnUpdatePropertyForceRadius()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyForceRadius");

	AEFNxForceFieldTornado_OnUpdatePropertyForceRadius_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyLiftStrength
//		Flags  -> ()
void AEFNxForceFieldTornado::OnUpdatePropertyLiftStrength()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyLiftStrength");

	AEFNxForceFieldTornado_OnUpdatePropertyLiftStrength_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyRotationalStrength
//		Flags  -> ()
void AEFNxForceFieldTornado::OnUpdatePropertyRotationalStrength()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyRotationalStrength");

	AEFNxForceFieldTornado_OnUpdatePropertyRotationalStrength_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyRadialStrength
//		Flags  -> ()
void AEFNxForceFieldTornado::OnUpdatePropertyRadialStrength()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyRadialStrength");

	AEFNxForceFieldTornado_OnUpdatePropertyRadialStrength_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFData_MaskInfo.GetProperLevel
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<EFGame_EFEQUIP_PART>                   ePartsOwn                                                  (Parm)
//		TEnumAsByte<EFGame_EFEQUIP_PART>                   ePartsRelated                                              (Parm)
//		TEnumAsByte<EFGame_EFMASK_LEVEL>                   eCurLevel                                                  (Parm)
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ReturnParm)
unsigned char UEFData_MaskInfo::GetProperLevel(TEnumAsByte<EFGame_EFEQUIP_PART> ePartsOwn, TEnumAsByte<EFGame_EFEQUIP_PART> ePartsRelated, TEnumAsByte<EFGame_EFMASK_LEVEL> eCurLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFData_MaskInfo.GetProperLevel");

	UEFData_MaskInfo_GetProperLevel_Params params {};
	params.ePartsOwn = ePartsOwn;
	params.ePartsRelated = ePartsRelated;
	params.eCurLevel = eCurLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFExcelShell.GetColumNum
//		Flags  -> ()
// Parameters:
//		struct FString                                     strName                                                    (Parm, NeedCtorLink)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UEFExcelShell::GetColumNum(const struct FString& strName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.GetColumNum");

	UEFExcelShell_GetColumNum_Params params {};
	params.strName = strName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFExcelShell.NewLine
//		Flags  -> ()
void UEFExcelShell::NewLine()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.NewLine");

	UEFExcelShell_NewLine_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFExcelShell.ResetEdit
//		Flags  -> ()
void UEFExcelShell::ResetEdit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.ResetEdit");

	UEFExcelShell_ResetEdit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFExcelShell.SetLookPresetPosition
//		Flags  -> ()
// Parameters:
//		int                                                ColNo                                                      (Parm)
//		int                                                RowNo                                                      (Parm)
//		TEnumAsByte<EFGame_ECELL_LOOK>                     eLook                                                      (Parm)
void UEFExcelShell::SetLookPresetPosition(int ColNo, int RowNo, TEnumAsByte<EFGame_ECELL_LOOK> eLook)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.SetLookPresetPosition");

	UEFExcelShell_SetLookPresetPosition_Params params {};
	params.ColNo = ColNo;
	params.RowNo = RowNo;
	params.eLook = eLook;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFExcelShell.SetLookPresetRange
//		Flags  -> ()
// Parameters:
//		struct FString                                     Range                                                      (Parm, NeedCtorLink)
//		TEnumAsByte<EFGame_ECELL_LOOK>                     eLook                                                      (Parm)
void UEFExcelShell::SetLookPresetRange(const struct FString& Range, TEnumAsByte<EFGame_ECELL_LOOK> eLook)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.SetLookPresetRange");

	UEFExcelShell_SetLookPresetRange_Params params {};
	params.Range = Range;
	params.eLook = eLook;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFExcelShell.ReadStringRange
//		Flags  -> ()
// Parameters:
//		struct FString                                     Range                                                      (Parm, NeedCtorLink)
//		TArray<struct FString>                             outStringArr                                               (Parm, OutParm, NeedCtorLink)
//		bool                                               IsRaw                                                      (OptionalParm, Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFExcelShell::ReadStringRange(const struct FString& Range, TArray<struct FString>* outStringArr, bool IsRaw)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.ReadStringRange");

	UEFExcelShell_ReadStringRange_Params params {};
	params.Range = Range;
	params.IsRaw = IsRaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (outStringArr != nullptr)
		*outStringArr = params.outStringArr;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFExcelShell.ReadString
//		Flags  -> ()
// Parameters:
//		int                                                ColNo                                                      (Parm)
//		struct FString                                     Value                                                      (Parm, OutParm, NeedCtorLink)
void UEFExcelShell::ReadString(int ColNo, struct FString* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.ReadString");

	UEFExcelShell_ReadString_Params params {};
	params.ColNo = ColNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFExcelShell.WriteString
//		Flags  -> ()
// Parameters:
//		int                                                ColNo                                                      (Parm)
//		struct FString                                     Value                                                      (Parm, NeedCtorLink)
void UEFExcelShell::WriteString(int ColNo, const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.WriteString");

	UEFExcelShell_WriteString_Params params {};
	params.ColNo = ColNo;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFExcelShell.WriteName
//		Flags  -> ()
// Parameters:
//		int                                                ColNo                                                      (Parm)
//		struct FName                                       Value                                                      (Parm)
void UEFExcelShell::WriteName(int ColNo, const struct FName& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.WriteName");

	UEFExcelShell_WriteName_Params params {};
	params.ColNo = ColNo;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFExcelShell.WriteFloat
//		Flags  -> ()
// Parameters:
//		int                                                ColNo                                                      (Parm)
//		float                                              Value                                                      (Parm)
void UEFExcelShell::WriteFloat(int ColNo, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.WriteFloat");

	UEFExcelShell_WriteFloat_Params params {};
	params.ColNo = ColNo;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFExcelShell.WriteInt
//		Flags  -> ()
// Parameters:
//		int                                                ColNo                                                      (Parm)
//		int                                                Value                                                      (Parm)
void UEFExcelShell::WriteInt(int ColNo, int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.WriteInt");

	UEFExcelShell_WriteInt_Params params {};
	params.ColNo = ColNo;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFExcelShell.WriteUINT
//		Flags  -> ()
// Parameters:
//		int                                                ColNo                                                      (Parm)
//		int                                                Value                                                      (Parm)
void UEFExcelShell::WriteUINT(int ColNo, int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.WriteUINT");

	UEFExcelShell_WriteUINT_Params params {};
	params.ColNo = ColNo;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFExcelShell.SetSheetName
//		Flags  -> ()
// Parameters:
//		int                                                nSheeteIndex                                               (Parm)
//		struct FString                                     szSheetName                                                (Parm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFExcelShell::SetSheetName(int nSheeteIndex, const struct FString& szSheetName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.SetSheetName");

	UEFExcelShell_SetSheetName_Params params {};
	params.nSheeteIndex = nSheeteIndex;
	params.szSheetName = szSheetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFExcelShell.SetFont
//		Flags  -> ()
// Parameters:
//		struct FString                                     Range                                                      (Parm, NeedCtorLink)
//		struct FString                                     FontName                                                   (Parm, NeedCtorLink)
//		int                                                FontSize                                                   (Parm)
//		int                                                FontColor                                                  (Parm)
//		bool                                               bBold                                                      (Parm)
//		bool                                               bItalic                                                    (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFExcelShell::SetFont(const struct FString& Range, const struct FString& FontName, int FontSize, int FontColor, bool bBold, bool bItalic)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.SetFont");

	UEFExcelShell_SetFont_Params params {};
	params.Range = Range;
	params.FontName = FontName;
	params.FontSize = FontSize;
	params.FontColor = FontColor;
	params.bBold = bBold;
	params.bItalic = bItalic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFExcelShell.SetBorder
//		Flags  -> ()
// Parameters:
//		struct FString                                     Range                                                      (Parm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFExcelShell::SetBorder(const struct FString& Range)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.SetBorder");

	UEFExcelShell_SetBorder_Params params {};
	params.Range = Range;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFExcelShell.SetBackgroundColor
//		Flags  -> ()
// Parameters:
//		struct FString                                     Range                                                      (Parm, NeedCtorLink)
//		int                                                BGColor                                                    (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFExcelShell::SetBackgroundColor(const struct FString& Range, int BGColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.SetBackgroundColor");

	UEFExcelShell_SetBackgroundColor_Params params {};
	params.Range = Range;
	params.BGColor = BGColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFExcelShell.GetWorkSheetName
//		Flags  -> ()
// Parameters:
//		int                                                nSheetIndex                                                (Parm)
//		struct FString                                     strSheetName                                               (Parm, OutParm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFExcelShell::GetWorkSheetName(int nSheetIndex, struct FString* strSheetName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.GetWorkSheetName");

	UEFExcelShell_GetWorkSheetName_Params params {};
	params.nSheetIndex = nSheetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (strSheetName != nullptr)
		*strSheetName = params.strSheetName;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFExcelShell.SelectWorkSheet
//		Flags  -> ()
// Parameters:
//		int                                                nSheetIndex                                                (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFExcelShell::SelectWorkSheet(int nSheetIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.SelectWorkSheet");

	UEFExcelShell_SelectWorkSheet_Params params {};
	params.nSheetIndex = nSheetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFExcelShell.SelectWorkSheetByName
//		Flags  -> ()
// Parameters:
//		struct FString                                     strSheetName                                               (Parm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFExcelShell::SelectWorkSheetByName(const struct FString& strSheetName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.SelectWorkSheetByName");

	UEFExcelShell_SelectWorkSheetByName_Params params {};
	params.strSheetName = strSheetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFExcelShell.SaveAs
//		Flags  -> ()
// Parameters:
//		struct FString                                     FilePath                                                   (Parm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFExcelShell::SaveAs(const struct FString& FilePath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.SaveAs");

	UEFExcelShell_SaveAs_Params params {};
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFExcelShell.OpenExcelFile
//		Flags  -> ()
// Parameters:
//		struct FString                                     FilePath                                                   (Parm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFExcelShell::OpenExcelFile(const struct FString& FilePath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.OpenExcelFile");

	UEFExcelShell_OpenExcelFile_Params params {};
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFExcelShell.NewSheet
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFExcelShell::NewSheet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.NewSheet");

	UEFExcelShell_NewSheet_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFExcelShell.NewExcelFile
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFExcelShell::NewExcelFile()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.NewExcelFile");

	UEFExcelShell_NewExcelFile_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFExcelShell.AutoFitColomn
//		Flags  -> ()
// Parameters:
//		int                                                ColNo                                                      (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFExcelShell::AutoFitColomn(int ColNo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.AutoFitColomn");

	UEFExcelShell_AutoFitColomn_Params params {};
	params.ColNo = ColNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFExcelShell.AutoFitColumn
//		Flags  -> ()
// Parameters:
//		struct FString                                     ColName                                                    (Parm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFExcelShell::AutoFitColumn(const struct FString& ColName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFExcelShell.AutoFitColumn");

	UEFExcelShell_AutoFitColumn_Params params {};
	params.ColName = ColName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFLocalTrigger.Touch
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Other                                                      (Parm)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, EditInline)
//		struct FVector                                     HitLocation                                                (Parm)
//		struct FVector                                     HitNormal                                                  (Parm)
void AEFLocalTrigger::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFLocalTrigger.Touch");

	AEFLocalTrigger_Touch_Params params {};
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFLocalTrigger.PostBeginPlay
//		Flags  -> ()
void AEFLocalTrigger::PostBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFLocalTrigger.PostBeginPlay");

	AEFLocalTrigger_PostBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFLocalTrigger.IsCinematicControl
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AEFLocalTrigger::IsCinematicControl()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFLocalTrigger.IsCinematicControl");

	AEFLocalTrigger_IsCinematicControl_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFLocalTrigger.IsLocalMode
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AEFLocalTrigger::IsLocalMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFLocalTrigger.IsLocalMode");

	AEFLocalTrigger_IsLocalMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFLocalTriggerVolume.Touch
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Other                                                      (Parm)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, EditInline)
//		struct FVector                                     HitLocation                                                (Parm)
//		struct FVector                                     HitNormal                                                  (Parm)
void AEFLocalTriggerVolume::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFLocalTriggerVolume.Touch");

	AEFLocalTriggerVolume_Touch_Params params {};
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFLocalTriggerVolume.PostBeginPlay
//		Flags  -> ()
void AEFLocalTriggerVolume::PostBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFLocalTriggerVolume.PostBeginPlay");

	AEFLocalTriggerVolume_PostBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFLocalTriggerVolume.IsCinematicControl
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AEFLocalTriggerVolume::IsCinematicControl()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFLocalTriggerVolume.IsCinematicControl");

	AEFLocalTriggerVolume_IsCinematicControl_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFLocalTriggerVolume.IsLocalMode
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AEFLocalTriggerVolume::IsLocalMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFLocalTriggerVolume.IsLocalMode");

	AEFLocalTriggerVolume_IsLocalMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSeqAct_SetDOFEffectProperties.SetProperties
//		Flags  -> ()
// Parameters:
//		class UPostProcessEffect*                          PostProcessEffect                                          (Parm)
void UEFSeqAct_SetDOFEffectProperties::SetProperties(class UPostProcessEffect* PostProcessEffect)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_SetDOFEffectProperties.SetProperties");

	UEFSeqAct_SetDOFEffectProperties_SetProperties_Params params {};
	params.PostProcessEffect = PostProcessEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSeqAct_SetDOFEffectProperties.Activated
//		Flags  -> ()
// Parameters:
void UEFSeqAct_SetDOFEffectProperties::Activated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_SetDOFEffectProperties.Activated");

	UEFSeqAct_SetDOFEffectProperties_Activated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSeqAct_SetDOFAndBloomEffectProperties.SetProperties
//		Flags  -> ()
// Parameters:
//		class UPostProcessEffect*                          PostProcessEffect                                          (Parm)
void UEFSeqAct_SetDOFAndBloomEffectProperties::SetProperties(class UPostProcessEffect* PostProcessEffect)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_SetDOFAndBloomEffectProperties.SetProperties");

	UEFSeqAct_SetDOFAndBloomEffectProperties_SetProperties_Params params {};
	params.PostProcessEffect = PostProcessEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSeqAct_SetDOFBloomMotionBlurEffect.SetProperties
//		Flags  -> ()
// Parameters:
//		class UPostProcessEffect*                          PostProcessEffect                                          (Parm)
void UEFSeqAct_SetDOFBloomMotionBlurEffect::SetProperties(class UPostProcessEffect* PostProcessEffect)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_SetDOFBloomMotionBlurEffect.SetProperties");

	UEFSeqAct_SetDOFBloomMotionBlurEffect_SetProperties_Params params {};
	params.PostProcessEffect = PostProcessEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSeqAct_SetMaterialEffectProperties.Activated
//		Flags  -> ()
// Parameters:
void UEFSeqAct_SetMaterialEffectProperties::Activated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_SetMaterialEffectProperties.Activated");

	UEFSeqAct_SetMaterialEffectProperties_Activated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSeqAct_SetMotionBlurEffectProperties.Activated
//		Flags  -> ()
// Parameters:
void UEFSeqAct_SetMotionBlurEffectProperties::Activated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_SetMotionBlurEffectProperties.Activated");

	UEFSeqAct_SetMotionBlurEffectProperties_Activated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSeqAct_SetUberPostProcessEffect.Activated
//		Flags  -> ()
// Parameters:
void UEFSeqAct_SetUberPostProcessEffect::Activated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_SetUberPostProcessEffect.Activated");

	UEFSeqAct_SetUberPostProcessEffect_Activated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFSeqAct_TogglePostProcessEffect.Activated
//		Flags  -> ()
// Parameters:
void UEFSeqAct_TogglePostProcessEffect::Activated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFSeqAct_TogglePostProcessEffect.Activated");

	UEFSeqAct_TogglePostProcessEffect_Activated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFDataContainer.XmlExport
//		Flags  -> ()
// Parameters:
//		struct FString                                     strPath                                                    (Parm, NeedCtorLink)
//		struct FString                                     strErrorMsg                                                (Parm, OutParm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFDataContainer::XmlExport(const struct FString& strPath, struct FString* strErrorMsg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFDataContainer.XmlExport");

	UEFDataContainer_XmlExport_Params params {};
	params.strPath = strPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (strErrorMsg != nullptr)
		*strErrorMsg = params.strErrorMsg;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFDataContainer.XlsExport
//		Flags  -> ()
// Parameters:
//		class UEFExcelShell*                               Shell                                                      (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFDataContainer::XlsExport(class UEFExcelShell* Shell)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFDataContainer.XlsExport");

	UEFDataContainer_XlsExport_Params params {};
	params.Shell = Shell;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFDataContainer.XlsImport
//		Flags  -> ()
// Parameters:
//		class UEFExcelShell*                               Shell                                                      (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFDataContainer::XlsImport(class UEFExcelShell* Shell)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFDataContainer.XlsImport");

	UEFDataContainer_XlsImport_Params params {};
	params.Shell = Shell;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFDataContainer_CharacterCustomizing.XmlExport
//		Flags  -> ()
// Parameters:
//		struct FString                                     strPath                                                    (Parm, NeedCtorLink)
//		struct FString                                     strErrorMsg                                                (Parm, OutParm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFDataContainer_CharacterCustomizing::XmlExport(const struct FString& strPath, struct FString* strErrorMsg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFDataContainer_CharacterCustomizing.XmlExport");

	UEFDataContainer_CharacterCustomizing_XmlExport_Params params {};
	params.strPath = strPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (strErrorMsg != nullptr)
		*strErrorMsg = params.strErrorMsg;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFDataContainer_ColorPalette.XmlExport
//		Flags  -> ()
// Parameters:
//		struct FString                                     strPath                                                    (Parm, NeedCtorLink)
//		struct FString                                     strErrorMsg                                                (Parm, OutParm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFDataContainer_ColorPalette::XmlExport(const struct FString& strPath, struct FString* strErrorMsg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFDataContainer_ColorPalette.XmlExport");

	UEFDataContainer_ColorPalette_XmlExport_Params params {};
	params.strPath = strPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (strErrorMsg != nullptr)
		*strErrorMsg = params.strErrorMsg;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFDataContainer_CustomizeBoneScale.XmlExport
//		Flags  -> ()
// Parameters:
//		struct FString                                     strPath                                                    (Parm, NeedCtorLink)
//		struct FString                                     strErrorMsg                                                (Parm, OutParm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFDataContainer_CustomizeBoneScale::XmlExport(const struct FString& strPath, struct FString* strErrorMsg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFDataContainer_CustomizeBoneScale.XmlExport");

	UEFDataContainer_CustomizeBoneScale_XmlExport_Params params {};
	params.strPath = strPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (strErrorMsg != nullptr)
		*strErrorMsg = params.strErrorMsg;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFDataContainer_LookInfos.XmlExport
//		Flags  -> ()
// Parameters:
//		struct FString                                     strPath                                                    (Parm, NeedCtorLink)
//		struct FString                                     strErrorMsg                                                (Parm, OutParm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFDataContainer_LookInfos::XmlExport(const struct FString& strPath, struct FString* strErrorMsg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFDataContainer_LookInfos.XmlExport");

	UEFDataContainer_LookInfos_XmlExport_Params params {};
	params.strPath = strPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (strErrorMsg != nullptr)
		*strErrorMsg = params.strErrorMsg;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFDataContainer_NpcFunction.XmlExport
//		Flags  -> ()
// Parameters:
//		struct FString                                     strPath                                                    (Parm, NeedCtorLink)
//		struct FString                                     strErrorMsg                                                (Parm, OutParm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFDataContainer_NpcFunction::XmlExport(const struct FString& strPath, struct FString* strErrorMsg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFDataContainer_NpcFunction.XmlExport");

	UEFDataContainer_NpcFunction_XmlExport_Params params {};
	params.strPath = strPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (strErrorMsg != nullptr)
		*strErrorMsg = params.strErrorMsg;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFDataContainer_Quest.XmlExport
//		Flags  -> ()
// Parameters:
//		struct FString                                     strPath                                                    (Parm, NeedCtorLink)
//		struct FString                                     strErrorMsg                                                (Parm, OutParm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFDataContainer_Quest::XmlExport(const struct FString& strPath, struct FString* strErrorMsg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFDataContainer_Quest.XmlExport");

	UEFDataContainer_Quest_XmlExport_Params params {};
	params.strPath = strPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (strErrorMsg != nullptr)
		*strErrorMsg = params.strErrorMsg;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFDataContainer_TexturePalette.XmlExport
//		Flags  -> ()
// Parameters:
//		struct FString                                     strPath                                                    (Parm, NeedCtorLink)
//		struct FString                                     strErrorMsg                                                (Parm, OutParm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UEFDataContainer_TexturePalette::XmlExport(const struct FString& strPath, struct FString* strErrorMsg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFDataContainer_TexturePalette.XmlExport");

	UEFDataContainer_TexturePalette_XmlExport_Params params {};
	params.strPath = strPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (strErrorMsg != nullptr)
		*strErrorMsg = params.strErrorMsg;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFLightBeam.SetActive
//		Flags  -> ()
// Parameters:
//		bool                                               bAct                                                       (Parm)
void AEFLightBeam::SetActive(bool bAct)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFLightBeam.SetActive");

	AEFLightBeam_SetActive_Params params {};
	params.bAct = bAct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFMatineePathNode.BreakAllConnectionsFrom
//		Flags  -> ()
void AEFMatineePathNode::BreakAllConnectionsFrom()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFMatineePathNode.BreakAllConnectionsFrom");

	AEFMatineePathNode_BreakAllConnectionsFrom_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFMatineePathNode.BreakAllConnections
//		Flags  -> ()
void AEFMatineePathNode::BreakAllConnections()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFMatineePathNode.BreakAllConnections");

	AEFMatineePathNode_BreakAllConnections_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFMatineePathNode.BreakConnectionTo
//		Flags  -> ()
// Parameters:
//		class AEFMatineePathNode*                          NextActor                                                  (Parm)
void AEFMatineePathNode::BreakConnectionTo(class AEFMatineePathNode* NextActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFMatineePathNode.BreakConnectionTo");

	AEFMatineePathNode_BreakConnectionTo_Params params {};
	params.NextActor = NextActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFMatineePathNode.IsConnectedTo
//		Flags  -> ()
// Parameters:
//		class AEFMatineePathNode*                          NextActor                                                  (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AEFMatineePathNode::IsConnectedTo(class AEFMatineePathNode* NextActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFMatineePathNode.IsConnectedTo");

	AEFMatineePathNode_IsConnectedTo_Params params {};
	params.NextActor = NextActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFMatineePathNode.AddConnectionTo
//		Flags  -> ()
// Parameters:
//		class AEFMatineePathNode*                          NextActor                                                  (Parm)
void AEFMatineePathNode::AddConnectionTo(class AEFMatineePathNode* NextActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFMatineePathNode.AddConnectionTo");

	AEFMatineePathNode_AddConnectionTo_Params params {};
	params.NextActor = NextActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFMatineePathNode.UpdateConnectedLineComponents
//		Flags  -> ()
// Parameters:
//		bool                                               bFinish                                                    (Parm)
void AEFMatineePathNode::UpdateConnectedLineComponents(bool bFinish)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFMatineePathNode.UpdateConnectedLineComponents");

	AEFMatineePathNode_UpdateConnectedLineComponents_Params params {};
	params.bFinish = bFinish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFMatineePathNode.UpdateLineComponents
//		Flags  -> ()
void AEFMatineePathNode::UpdateLineComponents()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFMatineePathNode.UpdateLineComponents");

	AEFMatineePathNode_UpdateLineComponents_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxHUDWrapper.PostRender
//		Flags  -> ()
void AEFGFxHUDWrapper::PostRender()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxHUDWrapper.PostRender");

	AEFGFxHUDWrapper_PostRender_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxHUDWrapper.PostBeginPlay
//		Flags  -> ()
void AEFGFxHUDWrapper::PostBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxHUDWrapper.PostBeginPlay");

	AEFGFxHUDWrapper_PostBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFGFxHUDWrapper.Destroyed
//		Flags  -> ()
void AEFGFxHUDWrapper::Destroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFGFxHUDWrapper.Destroyed");

	AEFGFxHUDWrapper_Destroyed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EFGame.EFTexture2DDynamic.UpdateMipFromPNG
//		Flags  -> ()
// Parameters:
//		int                                                MipIdx                                                     (Parm)
//		TArray<unsigned char>                              MipData                                                    (Const, Parm, OutParm, NeedCtorLink)
//		bool                                               UseBoardA                                                  (Parm)
void UEFTexture2DDynamic::UpdateMipFromPNG(int MipIdx, TArray<unsigned char>* MipData, bool UseBoardA)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EFGame.EFTexture2DDynamic.UpdateMipFromPNG");

	UEFTexture2DDynamic_UpdateMipFromPNG_Params params {};
	params.MipIdx = MipIdx;
	params.UseBoardA = UseBoardA;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MipData != nullptr)
		*MipData = params.MipData;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
