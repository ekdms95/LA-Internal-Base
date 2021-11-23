#pragma once

// Name: LOSTARK, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function EFGame.EFCharacterParts.OnParticleSystemFinished
struct AEFCharacterParts_OnParticleSystemFinished_Params
{
	class UParticleSystemComponent*                    PSC;                                                       // 0x0000(0x0008)  (Parm, EditInline)
};

// Function EFGame.EFCharacterParts.ClearAttachedPSIIndex
struct AEFCharacterParts_ClearAttachedPSIIndex_Params
{
};

// Function EFGame.EFCharacterParts.BaseChange
struct AEFCharacterParts_BaseChange_Params
{
};

// Function EFGame.EFCharacterParts.EncroachingOn
struct AEFCharacterParts_EncroachingOn_Params
{
	class AActor*                                      Other;                                                     // 0x0000(0x0008)  (Parm)
	bool                                               ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFCharacterParts.EncroachedBy
struct AEFCharacterParts_EncroachedBy_Params
{
	class AActor*                                      Other;                                                     // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFCharacterParts.Destroyed
struct AEFCharacterParts_Destroyed_Params
{
};

// Function EFGame.EFCheatManager.InternalDebugLookAt
struct UEFCheatManager_InternalDebugLookAt_Params
{
};

// Function EFGame.EFCheatManager.InternalVisualizePhysicsCompartmentUsage
struct UEFCheatManager_InternalVisualizePhysicsCompartmentUsage_Params
{
};

// Function EFGame.EFCheatManager.InternalSetPhysicsCompartmentCount
struct UEFCheatManager_InternalSetPhysicsCompartmentCount_Params
{
	int                                                inCount;                                                   // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFCheatManager.InternalTogglePhysicsCompartmentForEFPawns
struct UEFCheatManager_InternalTogglePhysicsCompartmentForEFPawns_Params
{
};

// Function EFGame.EFCheatManager.InternalSetCamTargetBlendTime
struct UEFCheatManager_InternalSetCamTargetBlendTime_Params
{
	float                                              a_Time;                                                    // 0x0000(0x0004)  (Parm)
	float                                              a_Exp;                                                     // 0x0004(0x0004)  (Parm)
};

// Function EFGame.EFCheatManager.InternalClearCamTarget
struct UEFCheatManager_InternalClearCamTarget_Params
{
};

// Function EFGame.EFCheatManager.InternalSetCamTarget
struct UEFCheatManager_InternalSetCamTarget_Params
{
	struct FString                                     a_Nickname;                                                // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFCheatManager.InternalCamPrevTarget
struct UEFCheatManager_InternalCamPrevTarget_Params
{
};

// Function EFGame.EFCheatManager.InternalCamNextTarget
struct UEFCheatManager_InternalCamNextTarget_Params
{
};

// Function EFGame.EFCheatManager.InternalGetPlayerCamera
struct UEFCheatManager_InternalGetPlayerCamera_Params
{
	class AEFPlayerCamera*                             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFCheatManager.InternalToggleCullDistanceVolume
struct UEFCheatManager_InternalToggleCullDistanceVolume_Params
{
};

// Function EFGame.EFCheatManager.InternalToggleCPUSkinning
struct UEFCheatManager_InternalToggleCPUSkinning_Params
{
	struct FString                                     InMeshName;                                                // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFCheatManager.InternalToggleOneFrameThreadLag
struct UEFCheatManager_InternalToggleOneFrameThreadLag_Params
{
};

// Function EFGame.EFCheatManager.InternalToggleUpdateDLEOptimize
struct UEFCheatManager_InternalToggleUpdateDLEOptimize_Params
{
};

// Function EFGame.EFCheatManager.InternalToggleMeshObjectUpdateOptimize
struct UEFCheatManager_InternalToggleMeshObjectUpdateOptimize_Params
{
};

// Function EFGame.EFCheatManager.InternalToggleUpdateBoundsOptimize
struct UEFCheatManager_InternalToggleUpdateBoundsOptimize_Params
{
};

// Function EFGame.EFCheatManager.InternalToggleDynamicFoliageOptimize
struct UEFCheatManager_InternalToggleDynamicFoliageOptimize_Params
{
};

// Function EFGame.EFCheatManager.InternalToggleParticleOptimizeILG
struct UEFCheatManager_InternalToggleParticleOptimizeILG_Params
{
};

// Function EFGame.EFConsole.IsValidEFCommand
struct UEFConsole_IsValidEFCommand_Params
{
	int                                                Idx;                                                       // 0x0000(0x0004)  (Parm)
	bool                                               ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFConsole.InputAxis
struct UEFConsole_InputAxis_Params
{
	int                                                ControllerId;                                              // 0x0000(0x0004)  (Parm)
	struct FName                                       Key;                                                       // 0x0004(0x0008)  (Parm)
	float                                              Delta;                                                     // 0x000C(0x0004)  (Parm)
	float                                              DeltaTime;                                                 // 0x0010(0x0004)  (Parm)
	bool                                               bGamepad;                                                  // 0x0014(0x0004)  (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // 0x0018(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFConsole.InputKey
struct UEFConsole_InputKey_Params
{
	int                                                ControllerId;                                              // 0x0000(0x0004)  (Parm)
	struct FName                                       Key;                                                       // 0x0004(0x0008)  (Parm)
	TEnumAsByte<Core_EInputEvent>                      Event;                                                     // 0x000C(0x0001)  (Parm)
	float                                              AmountDepressed;                                           // 0x0010(0x0004)  (OptionalParm, Parm)
	bool                                               bGamepad;                                                  // 0x0014(0x0004)  (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // 0x0018(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFDecalFloorActor.GetBoundingCylinder
struct AEFDecalFloorActor_GetBoundingCylinder_Params
{
	float                                              CollisionRadius;                                           // 0x0000(0x0004)  (Parm, OutParm)
	float                                              CollisionHeight;                                           // 0x0004(0x0004)  (Parm, OutParm)
};

// Function EFGame.EFDecalManager.SpawnDecalMinimal
struct AEFDecalManager_SpawnDecalMinimal_Params
{
	class UMaterialInterface*                          DecalMaterial;                                             // 0x0000(0x0008)  (Parm)
	struct FVector                                     DecalLocation;                                             // 0x0008(0x000C)  (Parm)
	struct FRotator                                    DecalOrientation;                                          // 0x0014(0x000C)  (Parm)
	float                                              Width;                                                     // 0x0020(0x0004)  (Parm)
	float                                              Height;                                                    // 0x0024(0x0004)  (Parm)
	float                                              InLifeSpan;                                                // 0x0028(0x0004)  (Parm)
	float                                              Thickness;                                                 // 0x002C(0x0004)  (Parm)
	bool                                               bNoClip;                                                   // 0x0030(0x0004)  (Parm)
	float                                              DecalRotation;                                             // 0x0034(0x0004)  (Parm)
	class UDecalComponent*                             ReturnValue;                                               // 0x0038(0x0008)  (Parm, OutParm, ReturnParm, EditInline)
};

// Function EFGame.EFFracturedStaticMeshActor.ClearManagedSpawnParts
struct AEFFracturedStaticMeshActor_ClearManagedSpawnParts_Params
{
};

// Function EFGame.EFFracturedStaticMeshActor.ClearAttachedPSIIndex
struct AEFFracturedStaticMeshActor_ClearAttachedPSIIndex_Params
{
};

// Function EFGame.EFFracturedStaticMeshActor.NotifyChangedBase
struct AEFFracturedStaticMeshActor_NotifyChangedBase_Params
{
};

// Function EFGame.EFFracturedStaticMeshActor.BreakOffPartsInRadius
struct AEFFracturedStaticMeshActor_BreakOffPartsInRadius_Params
{
	struct FVector                                     Origin;                                                    // 0x0000(0x000C)  (Parm)
	float                                              Radius;                                                    // 0x000C(0x0004)  (Parm)
	float                                              RBStrength;                                                // 0x0010(0x0004)  (Parm)
	bool                                               bWantPhysChunksAndParticles;                               // 0x0014(0x0004)  (Parm)
};

// Function EFGame.EFFracturedStaticMeshActor.BreakOffIsolatedIslands
struct AEFFracturedStaticMeshActor_BreakOffIsolatedIslands_Params
{
	TArray<unsigned char>                              FragmentVis;                                               // 0x0000(0x0010)  (Parm, OutParm, NeedCtorLink)
	TArray<int>                                        IgnoreFrags;                                               // 0x0010(0x0010)  (Parm, NeedCtorLink)
	struct FVector                                     ChunkDir;                                                  // 0x0020(0x000C)  (Parm)
	TArray<class AFracturedStaticMeshPart*>            DisableCollWithPart;                                       // 0x002C(0x0010)  (Parm, NeedCtorLink)
	bool                                               bWantPhysChunks;                                           // 0x003C(0x0004)  (Parm)
};

// Function EFGame.EFFracturedStaticMeshActor.SpawnDeferredParts
struct AEFFracturedStaticMeshActor_SpawnDeferredParts_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFFracturedStaticMeshActor.Explode
struct AEFFracturedStaticMeshActor_Explode_Params
{
};

// Function EFGame.EFFracturedStaticMeshActor.TakeDamage
struct AEFFracturedStaticMeshActor_TakeDamage_Params
{
	int                                                Damage;                                                    // 0x0000(0x0004)  (Parm)
	class AController*                                 EventInstigator;                                           // 0x0004(0x0008)  (Parm)
	struct FVector                                     HitLocation;                                               // 0x000C(0x000C)  (Parm)
	struct FVector                                     Momentum;                                                  // 0x0018(0x000C)  (Parm)
	class UClass*                                      DamageType;                                                // 0x0024(0x0008)  (Parm)
	struct FTraceHitInfo                               HitInfo;                                                   // 0x002C(0x0028)  (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                              // 0x0054(0x0008)  (OptionalParm, Parm)
};

// Function EFGame.EFFracturedStaticMeshActor.BaseChange
struct AEFFracturedStaticMeshActor_BaseChange_Params
{
};

// Function EFGame.EFFracturedStaticMeshActor.Destroyed
struct AEFFracturedStaticMeshActor_Destroyed_Params
{
};

// Function EFGame.EFFracturedStaticMeshActor.PostBeginPlay
struct AEFFracturedStaticMeshActor_PostBeginPlay_Params
{
};

// Function EFGame.EFFracturedStaticMeshPart.BreakOffPartsInRadius
struct AEFFracturedStaticMeshPart_BreakOffPartsInRadius_Params
{
	struct FVector                                     Origin;                                                    // 0x0000(0x000C)  (Parm)
	float                                              Radius;                                                    // 0x000C(0x0004)  (Parm)
	float                                              RBStrength;                                                // 0x0010(0x0004)  (Parm)
	bool                                               bWantPhysChunksAndParticles;                               // 0x0014(0x0004)  (Parm)
};

// Function EFGame.EFFracturedStaticMeshPart.BreakOffIsolatedIslands
struct AEFFracturedStaticMeshPart_BreakOffIsolatedIslands_Params
{
	TArray<unsigned char>                              FragmentVis;                                               // 0x0000(0x0010)  (Parm, OutParm, NeedCtorLink)
	TArray<int>                                        IgnoreFrags;                                               // 0x0010(0x0010)  (Parm, NeedCtorLink)
	struct FVector                                     ChunkDir;                                                  // 0x0020(0x000C)  (Parm)
	TArray<class AFracturedStaticMeshPart*>            DisableCollWithPart;                                       // 0x002C(0x0010)  (Parm, NeedCtorLink)
	bool                                               bWantPhysChunks;                                           // 0x003C(0x0004)  (Parm)
};

// Function EFGame.EFFracturedStaticMeshPart.SpawnDeferredParts
struct AEFFracturedStaticMeshPart_SpawnDeferredParts_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFFracturedStaticMeshPart.Explode
struct AEFFracturedStaticMeshPart_Explode_Params
{
};

// Function EFGame.EFFracturedStaticMeshPart.DoExplode
struct AEFFracturedStaticMeshPart_DoExplode_Params
{
};

// Function EFGame.EFFracturedStaticMeshPart.TakeDamage
struct AEFFracturedStaticMeshPart_TakeDamage_Params
{
	int                                                Damage;                                                    // 0x0000(0x0004)  (Parm)
	class AController*                                 EventInstigator;                                           // 0x0004(0x0008)  (Parm)
	struct FVector                                     HitLocation;                                               // 0x000C(0x000C)  (Parm)
	struct FVector                                     Momentum;                                                  // 0x0018(0x000C)  (Parm)
	class UClass*                                      DamageType;                                                // 0x0024(0x0008)  (Parm)
	struct FTraceHitInfo                               HitInfo;                                                   // 0x002C(0x0028)  (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                              // 0x0054(0x0008)  (OptionalParm, Parm)
};

// Function EFGame.EFFracturedStaticMeshPart.PostBeginPlay
struct AEFFracturedStaticMeshPart_PostBeginPlay_Params
{
};

// Function EFGame.EFFracturedStaticMeshPart.RecyclePart
struct AEFFracturedStaticMeshPart_RecyclePart_Params
{
	bool                                               bAddToFreePool;                                            // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFFracturedStaticMeshPart.Initialize
struct AEFFracturedStaticMeshPart_Initialize_Params
{
};

// Function EFGame.EFGameInfo.AllowCheats
struct AEFGameInfo_AllowCheats_Params
{
	class APlayerController*                           P;                                                         // 0x0000(0x0008)  (Parm)
	bool                                               ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFGameInfo.PostSeamlessTravel
struct AEFGameInfo_PostSeamlessTravel_Params
{
};

// Function EFGame.EFGameInfo.GameEnding
struct AEFGameInfo_GameEnding_Params
{
};

// Function EFGame.EFGameInfo.NotifyMapLoaded
struct AEFGameInfo_NotifyMapLoaded_Params
{
};

// Function EFGame.EFGameInfo.NotfiyLoadingStep
struct AEFGameInfo_NotfiyLoadingStep_Params
{
	struct FString                                     InStepName;                                                // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGameInfo.Tick
struct AEFGameInfo_Tick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGameInfo.PostLogin
struct AEFGameInfo_PostLogin_Params
{
	class APlayerController*                           NewPlayer;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFGameInfo.Login
struct AEFGameInfo_Login_Params
{
	struct FString                                     Portal;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     Options;                                                   // 0x0010(0x0010)  (Parm, NeedCtorLink)
	struct FUniqueNetId                                UniqueId;                                                  // 0x0020(0x0008)  (Const, Parm)
	struct FString                                     ErrorMessage;                                              // 0x0028(0x0010)  (Parm, OutParm, NeedCtorLink)
	class APlayerController*                           ReturnValue;                                               // 0x0038(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFGameInfo.LoadLevel
struct AEFGameInfo_LoadLevel_Params
{
	struct FString                                     LevelName;                                                 // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGameInfo.RestartPlayer
struct AEFGameInfo_RestartPlayer_Params
{
	class AController*                                 NewPlayer;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFEnvironmentInfoVolume.UnTouch
struct AEFEnvironmentInfoVolume_UnTouch_Params
{
	class AActor*                                      Other;                                                     // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFEnvironmentInfoVolume.Touch
struct AEFEnvironmentInfoVolume_Touch_Params
{
	class AActor*                                      Other;                                                     // 0x0000(0x0008)  (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0008(0x0008)  (Parm, EditInline)
	struct FVector                                     HitLocation;                                               // 0x0010(0x000C)  (Parm)
	struct FVector                                     HitNormal;                                                 // 0x001C(0x000C)  (Parm)
};

// Function EFGame.EFEnvironmentInfoVolume.UpdateEnvironment
struct AEFEnvironmentInfoVolume_UpdateEnvironment_Params
{
	float                                              InAlpha;                                                   // 0x0000(0x0004)  (Parm)
	bool                                               bUpdateComponent;                                          // 0x0004(0x0004)  (OptionalParm, Parm)
	bool                                               bIgnoreOverride;                                           // 0x0008(0x0004)  (OptionalParm, Parm)
};

// Function EFGame.EFEnvironmentInfoVolume.OnToggle
struct AEFEnvironmentInfoVolume_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                    // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFVolume.UnTouch
struct AEFVolume_UnTouch_Params
{
	class AActor*                                      Other;                                                     // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFVolume.Touch
struct AEFVolume_Touch_Params
{
	class AActor*                                      Other;                                                     // 0x0000(0x0008)  (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0008(0x0008)  (Parm, EditInline)
	struct FVector                                     HitLocation;                                               // 0x0010(0x000C)  (Parm)
	struct FVector                                     HitNormal;                                                 // 0x001C(0x000C)  (Parm)
};

// Function EFGame.EFPathBlockingVolume.StopsProjectile
struct AEFPathBlockingVolume_StopsProjectile_Params
{
	class AProjectile*                                 P;                                                         // 0x0000(0x0008)  (Parm)
	bool                                               ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFTranslucentVolume.OnChangeTranslucentVolumeAction
struct AEFTranslucentVolume_OnChangeTranslucentVolumeAction_Params
{
	class UEFSeqAct_ChangeTranslucentVolumeAction*     InSeqAction;                                               // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFGFxMoviePlayer.GetStringINI
struct UEFGFxMoviePlayer_GetStringINI_Params
{
	struct FString                                     Type;                                                      // 0x0000(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function EFGame.EFGFxMoviePlayer.SetStringINI
struct UEFGFxMoviePlayer_SetStringINI_Params
{
	struct FString                                     Type;                                                      // 0x0000(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     Value;                                                     // 0x0010(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxMoviePlayer.CreateArrayEx
struct UEFGFxMoviePlayer_CreateArrayEx_Params
{
	struct FString                                     SourceFile;                                                // 0x0000(0x0010)  (OptionalParm, Parm, NeedCtorLink)
	int                                                SourceLine;                                                // 0x0010(0x0004)  (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                               // 0x0014(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFGFxMoviePlayer.CreateObjectEx
struct UEFGFxMoviePlayer_CreateObjectEx_Params
{
	struct FString                                     ASClass;                                                   // 0x0000(0x0010)  (Parm, NeedCtorLink)
	class UClass*                                      Type;                                                      // 0x0010(0x0008)  (OptionalParm, Parm)
	TArray<struct FASValue>                            args;                                                      // 0x0018(0x0010)  (OptionalParm, Parm, NeedCtorLink)
	struct FString                                     SourceFile;                                                // 0x0028(0x0010)  (OptionalParm, Parm, NeedCtorLink)
	int                                                SourceLine;                                                // 0x0038(0x0004)  (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                               // 0x003C(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFGFxMoviePlayer.PostAdvance
struct UEFGFxMoviePlayer_PostAdvance_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxMoviePlayer.WidgetUnloaded
struct UEFGFxMoviePlayer_WidgetUnloaded_Params
{
	struct FName                                       WidgetName;                                                // 0x0000(0x0008)  (Parm)
	struct FName                                       WidgetPath;                                                // 0x0008(0x0008)  (Parm)
	class UGFxObject*                                  Widget;                                                    // 0x0010(0x0008)  (Parm)
	bool                                               ReturnValue;                                               // 0x0018(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFGFxMoviePlayer.WidgetInitialized
struct UEFGFxMoviePlayer_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                                // 0x0000(0x0008)  (Parm)
	struct FName                                       WidgetPath;                                                // 0x0008(0x0008)  (Parm)
	class UGFxObject*                                  Widget;                                                    // 0x0010(0x0008)  (Parm)
	bool                                               ReturnValue;                                               // 0x0018(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFGFxEditorMoviePlayer.Start
struct UEFGFxEditorMoviePlayer_Start_Params
{
	bool                                               StartPaused;                                               // 0x0000(0x0004)  (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFGFxMovieWidget.GetExternalTexture
struct UEFGFxMovieWidget_GetExternalTexture_Params
{
	struct FString                                     Resource;                                                  // 0x0000(0x0010)  (Parm, NeedCtorLink)
	class UTexture*                                    ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFGFxMovieWidget.HasGFxObjectBinding
struct UEFGFxMovieWidget_HasGFxObjectBinding_Params
{
	class UGFxObject*                                  Widget;                                                    // 0x0000(0x0008)  (Parm)
	bool                                               ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFGFxMovieWidget.DelGFxObjectBinding
struct UEFGFxMovieWidget_DelGFxObjectBinding_Params
{
	class UGFxObject*                                  Widget;                                                    // 0x0000(0x0008)  (Parm)
	bool                                               ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFGFxMovieWidget.AddGFxObjectBinding
struct UEFGFxMovieWidget_AddGFxObjectBinding_Params
{
	class UGFxObject*                                  Widget;                                                    // 0x0000(0x0008)  (Parm)
	bool                                               ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFGFxMovieWidget.SetVisible
struct UEFGFxMovieWidget_SetVisible_Params
{
	bool                                               bVisible;                                                  // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxMovieWidget.GFxFristFrameCallback
struct UEFGFxMovieWidget_GFxFristFrameCallback_Params
{
};

// Function EFGame.EFGFxMovieWidget.PostWidgetInit
struct UEFGFxMovieWidget_PostWidgetInit_Params
{
};

// Function EFGame.EFGFxMovieWidget.Start
struct UEFGFxMovieWidget_Start_Params
{
	bool                                               StartPaused;                                               // 0x0000(0x0004)  (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFGFxMovieWidgetMain.ActivateFrame
struct UEFGFxMovieWidgetMain_ActivateFrame_Params
{
	class UGFxObject*                                  FrameObject;                                               // 0x0000(0x0008)  (Parm)
	bool                                               ActivateWhenShow;                                          // 0x0008(0x0004)  (Parm)
	bool                                               OnlyModal;                                                 // 0x000C(0x0004)  (Parm)
};

// Function EFGame.EFGFxMovieWidgetMain.ARKSlotMouseDoubleClick
struct UEFGFxMovieWidgetMain_ARKSlotMouseDoubleClick_Params
{
	class UEFUISlot*                                   SlotObj;                                                   // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFGFxMovieWidgetMain.ARKSlotMouseRightClick
struct UEFGFxMovieWidgetMain_ARKSlotMouseRightClick_Params
{
	class UEFUISlot*                                   SlotObj;                                                   // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFGFxMovieWidgetMain.ARKSlotMouseLeftClick
struct UEFGFxMovieWidgetMain_ARKSlotMouseLeftClick_Params
{
	class UEFUISlot*                                   SlotObj;                                                   // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFGFxMovieWidgetMain.ClearBindWidgetByName
struct UEFGFxMovieWidgetMain_ClearBindWidgetByName_Params
{
	struct FName                                       WidgetPath;                                                // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFGFxMovieWidgetMain.ClearBindWidgetByWidget
struct UEFGFxMovieWidgetMain_ClearBindWidgetByWidget_Params
{
	class UGFxObject*                                  Widget;                                                    // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFGFxMovieWidgetMain.UnBindWidget
struct UEFGFxMovieWidgetMain_UnBindWidget_Params
{
	struct FName                                       WidgetName;                                                // 0x0000(0x0008)  (Parm)
	struct FName                                       WidgetPath;                                                // 0x0008(0x0008)  (Parm)
	class UGFxObject*                                  Widget;                                                    // 0x0010(0x0008)  (Parm)
	bool                                               ReturnValue;                                               // 0x0018(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFGFxMovieWidgetMain.BindWidget
struct UEFGFxMovieWidgetMain_BindWidget_Params
{
	struct FName                                       WidgetName;                                                // 0x0000(0x0008)  (Parm)
	struct FName                                       WidgetPath;                                                // 0x0008(0x0008)  (Parm)
	class UGFxObject*                                  Widget;                                                    // 0x0010(0x0008)  (Parm)
	bool                                               ReturnValue;                                               // 0x0018(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFGFxMovieWidgetMain.IsRegisteredWidget
struct UEFGFxMovieWidgetMain_IsRegisteredWidget_Params
{
	struct FName                                       WidgetName;                                                // 0x0000(0x0008)  (Parm)
	bool                                               ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFGFxMovieWidgetMain.WidgetUnloaded
struct UEFGFxMovieWidgetMain_WidgetUnloaded_Params
{
	struct FName                                       WidgetName;                                                // 0x0000(0x0008)  (Parm)
	struct FName                                       WidgetPath;                                                // 0x0008(0x0008)  (Parm)
	class UGFxObject*                                  Widget;                                                    // 0x0010(0x0008)  (Parm)
	bool                                               ReturnValue;                                               // 0x0018(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFGFxMovieWidgetMain.WidgetInitialized
struct UEFGFxMovieWidgetMain_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                                // 0x0000(0x0008)  (Parm)
	struct FName                                       WidgetPath;                                                // 0x0008(0x0008)  (Parm)
	class UGFxObject*                                  Widget;                                                    // 0x0010(0x0008)  (Parm)
	bool                                               ReturnValue;                                               // 0x0018(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFGFxMovieWidgetMain.ComponentMagnetRectangle
struct UEFGFxMovieWidgetMain_ComponentMagnetRectangle_Params
{
	int                                                X;                                                         // 0x0000(0x0004)  (Parm)
	int                                                Y;                                                         // 0x0004(0x0004)  (Parm)
	int                                                Width;                                                     // 0x0008(0x0004)  (Parm)
	int                                                Height;                                                    // 0x000C(0x0004)  (Parm)
};

// Function EFGame.EFUIComponent.InvalidateSize
struct UEFUIComponent_InvalidateSize_Params
{
};

// Function EFGame.EFUIComponent.InvalidateData
struct UEFUIComponent_InvalidateData_Params
{
};

// Function EFGame.EFUIComponent.Invalidate
struct UEFUIComponent_Invalidate_Params
{
	struct FString                                     Keyword;                                                   // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFUIComponent.ValidateNow
struct UEFUIComponent_ValidateNow_Params
{
};

// Function EFGame.EFUIComponent.HasFocus
struct UEFUIComponent_HasFocus_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUIComponent.GetY
struct UEFUIComponent_GetY_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUIComponent.SetY
struct UEFUIComponent_SetY_Params
{
	float                                              Y;                                                         // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIComponent.GetX
struct UEFUIComponent_GetX_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUIComponent.SetX
struct UEFUIComponent_SetX_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIComponent.GetHeight
struct UEFUIComponent_GetHeight_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUIComponent.SetHeight
struct UEFUIComponent_SetHeight_Params
{
	float                                              Height;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIComponent.GetWidth
struct UEFUIComponent_GetWidth_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUIComponent.SetWidth
struct UEFUIComponent_SetWidth_Params
{
	float                                              Width;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIComponent.GetEnabled
struct UEFUIComponent_GetEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUIComponent.SetEnabled
struct UEFUIComponent_SetEnabled_Params
{
	bool                                               Enabled;                                                   // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIComponent.GetVisible
struct UEFUIComponent_GetVisible_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUIComponent.SetVisible
struct UEFUIComponent_SetVisible_Params
{
	bool                                               Visible;                                                   // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIComponent.GetName
struct UEFUIComponent_GetName_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function EFGame.EFUIComponent.SetName
struct UEFUIComponent_SetName_Params
{
	struct FString                                     strName;                                                   // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFUIComponent.WidgetInitialized
struct UEFUIComponent_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                                // 0x0000(0x0008)  (Parm)
	struct FName                                       WidgetPath;                                                // 0x0008(0x0008)  (Parm)
	class UGFxObject*                                  Widget;                                                    // 0x0010(0x0008)  (Parm)
	bool                                               ReturnValue;                                               // 0x0018(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUISlot.SetItemData
struct UEFUISlot_SetItemData_Params
{
	class UGFxObject*                                  SlotDataObject;                                            // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFUISlot.SetDisableType
struct UEFUISlot_SetDisableType_Params
{
	int                                                iType;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlot.SetUniqueData
struct UEFUISlot_SetUniqueData_Params
{
	struct FString                                     NewUniqueData;                                             // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFUISlot.GetUniqueData
struct UEFUISlot_GetUniqueData_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function EFGame.EFUISlot.SetLocked
struct UEFUISlot_SetLocked_Params
{
	int                                                iLockType;                                                 // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlot.IsLocked
struct UEFUISlot_IsLocked_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUISlot.SetItemGrade
struct UEFUISlot_SetItemGrade_Params
{
	int                                                NewGrade;                                                  // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlot.GetItemGrade
struct UEFUISlot_GetItemGrade_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUISlot.SetSoundTheme
struct UEFUISlot_SetSoundTheme_Params
{
	struct FString                                     NewSoundTheme;                                             // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFUISlot.GetSoundTheme
struct UEFUISlot_GetSoundTheme_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function EFGame.EFUISlot.SetDisabled
struct UEFUISlot_SetDisabled_Params
{
	bool                                               bValue;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlot.IsDisabled
struct UEFUISlot_IsDisabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUISlot.SetCooltime
struct UEFUISlot_SetCooltime_Params
{
	float                                              NewRemainTime;                                             // 0x0000(0x0004)  (Parm)
	float                                              NewTotalTime;                                              // 0x0004(0x0004)  (Parm)
};

// Function EFGame.EFUISlot.GetTotalCoolTime
struct UEFUISlot_GetTotalCoolTime_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUISlot.GetRemainCoolTime
struct UEFUISlot_GetRemainCoolTime_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUISlot.SetIconHeight
struct UEFUISlot_SetIconHeight_Params
{
	int                                                NewIconHeight;                                             // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlot.GetIconHeight
struct UEFUISlot_GetIconHeight_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUISlot.SetIconWidth
struct UEFUISlot_SetIconWidth_Params
{
	int                                                NewIconWidth;                                              // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlot.GetIconWidth
struct UEFUISlot_GetIconWidth_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUISlot.SetIconY
struct UEFUISlot_SetIconY_Params
{
	int                                                NewIconY;                                                  // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlot.GetIconY
struct UEFUISlot_GetIconY_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUISlot.SetIconX
struct UEFUISlot_SetIconX_Params
{
	int                                                NewIconX;                                                  // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlot.GetIconX
struct UEFUISlot_GetIconX_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUISlot.SetIconCount
struct UEFUISlot_SetIconCount_Params
{
	int                                                NewIconIndex;                                              // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlot.GetIconCount
struct UEFUISlot_GetIconCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUISlot.SetIconPath
struct UEFUISlot_SetIconPath_Params
{
	struct FString                                     NewIconPath;                                               // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFUISlot.GetIconPath
struct UEFUISlot_GetIconPath_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function EFGame.EFUISlot.SetWindowType
struct UEFUISlot_SetWindowType_Params
{
	int                                                NewWindowType;                                             // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlot.GetWindowType
struct UEFUISlot_GetWindowType_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUISlot.SetSlotIndex
struct UEFUISlot_SetSlotIndex_Params
{
	int                                                NewSlotIndex;                                              // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlot.GetSlotIndex
struct UEFUISlot_GetSlotIndex_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUISlot.SetBindID
struct UEFUISlot_SetBindID_Params
{
	struct FString                                     NewSlotID;                                                 // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFUISlot.GetBindID
struct UEFUISlot_GetBindID_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function EFGame.EFUISlot.SetSlotType
struct UEFUISlot_SetSlotType_Params
{
	int                                                NewSlotType;                                               // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlot.GetSlotType
struct UEFUISlot_GetSlotType_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUISlot.SetIconData
struct UEFUISlot_SetIconData_Params
{
	int                                                SlotType;                                                  // 0x0000(0x0004)  (Parm)
	int                                                SlotIndex;                                                 // 0x0004(0x0004)  (Parm)
	struct FString                                     BindID;                                                    // 0x0008(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     IconPath;                                                  // 0x0018(0x0010)  (Parm, NeedCtorLink)
	int                                                IconIndex;                                                 // 0x0028(0x0004)  (Parm)
	TEnumAsByte<EFGame_EItemGrade>                     eItemGrade;                                                // 0x002C(0x0001)  (Parm)
	int                                                TableID;                                                   // 0x0030(0x0004)  (OptionalParm, Parm)
	int                                                IconCount;                                                 // 0x0034(0x0004)  (OptionalParm, Parm)
};

// Function EFGame.EFUISlot.GetSlotItemData
struct UEFUISlot_GetSlotItemData_Params
{
	class UEFUISlotData*                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUIChatTabControl.ChatLogInputSelectType
struct UEFUIChatTabControl_ChatLogInputSelectType_Params
{
	int                                                InChannelType;                                             // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIChatTabControl.ChatLogMainWidgetTabInsertGroup
struct UEFUIChatTabControl_ChatLogMainWidgetTabInsertGroup_Params
{
	int                                                InTabID;                                                   // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIChatTabControl.ChatLogInTabGroupElementStartDrag
struct UEFUIChatTabControl_ChatLogInTabGroupElementStartDrag_Params
{
	int                                                InTabID;                                                   // 0x0000(0x0004)  (Parm)
	float                                              InTabX;                                                    // 0x0004(0x0004)  (Parm)
	float                                              InTabY;                                                    // 0x0008(0x0004)  (Parm)
};

// Function EFGame.EFUIChatTabControl.ChatLogLinkClick
struct UEFUIChatTabControl_ChatLogLinkClick_Params
{
	struct FString                                     InLinkName;                                                // 0x0000(0x0010)  (Parm, NeedCtorLink)
	int                                                InLinkCode;                                                // 0x0010(0x0004)  (Parm)
	int                                                InMouseClick;                                              // 0x0014(0x0004)  (Parm)
};

// Function EFGame.EFUIChatTabControl.ChatLogTabContextMenuShow
struct UEFUIChatTabControl_ChatLogTabContextMenuShow_Params
{
	int                                                InTabID;                                                   // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIChatTabControl.ChatLogMainWidgetSizeUpdated
struct UEFUIChatTabControl_ChatLogMainWidgetSizeUpdated_Params
{
};

// Function EFGame.EFUIList.SetSelectedIndex
struct UEFUIList_SetSelectedIndex_Params
{
	int                                                NewListIndex;                                              // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIList.GetSelectedIndex
struct UEFUIList_GetSelectedIndex_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUIList.GetData
struct UEFUIList_GetData_Params
{
	int                                                DataIndex;                                                 // 0x0000(0x0004)  (Parm)
	class UClass*                                      ListItemClass;                                             // 0x0004(0x0008)  (Parm)
	class UEFUIListItem*                               ReturnValue;                                               // 0x000C(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUIListItem.HasAttribute
struct UEFUIListItem_HasAttribute_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUIListItemSlot.SetIslandIcon
struct UEFUIListItemSlot_SetIslandIcon_Params
{
	bool                                               bValue;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIListItemSlot.SetTownShow
struct UEFUIListItemSlot_SetTownShow_Params
{
	bool                                               bValue;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIListItemSlot.SetFriendshipShow
struct UEFUIListItemSlot_SetFriendshipShow_Params
{
	bool                                               bValue;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIListItemSlot.SetTripodBookmarkShow
struct UEFUIListItemSlot_SetTripodBookmarkShow_Params
{
	bool                                               bValue;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIListItemSlot.SetEngraveBookmarkShow
struct UEFUIListItemSlot_SetEngraveBookmarkShow_Params
{
	bool                                               bValue;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIListItemSlot.SetSealShow
struct UEFUIListItemSlot_SetSealShow_Params
{
	bool                                               bValue;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIListItemSlot.SetAdvBookShow
struct UEFUIListItemSlot_SetAdvBookShow_Params
{
	bool                                               bValue;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIListItemSlot.SetTemporary
struct UEFUIListItemSlot_SetTemporary_Params
{
	bool                                               bValue;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIListItemSlot.SetTrash
struct UEFUIListItemSlot_SetTrash_Params
{
	bool                                               bValue;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIListItemSlot.SetDisableType
struct UEFUIListItemSlot_SetDisableType_Params
{
	int                                                iType;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIListItemSlot.SetTableID
struct UEFUIListItemSlot_SetTableID_Params
{
	int                                                NewTableID;                                                // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIListItemSlot.GetTableID
struct UEFUIListItemSlot_GetTableID_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUIListItemSlot.SetUniqueData
struct UEFUIListItemSlot_SetUniqueData_Params
{
	struct FString                                     NewUniqueData;                                             // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFUIListItemSlot.GetUniqueData
struct UEFUIListItemSlot_GetUniqueData_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function EFGame.EFUIListItemSlot.SetLocked
struct UEFUIListItemSlot_SetLocked_Params
{
	int                                                iLockType;                                                 // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIListItemSlot.IsLocked
struct UEFUIListItemSlot_IsLocked_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUIListItemSlot.SetItemGrade
struct UEFUIListItemSlot_SetItemGrade_Params
{
	int                                                NewGrade;                                                  // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIListItemSlot.GetItemGrade
struct UEFUIListItemSlot_GetItemGrade_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUIListItemSlot.SetSoundTheme
struct UEFUIListItemSlot_SetSoundTheme_Params
{
	struct FString                                     NewSoundTheme;                                             // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFUIListItemSlot.GetSoundTheme
struct UEFUIListItemSlot_GetSoundTheme_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function EFGame.EFUIListItemSlot.SetDisabled
struct UEFUIListItemSlot_SetDisabled_Params
{
	bool                                               bValue;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIListItemSlot.IsDisabled
struct UEFUIListItemSlot_IsDisabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUIListItemSlot.SetItemName
struct UEFUIListItemSlot_SetItemName_Params
{
	struct FString                                     ItemName;                                                  // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFUIListItemSlot.GetItemName
struct UEFUIListItemSlot_GetItemName_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function EFGame.EFUIListItemSlot.SetLabel
struct UEFUIListItemSlot_SetLabel_Params
{
	struct FString                                     Label;                                                     // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFUIListItemSlot.GetLabel
struct UEFUIListItemSlot_GetLabel_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function EFGame.EFUIListItemSlot.SetCooltime
struct UEFUIListItemSlot_SetCooltime_Params
{
	float                                              NewRemainTime;                                             // 0x0000(0x0004)  (Parm)
	float                                              NewTotalTime;                                              // 0x0004(0x0004)  (Parm)
};

// Function EFGame.EFUIListItemSlot.GetTotalCoolTime
struct UEFUIListItemSlot_GetTotalCoolTime_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUIListItemSlot.GetRemainCoolTime
struct UEFUIListItemSlot_GetRemainCoolTime_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUIListItemSlot.SetIconHeight
struct UEFUIListItemSlot_SetIconHeight_Params
{
	int                                                NewIconHeight;                                             // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIListItemSlot.GetIconHeight
struct UEFUIListItemSlot_GetIconHeight_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUIListItemSlot.SetIconWidth
struct UEFUIListItemSlot_SetIconWidth_Params
{
	int                                                NewIconWidth;                                              // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIListItemSlot.GetIconWidth
struct UEFUIListItemSlot_GetIconWidth_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUIListItemSlot.SetIconY
struct UEFUIListItemSlot_SetIconY_Params
{
	int                                                NewIconY;                                                  // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIListItemSlot.GetIconY
struct UEFUIListItemSlot_GetIconY_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUIListItemSlot.SetIconX
struct UEFUIListItemSlot_SetIconX_Params
{
	int                                                NewIconX;                                                  // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIListItemSlot.GetIconX
struct UEFUIListItemSlot_GetIconX_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUIListItemSlot.SetIconCount
struct UEFUIListItemSlot_SetIconCount_Params
{
	int                                                NewIconIndex;                                              // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIListItemSlot.GetIconCount
struct UEFUIListItemSlot_GetIconCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUIListItemSlot.SetIconPath
struct UEFUIListItemSlot_SetIconPath_Params
{
	struct FString                                     NewIconPath;                                               // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFUIListItemSlot.GetIconPath
struct UEFUIListItemSlot_GetIconPath_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function EFGame.EFUIListItemSlot.SetWindowType
struct UEFUIListItemSlot_SetWindowType_Params
{
	int                                                NewWindowType;                                             // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIListItemSlot.GetWindowType
struct UEFUIListItemSlot_GetWindowType_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUIListItemSlot.SetSlotIndex
struct UEFUIListItemSlot_SetSlotIndex_Params
{
	int                                                NewSlotIndex;                                              // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIListItemSlot.GetSlotIndex
struct UEFUIListItemSlot_GetSlotIndex_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUIListItemSlot.SetBindID
struct UEFUIListItemSlot_SetBindID_Params
{
	struct FString                                     NewSlotID;                                                 // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFUIListItemSlot.GetBindID
struct UEFUIListItemSlot_GetBindID_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function EFGame.EFUIListItemSlot.SetSlotType
struct UEFUIListItemSlot_SetSlotType_Params
{
	int                                                NewSlotType;                                               // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUIListItemSlot.GetSlotType
struct UEFUIListItemSlot_GetSlotType_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUIListItemSlot.SetIconData
struct UEFUIListItemSlot_SetIconData_Params
{
	int                                                SlotType;                                                  // 0x0000(0x0004)  (Parm)
	int                                                SlotIndex;                                                 // 0x0004(0x0004)  (Parm)
	struct FString                                     BindID;                                                    // 0x0008(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     IconPath;                                                  // 0x0018(0x0010)  (Parm, NeedCtorLink)
	int                                                IconIndex;                                                 // 0x0028(0x0004)  (Parm)
	int                                                TableID;                                                   // 0x002C(0x0004)  (OptionalParm, Parm)
	int                                                IconCount;                                                 // 0x0030(0x0004)  (OptionalParm, Parm)
	bool                                               bTrash;                                                    // 0x0034(0x0004)  (OptionalParm, Parm)
	bool                                               bTemporary;                                                // 0x0038(0x0004)  (OptionalParm, Parm)
};

// Function EFGame.EFGFxWidgetAnchorModeCrew.AnchorCrewSkillSlotClick
struct UEFGFxWidgetAnchorModeCrew_AnchorCrewSkillSlotClick_Params
{
	int                                                slotIndexInPage;                                           // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetAnchorModeCrew.AnchorCrewPageIndexChanged
struct UEFGFxWidgetAnchorModeCrew_AnchorCrewPageIndexChanged_Params
{
	int                                                pageIndex;                                                 // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetBuddy.showNew
struct UEFGFxWidgetBuddy_showNew_Params
{
};

// Function EFGame.EFGFxWidgetBuddy.setSelectedTab
struct UEFGFxWidgetBuddy_setSelectedTab_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetBuddy.setAFK
struct UEFGFxWidgetBuddy_setAFK_Params
{
	bool                                               bAFK;                                                      // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetBuddy.FriendsGroupRendererMouseOver
struct UEFGFxWidgetBuddy_FriendsGroupRendererMouseOver_Params
{
	struct FString                                     strUID;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetBuddy.FriendsGroupRendererRightClick
struct UEFGFxWidgetBuddy_FriendsGroupRendererRightClick_Params
{
	struct FString                                     strUID;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetBuddy.FriendsGroupRendererExtended
struct UEFGFxWidgetBuddy_FriendsGroupRendererExtended_Params
{
	struct FString                                     strUID;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
	bool                                               bShow;                                                     // 0x0010(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetBuddy.FriendsRendererRightClick
struct UEFGFxWidgetBuddy_FriendsRendererRightClick_Params
{
	struct FString                                     strUID;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetBuddy.FriendsInvite
struct UEFGFxWidgetBuddy_FriendsInvite_Params
{
	struct FString                                     strUID;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetBuddy.FriendsBlock
struct UEFGFxWidgetBuddy_FriendsBlock_Params
{
	struct FString                                     strUID;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetBuddy.FriendsUnBlock
struct UEFGFxWidgetBuddy_FriendsUnBlock_Params
{
	struct FString                                     strUID;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetBuddy.FriendsBuddyCancel
struct UEFGFxWidgetBuddy_FriendsBuddyCancel_Params
{
	struct FString                                     strUID;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetBuddy.FriendsBuddyReject
struct UEFGFxWidgetBuddy_FriendsBuddyReject_Params
{
	struct FString                                     strUID;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetBuddy.FriendsBuddyAgree
struct UEFGFxWidgetBuddy_FriendsBuddyAgree_Params
{
	struct FString                                     strUID;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetCandidate.SetCandidateFocus
struct UEFGFxWidgetCandidate_SetCandidateFocus_Params
{
	bool                                               isFocus;                                                   // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetChattingOption.SetChannelColor
struct UEFGFxWidgetChattingOption_SetChannelColor_Params
{
	int                                                ChannelIndex;                                              // 0x0000(0x0004)  (Parm)
	struct FString                                     colorCode;                                                 // 0x0004(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionAddTab
struct UEFGFxWidgetChattingOption_ChatLogFilterOptionAddTab_Params
{
	TArray<int>                                        ArrFilterList;                                             // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionOKWnd
struct UEFGFxWidgetChattingOption_ChatLogFilterOptionOKWnd_Params
{
	TArray<int>                                        ArrFilterList;                                             // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionResetData
struct UEFGFxWidgetChattingOption_ChatLogFilterOptionResetData_Params
{
};

// Function EFGame.EFGFxWidgetChattingOption.ChatLogFilterOptionAppliedChannelList
struct UEFGFxWidgetChattingOption_ChatLogFilterOptionAppliedChannelList_Params
{
	TArray<int>                                        ArrFilterList;                                             // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetColorPicker.SetTargetPosition
struct UEFGFxWidgetColorPicker_SetTargetPosition_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (Parm)
	float                                              Y;                                                         // 0x0004(0x0004)  (Parm)
	float                                              W;                                                         // 0x0008(0x0004)  (Parm)
	float                                              H;                                                         // 0x000C(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetColorPicker.SetTargetCode
struct UEFGFxWidgetColorPicker_SetTargetCode_Params
{
	int                                                InCode;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetColorPicker.SetColor
struct UEFGFxWidgetColorPicker_SetColor_Params
{
	struct FString                                     InColor;                                                   // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetColorPicker.SetDefaultColor
struct UEFGFxWidgetColorPicker_SetDefaultColor_Params
{
	struct FString                                     InColor;                                                   // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetColorPicker.RequestEventColorPickerTextInputChange
struct UEFGFxWidgetColorPicker_RequestEventColorPickerTextInputChange_Params
{
	struct FString                                     InColor;                                                   // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetColorPicker.RequestEventColorPickerCursorDragEnd
struct UEFGFxWidgetColorPicker_RequestEventColorPickerCursorDragEnd_Params
{
	struct FString                                     InColor;                                                   // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetColorPicker.RequestEventColorPickerProgressValueChange
struct UEFGFxWidgetColorPicker_RequestEventColorPickerProgressValueChange_Params
{
	struct FString                                     InColor;                                                   // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetColorPicker.ChatMessageInputTextHasFocus
struct UEFGFxWidgetColorPicker_ChatMessageInputTextHasFocus_Params
{
	bool                                               InFocus;                                                   // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetColorPicker.RequestARKColorPickerDefaultSetting
struct UEFGFxWidgetColorPicker_RequestARKColorPickerDefaultSetting_Params
{
};

// Function EFGame.EFGFxWidgetColorPicker.RequestARKColorPickerSaveSetting
struct UEFGFxWidgetColorPicker_RequestARKColorPickerSaveSetting_Params
{
	struct FString                                     InChannelColor;                                            // 0x0000(0x0010)  (Parm, NeedCtorLink)
	int                                                InTargetCode;                                              // 0x0010(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetColorPicker.RequestARKColorPickerClose
struct UEFGFxWidgetColorPicker_RequestARKColorPickerClose_Params
{
};

// Function EFGame.EFGFxWidgetCurrencyInfo.CurrencyInfoTreeItemClick
struct UEFGFxWidgetCurrencyInfo_CurrencyInfoTreeItemClick_Params
{
	int                                                InCurrencyIndex;                                           // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetCustomColorPicker.SetTargetPosition
struct UEFGFxWidgetCustomColorPicker_SetTargetPosition_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (Parm)
	float                                              Y;                                                         // 0x0004(0x0004)  (Parm)
	float                                              W;                                                         // 0x0008(0x0004)  (Parm)
	float                                              H;                                                         // 0x000C(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetCustomColorPicker.SetTargetCode
struct UEFGFxWidgetCustomColorPicker_SetTargetCode_Params
{
	int                                                InCode;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetCustomColorPicker.SetColor
struct UEFGFxWidgetCustomColorPicker_SetColor_Params
{
	struct FString                                     InColor;                                                   // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetCustomColorPicker.SetInit
struct UEFGFxWidgetCustomColorPicker_SetInit_Params
{
	float                                              InRadian;                                                  // 0x0000(0x0004)  (Parm)
	float                                              InDistance;                                                // 0x0004(0x0004)  (Parm)
	float                                              InLightness;                                               // 0x0008(0x0004)  (Parm)
	struct FString                                     InColor;                                                   // 0x000C(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     InColorPalette;                                            // 0x001C(0x0010)  (Parm, NeedCtorLink)
	float                                              InMinLightness;                                            // 0x002C(0x0004)  (Parm)
	float                                              InMaxLightness;                                            // 0x0030(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetCustomColorPicker.ColorPickerColorChanged
struct UEFGFxWidgetCustomColorPicker_ColorPickerColorChanged_Params
{
	float                                              InRadian;                                                  // 0x0000(0x0004)  (Parm)
	float                                              InDistance;                                                // 0x0004(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetCustomColorPicker.ColorPickerLightnessChanged
struct UEFGFxWidgetCustomColorPicker_ColorPickerLightnessChanged_Params
{
	float                                              InLightness;                                               // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetCustomColorPicker.RequestARKColorPickerDefaultSetting
struct UEFGFxWidgetCustomColorPicker_RequestARKColorPickerDefaultSetting_Params
{
};

// Function EFGame.EFGFxWidgetCustomColorPicker.RequestARKColorPickerSaveSetting
struct UEFGFxWidgetCustomColorPicker_RequestARKColorPickerSaveSetting_Params
{
	int                                                InTargetCode;                                              // 0x0000(0x0004)  (Parm)
	float                                              InRadian;                                                  // 0x0004(0x0004)  (Parm)
	float                                              InDistance;                                                // 0x0008(0x0004)  (Parm)
	float                                              InLightness;                                               // 0x000C(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetCustomColorPicker.RequestARKColorPickerClose
struct UEFGFxWidgetCustomColorPicker_RequestARKColorPickerClose_Params
{
};

// Function EFGame.EFGFxWidgetGuild.GuildPassword
struct UEFGFxWidgetGuild_GuildPassword_Params
{
	struct FString                                     Uid;                                                       // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetGuild.GuildApplicantRightClick
struct UEFGFxWidgetGuild_GuildApplicantRightClick_Params
{
	struct FString                                     Uid;                                                       // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetGuild.GuildMemberRightClick
struct UEFGFxWidgetGuild_GuildMemberRightClick_Params
{
	struct FString                                     Uid;                                                       // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetGuild.GuildReject
struct UEFGFxWidgetGuild_GuildReject_Params
{
	struct FString                                     Uid;                                                       // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetGuild.GuildAccept
struct UEFGFxWidgetGuild_GuildAccept_Params
{
	struct FString                                     Uid;                                                       // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetGuild.GuildNoticeCopyButtonClick
struct UEFGFxWidgetGuild_GuildNoticeCopyButtonClick_Params
{
	struct FString                                     sNotice;                                                   // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetGuild.GuildChangeGuildIntroduction
struct UEFGFxWidgetGuild_GuildChangeGuildIntroduction_Params
{
	struct FString                                     sIntroduction;                                             // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetGuild.GuildChangeGuildNotice
struct UEFGFxWidgetGuild_GuildChangeGuildNotice_Params
{
	struct FString                                     sNotice;                                                   // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetGuild.GuildChangeBtnClick
struct UEFGFxWidgetGuild_GuildChangeBtnClick_Params
{
	bool                                               bShow;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetGuild.GuildChangeGuildMark
struct UEFGFxWidgetGuild_GuildChangeGuildMark_Params
{
	struct FString                                     sMarkIdx;                                                  // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetGuild.GuildCreate
struct UEFGFxWidgetGuild_GuildCreate_Params
{
	struct FString                                     imarkIdx;                                                  // 0x0000(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     sGuildName;                                                // 0x0010(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     sGuildDesc;                                                // 0x0020(0x0010)  (Parm, NeedCtorLink)
	bool                                               bRecommend;                                                // 0x0030(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetGuild.GuildCancel
struct UEFGFxWidgetGuild_GuildCancel_Params
{
	struct FString                                     Uid;                                                       // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetGuild.GuildJoinImmediately
struct UEFGFxWidgetGuild_GuildJoinImmediately_Params
{
	struct FString                                     Uid;                                                       // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetGuild.GuildApply
struct UEFGFxWidgetGuild_GuildApply_Params
{
	struct FString                                     Uid;                                                       // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetHotKey.killOptionKey
struct UEFGFxWidgetHotKey_killOptionKey_Params
{
};

// Function EFGame.EFGFxWidgetHotKey.selectOptionHotKeyMainMenu
struct UEFGFxWidgetHotKey_selectOptionHotKeyMainMenu_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyCloseBtnClick
struct UEFGFxWidgetHotKey_OptionHotKeyCloseBtnClick_Params
{
};

// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyKillFocus
struct UEFGFxWidgetHotKey_OptionHotKeyKillFocus_Params
{
};

// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyCancelClick
struct UEFGFxWidgetHotKey_OptionHotKeyCancelClick_Params
{
};

// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyAcceptClick
struct UEFGFxWidgetHotKey_OptionHotKeyAcceptClick_Params
{
};

// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyConfirmClick
struct UEFGFxWidgetHotKey_OptionHotKeyConfirmClick_Params
{
};

// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyResetClick
struct UEFGFxWidgetHotKey_OptionHotKeyResetClick_Params
{
};

// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyButtonChange
struct UEFGFxWidgetHotKey_OptionHotKeyButtonChange_Params
{
	int                                                mainListIndex;                                             // 0x0000(0x0004)  (Parm)
	struct FString                                     buttonType;                                                // 0x0004(0x0010)  (Parm, NeedCtorLink)
	int                                                subListIndex;                                              // 0x0014(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetHotKey.OptionHotKeyMainListIndexChange
struct UEFGFxWidgetHotKey_OptionHotKeyMainListIndexChange_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneRollOut
struct UEFGFxWidgetInteractionAbility_Refine_InteractionMarbleStoneRollOut_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneRollOver
struct UEFGFxWidgetInteractionAbility_Refine_InteractionMarbleStoneRollOver_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetInteractionAbility_Refine.ChangeCursor
struct UEFGFxWidgetInteractionAbility_Refine_ChangeCursor_Params
{
	int                                                Row;                                                       // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneClick
struct UEFGFxWidgetInteractionAbility_Refine_InteractionMarbleStoneClick_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleChangeTabClick
struct UEFGFxWidgetInteractionAbility_Refine_InteractionMarbleChangeTabClick_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetInteractionAbility_Refine.InteractionMarbleStoneSelected
struct UEFGFxWidgetInteractionAbility_Refine_InteractionMarbleStoneSelected_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetInteractionBarter.BarterShopPurchaseItem
struct UEFGFxWidgetInteractionBarter_BarterShopPurchaseItem_Params
{
	struct FString                                     strUniqueData;                                             // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetInteractionMail.SetNextSlotDisable
struct UEFGFxWidgetInteractionMail_SetNextSlotDisable_Params
{
};

// Function EFGame.EFGFxWidgetInteractionMail.ASSetNextSlotDisable
struct UEFGFxWidgetInteractionMail_ASSetNextSlotDisable_Params
{
};

// Function EFGame.EFGFxWidgetInteractionMail.SetNextSlotEnable
struct UEFGFxWidgetInteractionMail_SetNextSlotEnable_Params
{
};

// Function EFGame.EFGFxWidgetInteractionMail.ASSetNextSlotEnable
struct UEFGFxWidgetInteractionMail_ASSetNextSlotEnable_Params
{
};

// Function EFGame.EFGFxWidgetInteractionMail.SetMailOpenType
struct UEFGFxWidgetInteractionMail_SetMailOpenType_Params
{
	TEnumAsByte<EFGame_EFMailOpenType>                 MailOpenType;                                              // 0x0000(0x0001)  (Parm)
};

// Function EFGame.EFGFxWidgetInteractionMail.SetOpenType
struct UEFGFxWidgetInteractionMail_SetOpenType_Params
{
	TEnumAsByte<EFGame_EFMailOpenType>                 MailOpenType;                                              // 0x0000(0x0001)  (Parm)
};

// Function EFGame.EFGFxWidgetInteractionMail.StopLoading
struct UEFGFxWidgetInteractionMail_StopLoading_Params
{
};

// Function EFGame.EFGFxWidgetInteractionMail.StructReceiverCacheData
struct UEFGFxWidgetInteractionMail_StructReceiverCacheData_Params
{
};

// Function EFGame.EFGFxWidgetInteractionMail.AddReceiverData
struct UEFGFxWidgetInteractionMail_AddReceiverData_Params
{
	TEnumAsByte<EFGame_EFMailReceiverType>             ReceiverType;                                              // 0x0000(0x0001)  (Parm)
	struct FString                                     ReceiverName;                                              // 0x0004(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetMap.RequestResetMapRotation
struct UEFGFxWidgetMap_RequestResetMapRotation_Params
{
};

// Function EFGame.EFGFxWidgetMap.RequestWorldMapUpperDepth
struct UEFGFxWidgetMap_RequestWorldMapUpperDepth_Params
{
};

// Function EFGame.EFGFxWidgetMap.WorldMapZoneIndex
struct UEFGFxWidgetMap_WorldMapZoneIndex_Params
{
	int                                                ZoneIndex;                                                 // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetMap.WorldMapContinentType
struct UEFGFxWidgetMap_WorldMapContinentType_Params
{
	int                                                ContinentType;                                             // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetMODWatingInfo.MinimapAlarmListRightBtnClick
struct UEFGFxWidgetMODWatingInfo_MinimapAlarmListRightBtnClick_Params
{
	int                                                InListIndex;                                               // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetMoviePlayer.TestLabSendInputMessage
struct UEFGFxWidgetMoviePlayer_TestLabSendInputMessage_Params
{
	struct FString                                     InputText;                                                 // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetNormalBox.NormalBoxItemSelected
struct UEFGFxWidgetNormalBox_NormalBoxItemSelected_Params
{
};

// Function EFGame.EFGFxWidgetNoticeMOD.NoticeModWaitListItemClick
struct UEFGFxWidgetNoticeMOD_NoticeModWaitListItemClick_Params
{
	int                                                ListIndex;                                                 // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetQuestJournal.SetMaxTreeItemCheckNumber
struct UEFGFxWidgetQuestJournal_SetMaxTreeItemCheckNumber_Params
{
	int                                                InMaxQuestCheckNumber;                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetQuestJournal.SetMaxQuestCheckNumber
struct UEFGFxWidgetQuestJournal_SetMaxQuestCheckNumber_Params
{
	int                                                InMaxQuestCheckNumber;                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetQuestJournal.ARKQuestTraceButtonClicked
struct UEFGFxWidgetQuestJournal_ARKQuestTraceButtonClicked_Params
{
	int                                                InQuestIndex;                                              // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetQuestJournal.OnClicked_TraceQuestButton
struct UEFGFxWidgetQuestJournal_OnClicked_TraceQuestButton_Params
{
	int                                                InQuestIndex;                                              // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetQuestJournal.ARKQuestGiveUpButtonClicked
struct UEFGFxWidgetQuestJournal_ARKQuestGiveUpButtonClicked_Params
{
	int                                                InQuestIndex;                                              // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetQuestJournal.OnClicked_GiveUpButton
struct UEFGFxWidgetQuestJournal_OnClicked_GiveUpButton_Params
{
	int                                                InQuestIndex;                                              // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetQuestSummary.OnHide
struct UEFGFxWidgetQuestSummary_OnHide_Params
{
};

// Function EFGame.EFGFxWidgetQuestSummary.OnHideQuestSummary
struct UEFGFxWidgetQuestSummary_OnHideQuestSummary_Params
{
};

// Function EFGame.EFGFxWidgetQuestSummary.ARKQuestSelectedRewardItem
struct UEFGFxWidgetQuestSummary_ARKQuestSelectedRewardItem_Params
{
	int                                                InIndex;                                                   // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetQuestSummary.OnClicked_SelectChoiceItem
struct UEFGFxWidgetQuestSummary_OnClicked_SelectChoiceItem_Params
{
	int                                                InIndex;                                                   // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetQuestSummary.ARKQuestCompleteButtonClicked
struct UEFGFxWidgetQuestSummary_ARKQuestCompleteButtonClicked_Params
{
	int                                                InQuestIndex;                                              // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetQuestSummary.OnClicked_CompleteButton
struct UEFGFxWidgetQuestSummary_OnClicked_CompleteButton_Params
{
	int                                                InQuestIndex;                                              // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetQuestSummary.ARKQuestAcceptButtonClicked
struct UEFGFxWidgetQuestSummary_ARKQuestAcceptButtonClicked_Params
{
	int                                                InQuestIndex;                                              // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetQuestSummary.OnClicked_AcceptButton
struct UEFGFxWidgetQuestSummary_OnClicked_AcceptButton_Params
{
	int                                                InQuestIndex;                                              // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetQuestSummary.SelectChoiceRewardItem
struct UEFGFxWidgetQuestSummary_SelectChoiceRewardItem_Params
{
	int                                                InSelectIndex;                                             // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetQuestSummary.SetSelectedIndex_ChoiceRewardItem
struct UEFGFxWidgetQuestSummary_SetSelectedIndex_ChoiceRewardItem_Params
{
	int                                                InSelectIndex;                                             // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetRandomBox.Init
struct UEFGFxWidgetRandomBox_Init_Params
{
};

// Function EFGame.EFGFxWidgetRandomBox.startAni
struct UEFGFxWidgetRandomBox_startAni_Params
{
};

// Function EFGame.EFGFxWidgetRandomBox.RandomBoxComplete
struct UEFGFxWidgetRandomBox_RandomBoxComplete_Params
{
};

// Function EFGame.EFGFxWidgetRandomBox.RandomBoxClosed
struct UEFGFxWidgetRandomBox_RandomBoxClosed_Params
{
};

// Function EFGame.EFGFxWidgetSelectBox.SelectBoxItemReceiveAll
struct UEFGFxWidgetSelectBox_SelectBoxItemReceiveAll_Params
{
	struct FString                                     ItemId;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetSelectBox.SelectBoxItemSelected
struct UEFGFxWidgetSelectBox_SelectBoxItemSelected_Params
{
	struct FString                                     ItemId;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetSkillBook.closePreset
struct UEFGFxWidgetSkillBook_closePreset_Params
{
};

// Function EFGame.EFGFxWidgetSkillBook.openPreset
struct UEFGFxWidgetSkillBook_openPreset_Params
{
};

// Function EFGame.EFGFxWidgetSkillBook.cancelSelection
struct UEFGFxWidgetSkillBook_cancelSelection_Params
{
};

// Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetUnlock
struct UEFGFxWidgetSkillBook_SkillBookPresetUnlock_Params
{
	int                                                iIndex;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetApply
struct UEFGFxWidgetSkillBook_SkillBookPresetApply_Params
{
	int                                                iIndex;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetSelected
struct UEFGFxWidgetSkillBook_SkillBookPresetSelected_Params
{
	int                                                iIndex;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetSkillBook.SkillBookPresetEdit
struct UEFGFxWidgetSkillBook_SkillBookPresetEdit_Params
{
};

// Function EFGame.EFGFxWidgetSkillBook.DevSkillBookTierBtnClick
struct UEFGFxWidgetSkillBook_DevSkillBookTierBtnClick_Params
{
	int                                                btnType;                                                   // 0x0000(0x0004)  (Parm)
	int                                                TierId;                                                    // 0x0004(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetSkillBook.SkillBookListSelected
struct UEFGFxWidgetSkillBook_SkillBookListSelected_Params
{
	int                                                TierId;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetSkillBook.SkillBookTierBtnClick
struct UEFGFxWidgetSkillBook_SkillBookTierBtnClick_Params
{
	int                                                TierId;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetSkillBook.SkillBookDownBtnClick
struct UEFGFxWidgetSkillBook_SkillBookDownBtnClick_Params
{
	int                                                SkillId;                                                   // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetSkillBook.SkillBookUpBtnClick
struct UEFGFxWidgetSkillBook_SkillBookUpBtnClick_Params
{
	int                                                SkillId;                                                   // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetSystemOption.SystemOptionListBoxIndexChange
struct UEFGFxWidgetSystemOption_SystemOptionListBoxIndexChange_Params
{
	int                                                iUID;                                                      // 0x0000(0x0004)  (Parm)
	int                                                iIndex;                                                    // 0x0004(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetSystemOption.SystemOptionAutoInputTextChange
struct UEFGFxWidgetSystemOption_SystemOptionAutoInputTextChange_Params
{
	int                                                iUID;                                                      // 0x0000(0x0004)  (Parm)
	struct FString                                     Str;                                                       // 0x0004(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetSystemOption.SystemOptionAutoInputHideCloseBtn
struct UEFGFxWidgetSystemOption_SystemOptionAutoInputHideCloseBtn_Params
{
	int                                                iUID;                                                      // 0x0000(0x0004)  (Parm)
	struct FString                                     Str;                                                       // 0x0004(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetSystemOption.SystemOptionAutoInputFocusOut
struct UEFGFxWidgetSystemOption_SystemOptionAutoInputFocusOut_Params
{
	int                                                iUID;                                                      // 0x0000(0x0004)  (Parm)
	struct FString                                     Str;                                                       // 0x0004(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetSystemOption.SystemOptionAutoInputFocusIn
struct UEFGFxWidgetSystemOption_SystemOptionAutoInputFocusIn_Params
{
	int                                                iUID;                                                      // 0x0000(0x0004)  (Parm)
	struct FString                                     Str;                                                       // 0x0004(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetSystemOption.SystemOptionButtonClickHandler
struct UEFGFxWidgetSystemOption_SystemOptionButtonClickHandler_Params
{
	int                                                iUID;                                                      // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetSystemOption.SystemOptionListIndexChange
struct UEFGFxWidgetSystemOption_SystemOptionListIndexChange_Params
{
	int                                                iUID;                                                      // 0x0000(0x0004)  (Parm)
	int                                                iIndex;                                                    // 0x0004(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetSystemOption.OpenChattingOptionColorPicker
struct UEFGFxWidgetSystemOption_OpenChattingOptionColorPicker_Params
{
	int                                                iUID;                                                      // 0x0000(0x0004)  (Parm)
	struct FString                                     sColor;                                                    // 0x0004(0x0010)  (Parm, NeedCtorLink)
	float                                              X;                                                         // 0x0014(0x0004)  (Parm)
	float                                              Y;                                                         // 0x0018(0x0004)  (Parm)
	float                                              W;                                                         // 0x001C(0x0004)  (Parm)
	float                                              H;                                                         // 0x0020(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetSystemOption.OptionHotKeyKillFocus
struct UEFGFxWidgetSystemOption_OptionHotKeyKillFocus_Params
{
};

// Function EFGame.EFGFxWidgetSystemOption.OptionHotKeyButtonChange
struct UEFGFxWidgetSystemOption_OptionHotKeyButtonChange_Params
{
	int                                                iUID;                                                      // 0x0000(0x0004)  (Parm)
	int                                                iIndex;                                                    // 0x0004(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetSystemOption.SystemOptionWndCloseButtonClicked
struct UEFGFxWidgetSystemOption_SystemOptionWndCloseButtonClicked_Params
{
};

// Function EFGame.EFGFxWidgetSystemOption.SystemOptionChangedSlider
struct UEFGFxWidgetSystemOption_SystemOptionChangedSlider_Params
{
	int                                                iUID;                                                      // 0x0000(0x0004)  (Parm)
	int                                                iValue;                                                    // 0x0004(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetSystemOption.SystemOptionSelectedComboBox
struct UEFGFxWidgetSystemOption_SystemOptionSelectedComboBox_Params
{
	int                                                iUID;                                                      // 0x0000(0x0004)  (Parm)
	int                                                iIndex;                                                    // 0x0004(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetSystemOption.SystemOptionSelectedCheckBox
struct UEFGFxWidgetSystemOption_SystemOptionSelectedCheckBox_Params
{
	int                                                iUID;                                                      // 0x0000(0x0004)  (Parm)
	bool                                               bCheck;                                                    // 0x0004(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetUnLockBox.UnlockBoxItemComplete
struct UEFGFxWidgetUnLockBox_UnlockBoxItemComplete_Params
{
};

// Function EFGame.EFGFxWidgetUnLockBox.UnlockBoxItemClosed
struct UEFGFxWidgetUnLockBox_UnlockBoxItemClosed_Params
{
};

// Function EFGame.EFGFxWidgetUserTrade.SetOtherTradeReady
struct UEFGFxWidgetUserTrade_SetOtherTradeReady_Params
{
	bool                                               Ready;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetUserTrade.ASSetOtherTradeReady
struct UEFGFxWidgetUserTrade_ASSetOtherTradeReady_Params
{
	bool                                               Ready;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetUserTrade.SetMyTradeReady
struct UEFGFxWidgetUserTrade_SetMyTradeReady_Params
{
	bool                                               Ready;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetUserTrade.ASSetMyTradeReady
struct UEFGFxWidgetUserTrade_ASSetMyTradeReady_Params
{
	bool                                               Ready;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetUserTrade.SetOtherTradeConfirm
struct UEFGFxWidgetUserTrade_SetOtherTradeConfirm_Params
{
};

// Function EFGame.EFGFxWidgetUserTrade.ASSetOtherTradeConfirm
struct UEFGFxWidgetUserTrade_ASSetOtherTradeConfirm_Params
{
};

// Function EFGame.EFGFxWidgetUserTrade.SetMyTradeConfirm
struct UEFGFxWidgetUserTrade_SetMyTradeConfirm_Params
{
};

// Function EFGame.EFGFxWidgetUserTrade.ASSetMyTradeConfirm
struct UEFGFxWidgetUserTrade_ASSetMyTradeConfirm_Params
{
};

// Function EFGame.EFUIFrame.WidgetInitialized
struct UEFUIFrame_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                                // 0x0000(0x0008)  (Parm)
	struct FName                                       WidgetPath;                                                // 0x0008(0x0008)  (Parm)
	class UGFxObject*                                  Widget;                                                    // 0x0010(0x0008)  (Parm)
	bool                                               ReturnValue;                                               // 0x0018(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUIFrame.IsRegisteredWidget
struct UEFUIFrame_IsRegisteredWidget_Params
{
	struct FName                                       WidgetName;                                                // 0x0000(0x0008)  (Parm)
	bool                                               ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUIFrame.Deactivate
struct UEFUIFrame_Deactivate_Params
{
};

// Function EFGame.EFUIFrame.Activate
struct UEFUIFrame_Activate_Params
{
};

// Function EFGame.EFGFxWidgetAnnounce.AnnounceFrameMotionComplete
struct UEFGFxWidgetAnnounce_AnnounceFrameMotionComplete_Params
{
	int                                                Layer;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetAnnounce.cleanUpLayer
struct UEFGFxWidgetAnnounce_cleanUpLayer_Params
{
	int                                                Layer;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetAnnounce.setAnnouncePosition
struct UEFGFxWidgetAnnounce_setAnnouncePosition_Params
{
	int                                                Layer;                                                     // 0x0000(0x0004)  (Parm)
	float                                              YPos;                                                      // 0x0004(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetAnnounce.getAnnounceListPosition
struct UEFGFxWidgetAnnounce_getAnnounceListPosition_Params
{
	int                                                Layer;                                                     // 0x0000(0x0004)  (Parm)
	class UGFxObject*                                  ReturnValue;                                               // 0x0004(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFGFxWidgetAnnounce.setAnnounceItemTime
struct UEFGFxWidgetAnnounce_setAnnounceItemTime_Params
{
	int                                                Layer;                                                     // 0x0000(0x0004)  (Parm)
	int                                                Index;                                                     // 0x0004(0x0004)  (Parm)
	float                                              Time;                                                      // 0x0008(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetAnnounce.getAnnounceItemTime
struct UEFGFxWidgetAnnounce_getAnnounceItemTime_Params
{
	int                                                Layer;                                                     // 0x0000(0x0004)  (Parm)
	int                                                Index;                                                     // 0x0004(0x0004)  (Parm)
	float                                              ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFGFxWidgetAnnounce.getAnnounceListItem
struct UEFGFxWidgetAnnounce_getAnnounceListItem_Params
{
	int                                                Layer;                                                     // 0x0000(0x0004)  (Parm)
	int                                                Index;                                                     // 0x0004(0x0004)  (Parm)
	class UGFxObject*                                  ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFGFxWidgetAnnounce.setAnnounceTotalItem
struct UEFGFxWidgetAnnounce_setAnnounceTotalItem_Params
{
	int                                                Layer;                                                     // 0x0000(0x0004)  (Parm)
	int                                                Count;                                                     // 0x0004(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetAnnounce.getAnnounceMaxItem
struct UEFGFxWidgetAnnounce_getAnnounceMaxItem_Params
{
	int                                                Layer;                                                     // 0x0000(0x0004)  (Parm)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFGFxWidgetAnnounce.getAnnounceCurrentItem
struct UEFGFxWidgetAnnounce_getAnnounceCurrentItem_Params
{
	int                                                Layer;                                                     // 0x0000(0x0004)  (Parm)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFGFxWidgetAnnounce.addAnnounceMessage
struct UEFGFxWidgetAnnounce_addAnnounceMessage_Params
{
	int                                                Layer;                                                     // 0x0000(0x0004)  (Parm)
	class UGFxObject*                                  Obj;                                                       // 0x0004(0x0008)  (Parm)
};

// Function EFGame.EFGFxWidgetClassPreview.SetEnableResetButton
struct UEFGFxWidgetClassPreview_SetEnableResetButton_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetClassPreview.SetShowType
struct UEFGFxWidgetClassPreview_SetShowType_Params
{
	int                                                Type;                                                      // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetClassPreview.SetClassUpgradeChoiceInfo
struct UEFGFxWidgetClassPreview_SetClassUpgradeChoiceInfo_Params
{
	class UGFxObject*                                  ClassDataList;                                             // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFGFxWidgetClassPreview.SetPlayingClassData
struct UEFGFxWidgetClassPreview_SetPlayingClassData_Params
{
	int                                                ClassID;                                                   // 0x0000(0x0004)  (Parm)
	struct FString                                     ClassName;                                                 // 0x0004(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     classInfo;                                                 // 0x0014(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeCancelRelease
struct UEFGFxWidgetClassPreview_ClassUpgradeCancelRelease_Params
{
};

// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeSelectClassID
struct UEFGFxWidgetClassPreview_ClassUpgradeSelectClassID_Params
{
	int                                                iIndex;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeConfirmClass
struct UEFGFxWidgetClassPreview_ClassUpgradeConfirmClass_Params
{
	int                                                iIndex;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeReturnRelease
struct UEFGFxWidgetClassPreview_ClassUpgradeReturnRelease_Params
{
};

// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeAddBossMonster
struct UEFGFxWidgetClassPreview_ClassUpgradeAddBossMonster_Params
{
};

// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradeAddNormalMonster
struct UEFGFxWidgetClassPreview_ClassUpgradeAddNormalMonster_Params
{
};

// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradePlayReset
struct UEFGFxWidgetClassPreview_ClassUpgradePlayReset_Params
{
};

// Function EFGame.EFGFxWidgetClassPreview.RequestStopMovie
struct UEFGFxWidgetClassPreview_RequestStopMovie_Params
{
};

// Function EFGame.EFGFxWidgetClassPreview.RequestPlayMovieClassUpgradePreview
struct UEFGFxWidgetClassPreview_RequestPlayMovieClassUpgradePreview_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradePreviewRequestCloseWnd
struct UEFGFxWidgetClassPreview_ClassUpgradePreviewRequestCloseWnd_Params
{
};

// Function EFGame.EFGFxWidgetClassPreview.ClassUpgradePreviewPlaySelectClass
struct UEFGFxWidgetClassPreview_ClassUpgradePreviewPlaySelectClass_Params
{
	int                                                iIndex;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetColosseum_New.setObserverMod
struct UEFGFxWidgetColosseum_New_setObserverMod_Params
{
	int                                                iMode;                                                     // 0x0000(0x0004)  (Parm)
	int                                                iSide;                                                     // 0x0004(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetColosseum_New.setTimerPause
struct UEFGFxWidgetColosseum_New_setTimerPause_Params
{
	bool                                               bPause;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetColosseum_New.AddItem
struct UEFGFxWidgetColosseum_New_AddItem_Params
{
	class UGFxObject*                                  Object;                                                    // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFGFxWidgetColosseum_New.setModType
struct UEFGFxWidgetColosseum_New_setModType_Params
{
	int                                                iType;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetColosseum_New.roundAnnounceShowType
struct UEFGFxWidgetColosseum_New_roundAnnounceShowType_Params
{
	int                                                iType;                                                     // 0x0000(0x0004)  (Parm)
	struct FString                                     Title;                                                     // 0x0004(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     Subtitle;                                                  // 0x0014(0x0010)  (Parm, NeedCtorLink)
	int                                                iTeamType;                                                 // 0x0024(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetColosseum_New.announceShowType
struct UEFGFxWidgetColosseum_New_announceShowType_Params
{
	int                                                iType;                                                     // 0x0000(0x0004)  (Parm)
	struct FString                                     Title;                                                     // 0x0004(0x0010)  (Parm, NeedCtorLink)
	int                                                iTeamType;                                                 // 0x0014(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetColosseum_New.setStartData
struct UEFGFxWidgetColosseum_New_setStartData_Params
{
	class UGFxObject*                                  Object;                                                    // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFGFxWidgetColosseum_New.setWaitData
struct UEFGFxWidgetColosseum_New_setWaitData_Params
{
	class UGFxObject*                                  Object;                                                    // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFGFxWidgetCommon.SetPartyMemberValue
struct UEFGFxWidgetCommon_SetPartyMemberValue_Params
{
	struct FString                                     remainPartyMember;                                         // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetCommon.SetCommonObjectAvailableSkip
struct UEFGFxWidgetCommon_SetCommonObjectAvailableSkip_Params
{
	bool                                               bShow;                                                     // 0x0000(0x0004)  (Parm)
	int                                                skipType;                                                  // 0x0004(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetCommon.ShowCommonObjectAvailableSkip
struct UEFGFxWidgetCommon_ShowCommonObjectAvailableSkip_Params
{
	bool                                               bShow;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetCommon.WidgetInitialized
struct UEFGFxWidgetCommon_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                                // 0x0000(0x0008)  (Parm)
	struct FName                                       WidgetPath;                                                // 0x0008(0x0008)  (Parm)
	class UGFxObject*                                  Widget;                                                    // 0x0010(0x0008)  (Parm)
	bool                                               ReturnValue;                                               // 0x0018(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFGFxWidgetContentsUnlock.ContentsUnlockCallbackTypeID
struct UEFGFxWidgetContentsUnlock_ContentsUnlockCallbackTypeID_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetContentsUnlock.OnContentsUnlockCallbackTypeID
struct UEFGFxWidgetContentsUnlock_OnContentsUnlockCallbackTypeID_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetDamage.EFDataBinding_UpdateData
struct UEFGFxWidgetDamage_EFDataBinding_UpdateData_Params
{
	struct FString                                     BindName;                                                  // 0x0000(0x0010)  (Parm, NeedCtorLink)
	class UGFxObject*                                  DataProvider;                                              // 0x0010(0x0008)  (Parm)
	int                                                ReturnValue;                                               // 0x0018(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFGFxWidgetExcavationMiniGame.MiniGameStateChanged
struct UEFGFxWidgetExcavationMiniGame_MiniGameStateChanged_Params
{
	struct FString                                     WndName;                                                   // 0x0000(0x0010)  (Parm, NeedCtorLink)
	int                                                currentGameState;                                          // 0x0010(0x0004)  (Parm)
	int                                                lastGameState;                                             // 0x0014(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetExcavationMiniGame.OnChangeGameState
struct UEFGFxWidgetExcavationMiniGame_OnChangeGameState_Params
{
	struct FString                                     WndName;                                                   // 0x0000(0x0010)  (Parm, NeedCtorLink)
	int                                                currentGameState;                                          // 0x0010(0x0004)  (Parm)
	int                                                lastGameState;                                             // 0x0014(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetExcavationMiniGame.ArcheologyResultComplete
struct UEFGFxWidgetExcavationMiniGame_ArcheologyResultComplete_Params
{
};

// Function EFGame.EFGFxWidgetExcavationMiniGame.OnResultComplete
struct UEFGFxWidgetExcavationMiniGame_OnResultComplete_Params
{
};

// Function EFGame.EFGFxWidgetFishingNetMiniGame.MiniGameStateChanged
struct UEFGFxWidgetFishingNetMiniGame_MiniGameStateChanged_Params
{
	struct FString                                     WndName;                                                   // 0x0000(0x0010)  (Parm, NeedCtorLink)
	int                                                currentGameState;                                          // 0x0010(0x0004)  (Parm)
	int                                                lastGameState;                                             // 0x0014(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetFishingNetMiniGame.OnChangeGameState
struct UEFGFxWidgetFishingNetMiniGame_OnChangeGameState_Params
{
	struct FString                                     WndName;                                                   // 0x0000(0x0010)  (Parm, NeedCtorLink)
	int                                                currentGameState;                                          // 0x0010(0x0004)  (Parm)
	int                                                lastGameState;                                             // 0x0014(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetFishingNetMiniGame.FishingGameOver
struct UEFGFxWidgetFishingNetMiniGame_FishingGameOver_Params
{
	int                                                overType;                                                  // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetFishingNetMiniGame.OnFishingGameOver
struct UEFGFxWidgetFishingNetMiniGame_OnFishingGameOver_Params
{
	int                                                overType;                                                  // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetHeadStatus.MoveHeadStatus
struct UEFGFxWidgetHeadStatus_MoveHeadStatus_Params
{
	struct FString                                     strID;                                                     // 0x0000(0x0010)  (Parm, NeedCtorLink)
	float                                              fX;                                                        // 0x0010(0x0004)  (Parm)
	float                                              fY;                                                        // 0x0014(0x0004)  (Parm)
	float                                              fZ;                                                        // 0x0018(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetHudCommonExp.HUD_CommonTabIndex
struct UEFGFxWidgetHudCommonExp_HUD_CommonTabIndex_Params
{
	int                                                TabIndex;                                                  // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetHudCommonExp.CommonTabIndex
struct UEFGFxWidgetHudCommonExp_CommonTabIndex_Params
{
	int                                                TabIndex;                                                  // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetHudIdentity.SummonerSkillButtonClick
struct UEFGFxWidgetHudIdentity_SummonerSkillButtonClick_Params
{
	int                                                iButtonIndex;                                              // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetHudLeftTop.TopHUDAlarmListRightBtnClick
struct UEFGFxWidgetHudLeftTop_TopHUDAlarmListRightBtnClick_Params
{
	int                                                InListIndex;                                               // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetHudLeftTop.TopHUDAlarmListLeftBtnClick
struct UEFGFxWidgetHudLeftTop_TopHUDAlarmListLeftBtnClick_Params
{
	int                                                InListIndex;                                               // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetHudLeftTop.TopHUDAlarmListItemClick
struct UEFGFxWidgetHudLeftTop_TopHUDAlarmListItemClick_Params
{
	int                                                InListIndex;                                               // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetInteraction.RelationShipLevelUp
struct UEFGFxWidgetInteraction_RelationShipLevelUp_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.CloseBackGround
struct UEFGFxWidgetInteraction_CloseBackGround_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.InteractionCloseBackGround
struct UEFGFxWidgetInteraction_InteractionCloseBackGround_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.OpenBackGround
struct UEFGFxWidgetInteraction_OpenBackGround_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.InteractionOpenBackGround
struct UEFGFxWidgetInteraction_InteractionOpenBackGround_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.SelectQuestListIndex
struct UEFGFxWidgetInteraction_SelectQuestListIndex_Params
{
	int                                                ListIndex;                                                 // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetInteraction.SelectQuestList
struct UEFGFxWidgetInteraction_SelectQuestList_Params
{
	int                                                ListIndex;                                                 // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetInteraction.SelectFunctionType
struct UEFGFxWidgetInteraction_SelectFunctionType_Params
{
	int                                                Type;                                                      // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetInteraction.SelectFunctionContainer
struct UEFGFxWidgetInteraction_SelectFunctionContainer_Params
{
	int                                                Type;                                                      // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetInteraction.ShowMaxIntimatePoint
struct UEFGFxWidgetInteraction_ShowMaxIntimatePoint_Params
{
	bool                                               B;                                                         // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetInteraction.ShowMaximumIntimatePoint
struct UEFGFxWidgetInteraction_ShowMaximumIntimatePoint_Params
{
	bool                                               B;                                                         // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetInteraction.ClearInteractionState
struct UEFGFxWidgetInteraction_ClearInteractionState_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.ClearFunctionButtonState
struct UEFGFxWidgetInteraction_ClearFunctionButtonState_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.InteractionCommonCloseBtnClick
struct UEFGFxWidgetInteraction_InteractionCommonCloseBtnClick_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.EndInteractionMode
struct UEFGFxWidgetInteraction_EndInteractionMode_Params
{
};

// Function EFGame.EFGFxWidgetInteraction.InteractionCommonPlayerTalkListClick
struct UEFGFxWidgetInteraction_InteractionCommonPlayerTalkListClick_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetInteraction.ClickInteractionTalkSelectList
struct UEFGFxWidgetInteraction_ClickInteractionTalkSelectList_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetInteraction.InteractionCommonNPCTalkListClick
struct UEFGFxWidgetInteraction_InteractionCommonNPCTalkListClick_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetInteraction.ClickInteractionTalkList
struct UEFGFxWidgetInteraction_ClickInteractionTalkList_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetInteraction.InteractionCommonMenuListClick
struct UEFGFxWidgetInteraction_InteractionCommonMenuListClick_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetInteraction.ClickInteractionFunctionMenu
struct UEFGFxWidgetInteraction_ClickInteractionFunctionMenu_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetInteraction.WidgetInitialized
struct UEFGFxWidgetInteraction_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                                // 0x0000(0x0008)  (Parm)
	struct FName                                       WidgetPath;                                                // 0x0008(0x0008)  (Parm)
	class UGFxObject*                                  Widget;                                                    // 0x0010(0x0008)  (Parm)
	bool                                               ReturnValue;                                               // 0x0018(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFGFxWidgetInteractionKeyIcon.InteractionKeySelected
struct UEFGFxWidgetInteractionKeyIcon_InteractionKeySelected_Params
{
};

// Function EFGame.EFGFxWidgetInteractionKeyIcon.FinishSwitchInteractionMode
struct UEFGFxWidgetInteractionKeyIcon_FinishSwitchInteractionMode_Params
{
};

// Function EFGame.EFGFxWidgetLifeToolDurability.HideLifeDurability
struct UEFGFxWidgetLifeToolDurability_HideLifeDurability_Params
{
};

// Function EFGame.EFGFxWidgetLifeToolDurability.DecreaseLifeDurability
struct UEFGFxWidgetLifeToolDurability_DecreaseLifeDurability_Params
{
	int                                                CurrentValue;                                              // 0x0000(0x0004)  (Parm)
	int                                                decreaseValue;                                             // 0x0004(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetLifeToolDurability.ShowLifeDurability
struct UEFGFxWidgetLifeToolDurability_ShowLifeDurability_Params
{
	int                                                iconType;                                                  // 0x0000(0x0004)  (Parm)
	int                                                CurrentValue;                                              // 0x0004(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetLifeVessel.LifeVesselCompleteAnimationEnd
struct UEFGFxWidgetLifeVessel_LifeVesselCompleteAnimationEnd_Params
{
	int                                                iCompleteIndex;                                            // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetMenu.QuickSlotMenuClick
struct UEFGFxWidgetMenu_QuickSlotMenuClick_Params
{
	int                                                iMenuIndex;                                                // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetMenu.GetMenu
struct UEFGFxWidgetMenu_GetMenu_Params
{
	int                                                iSlotIndex;                                                // 0x0000(0x0004)  (Parm)
	class UGFxObject*                                  ReturnValue;                                               // 0x0004(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFGFxWidgetMenu.SetEnableButton
struct UEFGFxWidgetMenu_SetEnableButton_Params
{
	int                                                iMenuIndex;                                                // 0x0000(0x0004)  (Parm)
	bool                                               bEnable;                                                   // 0x0004(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetMenu.SetToolTip
struct UEFGFxWidgetMenu_SetToolTip_Params
{
	int                                                iMenuIndex;                                                // 0x0000(0x0004)  (Parm)
	struct FString                                     strToolTip;                                                // 0x0004(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetMenu.SetBindKey
struct UEFGFxWidgetMenu_SetBindKey_Params
{
	int                                                iMenuIndex;                                                // 0x0000(0x0004)  (Parm)
	struct FString                                     strBindKey;                                                // 0x0004(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetMenu.SetSelectButton
struct UEFGFxWidgetMenu_SetSelectButton_Params
{
	int                                                iMenuIndex;                                                // 0x0000(0x0004)  (Parm)
	bool                                               bSelect;                                                   // 0x0004(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetMenu.SelectButton
struct UEFGFxWidgetMenu_SelectButton_Params
{
	int                                                iMenuIndex;                                                // 0x0000(0x0004)  (Parm)
	bool                                               bSelect;                                                   // 0x0004(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetMinimap.RequestShowMinimapChannelList
struct UEFGFxWidgetMinimap_RequestShowMinimapChannelList_Params
{
};

// Function EFGame.EFGFxWidgetMOD_Cube.ModCommonMergeCompensation
struct UEFGFxWidgetMOD_Cube_ModCommonMergeCompensation_Params
{
};

// Function EFGame.EFGFxWidgetMOD_Cube.FinishMergeCompensation
struct UEFGFxWidgetMOD_Cube_FinishMergeCompensation_Params
{
};

// Function EFGame.EFGFxWidgetMOD_Cube.ModCommonEndCubeEffect
struct UEFGFxWidgetMOD_Cube_ModCommonEndCubeEffect_Params
{
	int                                                TabIndex;                                                  // 0x0000(0x0004)  (Parm)
	int                                                selectZoneID;                                              // 0x0004(0x0004)  (Parm)
	int                                                selectDifficulty;                                          // 0x0008(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetMOD_Cube.EndBuffEffect
struct UEFGFxWidgetMOD_Cube_EndBuffEffect_Params
{
};

// Function EFGame.EFGFxWidgetMOD_Cube.PlayModCommonMergeCompensation
struct UEFGFxWidgetMOD_Cube_PlayModCommonMergeCompensation_Params
{
	bool                                               bSuccess;                                                  // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonRandomState
struct UEFGFxWidgetMOD_Cube_SetModCommonRandomState_Params
{
	bool                                               bStart;                                                    // 0x0000(0x0004)  (Parm)
	class UGFxObject*                                  Obj;                                                       // 0x0004(0x0008)  (Parm)
};

// Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonCurrentCompensation
struct UEFGFxWidgetMOD_Cube_SetModCommonCurrentCompensation_Params
{
	class UGFxObject*                                  Obj;                                                       // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonAccumulateCompensation
struct UEFGFxWidgetMOD_Cube_SetModCommonAccumulateCompensation_Params
{
	class UGFxObject*                                  Obj;                                                       // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFGFxWidgetMOD_Cube.UpdateModCommonCubeState
struct UEFGFxWidgetMOD_Cube_UpdateModCommonCubeState_Params
{
	int                                                SkillEffectIndex;                                          // 0x0000(0x0004)  (Parm)
	int                                                StackCount;                                                // 0x0004(0x0004)  (Parm)
	int                                                ExpireStageIndex;                                          // 0x0008(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetMOD_Cube.RemoveModCommonCubeState
struct UEFGFxWidgetMOD_Cube_RemoveModCommonCubeState_Params
{
	int                                                SkillEffectIndex;                                          // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetMOD_Cube.AddModCommonCubeState
struct UEFGFxWidgetMOD_Cube_AddModCommonCubeState_Params
{
	class UGFxObject*                                  Obj;                                                       // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonStateList
struct UEFGFxWidgetMOD_Cube_SetModCommonStateList_Params
{
	class UGFxObject*                                  Obj;                                                       // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonWaveStep
struct UEFGFxWidgetMOD_Cube_SetModCommonWaveStep_Params
{
	class UGFxObject*                                  Obj;                                                       // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFGFxWidgetMOD_Cube.SetModCommonHudType
struct UEFGFxWidgetMOD_Cube_SetModCommonHudType_Params
{
	int                                                ModType;                                                   // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetMOD_PlatinumArea.ModPlatinumCoopComplete
struct UEFGFxWidgetMOD_PlatinumArea_ModPlatinumCoopComplete_Params
{
	int                                                InCompleteCoopStep;                                        // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetMODEntrance.ModEntranceMapCanvasItemClick
struct UEFGFxWidgetMODEntrance_ModEntranceMapCanvasItemClick_Params
{
	int                                                ZoneID;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetNotice.setNoticeIcon
struct UEFGFxWidgetNotice_setNoticeIcon_Params
{
	bool                                               show;                                                      // 0x0000(0x0004)  (Parm)
	int                                                noticeType;                                                // 0x0004(0x0004)  (Parm)
	int                                                StackCount;                                                // 0x0008(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetNotice.NoticeFrameAlarmBtnClick
struct UEFGFxWidgetNotice_NoticeFrameAlarmBtnClick_Params
{
	int                                                noticeType;                                                // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetPcCreateHUD.SetDefaultClassData
struct UEFGFxWidgetPcCreateHUD_SetDefaultClassData_Params
{
	TArray<class UGFxObject*>                          pObject;                                                   // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetPcCreateHUD.RequestStopMovie
struct UEFGFxWidgetPcCreateHUD_RequestStopMovie_Params
{
};

// Function EFGame.EFGFxWidgetPcCreateHUD.RequestPlayMovieClassSelectPreview
struct UEFGFxWidgetPcCreateHUD_RequestPlayMovieClassSelectPreview_Params
{
	int                                                ClassID;                                                   // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetPcCreateHUD.RequestUpdateClassSelectData
struct UEFGFxWidgetPcCreateHUD_RequestUpdateClassSelectData_Params
{
	int                                                ClassID;                                                   // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetPcCustomizing.previewImg
struct UEFGFxWidgetPcCustomizing_previewImg_Params
{
	class UGFxObject*                                  Obj;                                                       // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFGFxWidgetPcCustomizing.setCostume
struct UEFGFxWidgetPcCustomizing_setCostume_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetPcCustomizing.setClassID
struct UEFGFxWidgetPcCustomizing_setClassID_Params
{
	int                                                ClassID;                                                   // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetPcCustomizing.setPreviewcostumeData
struct UEFGFxWidgetPcCustomizing_setPreviewcostumeData_Params
{
	TArray<unsigned long>                              Array;                                                     // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetPcCustomizing.setPresetData
struct UEFGFxWidgetPcCustomizing_setPresetData_Params
{
	TArray<unsigned long>                              Array;                                                     // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetPcCustomizing.CustomizingSettingValueChanged
struct UEFGFxWidgetPcCustomizing_CustomizingSettingValueChanged_Params
{
	struct FString                                     InFirstCategory;                                           // 0x0000(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     InSecondCategory;                                          // 0x0010(0x0010)  (Parm, NeedCtorLink)
	int                                                iValue;                                                    // 0x0020(0x0004)  (Parm)
	float                                              fValue;                                                    // 0x0024(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetPcSelect.ShowAnim
struct UEFGFxWidgetPcSelect_ShowAnim_Params
{
};

// Function EFGame.EFGFxWidgetPcSelect.ShowNotice
struct UEFGFxWidgetPcSelect_ShowNotice_Params
{
	struct FString                                     Str;                                                       // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFGFxWidgetPcSelect.SetCharacterSelect
struct UEFGFxWidgetPcSelect_SetCharacterSelect_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetPcSelect.CharacterSelectMoving
struct UEFGFxWidgetPcSelect_CharacterSelectMoving_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetPcSelect.WallpaperCancel
struct UEFGFxWidgetPcSelect_WallpaperCancel_Params
{
};

// Function EFGame.EFGFxWidgetPcSelect.WallpaperSelected
struct UEFGFxWidgetPcSelect_WallpaperSelected_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetPcSelect.WallpaperConfirm
struct UEFGFxWidgetPcSelect_WallpaperConfirm_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetPcSelect.CharacterSelectDeleteCancel
struct UEFGFxWidgetPcSelect_CharacterSelectDeleteCancel_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetPcSelect.CharacterSelectedIndex
struct UEFGFxWidgetPcSelect_CharacterSelectedIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetPcSelect.RequestNewCharacter
struct UEFGFxWidgetPcSelect_RequestNewCharacter_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGFxWidgetRaidClear.RaidProcessResultComplete
struct UEFGFxWidgetRaidClear_RaidProcessResultComplete_Params
{
};

// Function EFGame.EFGFxWidgetRaidExitNotice.RaidProcessNoticeTimeOut
struct UEFGFxWidgetRaidExitNotice_RaidProcessNoticeTimeOut_Params
{
};

// Function EFGame.EFGFxWidgetRaidFail.RaidProcessResultComplete
struct UEFGFxWidgetRaidFail_RaidProcessResultComplete_Params
{
};

// Function EFGame.EFGFxWidgetRaidHUD.RaidProcessTimeOut
struct UEFGFxWidgetRaidHUD_RaidProcessTimeOut_Params
{
};

// Function EFGame.EFUISlotData.SetPresetGemIcon
struct UEFUISlotData_SetPresetGemIcon_Params
{
	bool                                               bValue;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlotData.SetSortLocked
struct UEFUISlotData_SetSortLocked_Params
{
	bool                                               bValue;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlotData.SetItemLevelString
struct UEFUISlotData_SetItemLevelString_Params
{
	struct FString                                     ItemLevelString;                                           // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFUISlotData.SetRightTopString
struct UEFUISlotData_SetRightTopString_Params
{
	struct FString                                     RTString;                                                  // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFUISlotData.SetIslandIcon
struct UEFUISlotData_SetIslandIcon_Params
{
	bool                                               bValue;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlotData.SetTownShow
struct UEFUISlotData_SetTownShow_Params
{
	bool                                               bValue;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlotData.SetToolTip
struct UEFUISlotData_SetToolTip_Params
{
	struct FString                                     Tooltipdata;                                               // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFUISlotData.SetRecommend
struct UEFUISlotData_SetRecommend_Params
{
	bool                                               bValue;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlotData.SetFriendshipShow
struct UEFUISlotData_SetFriendshipShow_Params
{
	bool                                               bValue;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlotData.SetTripodBookmarkShow
struct UEFUISlotData_SetTripodBookmarkShow_Params
{
	bool                                               bValue;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlotData.SetEngraveBookmarkShow
struct UEFUISlotData_SetEngraveBookmarkShow_Params
{
	bool                                               bValue;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlotData.SetSealShow
struct UEFUISlotData_SetSealShow_Params
{
	bool                                               bValue;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlotData.SetAdvBookShow
struct UEFUISlotData_SetAdvBookShow_Params
{
	bool                                               bValue;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlotData.SetTemporary
struct UEFUISlotData_SetTemporary_Params
{
	bool                                               bValue;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlotData.SetTrash
struct UEFUISlotData_SetTrash_Params
{
	bool                                               bValue;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlotData.SetDisableType
struct UEFUISlotData_SetDisableType_Params
{
	int                                                iType;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlotData.SetTableID
struct UEFUISlotData_SetTableID_Params
{
	int                                                NewTableID;                                                // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlotData.GetTableID
struct UEFUISlotData_GetTableID_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUISlotData.SetUniqueData
struct UEFUISlotData_SetUniqueData_Params
{
	struct FString                                     NewUniqueData;                                             // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFUISlotData.GetUniqueData
struct UEFUISlotData_GetUniqueData_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function EFGame.EFUISlotData.SetLocked
struct UEFUISlotData_SetLocked_Params
{
	int                                                iLockType;                                                 // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlotData.IsLocked
struct UEFUISlotData_IsLocked_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUISlotData.SetItemGrade
struct UEFUISlotData_SetItemGrade_Params
{
	int                                                NewGrade;                                                  // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlotData.GetItemGrade
struct UEFUISlotData_GetItemGrade_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUISlotData.SetSoundTheme
struct UEFUISlotData_SetSoundTheme_Params
{
	struct FString                                     NewSoundTheme;                                             // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFUISlotData.GetSoundTheme
struct UEFUISlotData_GetSoundTheme_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function EFGame.EFUISlotData.SetDisabled
struct UEFUISlotData_SetDisabled_Params
{
	bool                                               bValue;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlotData.IsDisabled
struct UEFUISlotData_IsDisabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUISlotData.SetLabelName
struct UEFUISlotData_SetLabelName_Params
{
	struct FString                                     NewLabelName;                                              // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFUISlotData.GetLabelName
struct UEFUISlotData_GetLabelName_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function EFGame.EFUISlotData.SetCooltime
struct UEFUISlotData_SetCooltime_Params
{
	float                                              NewRemainTime;                                             // 0x0000(0x0004)  (Parm)
	float                                              NewTotalTime;                                              // 0x0004(0x0004)  (Parm)
};

// Function EFGame.EFUISlotData.GetTotalCoolTime
struct UEFUISlotData_GetTotalCoolTime_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUISlotData.GetRemainCoolTime
struct UEFUISlotData_GetRemainCoolTime_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUISlotData.SetIconHeight
struct UEFUISlotData_SetIconHeight_Params
{
	int                                                NewIconHeight;                                             // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlotData.GetIconHeight
struct UEFUISlotData_GetIconHeight_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUISlotData.SetIconWidth
struct UEFUISlotData_SetIconWidth_Params
{
	int                                                NewIconWidth;                                              // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlotData.GetIconWidth
struct UEFUISlotData_GetIconWidth_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUISlotData.SetIconY
struct UEFUISlotData_SetIconY_Params
{
	int                                                NewIconY;                                                  // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlotData.GetIconY
struct UEFUISlotData_GetIconY_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUISlotData.SetIconX
struct UEFUISlotData_SetIconX_Params
{
	int                                                NewIconX;                                                  // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlotData.GetIconX
struct UEFUISlotData_GetIconX_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUISlotData.SetIconCount
struct UEFUISlotData_SetIconCount_Params
{
	int                                                NewIconIndex;                                              // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlotData.GetIconCount
struct UEFUISlotData_GetIconCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUISlotData.SetIconPath
struct UEFUISlotData_SetIconPath_Params
{
	struct FString                                     NewIconPath;                                               // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFUISlotData.GetIconPath
struct UEFUISlotData_GetIconPath_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function EFGame.EFUISlotData.SetWindowType
struct UEFUISlotData_SetWindowType_Params
{
	int                                                NewWindowType;                                             // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlotData.GetWindowType
struct UEFUISlotData_GetWindowType_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUISlotData.SetSlotIndex
struct UEFUISlotData_SetSlotIndex_Params
{
	int                                                NewSlotIndex;                                              // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlotData.GetSlotIndex
struct UEFUISlotData_GetSlotIndex_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUISlotData.SetBindID
struct UEFUISlotData_SetBindID_Params
{
	struct FString                                     NewSlotID;                                                 // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFUISlotData.GetBindID
struct UEFUISlotData_GetBindID_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function EFGame.EFUISlotData.SetSlotType
struct UEFUISlotData_SetSlotType_Params
{
	int                                                NewSlotType;                                               // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFUISlotData.GetSlotType
struct UEFUISlotData_GetSlotType_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFUISlotData.SetIconData_New
struct UEFUISlotData_SetIconData_New_Params
{
	int                                                SlotType;                                                  // 0x0000(0x0004)  (Parm)
	int                                                SlotIndex;                                                 // 0x0004(0x0004)  (Parm)
	struct FString                                     BindID;                                                    // 0x0008(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     IconKey;                                                   // 0x0018(0x0010)  (Parm, NeedCtorLink)
	TEnumAsByte<EFGame_EItemGrade>                     eItemGrade;                                                // 0x0028(0x0001)  (Parm)
	int                                                TableID;                                                   // 0x002C(0x0004)  (OptionalParm, Parm)
	int                                                IconCount;                                                 // 0x0030(0x0004)  (OptionalParm, Parm)
	bool                                               bTrash;                                                    // 0x0034(0x0004)  (OptionalParm, Parm)
	bool                                               bTemporary;                                                // 0x0038(0x0004)  (OptionalParm, Parm)
};

// Function EFGame.EFUISlotData.SetIconData
struct UEFUISlotData_SetIconData_Params
{
	int                                                SlotType;                                                  // 0x0000(0x0004)  (Parm)
	int                                                SlotIndex;                                                 // 0x0004(0x0004)  (Parm)
	struct FString                                     BindID;                                                    // 0x0008(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     IconPath;                                                  // 0x0018(0x0010)  (Parm, NeedCtorLink)
	int                                                IconIndex;                                                 // 0x0028(0x0004)  (Parm)
	TEnumAsByte<EFGame_EItemGrade>                     eItemGrade;                                                // 0x002C(0x0001)  (Parm)
	int                                                TableID;                                                   // 0x0030(0x0004)  (OptionalParm, Parm)
	int                                                IconCount;                                                 // 0x0034(0x0004)  (OptionalParm, Parm)
	bool                                               bTrash;                                                    // 0x0038(0x0004)  (OptionalParm, Parm)
	bool                                               bTemporary;                                                // 0x003C(0x0004)  (OptionalParm, Parm)
	struct FString                                     Tooltipdata;                                               // 0x0040(0x0010)  (OptionalParm, Parm, NeedCtorLink)
};

// Function EFGame.EFUISlotData.SetImageData_New
struct UEFUISlotData_SetImageData_New_Params
{
	int                                                SlotType;                                                  // 0x0000(0x0004)  (Parm)
	int                                                SlotIndex;                                                 // 0x0004(0x0004)  (Parm)
	struct FString                                     BindID;                                                    // 0x0008(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     IconKey;                                                   // 0x0018(0x0010)  (Parm, NeedCtorLink)
	int                                                TableID;                                                   // 0x0028(0x0004)  (OptionalParm, Parm)
};

// Function EFGame.EFUISlotData.SetImageData
struct UEFUISlotData_SetImageData_Params
{
	int                                                SlotType;                                                  // 0x0000(0x0004)  (Parm)
	int                                                SlotIndex;                                                 // 0x0004(0x0004)  (Parm)
	struct FString                                     BindID;                                                    // 0x0008(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     IconPath;                                                  // 0x0018(0x0010)  (Parm, NeedCtorLink)
	int                                                IconIndex;                                                 // 0x0028(0x0004)  (Parm)
	int                                                TableID;                                                   // 0x002C(0x0004)  (OptionalParm, Parm)
};

// Function EFGame.EFPawn.StopAfterImageEffect
struct AEFPawn_StopAfterImageEffect_Params
{
	bool                                               bForceRemoveAllChildren;                                   // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFPawn.StartAfterImageEffect
struct AEFPawn_StartAfterImageEffect_Params
{
	struct FEFCharacterAfterImageEffectInfo            EffectParams;                                              // 0x0000(0x0030)  (Const, Parm, OutParm)
};

// Function EFGame.EFPawn.GetAnimTrailParticleSystem
struct AEFPawn_GetAnimTrailParticleSystem_Params
{
	class UAnimNotify_Trails*                          AnimNotifyData;                                            // 0x0000(0x0008)  (Const, Parm)
	class UParticleSystem*                             ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFPawn.ApplyFluidSurfaceContinuousForce
struct AEFPawn_ApplyFluidSurfaceContinuousForce_Params
{
	class AFluidSurfaceActor*                          Fluid;                                                     // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFPawn.ApplyFluidSurfaceImpact
struct AEFPawn_ApplyFluidSurfaceImpact_Params
{
	class AFluidSurfaceActor*                          Fluid;                                                     // 0x0000(0x0008)  (Parm)
	struct FVector                                     HitLocation;                                               // 0x0008(0x000C)  (Const, Parm, OutParm)
};

// Function EFGame.EFPawn.NotifyChangedBase
struct AEFPawn_NotifyChangedBase_Params
{
};

// Function EFGame.EFPawn.BaseChange
struct AEFPawn_BaseChange_Params
{
};

// Function EFGame.EFPawn.MAT_FinishAnimControl
struct AEFPawn_MAT_FinishAnimControl_Params
{
	class UInterpGroup*                                InInterpGroup;                                             // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFPawn.MAT_BeginAnimControl
struct AEFPawn_MAT_BeginAnimControl_Params
{
	class UInterpGroup*                                InInterpGroup;                                             // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFPawn.InterpolationFinished
struct AEFPawn_InterpolationFinished_Params
{
	class USeqAct_Interp*                              InterpAction;                                              // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFPawn.InterpolationStarted
struct AEFPawn_InterpolationStarted_Params
{
	class USeqAct_Interp*                              InterpAction;                                              // 0x0000(0x0008)  (Parm)
	class UInterpGroupInst*                            GroupInst;                                                 // 0x0008(0x0008)  (Parm)
};

// Function EFGame.EFPawn.RigidBodyCollision
struct AEFPawn_RigidBodyCollision_Params
{
	class UPrimitiveComponent*                         HitComponent;                                              // 0x0000(0x0008)  (Parm, EditInline)
	class UPrimitiveComponent*                         OtherComponent;                                            // 0x0008(0x0008)  (Parm, EditInline)
	struct FCollisionImpactData                        RigidCollisionData;                                        // 0x0010(0x0028)  (Const, Parm, OutParm, NeedCtorLink)
	int                                                ContactIndex;                                              // 0x0038(0x0004)  (Parm)
};

// Function EFGame.EFPawn.DoKismetAttachment
struct AEFPawn_DoKismetAttachment_Params
{
	class AActor*                                      Attachment;                                                // 0x0000(0x0008)  (Parm)
	class USeqAct_AttachToActor*                       Action;                                                    // 0x0008(0x0008)  (Parm)
};

// Function EFGame.EFPawn.AttachmentCameraActor
struct AEFPawn_AttachmentCameraActor_Params
{
	class AActor*                                      Attachment;                                                // 0x0000(0x0008)  (Parm)
	struct FVector                                     RelativeViewOffset;                                        // 0x0008(0x000C)  (Parm)
};

// Function EFGame.EFPawn.GetGravityZ
struct AEFPawn_GetGravityZ_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFPawn.OnForceFieldDestroy
struct AEFPawn_OnForceFieldDestroy_Params
{
	class UNxForceFieldComponent*                      FFC;                                                       // 0x0000(0x0008)  (Parm, EditInline)
};

// Function EFGame.EFPawn.CreateForceField
struct AEFPawn_CreateForceField_Params
{
	class UAnimNotify_ForceField*                      AnimNotifyData;                                            // 0x0000(0x0008)  (Const, Parm)
	bool                                               ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFPawn.ExplodeActor
struct AEFPawn_ExplodeActor_Params
{
	class AActor*                                      ExplodeActor;                                              // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFPawn.FinishDyingDelay
struct AEFPawn_FinishDyingDelay_Params
{
};

// Function EFGame.EFPawn.SetDefaultStateColor
struct AEFPawn_SetDefaultStateColor_Params
{
};

// Function EFGame.EFPawn.SetStateColor
struct AEFPawn_SetStateColor_Params
{
	struct FLinearColor                                StateColor;                                                // 0x0000(0x0010)  (Parm)
	float                                              fIntensity;                                                // 0x0010(0x0004)  (OptionalParm, Parm)
};

// Function EFGame.EFPawn.AttackFreezeAnim
struct AEFPawn_AttackFreezeAnim_Params
{
	float                                              PauseTime;                                                 // 0x0000(0x0004)  (OptionalParm, Parm)
};

// Function EFGame.EFPawn.AttackContinueAnim
struct AEFPawn_AttackContinueAnim_Params
{
};

// Function EFGame.EFPawn.SetPPOutlineWidth
struct AEFPawn_SetPPOutlineWidth_Params
{
	float                                              Width;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFPawn.SetPPOutlineColor
struct AEFPawn_SetPPOutlineColor_Params
{
	struct FVector                                     InColor;                                                   // 0x0000(0x000C)  (Parm)
};

// Function EFGame.EFPawn.SetPPOutline
struct AEFPawn_SetPPOutline_Params
{
	bool                                               bPPOutline;                                                // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFPawn.SetCloakMode
struct AEFPawn_SetCloakMode_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0004)  (Parm)
	float                                              CloakAlpha;                                                // 0x0004(0x0004)  (Parm)
	bool                                               bRimLight;                                                 // 0x0008(0x0004)  (Parm)
};

// Function EFGame.EFPawn.SetOccludedOutlineColor
struct AEFPawn_SetOccludedOutlineColor_Params
{
	struct FVector                                     InColor;                                                   // 0x0000(0x000C)  (Parm)
	float                                              InScale;                                                   // 0x000C(0x0004)  (Parm)
};

// Function EFGame.EFPawn.SetOccludedOutline
struct AEFPawn_SetOccludedOutline_Params
{
	bool                                               bOutline;                                                  // 0x0000(0x0004)  (Parm)
	float                                              Width;                                                     // 0x0004(0x0004)  (OptionalParm, Parm)
};

// Function EFGame.EFPawn.OutsideWorldBounds
struct AEFPawn_OutsideWorldBounds_Params
{
};

// Function EFGame.EFPawn.FellOutOfWorld
struct AEFPawn_FellOutOfWorld_Params
{
	class UClass*                                      dmgType;                                                   // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFPawn.Landed
struct AEFPawn_Landed_Params
{
	struct FVector                                     HitNormal;                                                 // 0x0000(0x000C)  (Parm)
	class AActor*                                      FloorActor;                                                // 0x000C(0x0008)  (Parm)
};

// Function EFGame.EFPawn.Falling
struct AEFPawn_Falling_Params
{
};

// Function EFGame.EFPawn.SetDesiredRotation
struct AEFPawn_SetDesiredRotation_Params
{
	struct FRotator                                    TargetDesiredRotation;                                     // 0x0000(0x000C)  (Parm)
	bool                                               InLockDesiredRotation;                                     // 0x000C(0x0004)  (OptionalParm, Parm)
	bool                                               InUnlockWhenReached;                                       // 0x0010(0x0004)  (OptionalParm, Parm)
	float                                              InterpolationTime;                                         // 0x0014(0x0004)  (OptionalParm, Parm)
	bool                                               bResetRotationRate;                                        // 0x0018(0x0004)  (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // 0x001C(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFPawn.OnParticleSystemFinished
struct AEFPawn_OnParticleSystemFinished_Params
{
	class UParticleSystemComponent*                    PSC;                                                       // 0x0000(0x0008)  (Parm, EditInline)
};

// Function EFGame.EFPawn.PostInitAll
struct AEFPawn_PostInitAll_Params
{
};

// Function EFGame.EFPawn.ClearAttachedPSIIndex
struct AEFPawn_ClearAttachedPSIIndex_Params
{
};

// Function EFGame.EFPawn.Destroyed
struct AEFPawn_Destroyed_Params
{
};

// Function EFGame.EFPawn.GetDefaultCameraMode
struct AEFPawn_GetDefaultCameraMode_Params
{
	class APlayerController*                           RequestedBy;                                               // 0x0000(0x0008)  (Parm)
	struct FName                                       ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFPawn.GetObjectCameraStyle
struct AEFPawn_GetObjectCameraStyle_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFPawn.EncroachingOn
struct AEFPawn_EncroachingOn_Params
{
	class AActor*                                      Other;                                                     // 0x0000(0x0008)  (Parm)
	bool                                               ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFPawn.EncroachedBy
struct AEFPawn_EncroachedBy_Params
{
	class AActor*                                      Other;                                                     // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFPlayer.OnUpdatePropertyDrawScale
struct AEFPlayer_OnUpdatePropertyDrawScale_Params
{
};

// Function EFGame.EFPlayer.OnUpdatePropertyDrawScale3D
struct AEFPlayer_OnUpdatePropertyDrawScale3D_Params
{
};

// Function EFGame.EFTransit.EncroachingOn
struct AEFTransit_EncroachingOn_Params
{
	class AActor*                                      Other;                                                     // 0x0000(0x0008)  (Parm)
	bool                                               ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFPlayerController.ModifyOnSetCameraTargetBlendTime
struct AEFPlayerController_ModifyOnSetCameraTargetBlendTime_Params
{
	class AActor*                                      inEventOriginator;                                         // 0x0000(0x0008)  (Parm)
	class AActor*                                      inRealCameraTarget;                                        // 0x0008(0x0008)  (Parm)
	float                                              outBlendTime;                                              // 0x0010(0x0004)  (Parm, OutParm)
};

// Function EFGame.EFPlayerController.ConsoleCommand
struct AEFPlayerController_ConsoleCommand_Params
{
	struct FString                                     Command;                                                   // 0x0000(0x0010)  (Parm, NeedCtorLink)
	bool                                               bWriteToLog;                                               // 0x0010(0x0004)  (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                               // 0x0014(0x0010)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function EFGame.EFPlayerController.ProcessCinematic
struct AEFPlayerController_ProcessCinematic_Params
{
	bool                                               bInCinematicMode;                                          // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFPlayerController.GetPlayerInitPosition
struct AEFPlayerController_GetPlayerInitPosition_Params
{
	struct FVector                                     out_Location;                                              // 0x0000(0x000C)  (Parm, OutParm)
	struct FRotator                                    out_Rotation;                                              // 0x000C(0x000C)  (Parm, OutParm)
};

// Function EFGame.EFPlayerController.GetPlayerViewPointQuat
struct AEFPlayerController_GetPlayerViewPointQuat_Params
{
	struct FVector                                     out_Location;                                              // 0x0000(0x000C)  (Parm, OutParm)
	struct FQuat                                       out_Quaternion;                                            // 0x0010(0x0010)  (Parm, OutParm)
};

// Function EFGame.EFPlayerController.GetPlayerViewPoint
struct AEFPlayerController_GetPlayerViewPoint_Params
{
	struct FVector                                     out_Location;                                              // 0x0000(0x000C)  (Parm, OutParm)
	struct FRotator                                    out_Rotation;                                              // 0x000C(0x000C)  (Parm, OutParm)
};

// Function EFGame.EFPlayerController.DisplayDebug
struct AEFPlayerController_DisplayDebug_Params
{
	class AHUD*                                        HUD;                                                       // 0x0000(0x0008)  (Parm)
	float                                              out_YL;                                                    // 0x0008(0x0004)  (Parm, OutParm)
	float                                              out_YPos;                                                  // 0x000C(0x0004)  (Parm, OutParm)
};

// Function EFGame.EFPlayerController.DrawHUD
struct AEFPlayerController_DrawHUD_Params
{
	class AHUD*                                        H;                                                         // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFPlayerController.SpawnDefaultHUD
struct AEFPlayerController_SpawnDefaultHUD_Params
{
};

// Function EFGame.EFPlayerController.IsStopMovieLoading
struct AEFPlayerController_IsStopMovieLoading_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFPlayerController.PlayerTick
struct AEFPlayerController_PlayerTick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFPlayerController.UpdateRotation
struct AEFPlayerController_UpdateRotation_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFPlayerController.StopMovieLoading
struct AEFPlayerController_StopMovieLoading_Params
{
};

// Function EFGame.EFPlayerController.Destroyed
struct AEFPlayerController_Destroyed_Params
{
};

// Function EFGame.EFPlayerController.PostBeginPlay
struct AEFPlayerController_PostBeginPlay_Params
{
};

// Function EFGame.EFPlayerController.InitInputSystem
struct AEFPlayerController_InitInputSystem_Params
{
};

// Function EFGame.EFPlayerInput.DefaultPositionControlPanel
struct UEFPlayerInput_DefaultPositionControlPanel_Params
{
};

// Function EFGame.EFPlayerInput.FocusControlPanel
struct UEFPlayerInput_FocusControlPanel_Params
{
};

// Function EFGame.EFPlayerInput.ToggleControlPanel
struct UEFPlayerInput_ToggleControlPanel_Params
{
};

// Function EFGame.EFPlayerInput.OnMouseScrollDown
struct UEFPlayerInput_OnMouseScrollDown_Params
{
};

// Function EFGame.EFPlayerInput.OnMouseScrollUp
struct UEFPlayerInput_OnMouseScrollUp_Params
{
};

// Function EFGame.EFPlayerInput.PlayerInput
struct UEFPlayerInput_PlayerInput_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFPlayerInput.InputAxis
struct UEFPlayerInput_InputAxis_Params
{
	int                                                ControllerId;                                              // 0x0000(0x0004)  (Parm)
	struct FName                                       Key;                                                       // 0x0004(0x0008)  (Parm)
	float                                              Delta;                                                     // 0x000C(0x0004)  (Parm)
	float                                              DeltaTime;                                                 // 0x0010(0x0004)  (Parm)
	bool                                               bGamepad;                                                  // 0x0014(0x0004)  (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // 0x0018(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFProjectile.ClearAttachedPSIIndex
struct AEFProjectile_ClearAttachedPSIIndex_Params
{
};

// Function EFGame.EFProjectile.Destroyed
struct AEFProjectile_Destroyed_Params
{
};

// Function EFGame.EFProjectile.BaseChange
struct AEFProjectile_BaseChange_Params
{
};

// Function EFGame.EFProjectile.NotifyBaseChange
struct AEFProjectile_NotifyBaseChange_Params
{
};

// Function EFGame.EFProjectile.ProcessTouch
struct AEFProjectile_ProcessTouch_Params
{
	class AActor*                                      Other;                                                     // 0x0000(0x0008)  (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0008(0x0008)  (Parm, EditInline)
	struct FVector                                     HitLocation;                                               // 0x0010(0x000C)  (Parm)
	struct FVector                                     HitNormal;                                                 // 0x001C(0x000C)  (Parm)
};

// Function EFGame.EFSkeletalMeshActor.ClearAttachedPSIIndex
struct AEFSkeletalMeshActor_ClearAttachedPSIIndex_Params
{
};

// Function EFGame.EFSkeletalMeshActor.NotifyChangedBase
struct AEFSkeletalMeshActor_NotifyChangedBase_Params
{
};

// Function EFGame.EFSkeletalMeshActor.BaseChange
struct AEFSkeletalMeshActor_BaseChange_Params
{
};

// Function EFGame.EFSkeletalMeshActor.Destroyed
struct AEFSkeletalMeshActor_Destroyed_Params
{
};

// Function EFGame.EFStaticMeshActor.ClearAttachedPSIIndex
struct AEFStaticMeshActor_ClearAttachedPSIIndex_Params
{
};

// Function EFGame.EFStaticMeshActor.NotifyChangedBase
struct AEFStaticMeshActor_NotifyChangedBase_Params
{
};

// Function EFGame.EFStaticMeshActor.BaseChange
struct AEFStaticMeshActor_BaseChange_Params
{
};

// Function EFGame.EFStaticMeshActor.Destroyed
struct AEFStaticMeshActor_Destroyed_Params
{
};

// Function EFGame.EFGameEngine.ShowLineChecks
struct UEFGameEngine_ShowLineChecks_Params
{
	bool                                               bLineCheck;                                                // 0x0000(0x0004)  (Parm)
	bool                                               bExtentLineCheck;                                          // 0x0004(0x0004)  (Parm)
};

// Function EFGame.EFMapInfo.SaveCameraValue
struct UEFMapInfo_SaveCameraValue_Params
{
	class UEFCameraBase*                               Camera;                                                    // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFMapInfo.LoadCameraValue
struct UEFMapInfo_LoadCameraValue_Params
{
	class UEFCameraBase*                               Camera;                                                    // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFCameraBase.GetCurrentFOV
struct UEFCameraBase_GetCurrentFOV_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFCameraBase.GetDefaultFOV
struct UEFCameraBase_GetDefaultFOV_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFCameraBase.SetDefaultFOV
struct UEFCameraBase_SetDefaultFOV_Params
{
	float                                              FOV;                                                       // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFCameraBase.DisplayDebug
struct UEFCameraBase_DisplayDebug_Params
{
	class AHUD*                                        HUD;                                                       // 0x0000(0x0008)  (Parm)
	float                                              out_YL;                                                    // 0x0008(0x0004)  (Parm, OutParm)
	float                                              out_YPos;                                                  // 0x000C(0x0004)  (Parm, OutParm)
};

// Function EFGame.EFCameraBase.UpdateRotation
struct UEFCameraBase_UpdateRotation_Params
{
};

// Function EFGame.EFCameraBase.ProcessBlendingStyle
struct UEFCameraBase_ProcessBlendingStyle_Params
{
	struct FTPOV                                       OutPOV;                                                    // 0x0000(0x001C)  (Parm, OutParm)
	float                                              InDeltaSeconds;                                            // 0x001C(0x0004)  (Parm)
};

// Function EFGame.EFCameraBase.ActivateBlendingStyle
struct UEFCameraBase_ActivateBlendingStyle_Params
{
	class UEFCameraBase*                               InOldCamera;                                               // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFCameraBase.SetCurrentCameraCut
struct UEFCameraBase_SetCurrentCameraCut_Params
{
	struct FVector                                     InPos;                                                     // 0x0000(0x000C)  (Parm)
	float                                              InLimitDistSeq;                                            // 0x000C(0x0004)  (Parm)
};

// Function EFGame.EFCameraBase.SetContentsSettingTable
struct UEFCameraBase_SetContentsSettingTable_Params
{
	int                                                InTableId;                                                 // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFCameraBase.SetSettingTable
struct UEFCameraBase_SetSettingTable_Params
{
	int                                                InTableId;                                                 // 0x0000(0x0004)  (Parm)
	bool                                               InImmediateFlag;                                           // 0x0004(0x0004)  (OptionalParm, Parm)
};

// Function EFGame.EFCameraBase.InActivateSkeletalMeshForceLOD
struct UEFCameraBase_InActivateSkeletalMeshForceLOD_Params
{
	class UEFCameraBase*                               InNextCamera;                                              // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFCameraBase.ActivateSkeletalMeshForceLOD
struct UEFCameraBase_ActivateSkeletalMeshForceLOD_Params
{
};

// Function EFGame.EFCameraBase.ChangeZoomStep
struct UEFCameraBase_ChangeZoomStep_Params
{
	int                                                iStep;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFCameraBase.CheckZoom
struct UEFCameraBase_CheckZoom_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFCameraBase.ZoomOut
struct UEFCameraBase_ZoomOut_Params
{
};

// Function EFGame.EFCameraBase.ZoomIn
struct UEFCameraBase_ZoomIn_Params
{
};

// Function EFGame.EFCameraBase.BecomeViewTarget
struct UEFCameraBase_BecomeViewTarget_Params
{
	class AEFPlayerController*                         PC;                                                        // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFCameraBase.UpdateCamera
struct UEFCameraBase_UpdateCamera_Params
{
	class APawn*                                       P;                                                         // 0x0000(0x0008)  (Parm)
	class AEFPlayerCamera*                             CameraActor;                                               // 0x0008(0x0008)  (Parm)
	float                                              DeltaTime;                                                 // 0x0010(0x0004)  (Parm)
	struct FTViewTarget                                OutVT;                                                     // 0x0014(0x0038)  (Parm, OutParm)
};

// Function EFGame.EFCameraBase.ResetInterpolation
struct UEFCameraBase_ResetInterpolation_Params
{
};

// Function EFGame.EFCameraBase.OnBecomeInActive
struct UEFCameraBase_OnBecomeInActive_Params
{
	class UEFCameraBase*                               NewCamera;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFCameraBase.OnBecomeActive
struct UEFCameraBase_OnBecomeActive_Params
{
	class UEFCameraBase*                               OldCamera;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFCameraBase.Init
struct UEFCameraBase_Init_Params
{
};

// Function EFGame.EFBackViewCamera.UpdateCamera
struct UEFBackViewCamera_UpdateCamera_Params
{
	class APawn*                                       P;                                                         // 0x0000(0x0008)  (Parm)
	class AEFPlayerCamera*                             CameraActor;                                               // 0x0008(0x0008)  (Parm)
	float                                              DeltaTime;                                                 // 0x0010(0x0004)  (Parm)
	struct FTViewTarget                                OutVT;                                                     // 0x0014(0x0038)  (Parm, OutParm)
};

// Function EFGame.EFSeqAct_NPCController.Update
struct UEFSeqAct_NPCController_Update_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm)
	bool                                               ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFSeqAct_NPCController.Activated
struct UEFSeqAct_NPCController_Activated_Params
{
};

// Function EFGame.EFSeqAct_NPCController.BackupMainMovingState
struct UEFSeqAct_NPCController_BackupMainMovingState_Params
{
};

// Function EFGame.EFSeqAct_NPCController.SetEventMoveCompleteProcess
struct UEFSeqAct_NPCController_SetEventMoveCompleteProcess_Params
{
	TEnumAsByte<EFGame_EUNM_SNPC_workCompletedState>   swState;                                                   // 0x0000(0x0001)  (Parm)
};

// Function EFGame.EFSeqAct_NPCController.SetMoving
struct UEFSeqAct_NPCController_SetMoving_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFSeqAct_NPCController.SettingReady
struct UEFSeqAct_NPCController_SettingReady_Params
{
	struct FSNPC_MovingState                           CData;                                                     // 0x0000(0x0034)  (Parm, NeedCtorLink)
};

// Function EFGame.EFSeqAct_NPCController.setPlayWaitAnimation
struct UEFSeqAct_NPCController_setPlayWaitAnimation_Params
{
	struct FString                                     aniName;                                                   // 0x0000(0x0010)  (Parm, NeedCtorLink)
	bool                                               isLoop;                                                    // 0x0010(0x0004)  (Parm)
	float                                              BlendTime;                                                 // 0x0014(0x0004)  (Parm)
	bool                                               isRandomStart;                                             // 0x0018(0x0004)  (Parm)
};

// Function EFGame.EFSeqAct_NPCController.setPlayAnimation
struct UEFSeqAct_NPCController_setPlayAnimation_Params
{
	TEnumAsByte<EFGame_ENUM_SNPC_PlayAnimationName>    aniEnumName;                                               // 0x0000(0x0001)  (Parm)
	bool                                               isLoop;                                                    // 0x0004(0x0004)  (Parm)
	float                                              BlendTime;                                                 // 0x0008(0x0004)  (Parm)
	bool                                               isRandomStart;                                             // 0x000C(0x0004)  (Parm)
};

// Function EFGame.EFSeqAct_NPCController.GetAnimationName
struct UEFSeqAct_NPCController_GetAnimationName_Params
{
	TEnumAsByte<EFGame_ENUM_SNPC_PlayAnimationName>    typAnim;                                                   // 0x0000(0x0001)  (Parm)
	bool                                               isSet;                                                     // 0x0004(0x0004)  (Parm)
	struct FName                                       ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFSeqAct_NPCController.initial
struct UEFSeqAct_NPCController_initial_Params
{
};

// Function EFGame.EFChangePlayerCameraVolume.UnTouch
struct AEFChangePlayerCameraVolume_UnTouch_Params
{
	class AActor*                                      Other;                                                     // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFChangePlayerCameraVolume.Touch
struct AEFChangePlayerCameraVolume_Touch_Params
{
	class AActor*                                      Other;                                                     // 0x0000(0x0008)  (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0008(0x0008)  (Parm, EditInline)
	struct FVector                                     HitLocation;                                               // 0x0010(0x000C)  (Parm)
	struct FVector                                     HitNormal;                                                 // 0x001C(0x000C)  (Parm)
};

// Function EFGame.EFCustomizingCamera.UpdateCamera
struct UEFCustomizingCamera_UpdateCamera_Params
{
	class APawn*                                       P;                                                         // 0x0000(0x0008)  (Parm)
	class AEFPlayerCamera*                             CameraActor;                                               // 0x0008(0x0008)  (Parm)
	float                                              DeltaTime;                                                 // 0x0010(0x0004)  (Parm)
	struct FTViewTarget                                OutVT;                                                     // 0x0014(0x0038)  (Parm, OutParm)
};

// Function EFGame.EFCustomizingCamera.ZoomOut
struct UEFCustomizingCamera_ZoomOut_Params
{
};

// Function EFGame.EFCustomizingCamera.ZoomIn
struct UEFCustomizingCamera_ZoomIn_Params
{
};

// Function EFGame.EFCustomizingCamera.Init
struct UEFCustomizingCamera_Init_Params
{
};

// Function EFGame.EFEditorViewCamera.OnBecomeInActive
struct UEFEditorViewCamera_OnBecomeInActive_Params
{
	class UEFCameraBase*                               NewCamera;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFEditorViewCamera.OnBecomeActive
struct UEFEditorViewCamera_OnBecomeActive_Params
{
	class UEFCameraBase*                               OldCamera;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFEditorViewCamera.ZoomOut
struct UEFEditorViewCamera_ZoomOut_Params
{
};

// Function EFGame.EFEditorViewCamera.ZoomIn
struct UEFEditorViewCamera_ZoomIn_Params
{
};

// Function EFGame.EFEditorViewCamera.UpdateCamera
struct UEFEditorViewCamera_UpdateCamera_Params
{
	class APawn*                                       P;                                                         // 0x0000(0x0008)  (Parm)
	class AEFPlayerCamera*                             CameraActor;                                               // 0x0008(0x0008)  (Parm)
	float                                              DeltaTime;                                                 // 0x0010(0x0004)  (Parm)
	struct FTViewTarget                                OutVT;                                                     // 0x0014(0x0038)  (Parm, OutParm)
};

// Function EFGame.EFFreeCamera.OnBecomeInActive
struct UEFFreeCamera_OnBecomeInActive_Params
{
	class UEFCameraBase*                               NewCamera;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFFreeCamera.OnBecomeActive
struct UEFFreeCamera_OnBecomeActive_Params
{
	class UEFCameraBase*                               OldCamera;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFFreeCamera.HideOwnerPlayer
struct UEFFreeCamera_HideOwnerPlayer_Params
{
};

// Function EFGame.EFFreeCamera.ShowOwnerPlayer
struct UEFFreeCamera_ShowOwnerPlayer_Params
{
};

// Function EFGame.EFFreeCamera.ZoomOut
struct UEFFreeCamera_ZoomOut_Params
{
};

// Function EFGame.EFFreeCamera.ZoomIn
struct UEFFreeCamera_ZoomIn_Params
{
};

// Function EFGame.EFFreeCamera.UpdateCamera
struct UEFFreeCamera_UpdateCamera_Params
{
	class APawn*                                       P;                                                         // 0x0000(0x0008)  (Parm)
	class AEFPlayerCamera*                             CameraActor;                                               // 0x0008(0x0008)  (Parm)
	float                                              DeltaTime;                                                 // 0x0010(0x0004)  (Parm)
	struct FTViewTarget                                OutVT;                                                     // 0x0014(0x0038)  (Parm, OutParm)
};

// Function EFGame.EFInteractionCamera.UpdateCamera
struct UEFInteractionCamera_UpdateCamera_Params
{
	class APawn*                                       P;                                                         // 0x0000(0x0008)  (Parm)
	class AEFPlayerCamera*                             CameraActor;                                               // 0x0008(0x0008)  (Parm)
	float                                              DeltaTime;                                                 // 0x0010(0x0004)  (Parm)
	struct FTViewTarget                                OutVT;                                                     // 0x0014(0x0038)  (Parm, OutParm)
};

// Function EFGame.EFInteractionCamera.GetCurrentFOV
struct UEFInteractionCamera_GetCurrentFOV_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFIsometricCamera.SetFixedCameraInterpSpeed
struct UEFIsometricCamera_SetFixedCameraInterpSpeed_Params
{
	float                                              speedXY;                                                   // 0x0000(0x0004)  (Parm)
	float                                              speedZ;                                                    // 0x0004(0x0004)  (Parm)
};

// Function EFGame.EFIsometricCamera.IsFixedCameraMode
struct UEFIsometricCamera_IsFixedCameraMode_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFIsometricCamera.ResetFixedCamera
struct UEFIsometricCamera_ResetFixedCamera_Params
{
};

// Function EFGame.EFIsometricCamera.SetFixedLookAtPos
struct UEFIsometricCamera_SetFixedLookAtPos_Params
{
	struct FVector                                     InPos;                                                     // 0x0000(0x000C)  (Parm)
};

// Function EFGame.EFIsometricCamera.UpdateCamera
struct UEFIsometricCamera_UpdateCamera_Params
{
	class APawn*                                       P;                                                         // 0x0000(0x0008)  (Parm)
	class AEFPlayerCamera*                             CameraActor;                                               // 0x0008(0x0008)  (Parm)
	float                                              DeltaTime;                                                 // 0x0010(0x0004)  (Parm)
	struct FTViewTarget                                OutVT;                                                     // 0x0014(0x0038)  (Parm, OutParm)
};

// Function EFGame.EFIsometricCamera.OnBecomeActive
struct UEFIsometricCamera_OnBecomeActive_Params
{
	class UEFCameraBase*                               OldCamera;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFIsometricCamera.ActivateBlendingStyle
struct UEFIsometricCamera_ActivateBlendingStyle_Params
{
	class UEFCameraBase*                               InOldCamera;                                               // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFIsometricCamera.SetContentsSettingTable
struct UEFIsometricCamera_SetContentsSettingTable_Params
{
	int                                                InTableId;                                                 // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFIsometricCamera.SetSettingTable
struct UEFIsometricCamera_SetSettingTable_Params
{
	int                                                InTableId;                                                 // 0x0000(0x0004)  (Parm)
	bool                                               InImmediateFlag;                                           // 0x0004(0x0004)  (OptionalParm, Parm)
};

// Function EFGame.EFIsometricCamera.RefineFOV
struct UEFIsometricCamera_RefineFOV_Params
{
	float                                              FOV;                                                       // 0x0000(0x0004)  (Parm)
	float                                              ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFIsometricCamera.InActivateSkeletalMeshForceLOD
struct UEFIsometricCamera_InActivateSkeletalMeshForceLOD_Params
{
	class UEFCameraBase*                               InNextCamera;                                              // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFIsometricCamera.ActivateSkeletalMeshForceLOD
struct UEFIsometricCamera_ActivateSkeletalMeshForceLOD_Params
{
};

// Function EFGame.EFIsometricCamera.ChangeZoomStep
struct UEFIsometricCamera_ChangeZoomStep_Params
{
	int                                                iStep;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFIsometricCamera.CheckZoom
struct UEFIsometricCamera_CheckZoom_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFIsometricCamera.ZoomOut
struct UEFIsometricCamera_ZoomOut_Params
{
};

// Function EFGame.EFIsometricCamera.ZoomIn
struct UEFIsometricCamera_ZoomIn_Params
{
};

// Function EFGame.EFIsometricCamera.ResetInterpolation
struct UEFIsometricCamera_ResetInterpolation_Params
{
};

// Function EFGame.EFMacroCamera.UpdateRotation
struct UEFMacroCamera_UpdateRotation_Params
{
};

// Function EFGame.EFMacroCamera.ZoomOut
struct UEFMacroCamera_ZoomOut_Params
{
};

// Function EFGame.EFMacroCamera.ZoomIn
struct UEFMacroCamera_ZoomIn_Params
{
};

// Function EFGame.EFMacroCamera.UpdateCamera
struct UEFMacroCamera_UpdateCamera_Params
{
	class APawn*                                       P;                                                         // 0x0000(0x0008)  (Parm)
	class AEFPlayerCamera*                             CameraActor;                                               // 0x0008(0x0008)  (Parm)
	float                                              DeltaTime;                                                 // 0x0010(0x0004)  (Parm)
	struct FTViewTarget                                OutVT;                                                     // 0x0014(0x0038)  (Parm, OutParm)
};

// Function EFGame.EFPanningCamera.OnBecomeInActive
struct UEFPanningCamera_OnBecomeInActive_Params
{
	class UEFCameraBase*                               NewCamera;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFPanningCamera.OnBecomeActive
struct UEFPanningCamera_OnBecomeActive_Params
{
	class UEFCameraBase*                               OldCamera;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFPanningCamera.EndPanningCamera
struct UEFPanningCamera_EndPanningCamera_Params
{
};

// Function EFGame.EFPanningCamera.StartPanningCamera
struct UEFPanningCamera_StartPanningCamera_Params
{
};

// Function EFGame.EFPanningCamera.ZoomOut
struct UEFPanningCamera_ZoomOut_Params
{
};

// Function EFGame.EFPanningCamera.ZoomIn
struct UEFPanningCamera_ZoomIn_Params
{
};

// Function EFGame.EFPanningCamera.UpdateCamera
struct UEFPanningCamera_UpdateCamera_Params
{
	class APawn*                                       P;                                                         // 0x0000(0x0008)  (Parm)
	class AEFPlayerCamera*                             CameraActor;                                               // 0x0008(0x0008)  (Parm)
	float                                              DeltaTime;                                                 // 0x0010(0x0004)  (Parm)
	struct FTViewTarget                                OutVT;                                                     // 0x0014(0x0038)  (Parm, OutParm)
};

// Function EFGame.EFSelfCamera.SetContentsSettingTable
struct UEFSelfCamera_SetContentsSettingTable_Params
{
	int                                                InTableId;                                                 // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFSelfCamera.SetSettingTable
struct UEFSelfCamera_SetSettingTable_Params
{
	int                                                InTableId;                                                 // 0x0000(0x0004)  (Parm)
	bool                                               InImmediateFlag;                                           // 0x0004(0x0004)  (OptionalParm, Parm)
};

// Function EFGame.EFSelfCamera.ChangeZoomStep
struct UEFSelfCamera_ChangeZoomStep_Params
{
	int                                                iStep;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFSelfCamera.CheckZoom
struct UEFSelfCamera_CheckZoom_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFSelfCamera.ZoomOut
struct UEFSelfCamera_ZoomOut_Params
{
};

// Function EFGame.EFSelfCamera.ZoomIn
struct UEFSelfCamera_ZoomIn_Params
{
};

// Function EFGame.EFSelfCamera.UpdateCamera
struct UEFSelfCamera_UpdateCamera_Params
{
	class APawn*                                       P;                                                         // 0x0000(0x0008)  (Parm)
	class AEFPlayerCamera*                             CameraActor;                                               // 0x0008(0x0008)  (Parm)
	float                                              DeltaTime;                                                 // 0x0010(0x0004)  (Parm)
	struct FTViewTarget                                OutVT;                                                     // 0x0014(0x0038)  (Parm, OutParm)
};

// Function EFGame.EFSelfCamera.ResetInterpolation
struct UEFSelfCamera_ResetInterpolation_Params
{
};

// Function EFGame.EFSelfCamera.OnBecomeInActive
struct UEFSelfCamera_OnBecomeInActive_Params
{
	class UEFCameraBase*                               NewCamera;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFSelfCamera.OnBecomeActive
struct UEFSelfCamera_OnBecomeActive_Params
{
	class UEFCameraBase*                               OldCamera;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFSelfCamera.InActivateOperationMode
struct UEFSelfCamera_InActivateOperationMode_Params
{
	class UEFCameraBase*                               OldCamera;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFSelfCamera.ActivateOperationMode
struct UEFSelfCamera_ActivateOperationMode_Params
{
	class UEFCameraBase*                               OldCamera;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFSideViewCamera.OnBecomeInActive
struct UEFSideViewCamera_OnBecomeInActive_Params
{
	class UEFCameraBase*                               NewCamera;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFSideViewCamera.OnBecomeActive
struct UEFSideViewCamera_OnBecomeActive_Params
{
	class UEFCameraBase*                               OldCamera;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFSideViewCamera.InitCameraSetting
struct UEFSideViewCamera_InitCameraSetting_Params
{
};

// Function EFGame.EFSideViewCamera.ChangeZoomStep
struct UEFSideViewCamera_ChangeZoomStep_Params
{
	int                                                iStep;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFSideViewCamera.CheckZoom
struct UEFSideViewCamera_CheckZoom_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFSideViewCamera.ZoomOut
struct UEFSideViewCamera_ZoomOut_Params
{
};

// Function EFGame.EFSideViewCamera.ZoomIn
struct UEFSideViewCamera_ZoomIn_Params
{
};

// Function EFGame.EFSideViewCamera.UpdateCamera
struct UEFSideViewCamera_UpdateCamera_Params
{
	class APawn*                                       P;                                                         // 0x0000(0x0008)  (Parm)
	class AEFPlayerCamera*                             CameraActor;                                               // 0x0008(0x0008)  (Parm)
	float                                              DeltaTime;                                                 // 0x0010(0x0004)  (Parm)
	struct FTViewTarget                                OutVT;                                                     // 0x0014(0x0038)  (Parm, OutParm)
};

// Function EFGame.EFSideViewCamera.ResetInterpolation
struct UEFSideViewCamera_ResetInterpolation_Params
{
};

// Function EFGame.EFThirdPersonCamera.UpdateRotation
struct UEFThirdPersonCamera_UpdateRotation_Params
{
};

// Function EFGame.EFThirdPersonCamera.ZoomOut
struct UEFThirdPersonCamera_ZoomOut_Params
{
};

// Function EFGame.EFThirdPersonCamera.ZoomIn
struct UEFThirdPersonCamera_ZoomIn_Params
{
};

// Function EFGame.EFThirdPersonCamera.UpdateCamera
struct UEFThirdPersonCamera_UpdateCamera_Params
{
	class APawn*                                       P;                                                         // 0x0000(0x0008)  (Parm)
	class AEFPlayerCamera*                             CameraActor;                                               // 0x0008(0x0008)  (Parm)
	float                                              DeltaTime;                                                 // 0x0010(0x0004)  (Parm)
	struct FTViewTarget                                OutVT;                                                     // 0x0014(0x0038)  (Parm, OutParm)
};

// Function EFGame.EFThirdPersonCamera.GetCurrentFOV
struct UEFThirdPersonCamera_GetCurrentFOV_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFTopViewCamera.UpdateCamera
struct UEFTopViewCamera_UpdateCamera_Params
{
	class APawn*                                       P;                                                         // 0x0000(0x0008)  (Parm)
	class AEFPlayerCamera*                             CameraActor;                                               // 0x0008(0x0008)  (Parm)
	float                                              DeltaTime;                                                 // 0x0010(0x0004)  (Parm)
	struct FTViewTarget                                OutVT;                                                     // 0x0014(0x0038)  (Parm, OutParm)
};

// Function EFGame.EFTopViewCamera.OnBecomeInActive
struct UEFTopViewCamera_OnBecomeInActive_Params
{
	class UEFCameraBase*                               NewCamera;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFTopViewCamera.OnBecomeActive
struct UEFTopViewCamera_OnBecomeActive_Params
{
	class UEFCameraBase*                               OldCamera;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFTopViewCamera.ProcessInActivateCameraType
struct UEFTopViewCamera_ProcessInActivateCameraType_Params
{
	class UEFCameraBase*                               OldCamera;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFTopViewCamera.ProcessActivateCameraType
struct UEFTopViewCamera_ProcessActivateCameraType_Params
{
	class UEFCameraBase*                               OldCamera;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFTopViewCamera.SetContentsSettingTable
struct UEFTopViewCamera_SetContentsSettingTable_Params
{
	int                                                InTableId;                                                 // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFTopViewCamera.SetSettingTable
struct UEFTopViewCamera_SetSettingTable_Params
{
	int                                                InTableId;                                                 // 0x0000(0x0004)  (Parm)
	bool                                               InImmediateFlag;                                           // 0x0004(0x0004)  (OptionalParm, Parm)
};

// Function EFGame.EFTopViewCamera.InActivateSkeletalMeshForceLOD
struct UEFTopViewCamera_InActivateSkeletalMeshForceLOD_Params
{
	class UEFCameraBase*                               InNextCamera;                                              // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFTopViewCamera.ActivateSkeletalMeshForceLOD
struct UEFTopViewCamera_ActivateSkeletalMeshForceLOD_Params
{
};

// Function EFGame.EFTopViewCamera.ChangeZoomStep
struct UEFTopViewCamera_ChangeZoomStep_Params
{
	int                                                iStep;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFTopViewCamera.CheckZoom
struct UEFTopViewCamera_CheckZoom_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFTopViewCamera.ZoomOut
struct UEFTopViewCamera_ZoomOut_Params
{
};

// Function EFGame.EFTopViewCamera.ZoomIn
struct UEFTopViewCamera_ZoomIn_Params
{
};

// Function EFGame.EFTopViewCamera.ResetInterpolation
struct UEFTopViewCamera_ResetInterpolation_Params
{
};

// Function EFGame.EFTownCamera.OnBecomeInActive
struct UEFTownCamera_OnBecomeInActive_Params
{
	class UEFCameraBase*                               NewCamera;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFTownCamera.OnBecomeActive
struct UEFTownCamera_OnBecomeActive_Params
{
	class UEFCameraBase*                               OldCamera;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFTownCamera.ChangeTownCameraType
struct UEFTownCamera_ChangeTownCameraType_Params
{
	TEnumAsByte<EFGame_ETownCameraMode>                InType;                                                    // 0x0000(0x0001)  (Parm)
	bool                                               InForce;                                                   // 0x0004(0x0004)  (OptionalParm, Parm)
};

// Function EFGame.EFTownCamera.InActivateTownCamera
struct UEFTownCamera_InActivateTownCamera_Params
{
	class UEFCameraBase*                               InNewCamera;                                               // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFTownCamera.ActivateTownCamera
struct UEFTownCamera_ActivateTownCamera_Params
{
	class UEFCameraBase*                               InOldCamrea;                                               // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFTownCamera.InActivateSkeletalMeshForceLOD
struct UEFTownCamera_InActivateSkeletalMeshForceLOD_Params
{
	class UEFCameraBase*                               InNextCamera;                                              // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFTownCamera.ActivateSkeletalMeshForceLOD
struct UEFTownCamera_ActivateSkeletalMeshForceLOD_Params
{
};

// Function EFGame.EFTownCamera.ChangeZoomStep
struct UEFTownCamera_ChangeZoomStep_Params
{
	int                                                iStep;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFTownCamera.CheckZoom
struct UEFTownCamera_CheckZoom_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFTownCamera.ZoomOut
struct UEFTownCamera_ZoomOut_Params
{
};

// Function EFGame.EFTownCamera.ZoomIn
struct UEFTownCamera_ZoomIn_Params
{
};

// Function EFGame.EFTownCamera.UpdateCamera
struct UEFTownCamera_UpdateCamera_Params
{
	class APawn*                                       P;                                                         // 0x0000(0x0008)  (Parm)
	class AEFPlayerCamera*                             CameraActor;                                               // 0x0008(0x0008)  (Parm)
	float                                              DeltaTime;                                                 // 0x0010(0x0004)  (Parm)
	struct FTViewTarget                                OutVT;                                                     // 0x0014(0x0038)  (Parm, OutParm)
};

// Function EFGame.EFTownCamera.ResetInterpolation
struct UEFTownCamera_ResetInterpolation_Params
{
};

// Function EFGame.EFTPSCamera.SetFixedCameraInterpSpeed
struct UEFTPSCamera_SetFixedCameraInterpSpeed_Params
{
	float                                              speedXY;                                                   // 0x0000(0x0004)  (Parm)
	float                                              speedZ;                                                    // 0x0004(0x0004)  (Parm)
};

// Function EFGame.EFTPSCamera.IsFixedCameraMode
struct UEFTPSCamera_IsFixedCameraMode_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFTPSCamera.ResetFixedCamera
struct UEFTPSCamera_ResetFixedCamera_Params
{
};

// Function EFGame.EFTPSCamera.SetFixedLookAtPos
struct UEFTPSCamera_SetFixedLookAtPos_Params
{
	struct FVector                                     InPos;                                                     // 0x0000(0x000C)  (Parm)
};

// Function EFGame.EFTPSCamera.UpdateCamera
struct UEFTPSCamera_UpdateCamera_Params
{
	class APawn*                                       P;                                                         // 0x0000(0x0008)  (Parm)
	class AEFPlayerCamera*                             CameraActor;                                               // 0x0008(0x0008)  (Parm)
	float                                              DeltaTime;                                                 // 0x0010(0x0004)  (Parm)
	struct FTViewTarget                                OutVT;                                                     // 0x0014(0x0038)  (Parm, OutParm)
};

// Function EFGame.EFTPSCamera.OnBecomeActive
struct UEFTPSCamera_OnBecomeActive_Params
{
	class UEFCameraBase*                               OldCamera;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFTPSCamera.SetContentsSettingTable
struct UEFTPSCamera_SetContentsSettingTable_Params
{
	int                                                InTableId;                                                 // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFTPSCamera.SetSettingTable
struct UEFTPSCamera_SetSettingTable_Params
{
	int                                                InTableId;                                                 // 0x0000(0x0004)  (Parm)
	bool                                               InImmediateFlag;                                           // 0x0004(0x0004)  (OptionalParm, Parm)
};

// Function EFGame.EFTPSCamera.InActivateSkeletalMeshForceLOD
struct UEFTPSCamera_InActivateSkeletalMeshForceLOD_Params
{
	class UEFCameraBase*                               InNextCamera;                                              // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFTPSCamera.ActivateSkeletalMeshForceLOD
struct UEFTPSCamera_ActivateSkeletalMeshForceLOD_Params
{
};

// Function EFGame.EFTPSCamera.ChangeZoomStep
struct UEFTPSCamera_ChangeZoomStep_Params
{
	int                                                iStep;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFTPSCamera.CheckZoom
struct UEFTPSCamera_CheckZoom_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFTPSCamera.ZoomOut
struct UEFTPSCamera_ZoomOut_Params
{
};

// Function EFGame.EFTPSCamera.ZoomIn
struct UEFTPSCamera_ZoomIn_Params
{
};

// Function EFGame.EFTPSCamera.ResetInterpolation
struct UEFTPSCamera_ResetInterpolation_Params
{
};

// Function EFGame.EFVolumeCamera.OnBecomeInActive
struct UEFVolumeCamera_OnBecomeInActive_Params
{
	class UEFCameraBase*                               NewCamera;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFVolumeCamera.OnBecomeActive
struct UEFVolumeCamera_OnBecomeActive_Params
{
	class UEFCameraBase*                               OldCamera;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFVolumeCamera.NotifyActivate
struct UEFVolumeCamera_NotifyActivate_Params
{
	bool                                               InActivated;                                               // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFVolumeCamera.SetContentsSettingTable
struct UEFVolumeCamera_SetContentsSettingTable_Params
{
	int                                                InTableId;                                                 // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFVolumeCamera.SetSettingTable
struct UEFVolumeCamera_SetSettingTable_Params
{
	int                                                InTableId;                                                 // 0x0000(0x0004)  (Parm)
	bool                                               InImmediateFlag;                                           // 0x0004(0x0004)  (OptionalParm, Parm)
};

// Function EFGame.EFVolumeCamera.InActivateSkeletalMeshForceLOD
struct UEFVolumeCamera_InActivateSkeletalMeshForceLOD_Params
{
	class UEFCameraBase*                               InNextCamera;                                              // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFVolumeCamera.ActivateSkeletalMeshForceLOD
struct UEFVolumeCamera_ActivateSkeletalMeshForceLOD_Params
{
};

// Function EFGame.EFVolumeCamera.ChangeZoomStep
struct UEFVolumeCamera_ChangeZoomStep_Params
{
	int                                                iStep;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFVolumeCamera.CheckZoom
struct UEFVolumeCamera_CheckZoom_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFVolumeCamera.ZoomOut
struct UEFVolumeCamera_ZoomOut_Params
{
};

// Function EFGame.EFVolumeCamera.ZoomIn
struct UEFVolumeCamera_ZoomIn_Params
{
};

// Function EFGame.EFVolumeCamera.UpdateCamera
struct UEFVolumeCamera_UpdateCamera_Params
{
	class APawn*                                       P;                                                         // 0x0000(0x0008)  (Parm)
	class AEFPlayerCamera*                             CameraActor;                                               // 0x0008(0x0008)  (Parm)
	float                                              DeltaTime;                                                 // 0x0010(0x0004)  (Parm)
	struct FTViewTarget                                OutVT;                                                     // 0x0014(0x0038)  (Parm, OutParm)
};

// Function EFGame.EFVolumeCamera.ResetInterpolation
struct UEFVolumeCamera_ResetInterpolation_Params
{
};

// Function EFGame.EFVolumeCamera.ActivateBlendingStyle
struct UEFVolumeCamera_ActivateBlendingStyle_Params
{
	class UEFCameraBase*                               InOldCamera;                                               // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFWatchCamera.SetFixedLookAtPos
struct UEFWatchCamera_SetFixedLookAtPos_Params
{
	struct FVector                                     InPos;                                                     // 0x0000(0x000C)  (Parm)
};

// Function EFGame.EFWatchCamera.SetWatchCameraType
struct UEFWatchCamera_SetWatchCameraType_Params
{
	TEnumAsByte<EFGame_EFWatchCameraMode>              InType;                                                    // 0x0000(0x0001)  (Parm)
};

// Function EFGame.EFWatchCamera.UpdateCamera
struct UEFWatchCamera_UpdateCamera_Params
{
	class APawn*                                       P;                                                         // 0x0000(0x0008)  (Parm)
	class AEFPlayerCamera*                             CameraActor;                                               // 0x0008(0x0008)  (Parm)
	float                                              DeltaTime;                                                 // 0x0010(0x0004)  (Parm)
	struct FTViewTarget                                OutVT;                                                     // 0x0014(0x0038)  (Parm, OutParm)
};

// Function EFGame.EFWatchCamera.OnBecomeActive
struct UEFWatchCamera_OnBecomeActive_Params
{
	class UEFCameraBase*                               OldCamera;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFWatchCamera.ZoomOut
struct UEFWatchCamera_ZoomOut_Params
{
};

// Function EFGame.EFWatchCamera.ZoomIn
struct UEFWatchCamera_ZoomIn_Params
{
};

// Function EFGame.EFCameraModifier_CameraShake.AddCameraShakeGame
struct UEFCameraModifier_CameraShake_AddCameraShakeGame_Params
{
	class UCameraShake*                                NewShake;                                                  // 0x0000(0x0008)  (Parm)
	float                                              Scale;                                                     // 0x0008(0x0004)  (Parm)
	struct FString                                     ShakeType;                                                 // 0x000C(0x0010)  (Parm, NeedCtorLink)
	TEnumAsByte<Engine_ECameraAnimPlaySpace>           PlaySpace;                                                 // 0x001C(0x0001)  (OptionalParm, Parm)
	struct FRotator                                    UserPlaySpaceRot;                                          // 0x0020(0x000C)  (OptionalParm, Parm)
};

// Function EFGame.EFCameraModifier_CameraShake.RemoveGameCameraShake
struct UEFCameraModifier_CameraShake_RemoveGameCameraShake_Params
{
	class UCameraShake*                                Shake;                                                     // 0x0000(0x0008)  (Parm)
	struct FString                                     ShakeType;                                                 // 0x0008(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFCameraModifier_CameraShake.OnRemoveGameCameraShake
struct UEFCameraModifier_CameraShake_OnRemoveGameCameraShake_Params
{
	class UCameraShake*                                Shake;                                                     // 0x0000(0x0008)  (Parm)
	struct FString                                     ShakeType;                                                 // 0x0008(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFCameraModifier_CameraShake.OnAddGameCameraShake
struct UEFCameraModifier_CameraShake_OnAddGameCameraShake_Params
{
	class UCameraShake*                                NewShake;                                                  // 0x0000(0x0008)  (Parm)
	float                                              Scale;                                                     // 0x0008(0x0004)  (Parm)
	struct FString                                     ShakeType;                                                 // 0x000C(0x0010)  (Parm, NeedCtorLink)
	TEnumAsByte<Engine_ECameraAnimPlaySpace>           PlaySpace;                                                 // 0x001C(0x0001)  (OptionalParm, Parm)
	struct FRotator                                    UserPlaySpaceRot;                                          // 0x0020(0x000C)  (OptionalParm, Parm)
};

// Function EFGame.EFCameraModifier_CameraShake.ModifyCamera
struct UEFCameraModifier_CameraShake_ModifyCamera_Params
{
	class ACamera*                                     Camera;                                                    // 0x0000(0x0008)  (Parm)
	float                                              DeltaTime;                                                 // 0x0008(0x0004)  (Parm)
	struct FTPOV                                       OutPOV;                                                    // 0x000C(0x001C)  (Parm, OutParm)
	bool                                               ReturnValue;                                               // 0x0028(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFCameraModifier_CameraShake.RemoveAllEFViewShakes
struct UEFCameraModifier_CameraShake_RemoveAllEFViewShakes_Params
{
};

// Function EFGame.EFCameraModifier_CameraShake.RemoveEFViewShake
struct UEFCameraModifier_CameraShake_RemoveEFViewShake_Params
{
	struct FEFCameraViewShakePlayID                    InPlayID;                                                  // 0x0000(0x0004)  (Parm)
	bool                                               ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFCameraModifier_CameraShake.AddEFCameraViewShake
struct UEFCameraModifier_CameraShake_AddEFCameraViewShake_Params
{
	class UEFCameraViewShake*                          InShake;                                                   // 0x0000(0x0008)  (Parm)
	class UEFCameraViewShakeAnim*                      InAnim;                                                    // 0x0008(0x0008)  (Parm)
	bool                                               InLocalPlayer;                                             // 0x0010(0x0004)  (Parm)
	float                                              InPlayrate;                                                // 0x0014(0x0004)  (OptionalParm, Parm)
	struct FVector                                     InLocation;                                                // 0x0018(0x000C)  (OptionalParm, Parm)
	class AActor*                                      InProvidedActor;                                           // 0x0024(0x0008)  (OptionalParm, Parm)
	TEnumAsByte<Engine_ECameraAnimPlaySpace>           InPlaySpace;                                               // 0x002C(0x0001)  (OptionalParm, Parm)
	struct FRotator                                    InUserPlaySpaceRot;                                        // 0x0030(0x000C)  (OptionalParm, Parm)
	struct FEFCameraViewShakePlayID                    ReturnValue;                                               // 0x003C(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFCameraModifier_CameraShake.RemoveAllCameraShakes
struct UEFCameraModifier_CameraShake_RemoveAllCameraShakes_Params
{
};

// Function EFGame.EFCameraShakePlayGroup.UpdateViewShake
struct UEFCameraShakePlayGroup_UpdateViewShake_Params
{
	class ACamera*                                     InCameraOwner;                                             // 0x0000(0x0008)  (Parm)
	float                                              InDeltaTime;                                               // 0x0008(0x0004)  (Parm)
	float                                              InModifierAlpha;                                           // 0x000C(0x0004)  (Parm)
	struct FTPOV                                       OutPOV;                                                    // 0x0010(0x001C)  (Parm, OutParm)
};

// Function EFGame.EFCameraShakePlayGroup.PreUpdateViewShake
struct UEFCameraShakePlayGroup_PreUpdateViewShake_Params
{
	class ACamera*                                     InCameraOwner;                                             // 0x0000(0x0008)  (Parm)
	struct FVector                                     InPlayerLocation;                                          // 0x0008(0x000C)  (Const, Parm, OutParm)
	float                                              InDeltaTime;                                               // 0x0014(0x0004)  (Parm)
	TEnumAsByte<EFGame_EFShakePlayGroupState>          ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFCameraShakePlayGroup.RemoveAllViewShake
struct UEFCameraShakePlayGroup_RemoveAllViewShake_Params
{
	class ACamera*                                     InCameraOwner;                                             // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFCameraShakePlayGroup.RemoveViewShake
struct UEFCameraShakePlayGroup_RemoveViewShake_Params
{
	class ACamera*                                     InCameraOwner;                                             // 0x0000(0x0008)  (Parm)
	int                                                InShakeID;                                                 // 0x0008(0x0004)  (Parm)
	bool                                               InForceStop;                                               // 0x000C(0x0004)  (OptionalParm, Parm)
};

// Function EFGame.EFCameraShakePlayGroup.AddViewShakeInstance
struct UEFCameraShakePlayGroup_AddViewShakeInstance_Params
{
	struct FEFShakeInstance                            OutShakeInstance;                                          // 0x0000(0x0130)  (Parm, OutParm)
	class ACamera*                                     InCameraOwner;                                             // 0x0130(0x0008)  (Parm)
	class UEFCameraViewShake*                          InShake;                                                   // 0x0138(0x0008)  (Parm)
	class UEFCameraViewShakeAnim*                      InAnim;                                                    // 0x0140(0x0008)  (Parm)
	int                                                InAmplitudeSize;                                           // 0x0148(0x0004)  (Parm)
	float                                              InPlayrate;                                                // 0x014C(0x0004)  (Parm)
	struct FVector                                     InLocation;                                                // 0x0150(0x000C)  (Parm)
	TEnumAsByte<Engine_ECameraAnimPlaySpace>           InPlaySpace;                                               // 0x015C(0x0001)  (Parm)
	struct FRotator                                    InUserPlaySpaceRot;                                        // 0x0160(0x000C)  (Parm)
};

// Function EFGame.EFCameraShakePlayGroup.AddViewShake
struct UEFCameraShakePlayGroup_AddViewShake_Params
{
	class ACamera*                                     InCameraOwner;                                             // 0x0000(0x0008)  (Parm)
	class UEFCameraViewShake*                          InShake;                                                   // 0x0008(0x0008)  (Parm)
	class UEFCameraViewShakeAnim*                      InAnim;                                                    // 0x0010(0x0008)  (Parm)
	float                                              InPlayrate;                                                // 0x0018(0x0004)  (Parm)
	struct FVector                                     InLocation;                                                // 0x001C(0x000C)  (Parm)
	class AActor*                                      InProvidedActor;                                           // 0x0028(0x0008)  (OptionalParm, Parm)
	TEnumAsByte<Engine_ECameraAnimPlaySpace>           InPlaySpace;                                               // 0x0030(0x0001)  (OptionalParm, Parm)
	struct FRotator                                    InUserPlaySpaceRot;                                        // 0x0034(0x000C)  (OptionalParm, Parm)
	int                                                ReturnValue;                                               // 0x0040(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFCameraViewShake.GetAmplitudeSize
struct UEFCameraViewShake_GetAmplitudeSize_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFInputRotCameraActor.GetCameraView
struct AEFInputRotCameraActor_GetCameraView_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm)
	struct FTPOV                                       OutPOV;                                                    // 0x0004(0x001C)  (Parm, OutParm)
};

// Function EFGame.EFInputRotCameraActor.EndViewTarget
struct AEFInputRotCameraActor_EndViewTarget_Params
{
	class APlayerController*                           PC;                                                        // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFInputRotCameraActor.BecomeViewTarget
struct AEFInputRotCameraActor_BecomeViewTarget_Params
{
	class APlayerController*                           PC;                                                        // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFInputRotCameraActor.ActivateInputRotMode
struct AEFInputRotCameraActor_ActivateInputRotMode_Params
{
	bool                                               InFlag;                                                    // 0x0000(0x0004)  (Parm)
	class APlayerController*                           PC;                                                        // 0x0004(0x0008)  (Parm)
};

// Function EFGame.EFMacroCameraSplineActor.BreakAllConnections
struct AEFMacroCameraSplineActor_BreakAllConnections_Params
{
};

// Function EFGame.EFMacroCameraSplineActor.BreakConnectionTo
struct AEFMacroCameraSplineActor_BreakConnectionTo_Params
{
	class AEFMacroCameraSplineActor*                   NextActor;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFMacroCameraSplineActor.IsConnectedTo
struct AEFMacroCameraSplineActor_IsConnectedTo_Params
{
	class AEFMacroCameraSplineActor*                   NextActor;                                                 // 0x0000(0x0008)  (Parm)
	bool                                               bCheckForDisableDestination;                               // 0x0008(0x0004)  (Parm)
	bool                                               ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFMacroCameraSplineActor.AddConnectionTo
struct AEFMacroCameraSplineActor_AddConnectionTo_Params
{
	class AEFMacroCameraSplineActor*                   NextActor;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFMacroCameraSplineActor.UpdateConnectedSplineComponents
struct AEFMacroCameraSplineActor_UpdateConnectedSplineComponents_Params
{
	bool                                               bFinish;                                                   // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFMacroCameraSplineActor.UpdateSplineComponents
struct AEFMacroCameraSplineActor_UpdateSplineComponents_Params
{
};

// Function EFGame.EFPlayerCamera.LoadOutlineData
struct AEFPlayerCamera_LoadOutlineData_Params
{
};

// Function EFGame.EFPlayerCamera.UpdatePlayerOccludingTownPlacementActors
struct AEFPlayerCamera_UpdatePlayerOccludingTownPlacementActors_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFPlayerCamera.UpdateTranslucentActorBlend
struct AEFPlayerCamera_UpdateTranslucentActorBlend_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFPlayerCamera.DisplayDebug
struct AEFPlayerCamera_DisplayDebug_Params
{
	class AHUD*                                        HUD;                                                       // 0x0000(0x0008)  (Parm)
	float                                              out_YL;                                                    // 0x0008(0x0004)  (Parm, OutParm)
	float                                              out_YPos;                                                  // 0x000C(0x0004)  (Parm, OutParm)
};

// Function EFGame.EFPlayerCamera.FOV
struct AEFPlayerCamera_FOV_Params
{
	float                                              NewFOV;                                                    // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFPlayerCamera.AdjustViewportFOV
struct AEFPlayerCamera_AdjustViewportFOV_Params
{
	float                                              InOutFOV;                                                  // 0x0000(0x0004)  (Parm, OutParm)
};

// Function EFGame.EFPlayerCamera.SaveCameraValue
struct AEFPlayerCamera_SaveCameraValue_Params
{
};

// Function EFGame.EFPlayerCamera.SetCameraType
struct AEFPlayerCamera_SetCameraType_Params
{
	int                                                InType;                                                    // 0x0000(0x0004)  (Parm)
	bool                                               bUpdateValue;                                              // 0x0004(0x0004)  (OptionalParm, Parm)
};

// Function EFGame.EFPlayerCamera.UpdateRotation
struct AEFPlayerCamera_UpdateRotation_Params
{
};

// Function EFGame.EFPlayerCamera.ZoomOut
struct AEFPlayerCamera_ZoomOut_Params
{
};

// Function EFGame.EFPlayerCamera.ZoomIn
struct AEFPlayerCamera_ZoomIn_Params
{
};

// Function EFGame.EFPlayerCamera.UpdateViewTarget
struct AEFPlayerCamera_UpdateViewTarget_Params
{
	struct FTViewTarget                                OutVT;                                                     // 0x0000(0x0038)  (Parm, OutParm)
	float                                              DeltaTime;                                                 // 0x0038(0x0004)  (Parm)
};

// Function EFGame.EFPlayerCamera.DoUpdateCamera
struct AEFPlayerCamera_DoUpdateCamera_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFPlayerCamera.ProcessTestInputCameraActor
struct AEFPlayerCamera_ProcessTestInputCameraActor_Params
{
	class ACameraActor*                                InCamera;                                                  // 0x0000(0x0008)  (Parm)
	struct FTPOV                                       OutPOV;                                                    // 0x0008(0x001C)  (Parm, OutParm)
};

// Function EFGame.EFPlayerCamera.ClearCameraActorGrabInterp
struct AEFPlayerCamera_ClearCameraActorGrabInterp_Params
{
};

// Function EFGame.EFPlayerCamera.ApplyCameraActorGrabInterp
struct AEFPlayerCamera_ApplyCameraActorGrabInterp_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm)
	class ACameraActor*                                InCamera;                                                  // 0x0004(0x0008)  (Parm)
	struct FTPOV                                       OutPOV;                                                    // 0x000C(0x001C)  (Parm, OutParm)
};

// Function EFGame.EFPlayerCamera.DeactivateVolumeCamera
struct AEFPlayerCamera_DeactivateVolumeCamera_Params
{
	class AActor*                                      InTriggerActor;                                            // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFPlayerCamera.ActivateVolumeCamera
struct AEFPlayerCamera_ActivateVolumeCamera_Params
{
	class AActor*                                      InTriggerActor;                                            // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFPlayerCamera.RestoreCameraMode
struct AEFPlayerCamera_RestoreCameraMode_Params
{
};

// Function EFGame.EFPlayerCamera.ChangeCameraMode
struct AEFPlayerCamera_ChangeCameraMode_Params
{
	TEnumAsByte<EFGame_ECameraStyle>                   InEnum;                                                    // 0x0000(0x0001)  (Parm)
	bool                                               InImmediateFlag;                                           // 0x0004(0x0004)  (OptionalParm, Parm)
	bool                                               InBlendCameraMode;                                         // 0x0008(0x0004)  (OptionalParm, Parm)
};

// Function EFGame.EFPlayerCamera.ChangeCameraContentsSetting
struct AEFPlayerCamera_ChangeCameraContentsSetting_Params
{
	int                                                InTableId;                                                 // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFPlayerCamera.ChangeCameraZoomStep
struct AEFPlayerCamera_ChangeCameraZoomStep_Params
{
	int                                                InZoomStep;                                                // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFPlayerCamera.ChangeCameraSetting
struct AEFPlayerCamera_ChangeCameraSetting_Params
{
	int                                                InTableId;                                                 // 0x0000(0x0004)  (Parm)
	bool                                               InImmediateFlag;                                           // 0x0004(0x0004)  (OptionalParm, Parm)
	bool                                               InBlendCameraMode;                                         // 0x0008(0x0004)  (OptionalParm, Parm)
};

// Function EFGame.EFPlayerCamera.ApplyVehicleFOVAngle
struct AEFPlayerCamera_ApplyVehicleFOVAngle_Params
{
	float                                              OutFOV;                                                    // 0x0000(0x0004)  (Parm, OutParm)
};

// Function EFGame.EFPlayerCamera.SetVehicleFOVAngle
struct AEFPlayerCamera_SetVehicleFOVAngle_Params
{
	float                                              InFOV;                                                     // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFPlayerCamera.ApplyCamOverrideFogSetting
struct AEFPlayerCamera_ApplyCamOverrideFogSetting_Params
{
};

// Function EFGame.EFPlayerCamera.ProcessTargetCameraActorBlend
struct AEFPlayerCamera_ProcessTargetCameraActorBlend_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFPlayerCamera.ResetAttachCameraActor
struct AEFPlayerCamera_ResetAttachCameraActor_Params
{
};

// Function EFGame.EFPlayerCamera.ModifyOnSetCameraTargetBlendTime
struct AEFPlayerCamera_ModifyOnSetCameraTargetBlendTime_Params
{
	class AActor*                                      inEventOriginator;                                         // 0x0000(0x0008)  (Parm)
	class AActor*                                      inRealCameraTarget;                                        // 0x0008(0x0008)  (Parm)
	float                                              outBlendTime;                                              // 0x0010(0x0004)  (Parm, OutParm)
};

// Function EFGame.EFPlayerCamera.FindBestCameraType
struct AEFPlayerCamera_FindBestCameraType_Params
{
	class AActor*                                      CameraTarget;                                              // 0x0000(0x0008)  (Parm)
	class UEFCameraBase*                               ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFPlayerCamera.GetCurrentCameraMode
struct AEFPlayerCamera_GetCurrentCameraMode_Params
{
	class UEFCameraBase*                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFPlayerCamera.CreateCamera
struct AEFPlayerCamera_CreateCamera_Params
{
	class UClass*                                      CameraClass;                                               // 0x0000(0x0008)  (Parm)
	class UEFCameraBase*                               ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFPlayerCamera.PostBeginPlay
struct AEFPlayerCamera_PostBeginPlay_Params
{
};

// Function EFGame.EFPlayerCamera.GetFOV
struct AEFPlayerCamera_GetFOV_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFPlayerCamera.GetCameraDistance
struct AEFPlayerCamera_GetCameraDistance_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFPlayerCamera.Destroyed
struct AEFPlayerCamera_Destroyed_Params
{
};

// Function EFGame.EFPlayerCamera.CalcVerticalFOV
struct AEFPlayerCamera_CalcVerticalFOV_Params
{
	float                                              OutFOV;                                                    // 0x0000(0x0004)  (Parm, OutParm)
};

// Function EFGame.EFEmitter.HideSelf
struct AEFEmitter_HideSelf_Params
{
};

// Function EFGame.EFEmitter.PostBeginPlay
struct AEFEmitter_PostBeginPlay_Params
{
};

// Function EFGame.EFEnvironmentActionEmitter.ClearExtendPool
struct AEFEnvironmentActionEmitter_ClearExtendPool_Params
{
	class UParticleSystemComponent*                    PSC;                                                       // 0x0000(0x0008)  (Parm, EditInline)
};

// Function EFGame.EFEnvironmentActionEmitter.OnParticleSystemFinished
struct AEFEnvironmentActionEmitter_OnParticleSystemFinished_Params
{
	class UParticleSystemComponent*                    FinishedComponent;                                         // 0x0000(0x0008)  (Parm, EditInline)
};

// Function EFGame.EFSpawnedEmitter.HideBecauseFinished
struct AEFSpawnedEmitter_HideBecauseFinished_Params
{
	class UParticleSystemComponent*                    FinishedComponent;                                         // 0x0000(0x0008)  (Parm, EditInline)
};

// Function EFGame.EFSpawnedEmitter.ClearExtendPool
struct AEFSpawnedEmitter_ClearExtendPool_Params
{
	class UParticleSystemComponent*                    PSC;                                                       // 0x0000(0x0008)  (Parm, EditInline)
};

// Function EFGame.EFSpawnedEmitter.OnParticleSystemFinished
struct AEFSpawnedEmitter_OnParticleSystemFinished_Params
{
	class UParticleSystemComponent*                    FinishedComponent;                                         // 0x0000(0x0008)  (Parm, EditInline)
};

// Function EFGame.EFEmitterPool.ClearPoolPSInfoComponents
struct AEFEmitterPool_ClearPoolPSInfoComponents_Params
{
	bool                                               bClearActive;                                              // 0x0000(0x0004)  (OptionalParm, Parm)
};

// Function EFGame.EFEmitterPool.OnPSInfoFinished
struct AEFEmitterPool_OnPSInfoFinished_Params
{
	class UParticleSystemComponent*                    PSC;                                                       // 0x0000(0x0008)  (Parm, EditInline)
};

// Function EFGame.EFEmitterPool.ClearExtendPool
struct AEFEmitterPool_ClearExtendPool_Params
{
};

// Function EFGame.EFItem.SetLocationForceUpdateComponent
struct AEFItem_SetLocationForceUpdateComponent_Params
{
	struct FVector                                     NewLocation;                                               // 0x0000(0x000C)  (Parm)
};

// Function EFGame.EFItem.SetLocationForce
struct AEFItem_SetLocationForce_Params
{
	struct FVector                                     NewLocation;                                               // 0x0000(0x000C)  (Parm)
};

// Function EFGame.EFItem.ClearAttachedPSIIndex
struct AEFItem_ClearAttachedPSIIndex_Params
{
};

// Function EFGame.EFItem.EncroachedBy
struct AEFItem_EncroachedBy_Params
{
	class AActor*                                      Other;                                                     // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFItem.Destroyed
struct AEFItem_Destroyed_Params
{
};

// Function EFGame.EFInteractiveFoliageActor.TakeDamage
struct AEFInteractiveFoliageActor_TakeDamage_Params
{
	int                                                Damage;                                                    // 0x0000(0x0004)  (Parm)
	class AController*                                 EventInstigator;                                           // 0x0004(0x0008)  (Parm)
	struct FVector                                     HitLocation;                                               // 0x000C(0x000C)  (Parm)
	struct FVector                                     Momentum;                                                  // 0x0018(0x000C)  (Parm)
	class UClass*                                      DamageType;                                                // 0x0024(0x0008)  (Parm)
	struct FTraceHitInfo                               HitInfo;                                                   // 0x002C(0x0028)  (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                              // 0x0054(0x0008)  (OptionalParm, Parm)
};

// Function EFGame.EFSeqAct_SetPostProcessEffectProperties.GetPostProcessEffects
struct UEFSeqAct_SetPostProcessEffectProperties_GetPostProcessEffects_Params
{
	TArray<class UPostProcessEffect*>                  PostProcessEffects;                                        // 0x0000(0x0010)  (Parm, OutParm, NeedCtorLink)
	class UClass*                                      MatchingPostProcessEffectClass;                            // 0x0010(0x0008)  (OptionalParm, Parm)
};

// Function EFGame.EFSeqAct_SetAmbientOcclusionEffectProperties.Activated
struct UEFSeqAct_SetAmbientOcclusionEffectProperties_Activated_Params
{
};

// Function EFGame.EFSeqAct_SetBlurEffectProperties.Activated
struct UEFSeqAct_SetBlurEffectProperties_Activated_Params
{
};

// Function EFGame.EFPickingEmitter.IsActivateEffect
struct AEFPickingEmitter_IsActivateEffect_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFPickingEmitter.DeactivateEffect
struct AEFPickingEmitter_DeactivateEffect_Params
{
	bool                                               bForceKill;                                                // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFPickingEmitter.ActivateEffect
struct AEFPickingEmitter_ActivateEffect_Params
{
	class AActor*                                      BaseActor;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFPickingEmitter.OnParticleSystemFinished
struct AEFPickingEmitter_OnParticleSystemFinished_Params
{
	class UParticleSystemComponent*                    FinishedComponent;                                         // 0x0000(0x0008)  (Parm, EditInline)
};

// Function EFGame.EFGameViewportClient.Tick
struct UEFGameViewportClient_Tick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFGameViewportClient.PostRender
struct UEFGameViewportClient_PostRender_Params
{
	class UCanvas*                                     Canvas;                                                    // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFGameViewportClient.CreateScreenshot
struct UEFGameViewportClient_CreateScreenshot_Params
{
	struct FString                                     ScreenshotFilename;                                        // 0x0000(0x0010)  (Const, Parm, OutParm, NeedCtorLink)
	bool                                               bCreateAsync;                                              // 0x0010(0x0004)  (OptionalParm, Parm)
	bool                                               bAddInputInfo;                                             // 0x0014(0x0004)  (OptionalParm, Parm)
	bool                                               bUseBMP;                                                   // 0x0018(0x0004)  (OptionalParm, Parm)
};

// Function EFGame.EFGameViewportClient.InitRelativeTimeFadeInfo
struct UEFGameViewportClient_InitRelativeTimeFadeInfo_Params
{
};

// Function EFGame.EFGameViewportClient.CacheViewProjectionMatrix
struct UEFGameViewportClient_CacheViewProjectionMatrix_Params
{
	bool                                               bForceUpdate;                                              // 0x0000(0x0004)  (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFGameViewportClient.PostFullScreenFilterRender
struct UEFGameViewportClient_PostFullScreenFilterRender_Params
{
	class UCanvas*                                     Canvas;                                                    // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFGameViewportClient.PostFullScreenRender
struct UEFGameViewportClient_PostFullScreenRender_Params
{
	class UCanvas*                                     Canvas;                                                    // 0x0000(0x0008)  (Parm)
	bool                                               bRenderToSceneColor;                                       // 0x0008(0x0004)  (Parm)
};

// Function EFGame.EFGameViewportClient.PostFadeInOutRender
struct UEFGameViewportClient_PostFadeInOutRender_Params
{
	class UCanvas*                                     Canvas;                                                    // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFGameViewportClient.SetHardwareMouseCursorVisibility
struct UEFGameViewportClient_SetHardwareMouseCursorVisibility_Params
{
	bool                                               bIsVisible;                                                // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFNxForceFieldTornado.UpdateDynamicProperty
struct AEFNxForceFieldTornado_UpdateDynamicProperty_Params
{
};

// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyHeightOffset
struct AEFNxForceFieldTornado_OnUpdatePropertyHeightOffset_Params
{
};

// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyForceHeight
struct AEFNxForceFieldTornado_OnUpdatePropertyForceHeight_Params
{
};

// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyEscapeVelocity
struct AEFNxForceFieldTornado_OnUpdatePropertyEscapeVelocity_Params
{
};

// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyLiftFalloffHeight
struct AEFNxForceFieldTornado_OnUpdatePropertyLiftFalloffHeight_Params
{
};

// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyForceTopRadius
struct AEFNxForceFieldTornado_OnUpdatePropertyForceTopRadius_Params
{
};

// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyForceRadius
struct AEFNxForceFieldTornado_OnUpdatePropertyForceRadius_Params
{
};

// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyLiftStrength
struct AEFNxForceFieldTornado_OnUpdatePropertyLiftStrength_Params
{
};

// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyRotationalStrength
struct AEFNxForceFieldTornado_OnUpdatePropertyRotationalStrength_Params
{
};

// Function EFGame.EFNxForceFieldTornado.OnUpdatePropertyRadialStrength
struct AEFNxForceFieldTornado_OnUpdatePropertyRadialStrength_Params
{
};

// Function EFGame.EFData_MaskInfo.GetProperLevel
struct UEFData_MaskInfo_GetProperLevel_Params
{
	TEnumAsByte<EFGame_EFEQUIP_PART>                   ePartsOwn;                                                 // 0x0000(0x0001)  (Parm)
	TEnumAsByte<EFGame_EFEQUIP_PART>                   ePartsRelated;                                             // 0x0001(0x0001)  (Parm)
	TEnumAsByte<EFGame_EFMASK_LEVEL>                   eCurLevel;                                                 // 0x0002(0x0001)  (Parm)
	unsigned char                                      ReturnValue;                                               // 0x0003(0x0001)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFExcelShell.GetColumNum
struct UEFExcelShell_GetColumNum_Params
{
	struct FString                                     strName;                                                   // 0x0000(0x0010)  (Parm, NeedCtorLink)
	int                                                ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFExcelShell.NewLine
struct UEFExcelShell_NewLine_Params
{
};

// Function EFGame.EFExcelShell.ResetEdit
struct UEFExcelShell_ResetEdit_Params
{
};

// Function EFGame.EFExcelShell.SetLookPresetPosition
struct UEFExcelShell_SetLookPresetPosition_Params
{
	int                                                ColNo;                                                     // 0x0000(0x0004)  (Parm)
	int                                                RowNo;                                                     // 0x0004(0x0004)  (Parm)
	TEnumAsByte<EFGame_ECELL_LOOK>                     eLook;                                                     // 0x0008(0x0001)  (Parm)
};

// Function EFGame.EFExcelShell.SetLookPresetRange
struct UEFExcelShell_SetLookPresetRange_Params
{
	struct FString                                     Range;                                                     // 0x0000(0x0010)  (Parm, NeedCtorLink)
	TEnumAsByte<EFGame_ECELL_LOOK>                     eLook;                                                     // 0x0010(0x0001)  (Parm)
};

// Function EFGame.EFExcelShell.ReadStringRange
struct UEFExcelShell_ReadStringRange_Params
{
	struct FString                                     Range;                                                     // 0x0000(0x0010)  (Parm, NeedCtorLink)
	TArray<struct FString>                             outStringArr;                                              // 0x0010(0x0010)  (Parm, OutParm, NeedCtorLink)
	bool                                               IsRaw;                                                     // 0x0020(0x0004)  (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // 0x0024(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFExcelShell.ReadString
struct UEFExcelShell_ReadString_Params
{
	int                                                ColNo;                                                     // 0x0000(0x0004)  (Parm)
	struct FString                                     Value;                                                     // 0x0004(0x0010)  (Parm, OutParm, NeedCtorLink)
};

// Function EFGame.EFExcelShell.WriteString
struct UEFExcelShell_WriteString_Params
{
	int                                                ColNo;                                                     // 0x0000(0x0004)  (Parm)
	struct FString                                     Value;                                                     // 0x0004(0x0010)  (Parm, NeedCtorLink)
};

// Function EFGame.EFExcelShell.WriteName
struct UEFExcelShell_WriteName_Params
{
	int                                                ColNo;                                                     // 0x0000(0x0004)  (Parm)
	struct FName                                       Value;                                                     // 0x0004(0x0008)  (Parm)
};

// Function EFGame.EFExcelShell.WriteFloat
struct UEFExcelShell_WriteFloat_Params
{
	int                                                ColNo;                                                     // 0x0000(0x0004)  (Parm)
	float                                              Value;                                                     // 0x0004(0x0004)  (Parm)
};

// Function EFGame.EFExcelShell.WriteInt
struct UEFExcelShell_WriteInt_Params
{
	int                                                ColNo;                                                     // 0x0000(0x0004)  (Parm)
	int                                                Value;                                                     // 0x0004(0x0004)  (Parm)
};

// Function EFGame.EFExcelShell.WriteUINT
struct UEFExcelShell_WriteUINT_Params
{
	int                                                ColNo;                                                     // 0x0000(0x0004)  (Parm)
	int                                                Value;                                                     // 0x0004(0x0004)  (Parm)
};

// Function EFGame.EFExcelShell.SetSheetName
struct UEFExcelShell_SetSheetName_Params
{
	int                                                nSheeteIndex;                                              // 0x0000(0x0004)  (Parm)
	struct FString                                     szSheetName;                                               // 0x0004(0x0010)  (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0014(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFExcelShell.SetFont
struct UEFExcelShell_SetFont_Params
{
	struct FString                                     Range;                                                     // 0x0000(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     FontName;                                                  // 0x0010(0x0010)  (Parm, NeedCtorLink)
	int                                                FontSize;                                                  // 0x0020(0x0004)  (Parm)
	int                                                FontColor;                                                 // 0x0024(0x0004)  (Parm)
	bool                                               bBold;                                                     // 0x0028(0x0004)  (Parm)
	bool                                               bItalic;                                                   // 0x002C(0x0004)  (Parm)
	bool                                               ReturnValue;                                               // 0x0030(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFExcelShell.SetBorder
struct UEFExcelShell_SetBorder_Params
{
	struct FString                                     Range;                                                     // 0x0000(0x0010)  (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFExcelShell.SetBackgroundColor
struct UEFExcelShell_SetBackgroundColor_Params
{
	struct FString                                     Range;                                                     // 0x0000(0x0010)  (Parm, NeedCtorLink)
	int                                                BGColor;                                                   // 0x0010(0x0004)  (Parm)
	bool                                               ReturnValue;                                               // 0x0014(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFExcelShell.GetWorkSheetName
struct UEFExcelShell_GetWorkSheetName_Params
{
	int                                                nSheetIndex;                                               // 0x0000(0x0004)  (Parm)
	struct FString                                     strSheetName;                                              // 0x0004(0x0010)  (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0014(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFExcelShell.SelectWorkSheet
struct UEFExcelShell_SelectWorkSheet_Params
{
	int                                                nSheetIndex;                                               // 0x0000(0x0004)  (Parm)
	bool                                               ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFExcelShell.SelectWorkSheetByName
struct UEFExcelShell_SelectWorkSheetByName_Params
{
	struct FString                                     strSheetName;                                              // 0x0000(0x0010)  (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFExcelShell.SaveAs
struct UEFExcelShell_SaveAs_Params
{
	struct FString                                     FilePath;                                                  // 0x0000(0x0010)  (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFExcelShell.OpenExcelFile
struct UEFExcelShell_OpenExcelFile_Params
{
	struct FString                                     FilePath;                                                  // 0x0000(0x0010)  (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFExcelShell.NewSheet
struct UEFExcelShell_NewSheet_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFExcelShell.NewExcelFile
struct UEFExcelShell_NewExcelFile_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFExcelShell.AutoFitColomn
struct UEFExcelShell_AutoFitColomn_Params
{
	int                                                ColNo;                                                     // 0x0000(0x0004)  (Parm)
	bool                                               ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFExcelShell.AutoFitColumn
struct UEFExcelShell_AutoFitColumn_Params
{
	struct FString                                     ColName;                                                   // 0x0000(0x0010)  (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFLocalTrigger.Touch
struct AEFLocalTrigger_Touch_Params
{
	class AActor*                                      Other;                                                     // 0x0000(0x0008)  (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0008(0x0008)  (Parm, EditInline)
	struct FVector                                     HitLocation;                                               // 0x0010(0x000C)  (Parm)
	struct FVector                                     HitNormal;                                                 // 0x001C(0x000C)  (Parm)
};

// Function EFGame.EFLocalTrigger.PostBeginPlay
struct AEFLocalTrigger_PostBeginPlay_Params
{
};

// Function EFGame.EFLocalTrigger.IsCinematicControl
struct AEFLocalTrigger_IsCinematicControl_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFLocalTrigger.IsLocalMode
struct AEFLocalTrigger_IsLocalMode_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFLocalTriggerVolume.Touch
struct AEFLocalTriggerVolume_Touch_Params
{
	class AActor*                                      Other;                                                     // 0x0000(0x0008)  (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0008(0x0008)  (Parm, EditInline)
	struct FVector                                     HitLocation;                                               // 0x0010(0x000C)  (Parm)
	struct FVector                                     HitNormal;                                                 // 0x001C(0x000C)  (Parm)
};

// Function EFGame.EFLocalTriggerVolume.PostBeginPlay
struct AEFLocalTriggerVolume_PostBeginPlay_Params
{
};

// Function EFGame.EFLocalTriggerVolume.IsCinematicControl
struct AEFLocalTriggerVolume_IsCinematicControl_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFLocalTriggerVolume.IsLocalMode
struct AEFLocalTriggerVolume_IsLocalMode_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFSeqAct_SetDOFEffectProperties.SetProperties
struct UEFSeqAct_SetDOFEffectProperties_SetProperties_Params
{
	class UPostProcessEffect*                          PostProcessEffect;                                         // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFSeqAct_SetDOFEffectProperties.Activated
struct UEFSeqAct_SetDOFEffectProperties_Activated_Params
{
};

// Function EFGame.EFSeqAct_SetDOFAndBloomEffectProperties.SetProperties
struct UEFSeqAct_SetDOFAndBloomEffectProperties_SetProperties_Params
{
	class UPostProcessEffect*                          PostProcessEffect;                                         // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFSeqAct_SetDOFBloomMotionBlurEffect.SetProperties
struct UEFSeqAct_SetDOFBloomMotionBlurEffect_SetProperties_Params
{
	class UPostProcessEffect*                          PostProcessEffect;                                         // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFSeqAct_SetMaterialEffectProperties.Activated
struct UEFSeqAct_SetMaterialEffectProperties_Activated_Params
{
};

// Function EFGame.EFSeqAct_SetMotionBlurEffectProperties.Activated
struct UEFSeqAct_SetMotionBlurEffectProperties_Activated_Params
{
};

// Function EFGame.EFSeqAct_SetUberPostProcessEffect.Activated
struct UEFSeqAct_SetUberPostProcessEffect_Activated_Params
{
};

// Function EFGame.EFSeqAct_TogglePostProcessEffect.Activated
struct UEFSeqAct_TogglePostProcessEffect_Activated_Params
{
};

// Function EFGame.EFDataContainer.XmlExport
struct UEFDataContainer_XmlExport_Params
{
	struct FString                                     strPath;                                                   // 0x0000(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     strErrorMsg;                                               // 0x0010(0x0010)  (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0020(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFDataContainer.XlsExport
struct UEFDataContainer_XlsExport_Params
{
	class UEFExcelShell*                               Shell;                                                     // 0x0000(0x0008)  (Parm)
	bool                                               ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFDataContainer.XlsImport
struct UEFDataContainer_XlsImport_Params
{
	class UEFExcelShell*                               Shell;                                                     // 0x0000(0x0008)  (Parm)
	bool                                               ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFDataContainer_CharacterCustomizing.XmlExport
struct UEFDataContainer_CharacterCustomizing_XmlExport_Params
{
	struct FString                                     strPath;                                                   // 0x0000(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     strErrorMsg;                                               // 0x0010(0x0010)  (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0020(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFDataContainer_ColorPalette.XmlExport
struct UEFDataContainer_ColorPalette_XmlExport_Params
{
	struct FString                                     strPath;                                                   // 0x0000(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     strErrorMsg;                                               // 0x0010(0x0010)  (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0020(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFDataContainer_CustomizeBoneScale.XmlExport
struct UEFDataContainer_CustomizeBoneScale_XmlExport_Params
{
	struct FString                                     strPath;                                                   // 0x0000(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     strErrorMsg;                                               // 0x0010(0x0010)  (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0020(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFDataContainer_LookInfos.XmlExport
struct UEFDataContainer_LookInfos_XmlExport_Params
{
	struct FString                                     strPath;                                                   // 0x0000(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     strErrorMsg;                                               // 0x0010(0x0010)  (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0020(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFDataContainer_NpcFunction.XmlExport
struct UEFDataContainer_NpcFunction_XmlExport_Params
{
	struct FString                                     strPath;                                                   // 0x0000(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     strErrorMsg;                                               // 0x0010(0x0010)  (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0020(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFDataContainer_Quest.XmlExport
struct UEFDataContainer_Quest_XmlExport_Params
{
	struct FString                                     strPath;                                                   // 0x0000(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     strErrorMsg;                                               // 0x0010(0x0010)  (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0020(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFDataContainer_TexturePalette.XmlExport
struct UEFDataContainer_TexturePalette_XmlExport_Params
{
	struct FString                                     strPath;                                                   // 0x0000(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     strErrorMsg;                                               // 0x0010(0x0010)  (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0020(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFLightBeam.SetActive
struct AEFLightBeam_SetActive_Params
{
	bool                                               bAct;                                                      // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFMatineePathNode.BreakAllConnectionsFrom
struct AEFMatineePathNode_BreakAllConnectionsFrom_Params
{
};

// Function EFGame.EFMatineePathNode.BreakAllConnections
struct AEFMatineePathNode_BreakAllConnections_Params
{
};

// Function EFGame.EFMatineePathNode.BreakConnectionTo
struct AEFMatineePathNode_BreakConnectionTo_Params
{
	class AEFMatineePathNode*                          NextActor;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFMatineePathNode.IsConnectedTo
struct AEFMatineePathNode_IsConnectedTo_Params
{
	class AEFMatineePathNode*                          NextActor;                                                 // 0x0000(0x0008)  (Parm)
	bool                                               ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function EFGame.EFMatineePathNode.AddConnectionTo
struct AEFMatineePathNode_AddConnectionTo_Params
{
	class AEFMatineePathNode*                          NextActor;                                                 // 0x0000(0x0008)  (Parm)
};

// Function EFGame.EFMatineePathNode.UpdateConnectedLineComponents
struct AEFMatineePathNode_UpdateConnectedLineComponents_Params
{
	bool                                               bFinish;                                                   // 0x0000(0x0004)  (Parm)
};

// Function EFGame.EFMatineePathNode.UpdateLineComponents
struct AEFMatineePathNode_UpdateLineComponents_Params
{
};

// Function EFGame.EFGFxHUDWrapper.PostRender
struct AEFGFxHUDWrapper_PostRender_Params
{
};

// Function EFGame.EFGFxHUDWrapper.PostBeginPlay
struct AEFGFxHUDWrapper_PostBeginPlay_Params
{
};

// Function EFGame.EFGFxHUDWrapper.Destroyed
struct AEFGFxHUDWrapper_Destroyed_Params
{
};

// Function EFGame.EFTexture2DDynamic.UpdateMipFromPNG
struct UEFTexture2DDynamic_UpdateMipFromPNG_Params
{
	int                                                MipIdx;                                                    // 0x0000(0x0004)  (Parm)
	TArray<unsigned char>                              MipData;                                                   // 0x0004(0x0010)  (Const, Parm, OutParm, NeedCtorLink)
	bool                                               UseBoardA;                                                 // 0x0014(0x0004)  (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
