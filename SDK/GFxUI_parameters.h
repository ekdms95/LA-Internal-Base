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

// Function GFxUI.GFxFSCmdHandler.FSCommand
struct UGFxFSCmdHandler_FSCommand_Params
{
	class UGFxMoviePlayer*                             Movie;                                                     // 0x0000(0x0008)  (Parm)
	class UGFxEvent_FSCommand*                         Event;                                                     // 0x0008(0x0008)  (Parm)
	struct FString                                     Cmd;                                                       // 0x0010(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     Arg;                                                       // 0x0020(0x0010)  (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0030(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxInteraction.CloseAllMoviePlayers
struct UGFxInteraction_CloseAllMoviePlayers_Params
{
};

// Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged
struct UGFxInteraction_NotifySplitscreenLayoutChanged_Params
{
};

// Function GFxUI.GFxInteraction.NotifyPlayerRemoved
struct UGFxInteraction_NotifyPlayerRemoved_Params
{
	int                                                PlayerIndex;                                               // 0x0000(0x0004)  (Parm)
	class ULocalPlayer*                                RemovedPlayer;                                             // 0x0004(0x0008)  (Parm)
};

// Function GFxUI.GFxInteraction.NotifyPlayerAdded
struct UGFxInteraction_NotifyPlayerAdded_Params
{
	int                                                PlayerIndex;                                               // 0x0000(0x0004)  (Parm)
	class ULocalPlayer*                                AddedPlayer;                                               // 0x0004(0x0008)  (Parm)
};

// Function GFxUI.GFxInteraction.NotifyGameSessionEnded
struct UGFxInteraction_NotifyGameSessionEnded_Params
{
};

// Function GFxUI.GFxInteraction.GetFocusMovie
struct UGFxInteraction_GetFocusMovie_Params
{
	int                                                ControllerId;                                              // 0x0000(0x0004)  (Parm)
	class UGFxMoviePlayer*                             ReturnValue;                                               // 0x0004(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout
struct UGFxMoviePlayer_UpdateSplitscreenLayout_Params
{
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect
struct UGFxMoviePlayer_ApplyPriorityVisibilityEffect_Params
{
	bool                                               bRemoveEffect;                                             // 0x0000(0x0004)  (Parm)
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect
struct UGFxMoviePlayer_ApplyPriorityBlurEffect_Params
{
	bool                                               bRemoveEffect;                                             // 0x0000(0x0004)  (Parm)
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect
struct UGFxMoviePlayer_ApplyPriorityEffect_Params
{
	bool                                               bRequestedBlurState;                                       // 0x0000(0x0004)  (Parm)
	bool                                               bRequestedHiddenState;                                     // 0x0004(0x0004)  (Parm)
};

// Function GFxUI.GFxMoviePlayer.PlaySoundFromTheme
struct UGFxMoviePlayer_PlaySoundFromTheme_Params
{
	struct FName                                       EventName;                                                 // 0x0000(0x0008)  (Parm)
	struct FName                                       SoundThemeName;                                            // 0x0008(0x0008)  (OptionalParm, Parm)
};

// Function GFxUI.GFxMoviePlayer.OnFocusLost
struct UGFxMoviePlayer_OnFocusLost_Params
{
	int                                                LocalPlayerIndex;                                          // 0x0000(0x0004)  (Parm)
};

// Function GFxUI.GFxMoviePlayer.OnFocusGained
struct UGFxMoviePlayer_OnFocusGained_Params
{
	int                                                LocalPlayerIndex;                                          // 0x0000(0x0004)  (Parm)
};

// Function GFxUI.GFxMoviePlayer.ConsoleCommand
struct UGFxMoviePlayer_ConsoleCommand_Params
{
	struct FString                                     Command;                                                   // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.GetPC
struct UGFxMoviePlayer_GetPC_Params
{
	class APlayerController*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetLP
struct UGFxMoviePlayer_GetLP_Params
{
	class ULocalPlayer*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.Init
struct UGFxMoviePlayer_Init_Params
{
	class ULocalPlayer*                                LocPlay;                                                   // 0x0000(0x0008)  (OptionalParm, Parm)
};

// Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding
struct UGFxMoviePlayer_SetWidgetPathBinding_Params
{
	class UGFxObject*                                  WidgetToBind;                                              // 0x0000(0x0008)  (Parm)
	struct FName                                       Path;                                                      // 0x0008(0x0008)  (Parm)
};

// Function GFxUI.GFxMoviePlayer.PostWidgetInit
struct UGFxMoviePlayer_PostWidgetInit_Params
{
};

// Function GFxUI.GFxMoviePlayer.WidgetUnloaded
struct UGFxMoviePlayer_WidgetUnloaded_Params
{
	struct FName                                       WidgetName;                                                // 0x0000(0x0008)  (Parm)
	struct FName                                       WidgetPath;                                                // 0x0008(0x0008)  (Parm)
	class UGFxObject*                                  Widget;                                                    // 0x0010(0x0008)  (Parm)
	bool                                               ReturnValue;                                               // 0x0018(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.WidgetInitialized
struct UGFxMoviePlayer_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                                // 0x0000(0x0008)  (Parm)
	struct FName                                       WidgetPath;                                                // 0x0008(0x0008)  (Parm)
	class UGFxObject*                                  Widget;                                                    // 0x0010(0x0008)  (Parm)
	bool                                               ReturnValue;                                               // 0x0018(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptString
struct UGFxMoviePlayer_ActionScriptString_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptFloat
struct UGFxMoviePlayer_ActionScriptFloat_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, NeedCtorLink)
	float                                              ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptInt
struct UGFxMoviePlayer_ActionScriptInt_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, NeedCtorLink)
	int                                                ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptVoid
struct UGFxMoviePlayer_ActionScriptVoid_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer._Invoke
struct UGFxMoviePlayer__Invoke_Params
{
	struct FString                                     method;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
	TArray<struct FASValue>                            args;                                                      // 0x0010(0x0010)  (Parm, NeedCtorLink)
	struct FASValue                                    ReturnValue;                                               // 0x0020(0x0028)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction
struct UGFxMoviePlayer_ActionScriptSetFunction_Params
{
	class UGFxObject*                                  Object;                                                    // 0x0000(0x0008)  (Parm)
	struct FString                                     Member;                                                    // 0x0008(0x0010)  (Parm, NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.CreateArray
struct UGFxMoviePlayer_CreateArray_Params
{
	class UClass*                                      Type;                                                      // 0x0000(0x0008)  (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.CreateObject
struct UGFxMoviePlayer_CreateObject_Params
{
	struct FString                                     ASClass;                                                   // 0x0000(0x0010)  (Parm, NeedCtorLink)
	class UClass*                                      Type;                                                      // 0x0010(0x0008)  (OptionalParm, Parm)
	TArray<struct FASValue>                            args;                                                      // 0x0018(0x0010)  (OptionalParm, Parm, NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                               // 0x0028(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableStringArray
struct UGFxMoviePlayer_SetVariableStringArray_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, NeedCtorLink)
	int                                                Index;                                                     // 0x0010(0x0004)  (Parm)
	TArray<struct FString>                             Arg;                                                       // 0x0014(0x0010)  (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0024(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableFloatArray
struct UGFxMoviePlayer_SetVariableFloatArray_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, NeedCtorLink)
	int                                                Index;                                                     // 0x0010(0x0004)  (Parm)
	TArray<float>                                      Arg;                                                       // 0x0014(0x0010)  (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0024(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableIntArray
struct UGFxMoviePlayer_SetVariableIntArray_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, NeedCtorLink)
	int                                                Index;                                                     // 0x0010(0x0004)  (Parm)
	TArray<int>                                        Arg;                                                       // 0x0014(0x0010)  (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0024(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableArray
struct UGFxMoviePlayer_SetVariableArray_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, NeedCtorLink)
	int                                                Index;                                                     // 0x0010(0x0004)  (Parm)
	TArray<struct FASValue>                            Arg;                                                       // 0x0014(0x0010)  (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0024(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableStringArray
struct UGFxMoviePlayer_GetVariableStringArray_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, NeedCtorLink)
	int                                                Index;                                                     // 0x0010(0x0004)  (Parm)
	TArray<struct FString>                             Arg;                                                       // 0x0014(0x0010)  (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0024(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableFloatArray
struct UGFxMoviePlayer_GetVariableFloatArray_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, NeedCtorLink)
	int                                                Index;                                                     // 0x0010(0x0004)  (Parm)
	TArray<float>                                      Arg;                                                       // 0x0014(0x0010)  (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0024(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableIntArray
struct UGFxMoviePlayer_GetVariableIntArray_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, NeedCtorLink)
	int                                                Index;                                                     // 0x0010(0x0004)  (Parm)
	TArray<int>                                        Arg;                                                       // 0x0014(0x0010)  (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0024(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableArray
struct UGFxMoviePlayer_GetVariableArray_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, NeedCtorLink)
	int                                                Index;                                                     // 0x0010(0x0004)  (Parm)
	TArray<struct FASValue>                            Arg;                                                       // 0x0014(0x0010)  (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0024(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableObject
struct UGFxMoviePlayer_SetVariableObject_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, NeedCtorLink)
	class UGFxObject*                                  Object;                                                    // 0x0010(0x0008)  (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableString
struct UGFxMoviePlayer_SetVariableString_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     S;                                                         // 0x0010(0x0010)  (Parm, NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.SetVariableInt
struct UGFxMoviePlayer_SetVariableInt_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, NeedCtorLink)
	int                                                I;                                                         // 0x0010(0x0004)  (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableNumber
struct UGFxMoviePlayer_SetVariableNumber_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, NeedCtorLink)
	float                                              F;                                                         // 0x0010(0x0004)  (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableBool
struct UGFxMoviePlayer_SetVariableBool_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, NeedCtorLink)
	bool                                               B;                                                         // 0x0010(0x0004)  (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetVariable
struct UGFxMoviePlayer_SetVariable_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, NeedCtorLink)
	struct FASValue                                    Arg;                                                       // 0x0010(0x0028)  (Parm, NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.GetVariableObject
struct UGFxMoviePlayer_GetVariableObject_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, NeedCtorLink)
	class UClass*                                      Type;                                                      // 0x0010(0x0008)  (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableString
struct UGFxMoviePlayer_GetVariableString_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.GetVariableInt
struct UGFxMoviePlayer_GetVariableInt_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, NeedCtorLink)
	int                                                ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableNumber
struct UGFxMoviePlayer_GetVariableNumber_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, NeedCtorLink)
	float                                              ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableBool
struct UGFxMoviePlayer_GetVariableBool_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariable
struct UGFxMoviePlayer_GetVariable_Params
{
	struct FString                                     Path;                                                      // 0x0000(0x0010)  (Parm, NeedCtorLink)
	struct FASValue                                    ReturnValue;                                               // 0x0010(0x0028)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.GetAVMVersion
struct UGFxMoviePlayer_GetAVMVersion_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.FilterButtonInput
struct UGFxMoviePlayer_FilterButtonInput_Params
{
	int                                                ControllerId;                                              // 0x0000(0x0004)  (Parm)
	struct FName                                       ButtonName;                                                // 0x0004(0x0008)  (Parm)
	TEnumAsByte<Core_EInputEvent>                      InputEvent;                                                // 0x000C(0x0001)  (Parm)
	bool                                               ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.FlushPlayerInput
struct UGFxMoviePlayer_FlushPlayerInput_Params
{
	bool                                               capturekeysonly;                                           // 0x0000(0x0004)  (Parm)
};

// Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys
struct UGFxMoviePlayer_ClearFocusIgnoreKeys_Params
{
};

// Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey
struct UGFxMoviePlayer_AddFocusIgnoreKey_Params
{
	struct FName                                       Key;                                                       // 0x0000(0x0008)  (Parm)
};

// Function GFxUI.GFxMoviePlayer.ClearCaptureKeys
struct UGFxMoviePlayer_ClearCaptureKeys_Params
{
};

// Function GFxUI.GFxMoviePlayer.AddCaptureKey
struct UGFxMoviePlayer_AddCaptureKey_Params
{
	struct FName                                       Key;                                                       // 0x0000(0x0008)  (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput
struct UGFxMoviePlayer_SetMovieCanReceiveInput_Params
{
	bool                                               bCanReceiveInput;                                          // 0x0000(0x0004)  (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus
struct UGFxMoviePlayer_SetMovieCanReceiveFocus_Params
{
	bool                                               bCanReceiveFocus;                                          // 0x0000(0x0004)  (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetPerspective3D
struct UGFxMoviePlayer_SetPerspective3D_Params
{
	struct FMatrix                                     matPersp;                                                  // 0x0000(0x0040)  (Const, Parm, OutParm)
};

// Function GFxUI.GFxMoviePlayer.SetView3D
struct UGFxMoviePlayer_SetView3D_Params
{
	struct FMatrix                                     matView;                                                   // 0x0000(0x0040)  (Const, Parm, OutParm)
};

// Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect
struct UGFxMoviePlayer_GetVisibleFrameRect_Params
{
	float                                              x0;                                                        // 0x0000(0x0004)  (Parm, OutParm)
	float                                              y0;                                                        // 0x0004(0x0004)  (Parm, OutParm)
	float                                              X1;                                                        // 0x0008(0x0004)  (Parm, OutParm)
	float                                              Y1;                                                        // 0x000C(0x0004)  (Parm, OutParm)
};

// Function GFxUI.GFxMoviePlayer.SetAlignment
struct UGFxMoviePlayer_SetAlignment_Params
{
	TEnumAsByte<GFxUI_EGFxAlign>                       A;                                                         // 0x0000(0x0001)  (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetViewScaleMode
struct UGFxMoviePlayer_SetViewScaleMode_Params
{
	TEnumAsByte<GFxUI_EGFxScaleMode>                   SM;                                                        // 0x0000(0x0001)  (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetViewport
struct UGFxMoviePlayer_SetViewport_Params
{
	int                                                X;                                                         // 0x0000(0x0004)  (Parm)
	int                                                Y;                                                         // 0x0004(0x0004)  (Parm)
	int                                                Width;                                                     // 0x0008(0x0004)  (Parm)
	int                                                Height;                                                    // 0x000C(0x0004)  (Parm)
};

// Function GFxUI.GFxMoviePlayer.GetGameViewportClient
struct UGFxMoviePlayer_GetGameViewportClient_Params
{
	class UGameViewportClient*                         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetPriority
struct UGFxMoviePlayer_SetPriority_Params
{
	unsigned char                                      NewPriority;                                               // 0x0000(0x0001)  (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetExternalTextureEx
struct UGFxMoviePlayer_SetExternalTextureEx_Params
{
	struct FString                                     Resource;                                                  // 0x0000(0x0010)  (Parm, NeedCtorLink)
	class UTexture*                                    Texture;                                                   // 0x0010(0x0008)  (Parm)
	int                                                targetWidth;                                               // 0x0018(0x0004)  (Parm)
	int                                                targetHeight;                                              // 0x001C(0x0004)  (Parm)
	bool                                               targetStretch;                                             // 0x0020(0x0004)  (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // 0x0024(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetExternalTexture
struct UGFxMoviePlayer_SetExternalTexture_Params
{
	struct FString                                     Resource;                                                  // 0x0000(0x0010)  (Parm, NeedCtorLink)
	class UTexture*                                    Texture;                                                   // 0x0010(0x0008)  (Parm)
	bool                                               ReturnValue;                                               // 0x0018(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetExternalInterface
struct UGFxMoviePlayer_SetExternalInterface_Params
{
	class UObject*                                     H;                                                         // 0x0000(0x0008)  (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetTimingMode
struct UGFxMoviePlayer_SetTimingMode_Params
{
	TEnumAsByte<GFxUI_EGFxTimingMode>                  Mode;                                                      // 0x0000(0x0001)  (Parm)
};

// Function GFxUI.GFxMoviePlayer.SetMovieInfo
struct UGFxMoviePlayer_SetMovieInfo_Params
{
	class USwfMovie*                                   Data;                                                      // 0x0000(0x0008)  (Parm)
};

// Function GFxUI.GFxMoviePlayer.ConditionalClearPause
struct UGFxMoviePlayer_ConditionalClearPause_Params
{
};

// Function GFxUI.GFxMoviePlayer.OnCleanup
struct UGFxMoviePlayer_OnCleanup_Params
{
};

// Function GFxUI.GFxMoviePlayer.OnClose
struct UGFxMoviePlayer_OnClose_Params
{
};

// Function GFxUI.GFxMoviePlayer.Close
struct UGFxMoviePlayer_Close_Params
{
	bool                                               Unload;                                                    // 0x0000(0x0004)  (OptionalParm, Parm)
};

// Function GFxUI.GFxMoviePlayer.SetPause
struct UGFxMoviePlayer_SetPause_Params
{
	bool                                               bPausePlayback;                                            // 0x0000(0x0004)  (OptionalParm, Parm)
};

// Function GFxUI.GFxMoviePlayer.OnPostAdvance
struct UGFxMoviePlayer_OnPostAdvance_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm)
};

// Function GFxUI.GFxMoviePlayer.PostAdvance
struct UGFxMoviePlayer_PostAdvance_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm)
};

// Function GFxUI.GFxMoviePlayer.Advance
struct UGFxMoviePlayer_Advance_Params
{
	float                                              Time;                                                      // 0x0000(0x0004)  (Parm)
};

// Function GFxUI.GFxMoviePlayer.Start
struct UGFxMoviePlayer_Start_Params
{
	bool                                               StartPaused;                                               // 0x0000(0x0004)  (OptionalParm, Parm)
	bool                                               ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.DestroyGFxObject
struct UGFxObject_DestroyGFxObject_Params
{
};

// Function GFxUI.GFxObject.WidgetUnloaded
struct UGFxObject_WidgetUnloaded_Params
{
	struct FName                                       WidgetName;                                                // 0x0000(0x0008)  (Parm)
	struct FName                                       WidgetPath;                                                // 0x0008(0x0008)  (Parm)
	class UGFxObject*                                  Widget;                                                    // 0x0010(0x0008)  (Parm)
	bool                                               ReturnValue;                                               // 0x0018(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.WidgetInitialized
struct UGFxObject_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                                // 0x0000(0x0008)  (Parm)
	struct FName                                       WidgetPath;                                                // 0x0008(0x0008)  (Parm)
	class UGFxObject*                                  Widget;                                                    // 0x0010(0x0008)  (Parm)
	bool                                               ReturnValue;                                               // 0x0018(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GotoAndStopI
struct UGFxObject_GotoAndStopI_Params
{
	int                                                frame;                                                     // 0x0000(0x0004)  (Parm)
};

// Function GFxUI.GFxObject.GotoAndStop
struct UGFxObject_GotoAndStop_Params
{
	struct FString                                     frame;                                                     // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function GFxUI.GFxObject.GotoAndPlayI
struct UGFxObject_GotoAndPlayI_Params
{
	int                                                frame;                                                     // 0x0000(0x0004)  (Parm)
};

// Function GFxUI.GFxObject.GotoAndPlay
struct UGFxObject_GotoAndPlay_Params
{
	struct FString                                     frame;                                                     // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function GFxUI.GFxObject.ActionScriptString
struct UGFxObject_ActionScriptString_Params
{
	struct FString                                     method;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxObject.ActionScriptFloat
struct UGFxObject_ActionScriptFloat_Params
{
	struct FString                                     method;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
	float                                              ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.ActionScriptInt
struct UGFxObject_ActionScriptInt_Params
{
	struct FString                                     method;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
	int                                                ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.ActionScriptVoid
struct UGFxObject_ActionScriptVoid_Params
{
	struct FString                                     method;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function GFxUI.GFxObject._Invoke
struct UGFxObject__Invoke_Params
{
	struct FString                                     Member;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
	TArray<struct FASValue>                            args;                                                      // 0x0010(0x0010)  (Parm, NeedCtorLink)
	struct FASValue                                    ReturnValue;                                               // 0x0020(0x0028)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxObject.ActionScriptSetFunctionOn
struct UGFxObject_ActionScriptSetFunctionOn_Params
{
	class UGFxObject*                                  Target;                                                    // 0x0000(0x0008)  (Parm)
	struct FString                                     Member;                                                    // 0x0008(0x0010)  (Parm, NeedCtorLink)
};

// Function GFxUI.GFxObject.ActionScriptSetFunction
struct UGFxObject_ActionScriptSetFunction_Params
{
	struct FString                                     Member;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function GFxUI.GFxObject.SetElementMemberString
struct UGFxObject_SetElementMemberString_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	struct FString                                     Member;                                                    // 0x0004(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     S;                                                         // 0x0014(0x0010)  (Parm, NeedCtorLink)
};

// Function GFxUI.GFxObject.SetElementMemberInt
struct UGFxObject_SetElementMemberInt_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	struct FString                                     Member;                                                    // 0x0004(0x0010)  (Parm, NeedCtorLink)
	int                                                I;                                                         // 0x0014(0x0004)  (Parm)
};

// Function GFxUI.GFxObject.SetElementMemberFloat
struct UGFxObject_SetElementMemberFloat_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	struct FString                                     Member;                                                    // 0x0004(0x0010)  (Parm, NeedCtorLink)
	float                                              F;                                                         // 0x0014(0x0004)  (Parm)
};

// Function GFxUI.GFxObject.SetElementMemberBool
struct UGFxObject_SetElementMemberBool_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	struct FString                                     Member;                                                    // 0x0004(0x0010)  (Parm, NeedCtorLink)
	bool                                               B;                                                         // 0x0014(0x0004)  (Parm)
};

// Function GFxUI.GFxObject.SetElementMemberObject
struct UGFxObject_SetElementMemberObject_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	struct FString                                     Member;                                                    // 0x0004(0x0010)  (Parm, NeedCtorLink)
	class UGFxObject*                                  val;                                                       // 0x0014(0x0008)  (Parm)
};

// Function GFxUI.GFxObject.SetElementMember
struct UGFxObject_SetElementMember_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	struct FString                                     Member;                                                    // 0x0004(0x0010)  (Parm, NeedCtorLink)
	struct FASValue                                    Arg;                                                       // 0x0014(0x0028)  (Parm, NeedCtorLink)
};

// Function GFxUI.GFxObject.GetElementMemberString
struct UGFxObject_GetElementMemberString_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	struct FString                                     Member;                                                    // 0x0004(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                               // 0x0014(0x0010)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxObject.GetElementMemberInt
struct UGFxObject_GetElementMemberInt_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	struct FString                                     Member;                                                    // 0x0004(0x0010)  (Parm, NeedCtorLink)
	int                                                ReturnValue;                                               // 0x0014(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetElementMemberFloat
struct UGFxObject_GetElementMemberFloat_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	struct FString                                     Member;                                                    // 0x0004(0x0010)  (Parm, NeedCtorLink)
	float                                              ReturnValue;                                               // 0x0014(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetElementMemberBool
struct UGFxObject_GetElementMemberBool_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	struct FString                                     Member;                                                    // 0x0004(0x0010)  (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0014(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetElementMemberObject
struct UGFxObject_GetElementMemberObject_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	struct FString                                     Member;                                                    // 0x0004(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     SourceFile;                                                // 0x0014(0x0010)  (OptionalParm, Parm, NeedCtorLink)
	int                                                SourceLine;                                                // 0x0024(0x0004)  (OptionalParm, Parm)
	class UClass*                                      Type;                                                      // 0x0028(0x0008)  (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                               // 0x0030(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetElementMemberObjectEx
struct UGFxObject_GetElementMemberObjectEx_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	struct FString                                     Member;                                                    // 0x0004(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     SourceFile;                                                // 0x0014(0x0010)  (OptionalParm, Parm, NeedCtorLink)
	int                                                SourceLine;                                                // 0x0024(0x0004)  (OptionalParm, Parm)
	class UClass*                                      Type;                                                      // 0x0028(0x0008)  (OptionalParm, Parm)
	struct FString                                     ASClass;                                                   // 0x0030(0x0010)  (OptionalParm, Parm, NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                               // 0x0040(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetElementMember
struct UGFxObject_GetElementMember_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	struct FString                                     Member;                                                    // 0x0004(0x0010)  (Parm, NeedCtorLink)
	struct FASValue                                    ReturnValue;                                               // 0x0014(0x0028)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxObject.SetElementColorTransform
struct UGFxObject_SetElementColorTransform_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	struct FASColorTransform                           cxform;                                                    // 0x0004(0x0020)  (Parm)
};

// Function GFxUI.GFxObject.SetElementPosition
struct UGFxObject_SetElementPosition_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	float                                              X;                                                         // 0x0004(0x0004)  (Parm)
	float                                              Y;                                                         // 0x0008(0x0004)  (Parm)
};

// Function GFxUI.GFxObject.SetElementVisible
struct UGFxObject_SetElementVisible_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	bool                                               Visible;                                                   // 0x0004(0x0004)  (Parm)
};

// Function GFxUI.GFxObject.SetElementDisplayMatrix
struct UGFxObject_SetElementDisplayMatrix_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	struct FMatrix                                     M;                                                         // 0x0010(0x0040)  (Parm)
};

// Function GFxUI.GFxObject.SetElementDisplayInfo
struct UGFxObject_SetElementDisplayInfo_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	struct FASDisplayInfo                              D;                                                         // 0x0004(0x002C)  (Parm)
};

// Function GFxUI.GFxObject.GetElementDisplayMatrix
struct UGFxObject_GetElementDisplayMatrix_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	struct FMatrix                                     ReturnValue;                                               // 0x0010(0x0040)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetElementDisplayInfo
struct UGFxObject_GetElementDisplayInfo_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	struct FASDisplayInfo                              ReturnValue;                                               // 0x0004(0x002C)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.SetElementString
struct UGFxObject_SetElementString_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	struct FString                                     S;                                                         // 0x0004(0x0010)  (Parm, NeedCtorLink)
};

// Function GFxUI.GFxObject.SetElementInt
struct UGFxObject_SetElementInt_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	int                                                I;                                                         // 0x0004(0x0004)  (Parm)
};

// Function GFxUI.GFxObject.SetElementFloat
struct UGFxObject_SetElementFloat_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	float                                              F;                                                         // 0x0004(0x0004)  (Parm)
};

// Function GFxUI.GFxObject.SetElementBool
struct UGFxObject_SetElementBool_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	bool                                               B;                                                         // 0x0004(0x0004)  (Parm)
};

// Function GFxUI.GFxObject.SetElementObject
struct UGFxObject_SetElementObject_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	class UGFxObject*                                  val;                                                       // 0x0004(0x0008)  (Parm)
};

// Function GFxUI.GFxObject.SetElement
struct UGFxObject_SetElement_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	struct FASValue                                    Arg;                                                       // 0x0004(0x0028)  (Parm, NeedCtorLink)
};

// Function GFxUI.GFxObject.GetElementString
struct UGFxObject_GetElementString_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	struct FString                                     ReturnValue;                                               // 0x0004(0x0010)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxObject.GetElementInt
struct UGFxObject_GetElementInt_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetElementFloat
struct UGFxObject_GetElementFloat_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	float                                              ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetElementBool
struct UGFxObject_GetElementBool_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	bool                                               ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetElementObject
struct UGFxObject_GetElementObject_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	struct FString                                     SourceFile;                                                // 0x0004(0x0010)  (OptionalParm, Parm, NeedCtorLink)
	int                                                SourceLine;                                                // 0x0014(0x0004)  (OptionalParm, Parm)
	class UClass*                                      Type;                                                      // 0x0018(0x0008)  (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetElementObjectEx
struct UGFxObject_GetElementObjectEx_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	struct FString                                     SourceFile;                                                // 0x0004(0x0010)  (OptionalParm, Parm, NeedCtorLink)
	int                                                SourceLine;                                                // 0x0014(0x0004)  (OptionalParm, Parm)
	class UClass*                                      Type;                                                      // 0x0018(0x0008)  (OptionalParm, Parm)
	struct FString                                     ASClass;                                                   // 0x0020(0x0010)  (OptionalParm, Parm, NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                               // 0x0030(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetElement
struct UGFxObject_GetElement_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm)
	struct FASValue                                    ReturnValue;                                               // 0x0004(0x0028)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxObject.SetText
struct UGFxObject_SetText_Params
{
	struct FString                                     Text;                                                      // 0x0000(0x0010)  (Parm, CoerceParm, NeedCtorLink)
	class UTranslationContext*                         InContext;                                                 // 0x0010(0x0008)  (OptionalParm, Parm)
};

// Function GFxUI.GFxObject.GetText
struct UGFxObject_GetText_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxObject.SetVisible
struct UGFxObject_SetVisible_Params
{
	bool                                               Visible;                                                   // 0x0000(0x0004)  (Parm)
};

// Function GFxUI.GFxObject.SetDisplayMatrix3D
struct UGFxObject_SetDisplayMatrix3D_Params
{
	struct FMatrix                                     M;                                                         // 0x0000(0x0040)  (Parm)
};

// Function GFxUI.GFxObject.SetDisplayMatrix
struct UGFxObject_SetDisplayMatrix_Params
{
	struct FMatrix                                     M;                                                         // 0x0000(0x0040)  (Parm)
};

// Function GFxUI.GFxObject.SetColorTransform
struct UGFxObject_SetColorTransform_Params
{
	struct FASColorTransform                           cxform;                                                    // 0x0000(0x0020)  (Parm)
};

// Function GFxUI.GFxObject.SetPosition
struct UGFxObject_SetPosition_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (Parm)
	float                                              Y;                                                         // 0x0004(0x0004)  (Parm)
};

// Function GFxUI.GFxObject.SetDisplayInfo
struct UGFxObject_SetDisplayInfo_Params
{
	struct FASDisplayInfo                              D;                                                         // 0x0000(0x002C)  (Parm)
};

// Function GFxUI.GFxObject.GetDisplayMatrix3D
struct UGFxObject_GetDisplayMatrix3D_Params
{
	struct FMatrix                                     ReturnValue;                                               // 0x0000(0x0040)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetDisplayMatrix
struct UGFxObject_GetDisplayMatrix_Params
{
	struct FMatrix                                     ReturnValue;                                               // 0x0000(0x0040)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetColorTransform
struct UGFxObject_GetColorTransform_Params
{
	struct FASColorTransform                           ReturnValue;                                               // 0x0000(0x0020)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetPosition
struct UGFxObject_GetPosition_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (Parm, OutParm)
	float                                              Y;                                                         // 0x0004(0x0004)  (Parm, OutParm)
	bool                                               ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetDisplayInfo
struct UGFxObject_GetDisplayInfo_Params
{
	struct FASDisplayInfo                              ReturnValue;                                               // 0x0000(0x002C)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.TranslateString
struct UGFxObject_TranslateString_Params
{
	struct FString                                     StringToTranslate;                                         // 0x0000(0x0010)  (Parm, NeedCtorLink)
	class UTranslationContext*                         InContext;                                                 // 0x0010(0x0008)  (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                               // 0x0018(0x0010)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxObject.SetFunction
struct UGFxObject_SetFunction_Params
{
	struct FString                                     Member;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
	class UObject*                                     context;                                                   // 0x0010(0x0008)  (Parm)
	struct FName                                       fname;                                                     // 0x0018(0x0008)  (Parm)
};

// Function GFxUI.GFxObject.SetObject
struct UGFxObject_SetObject_Params
{
	struct FString                                     Member;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
	class UGFxObject*                                  val;                                                       // 0x0010(0x0008)  (Parm)
};

// Function GFxUI.GFxObject.SetString
struct UGFxObject_SetString_Params
{
	struct FString                                     Member;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     S;                                                         // 0x0010(0x0010)  (Parm, NeedCtorLink)
	class UTranslationContext*                         InContext;                                                 // 0x0020(0x0008)  (OptionalParm, Parm)
};

// Function GFxUI.GFxObject.SetInt
struct UGFxObject_SetInt_Params
{
	struct FString                                     Member;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
	int                                                I;                                                         // 0x0010(0x0004)  (Parm)
};

// Function GFxUI.GFxObject.SetFloat
struct UGFxObject_SetFloat_Params
{
	struct FString                                     Member;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
	float                                              F;                                                         // 0x0010(0x0004)  (Parm)
};

// Function GFxUI.GFxObject.SetBool
struct UGFxObject_SetBool_Params
{
	struct FString                                     Member;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
	bool                                               B;                                                         // 0x0010(0x0004)  (Parm)
};

// Function GFxUI.GFxObject.Set
struct UGFxObject_Set_Params
{
	struct FString                                     Member;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
	struct FASValue                                    Arg;                                                       // 0x0010(0x0028)  (Parm, NeedCtorLink)
};

// Function GFxUI.GFxObject.IsObject
struct UGFxObject_IsObject_Params
{
	struct FString                                     Member;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.IsString
struct UGFxObject_IsString_Params
{
	struct FString                                     Member;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.IsInt
struct UGFxObject_IsInt_Params
{
	struct FString                                     Member;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.IsFloat
struct UGFxObject_IsFloat_Params
{
	struct FString                                     Member;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.IsBool
struct UGFxObject_IsBool_Params
{
	struct FString                                     Member;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetObject
struct UGFxObject_GetObject_Params
{
	struct FString                                     Member;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     SourceFile;                                                // 0x0010(0x0010)  (OptionalParm, Parm, NeedCtorLink)
	int                                                SourceLine;                                                // 0x0020(0x0004)  (OptionalParm, Parm)
	class UClass*                                      Type;                                                      // 0x0024(0x0008)  (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                               // 0x002C(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetString
struct UGFxObject_GetString_Params
{
	struct FString                                     Member;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxObject.GetInt
struct UGFxObject_GetInt_Params
{
	struct FString                                     Member;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
	int                                                ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetFloat
struct UGFxObject_GetFloat_Params
{
	struct FString                                     Member;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
	float                                              ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.GetBool
struct UGFxObject_GetBool_Params
{
	struct FString                                     Member;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxObject.Get
struct UGFxObject_Get_Params
{
	struct FString                                     Member;                                                    // 0x0000(0x0010)  (Parm, NeedCtorLink)
	struct FASValue                                    ReturnValue;                                               // 0x0010(0x0028)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.ASRemoveAllEventListeners
struct UGFxClikWidget_ASRemoveAllEventListeners_Params
{
	struct FString                                     Event;                                                     // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.AS3AddEventListener
struct UGFxClikWidget_AS3AddEventListener_Params
{
	struct FString                                     Type;                                                      // 0x0000(0x0010)  (Parm, NeedCtorLink)
	class UGFxObject*                                  O;                                                         // 0x0010(0x0008)  (Parm)
	bool                                               useCapture;                                                // 0x0018(0x0004)  (OptionalParm, Parm)
	int                                                listenerPriority;                                          // 0x001C(0x0004)  (OptionalParm, Parm)
	bool                                               useWeakReference;                                          // 0x0020(0x0004)  (OptionalParm, Parm)
};

// Function GFxUI.GFxClikWidget.ASAddEventListener
struct UGFxClikWidget_ASAddEventListener_Params
{
	struct FString                                     Type;                                                      // 0x0000(0x0010)  (Parm, NeedCtorLink)
	class UGFxObject*                                  O;                                                         // 0x0010(0x0008)  (Parm)
	struct FString                                     func;                                                      // 0x0018(0x0010)  (Parm, NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.SetListener
struct UGFxClikWidget_SetListener_Params
{
	class UGFxObject*                                  O;                                                         // 0x0000(0x0008)  (Parm)
	struct FString                                     Member;                                                    // 0x0008(0x0010)  (Parm, NeedCtorLink)
	struct FScriptDelegate                             Listener;                                                  // 0x0018(0x000C)  (Parm, NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.GetEventStringFromTypename
struct UGFxClikWidget_GetEventStringFromTypename_Params
{
	struct FName                                       Typename;                                                  // 0x0000(0x0008)  (Parm)
	struct FString                                     ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.RemoveAllEventListeners
struct UGFxClikWidget_RemoveAllEventListeners_Params
{
	struct FString                                     Event;                                                     // 0x0000(0x0010)  (Parm, NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.AddEventListener
struct UGFxClikWidget_AddEventListener_Params
{
	struct FName                                       Type;                                                      // 0x0000(0x0008)  (Parm)
	struct FScriptDelegate                             Listener;                                                  // 0x0008(0x000C)  (Parm, NeedCtorLink)
	bool                                               useCapture;                                                // 0x0018(0x0004)  (OptionalParm, Parm)
	int                                                listenerPriority;                                          // 0x001C(0x0004)  (OptionalParm, Parm)
	bool                                               useWeakReference;                                          // 0x0020(0x0004)  (OptionalParm, Parm)
};

// Function GFxUI.GFxClikWidget.EventListener
struct UGFxClikWidget_EventListener_Params
{
	struct FEventData                                  Data;                                                      // 0x0000(0x0034)  (Parm, NeedCtorLink)
};

// Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject
struct UGFxAction_CloseMovie_IsValidLevelSequenceObject_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject
struct UGFxAction_GetVariable_IsValidLevelSequenceObject_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject
struct UGFxAction_Invoke_IsValidLevelSequenceObject_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject
struct UGFxAction_OpenMovie_IsValidLevelSequenceObject_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject
struct UGFxAction_SetVariable_IsValidLevelSequenceObject_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand
struct UGFxFSCmdHandler_Kismet_FSCommand_Params
{
	class UGFxMoviePlayer*                             Movie;                                                     // 0x0000(0x0008)  (Parm)
	class UGFxEvent_FSCommand*                         Event;                                                     // 0x0008(0x0008)  (Parm)
	struct FString                                     Cmd;                                                       // 0x0010(0x0010)  (Parm, NeedCtorLink)
	struct FString                                     Arg;                                                       // 0x0020(0x0010)  (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                               // 0x0030(0x0004)  (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
