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
//		Name   -> Function GameFramework.GameAIController.GetActionString
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString AGameAIController::GetActionString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.GetActionString");

	AGameAIController_GetActionString_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAIController.SetDesiredRotation
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    TargetDesiredRotation                                      (Parm)
//		bool                                               InLockDesiredRotation                                      (OptionalParm, Parm)
//		bool                                               InUnlockWhenReached                                        (OptionalParm, Parm)
//		float                                              InterpolationTime                                          (OptionalParm, Parm)
void AGameAIController::SetDesiredRotation(const struct FRotator& TargetDesiredRotation, bool InLockDesiredRotation, bool InUnlockWhenReached, float InterpolationTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.SetDesiredRotation");

	AGameAIController_SetDesiredRotation_Params params {};
	params.TargetDesiredRotation = TargetDesiredRotation;
	params.InLockDesiredRotation = InLockDesiredRotation;
	params.InUnlockWhenReached = InUnlockWhenReached;
	params.InterpolationTime = InterpolationTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAIController.AILog_Internal
//		Flags  -> ()
// Parameters:
//		struct FString                                     LogText                                                    (Parm, CoerceParm, NeedCtorLink)
//		struct FName                                       LogCategory                                                (OptionalParm, Parm)
//		bool                                               bForce                                                     (OptionalParm, Parm)
void AGameAIController::AILog_Internal(const struct FString& LogText, const struct FName& LogCategory, bool bForce)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.AILog_Internal");

	AGameAIController_AILog_Internal_Params params {};
	params.LogText = LogText;
	params.LogCategory = LogCategory;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAIController.RecordDemoAILog
//		Flags  -> ()
// Parameters:
//		struct FString                                     LogText                                                    (Parm, CoerceParm, NeedCtorLink)
void AGameAIController::RecordDemoAILog(const struct FString& LogText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.RecordDemoAILog");

	AGameAIController_RecordDemoAILog_Params params {};
	params.LogText = LogText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAIController.Destroyed
//		Flags  -> ()
void AGameAIController::Destroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.Destroyed");

	AGameAIController_Destroyed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAIController.ReachedIntermediateMoveGoal
//		Flags  -> ()
void AGameAIController::ReachedIntermediateMoveGoal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.ReachedIntermediateMoveGoal");

	AGameAIController_ReachedIntermediateMoveGoal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAIController.ReachedMoveGoal
//		Flags  -> ()
void AGameAIController::ReachedMoveGoal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.ReachedMoveGoal");

	AGameAIController_ReachedMoveGoal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAIController.GetDestinationOffset
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float AGameAIController::GetDestinationOffset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.GetDestinationOffset");

	AGameAIController_GetDestinationOffset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAIController.GetAICommandInStack
//		Flags  -> ()
// Parameters:
//		class UClass*                                      InClass                                                    (Const, Parm)
//		class UGameAICommand*                              ReturnValue                                                (Parm, OutParm, ReturnParm)
class UGameAICommand* AGameAIController::GetAICommandInStack(class UClass* InClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.GetAICommandInStack");

	AGameAIController_GetAICommandInStack_Params params {};
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAIController.FindCommandOfClass
//		Flags  -> ()
// Parameters:
//		class UClass*                                      SearchClass                                                (Parm)
//		class UGameAICommand*                              ReturnValue                                                (Parm, OutParm, ReturnParm, CoerceParm)
class UGameAICommand* AGameAIController::FindCommandOfClass(class UClass* SearchClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.FindCommandOfClass");

	AGameAIController_FindCommandOfClass_Params params {};
	params.SearchClass = SearchClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAIController.DumpCommandStack
//		Flags  -> ()
void AGameAIController::DumpCommandStack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.DumpCommandStack");

	AGameAIController_DumpCommandStack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAIController.CheckCommandCount
//		Flags  -> ()
void AGameAIController::CheckCommandCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.CheckCommandCount");

	AGameAIController_CheckCommandCount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAIController.GetActiveCommand
//		Flags  -> ()
// Parameters:
//		class UGameAICommand*                              ReturnValue                                                (Parm, OutParm, ReturnParm)
class UGameAICommand* AGameAIController::GetActiveCommand()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.GetActiveCommand");

	AGameAIController_GetActiveCommand_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAIController.AbortCommand
//		Flags  -> ()
// Parameters:
//		class UGameAICommand*                              AbortCmd                                                   (Parm)
//		class UClass*                                      AbortClass                                                 (OptionalParm, Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AGameAIController::AbortCommand(class UGameAICommand* AbortCmd, class UClass* AbortClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.AbortCommand");

	AGameAIController_AbortCommand_Params params {};
	params.AbortCmd = AbortCmd;
	params.AbortClass = AbortClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAIController.PopCommand
//		Flags  -> ()
// Parameters:
//		class UGameAICommand*                              ToBePoppedCommand                                          (Parm)
void AGameAIController::PopCommand(class UGameAICommand* ToBePoppedCommand)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.PopCommand");

	AGameAIController_PopCommand_Params params {};
	params.ToBePoppedCommand = ToBePoppedCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAIController.PushCommand
//		Flags  -> ()
// Parameters:
//		class UGameAICommand*                              NewCommand                                                 (Parm)
void AGameAIController::PushCommand(class UGameAICommand* NewCommand)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.PushCommand");

	AGameAIController_PushCommand_Params params {};
	params.NewCommand = NewCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAIController.AllCommands
//		Flags  -> ()
// Parameters:
//		class UClass*                                      BaseClass                                                  (Parm)
//		class UGameAICommand*                              Cmd                                                        (Parm, OutParm)
void AGameAIController::AllCommands(class UClass* BaseClass, class UGameAICommand** Cmd)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.AllCommands");

	AGameAIController_AllCommands_Params params {};
	params.BaseClass = BaseClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Cmd != nullptr)
		*Cmd = params.Cmd;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICommand.HandlePathObstruction
//		Flags  -> ()
// Parameters:
//		class AActor*                                      BlockedBy                                                  (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameAICommand::HandlePathObstruction(class AActor* BlockedBy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.HandlePathObstruction");

	UGameAICommand_HandlePathObstruction_Params params {};
	params.BlockedBy = BlockedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICommand.MoveUnreachable
//		Flags  -> ()
// Parameters:
//		struct FVector                                     AttemptedDest                                              (Parm)
//		class AActor*                                      AttemptedTarget                                            (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameAICommand::MoveUnreachable(const struct FVector& AttemptedDest, class AActor* AttemptedTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.MoveUnreachable");

	UGameAICommand_MoveUnreachable_Params params {};
	params.AttemptedDest = AttemptedDest;
	params.AttemptedTarget = AttemptedTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICommand.NotifyNeedRepath
//		Flags  -> ()
void UGameAICommand::NotifyNeedRepath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.NotifyNeedRepath");

	UGameAICommand_NotifyNeedRepath_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICommand.GetDebugVerboseText
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UGameAICommand::GetDebugVerboseText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.GetDebugVerboseText");

	UGameAICommand_GetDebugVerboseText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICommand.GetDebugOverheadText
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           PC                                                         (Parm)
//		TArray<struct FString>                             OutText                                                    (Parm, OutParm, NeedCtorLink)
void UGameAICommand::GetDebugOverheadText(class APlayerController* PC, TArray<struct FString>* OutText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.GetDebugOverheadText");

	UGameAICommand_GetDebugOverheadText_Params params {};
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutText != nullptr)
		*OutText = params.OutText;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICommand.DrawDebug
//		Flags  -> ()
// Parameters:
//		class AHUD*                                        H                                                          (Parm)
//		struct FName                                       Category                                                   (Parm)
void UGameAICommand::DrawDebug(class AHUD* H, const struct FName& Category)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.DrawDebug");

	UGameAICommand_DrawDebug_Params params {};
	params.H = H;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICommand.GetDumpString
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UGameAICommand::GetDumpString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.GetDumpString");

	UGameAICommand_GetDumpString_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICommand.Resumed
//		Flags  -> ()
// Parameters:
//		struct FName                                       OldCommandName                                             (Parm)
void UGameAICommand::Resumed(const struct FName& OldCommandName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.Resumed");

	UGameAICommand_Resumed_Params params {};
	params.OldCommandName = OldCommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICommand.Paused
//		Flags  -> ()
// Parameters:
//		class UGameAICommand*                              NewCommand                                                 (Parm)
void UGameAICommand::Paused(class UGameAICommand* NewCommand)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.Paused");

	UGameAICommand_Paused_Params params {};
	params.NewCommand = NewCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICommand.Popped
//		Flags  -> ()
void UGameAICommand::Popped()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.Popped");

	UGameAICommand_Popped_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICommand.Pushed
//		Flags  -> ()
void UGameAICommand::Pushed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.Pushed");

	UGameAICommand_Pushed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICommand.PostPopped
//		Flags  -> ()
void UGameAICommand::PostPopped()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.PostPopped");

	UGameAICommand_PostPopped_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICommand.PrePushed
//		Flags  -> ()
// Parameters:
//		class AGameAIController*                           AI                                                         (Parm)
void UGameAICommand::PrePushed(class AGameAIController* AI)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.PrePushed");

	UGameAICommand_PrePushed_Params params {};
	params.AI = AI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICommand.AllowStateTransitionTo
//		Flags  -> ()
// Parameters:
//		struct FName                                       StateName                                                  (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameAICommand::AllowStateTransitionTo(const struct FName& StateName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.AllowStateTransitionTo");

	UGameAICommand_AllowStateTransitionTo_Params params {};
	params.StateName = StateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICommand.AllowTransitionTo
//		Flags  -> ()
// Parameters:
//		class UClass*                                      AttemptCommand                                             (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameAICommand::AllowTransitionTo(class UClass* AttemptCommand)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.AllowTransitionTo");

	UGameAICommand_AllowTransitionTo_Params params {};
	params.AttemptCommand = AttemptCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICommand.Tick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (Parm)
void UGameAICommand::Tick(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.Tick");

	UGameAICommand_Tick_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICommand.ShouldIgnoreNotifies
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameAICommand::ShouldIgnoreNotifies()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.ShouldIgnoreNotifies");

	UGameAICommand_ShouldIgnoreNotifies_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICommand.InternalTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (Parm)
void UGameAICommand::InternalTick(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalTick");

	UGameAICommand_InternalTick_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICommand.InternalResumed
//		Flags  -> ()
// Parameters:
//		struct FName                                       OldCommandName                                             (Parm)
void UGameAICommand::InternalResumed(const struct FName& OldCommandName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalResumed");

	UGameAICommand_InternalResumed_Params params {};
	params.OldCommandName = OldCommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICommand.InternalPaused
//		Flags  -> ()
// Parameters:
//		class UGameAICommand*                              NewCommand                                                 (Parm)
void UGameAICommand::InternalPaused(class UGameAICommand* NewCommand)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalPaused");

	UGameAICommand_InternalPaused_Params params {};
	params.NewCommand = NewCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICommand.InternalPopped
//		Flags  -> ()
void UGameAICommand::InternalPopped()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalPopped");

	UGameAICommand_InternalPopped_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICommand.InternalPushed
//		Flags  -> ()
void UGameAICommand::InternalPushed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalPushed");

	UGameAICommand_InternalPushed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICommand.InternalPrePushed
//		Flags  -> ()
// Parameters:
//		class AGameAIController*                           AI                                                         (Parm)
void UGameAICommand::InternalPrePushed(class AGameAIController* AI)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalPrePushed");

	UGameAICommand_InternalPrePushed_Params params {};
	params.AI = AI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICommand.InitCommand
//		Flags  -> ()
// Parameters:
//		class AGameAIController*                           AI                                                         (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameAICommand::InitCommand(class AGameAIController* AI)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InitCommand");

	UGameAICommand_InitCommand_Params params {};
	params.AI = AI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICommand.InitCommandUserActor
//		Flags  -> ()
// Parameters:
//		class AGameAIController*                           AI                                                         (Parm)
//		class AActor*                                      UserActor                                                  (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameAICommand::InitCommandUserActor(class AGameAIController* AI, class AActor* UserActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InitCommandUserActor");

	UGameAICommand_InitCommandUserActor_Params params {};
	params.AI = AI;
	params.UserActor = UserActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GamePlayerController.ClientColorFade
//		Flags  -> ()
// Parameters:
//		struct FColor                                      FadeColor                                                  (Parm)
//		unsigned char                                      FromAlpha                                                  (Parm)
//		unsigned char                                      ToAlpha                                                    (Parm)
//		float                                              FadeTime                                                   (Parm)
void AGamePlayerController::ClientColorFade(const struct FColor& FadeColor, unsigned char FromAlpha, unsigned char ToAlpha, float FadeTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.ClientColorFade");

	AGamePlayerController_ClientColorFade_Params params {};
	params.FadeColor = FadeColor;
	params.FromAlpha = FromAlpha;
	params.ToAlpha = ToAlpha;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GamePlayerController.WarmupPause
//		Flags  -> (Exec, Event, Operator, Static, Const, Public, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
//		bool                                               bDesiredPauseState                                         (Parm)
void AGamePlayerController::STATIC_WarmupPause(bool bDesiredPauseState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.WarmupPause");

	AGamePlayerController_WarmupPause_Params params {};
	params.bDesiredPauseState = bDesiredPauseState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GamePlayerController.CanUnpauseWarmup
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AGamePlayerController::CanUnpauseWarmup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.CanUnpauseWarmup");

	AGamePlayerController_CanUnpauseWarmup_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GamePlayerController.GetCurrentMovie
//		Flags  -> ()
// Parameters:
//		struct FString                                     MovieName                                                  (Parm, OutParm, NeedCtorLink)
void AGamePlayerController::GetCurrentMovie(struct FString* MovieName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.GetCurrentMovie");

	AGamePlayerController_GetCurrentMovie_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MovieName != nullptr)
		*MovieName = params.MovieName;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GamePlayerController.ClientStopMovie
//		Flags  -> ()
// Parameters:
//		float                                              DelayInSeconds                                             (Parm)
//		bool                                               bAllowMovieToFinish                                        (Parm)
//		bool                                               bForceStopNonSkippable                                     (Parm)
//		bool                                               bForceStopLoadingMovie                                     (Parm)
void AGamePlayerController::ClientStopMovie(float DelayInSeconds, bool bAllowMovieToFinish, bool bForceStopNonSkippable, bool bForceStopLoadingMovie)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.ClientStopMovie");

	AGamePlayerController_ClientStopMovie_Params params {};
	params.DelayInSeconds = DelayInSeconds;
	params.bAllowMovieToFinish = bAllowMovieToFinish;
	params.bForceStopNonSkippable = bForceStopNonSkippable;
	params.bForceStopLoadingMovie = bForceStopLoadingMovie;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GamePlayerController.ClientPlayMovie
//		Flags  -> ()
// Parameters:
//		struct FString                                     MovieName                                                  (Parm, NeedCtorLink)
//		int                                                InStartOfRenderingMovieFrame                               (Parm)
//		int                                                InEndOfRenderingMovieFrame                                 (Parm)
//		bool                                               bRestrictPausing                                           (Parm)
//		bool                                               bPlayOnceFromStream                                        (Parm)
//		bool                                               bOnlyBackButtonSkipsMovie                                  (Parm)
void AGamePlayerController::ClientPlayMovie(const struct FString& MovieName, int InStartOfRenderingMovieFrame, int InEndOfRenderingMovieFrame, bool bRestrictPausing, bool bPlayOnceFromStream, bool bOnlyBackButtonSkipsMovie)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.ClientPlayMovie");

	AGamePlayerController_ClientPlayMovie_Params params {};
	params.MovieName = MovieName;
	params.InStartOfRenderingMovieFrame = InStartOfRenderingMovieFrame;
	params.InEndOfRenderingMovieFrame = InEndOfRenderingMovieFrame;
	params.bRestrictPausing = bRestrictPausing;
	params.bPlayOnceFromStream = bPlayOnceFromStream;
	params.bOnlyBackButtonSkipsMovie = bOnlyBackButtonSkipsMovie;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie
//		Flags  -> ()
void AGamePlayerController::KeepPlayingLoadingMovie()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie");

	AGamePlayerController_KeepPlayingLoadingMovie_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GamePlayerController.ShowLoadingMovie
//		Flags  -> ()
// Parameters:
//		bool                                               bShowMovie                                                 (Parm)
//		bool                                               bPauseAfterHide                                            (OptionalParm, Parm)
//		float                                              PauseDuration                                              (OptionalParm, Parm)
//		float                                              KeepPlayingDuration                                        (OptionalParm, Parm)
//		bool                                               bOverridePreviousDelays                                    (OptionalParm, Parm)
void AGamePlayerController::ShowLoadingMovie(bool bShowMovie, bool bPauseAfterHide, float PauseDuration, float KeepPlayingDuration, bool bOverridePreviousDelays)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.ShowLoadingMovie");

	AGamePlayerController_ShowLoadingMovie_Params params {};
	params.bShowMovie = bShowMovie;
	params.bPauseAfterHide = bPauseAfterHide;
	params.PauseDuration = PauseDuration;
	params.KeepPlayingDuration = KeepPlayingDuration;
	params.bOverridePreviousDelays = bOverridePreviousDelays;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GamePlayerController.SetSoundMode
//		Flags  -> ()
// Parameters:
//		struct FName                                       InSoundModeName                                            (Parm)
void AGamePlayerController::SetSoundMode(const struct FName& InSoundModeName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.SetSoundMode");

	AGamePlayerController_SetSoundMode_Params params {};
	params.InSoundModeName = InSoundModeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake
//		Flags  -> ()
// Parameters:
//		class UCameraShake*                                ShakeData                                                  (Parm)
//		float                                              Scale                                                      (Parm)
void AGamePlayerController::DoForceFeedbackForScreenShake(class UCameraShake* ShakeData, float Scale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake");

	AGamePlayerController_DoForceFeedbackForScreenShake_Params params {};
	params.ShakeData = ShakeData;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GamePlayerController.NotifyCrowdAgentInRadius
//		Flags  -> ()
// Parameters:
//		class AGameCrowdAgent*                             Agent                                                      (Parm)
void AGamePlayerController::NotifyCrowdAgentInRadius(class AGameCrowdAgent* Agent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.NotifyCrowdAgentInRadius");

	AGamePlayerController_NotifyCrowdAgentInRadius_Params params {};
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GamePlayerController.NotifyCrowdAgentRefresh
//		Flags  -> ()
void AGamePlayerController::NotifyCrowdAgentRefresh()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.NotifyCrowdAgentRefresh");

	AGamePlayerController_NotifyCrowdAgentRefresh_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GamePlayerController.CrowdDebug
//		Flags  -> ()
// Parameters:
//		bool                                               bEnabled                                                   (Parm)
void AGamePlayerController::CrowdDebug(bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.CrowdDebug");

	AGamePlayerController_CrowdDebug_Params params {};
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GamePlayerController.GetUIPlayerIndex
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int AGamePlayerController::GetUIPlayerIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.GetUIPlayerIndex");

	AGamePlayerController_GetUIPlayerIndex_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GamePlayerController.OnToggleMouseCursor
//		Flags  -> ()
// Parameters:
//		class USeqAct_ToggleMouseCursor*                   inAction                                                   (Parm)
void AGamePlayerController::OnToggleMouseCursor(class USeqAct_ToggleMouseCursor* inAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.OnToggleMouseCursor");

	AGamePlayerController_OnToggleMouseCursor_Params params {};
	params.inAction = inAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCheatManager.EnableDebugCamera
//		Flags  -> (NetReliable, Simulated, Native, Event, Operator, HasOptionalParms, Public, NetServer, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
//		bool                                               bEnableDebugText                                           (Parm)
void UGameCheatManager::EnableDebugCamera(bool bEnableDebugText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCheatManager.EnableDebugCamera");

	UGameCheatManager_EnableDebugCamera_Params params {};
	params.bEnableDebugText = bEnableDebugText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCheatManager.TeleportPawnToCamera
//		Flags  -> (Net, Simulated, Static, HasOptionalParms, Public, NetServer, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
//		bool                                               bToggleDebugCameraOff                                      (OptionalParm, Parm)
void UGameCheatManager::STATIC_TeleportPawnToCamera(bool bToggleDebugCameraOff)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCheatManager.TeleportPawnToCamera");

	UGameCheatManager_TeleportPawnToCamera_Params params {};
	params.bToggleDebugCameraOff = bToggleDebugCameraOff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCheatManager.ToggleDebugCamera
//		Flags  -> ()
// Parameters:
//		bool                                               bDrawDebugText                                             (OptionalParm, Parm)
void UGameCheatManager::ToggleDebugCamera(bool bDrawDebugText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCheatManager.ToggleDebugCamera");

	UGameCheatManager_ToggleDebugCamera_Params params {};
	params.bDrawDebugText = bDrawDebugText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCheatManager.PatchDebugCameraController
//		Flags  -> ()
void UGameCheatManager::PatchDebugCameraController()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCheatManager.PatchDebugCameraController");

	UGameCheatManager_PatchDebugCameraController_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.InitDebugColor
//		Flags  -> ()
void AGameCrowdAgent::InitDebugColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.InitDebugColor");

	AGameCrowdAgent_InitDebugColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.GetBehaviorString
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString AGameCrowdAgent::GetBehaviorString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.GetBehaviorString");

	AGameCrowdAgent_GetBehaviorString_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.GetDestString
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString AGameCrowdAgent::GetDestString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.GetDestString");

	AGameCrowdAgent_GetDestString_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.PostRenderFor
//		Flags  -> (Singular, Net, Simulated, Exec, HasOptionalParms, Const, Public, NetServer, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
//		class APlayerController*                           PC                                                         (Parm)
//		class UCanvas*                                     Canvas                                                     (Parm)
//		struct FVector                                     CameraPosition                                             (Parm)
//		struct FVector                                     CameraDir                                                  (Parm)
void AGameCrowdAgent::PostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PostRenderFor");

	AGameCrowdAgent_PostRenderFor_Params params {};
	params.PC = PC;
	params.Canvas = Canvas;
	params.CameraPosition = CameraPosition;
	params.CameraDir = CameraDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.NativePostRenderFor
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           PC                                                         (Parm)
//		class UCanvas*                                     Canvas                                                     (Parm)
//		struct FVector                                     CameraPosition                                             (Parm)
//		struct FVector                                     CameraDir                                                  (Parm)
void AGameCrowdAgent::NativePostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.NativePostRenderFor");

	AGameCrowdAgent_NativePostRenderFor_Params params {};
	params.PC = PC;
	params.Canvas = Canvas;
	params.CameraPosition = CameraPosition;
	params.CameraDir = CameraDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.GeneratePathToActor
//		Flags  -> (NetReliable, Simulated, Exec, Event, HasOptionalParms, Const, Public, NetServer, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
//		class AActor*                                      Goal                                                       (Parm)
//		float                                              WithinDistance                                             (OptionalParm, Parm)
//		bool                                               bAllowPartialPath                                          (OptionalParm, Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector AGameCrowdAgent::GeneratePathToActor(class AActor* Goal, float WithinDistance, bool bAllowPartialPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.GeneratePathToActor");

	AGameCrowdAgent_GeneratePathToActor_Params params {};
	params.Goal = Goal;
	params.WithinDistance = WithinDistance;
	params.bAllowPartialPath = bAllowPartialPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.InitNavigationHandle
//		Flags  -> ()
void AGameCrowdAgent::InitNavigationHandle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.InitNavigationHandle");

	AGameCrowdAgent_InitNavigationHandle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.OverlappedActorEvent
//		Flags  -> ()
// Parameters:
//		class AActor*                                      A                                                          (Parm)
void AGameCrowdAgent::OverlappedActorEvent(class AActor* A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.OverlappedActorEvent");

	AGameCrowdAgent_OverlappedActorEvent_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.TakeDamage
//		Flags  -> ()
// Parameters:
//		int                                                DamageAmount                                               (Parm)
//		class AController*                                 EventInstigator                                            (Parm)
//		struct FVector                                     HitLocation                                                (Parm)
//		struct FVector                                     Momentum                                                   (Parm)
//		class UClass*                                      DamageType                                                 (Parm)
//		struct FTraceHitInfo                               HitInfo                                                    (OptionalParm, Parm)
//		class AActor*                                      DamageCauser                                               (OptionalParm, Parm)
void AGameCrowdAgent::TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.TakeDamage");

	AGameCrowdAgent_TakeDamage_Params params {};
	params.DamageAmount = DamageAmount;
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
//		Name   -> Function GameFramework.GameCrowdAgent.FireDeathEvent
//		Flags  -> ()
void AGameCrowdAgent::FireDeathEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.FireDeathEvent");

	AGameCrowdAgent_FireDeathEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.PlayDeath
//		Flags  -> ()
// Parameters:
//		struct FVector                                     KillMomentum                                               (Parm)
void AGameCrowdAgent::PlayDeath(const struct FVector& KillMomentum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PlayDeath");

	AGameCrowdAgent_PlayDeath_Params params {};
	params.KillMomentum = KillMomentum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.UpdateIntermediatePoint
//		Flags  -> ()
// Parameters:
//		class AActor*                                      DestinationActor                                           (OptionalParm, Parm)
void AGameCrowdAgent::UpdateIntermediatePoint(class AActor* DestinationActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.UpdateIntermediatePoint");

	AGameCrowdAgent_UpdateIntermediatePoint_Params params {};
	params.DestinationActor = DestinationActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.CalcCamera
//		Flags  -> (Singular, Net, NetReliable, Native, Event, Static, Const, Public, NetServer, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
//		float                                              fDeltaTime                                                 (Parm)
//		struct FVector                                     out_CamLoc                                                 (Parm, OutParm)
//		struct FRotator                                    out_CamRot                                                 (Parm, OutParm)
//		float                                              out_FOV                                                    (Parm, OutParm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AGameCrowdAgent::STATIC_CalcCamera(float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.CalcCamera");

	AGameCrowdAgent_CalcCamera_Params params {};
	params.fDeltaTime = fDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (out_CamLoc != nullptr)
		*out_CamLoc = params.out_CamLoc;
	if (out_CamRot != nullptr)
		*out_CamRot = params.out_CamRot;
	if (out_FOV != nullptr)
		*out_FOV = params.out_FOV;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.IsIdle
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AGameCrowdAgent::IsIdle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.IsIdle");

	AGameCrowdAgent_IsIdle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.SetCurrentBehavior
//		Flags  -> ()
// Parameters:
//		class UGameCrowdAgentBehavior*                     BehaviorArchetype                                          (Parm)
void AGameCrowdAgent::SetCurrentBehavior(class UGameCrowdAgentBehavior* BehaviorArchetype)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.SetCurrentBehavior");

	AGameCrowdAgent_SetCurrentBehavior_Params params {};
	params.BehaviorArchetype = BehaviorArchetype;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.StopBehavior
//		Flags  -> ()
void AGameCrowdAgent::StopBehavior()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.StopBehavior");

	AGameCrowdAgent_StopBehavior_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.HandleBehaviorEvent
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GameFramework_ECrowdBehaviorEvent>     EventType                                                  (Parm)
//		class AActor*                                      InInstigator                                               (Parm)
//		bool                                               bViralCause                                                (Parm)
//		bool                                               bPropagateViralFlag                                        (Parm)
void AGameCrowdAgent::HandleBehaviorEvent(TEnumAsByte<GameFramework_ECrowdBehaviorEvent> EventType, class AActor* InInstigator, bool bViralCause, bool bPropagateViralFlag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.HandleBehaviorEvent");

	AGameCrowdAgent_HandleBehaviorEvent_Params params {};
	params.EventType = EventType;
	params.InInstigator = InInstigator;
	params.bViralCause = bViralCause;
	params.bPropagateViralFlag = bPropagateViralFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.ActivateInstancedBehavior
//		Flags  -> ()
// Parameters:
//		class UGameCrowdAgentBehavior*                     NewBehaviorObject                                          (Parm)
void AGameCrowdAgent::ActivateInstancedBehavior(class UGameCrowdAgentBehavior* NewBehaviorObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.ActivateInstancedBehavior");

	AGameCrowdAgent_ActivateInstancedBehavior_Params params {};
	params.NewBehaviorObject = NewBehaviorObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.ActivateBehavior
//		Flags  -> ()
// Parameters:
//		class UGameCrowdAgentBehavior*                     NewBehaviorArchetype                                       (Parm)
//		class AActor*                                      LookAtActor                                                (OptionalParm, Parm)
void AGameCrowdAgent::ActivateBehavior(class UGameCrowdAgentBehavior* NewBehaviorArchetype, class AActor* LookAtActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.ActivateBehavior");

	AGameCrowdAgent_ActivateBehavior_Params params {};
	params.NewBehaviorArchetype = NewBehaviorArchetype;
	params.LookAtActor = LookAtActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.ResetSeePlayer
//		Flags  -> ()
void AGameCrowdAgent::ResetSeePlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.ResetSeePlayer");

	AGameCrowdAgent_ResetSeePlayer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.TryRandomBehavior
//		Flags  -> ()
// Parameters:
void AGameCrowdAgent::TryRandomBehavior()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.TryRandomBehavior");

	AGameCrowdAgent_TryRandomBehavior_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.NotifySeePlayer
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           PC                                                         (Parm)
void AGameCrowdAgent::NotifySeePlayer(class APlayerController* PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.NotifySeePlayer");

	AGameCrowdAgent_NotifySeePlayer_Params params {};
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.PlaySpawnBehavior
//		Flags  -> ()
void AGameCrowdAgent::PlaySpawnBehavior()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PlaySpawnBehavior");

	AGameCrowdAgent_PlaySpawnBehavior_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.HandlePotentialAgentEncounter
//		Flags  -> ()
void AGameCrowdAgent::HandlePotentialAgentEncounter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.HandlePotentialAgentEncounter");

	AGameCrowdAgent_HandlePotentialAgentEncounter_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.StopIdleAnimation
//		Flags  -> ()
void AGameCrowdAgent::StopIdleAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.StopIdleAnimation");

	AGameCrowdAgent_StopIdleAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.PlayIdleAnimation
//		Flags  -> ()
void AGameCrowdAgent::PlayIdleAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PlayIdleAnimation");

	AGameCrowdAgent_PlayIdleAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.OnPlayAgentAnimation
//		Flags  -> ()
// Parameters:
//		class USeqAct_PlayAgentAnimation*                  Action                                                     (Parm)
void AGameCrowdAgent::OnPlayAgentAnimation(class USeqAct_PlayAgentAnimation* Action)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.OnPlayAgentAnimation");

	AGameCrowdAgent_OnPlayAgentAnimation_Params params {};
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.InitializeAgent
//		Flags  -> (Net, Event, Operator, Const, Public, NetServer, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
//		class AActor*                                      SpawnLoc                                                   (Parm)
//		TArray<struct FCrowdSpawnerPlayerInfo>             PlayerInfo                                                 (Const, Parm, OutParm, NeedCtorLink)
//		class AGameCrowdAgent*                             AgentTemplate                                              (Parm)
//		class UGameCrowdGroup*                             NewGroup                                                   (Parm)
//		float                                              AgentWarmupTime                                            (Parm)
//		bool                                               bWarmupPosition                                            (Parm)
//		bool                                               bCheckWarmupVisibility                                     (Parm)
void AGameCrowdAgent::InitializeAgent(class AActor* SpawnLoc, TArray<struct FCrowdSpawnerPlayerInfo>* PlayerInfo, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup, float AgentWarmupTime, bool bWarmupPosition, bool bCheckWarmupVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.InitializeAgent");

	AGameCrowdAgent_InitializeAgent_Params params {};
	params.SpawnLoc = SpawnLoc;
	params.AgentTemplate = AgentTemplate;
	params.NewGroup = NewGroup;
	params.AgentWarmupTime = AgentWarmupTime;
	params.bWarmupPosition = bWarmupPosition;
	params.bCheckWarmupVisibility = bCheckWarmupVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerInfo != nullptr)
		*PlayerInfo = params.PlayerInfo;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.GetAttemptedSpawnLocation
//		Flags  -> (Singular, Simulated, Const, Public, NetServer, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
//		float                                              Pct                                                        (Parm)
//		struct FVector                                     CurPos                                                     (Parm)
//		float                                              CurRadius                                                  (Parm)
//		struct FVector                                     DestPos                                                    (Parm)
//		float                                              DestRadius                                                 (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector AGameCrowdAgent::GetAttemptedSpawnLocation(float Pct, const struct FVector& CurPos, float CurRadius, const struct FVector& DestPos, float DestRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.GetAttemptedSpawnLocation");

	AGameCrowdAgent_GetAttemptedSpawnLocation_Params params {};
	params.Pct = Pct;
	params.CurPos = CurPos;
	params.CurRadius = CurRadius;
	params.DestPos = DestPos;
	params.DestRadius = DestRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.SetLighting
//		Flags  -> ()
// Parameters:
//		bool                                               bEnableLightEnvironment                                    (Parm)
//		struct FLightingChannelContainer                   AgentLightingChannel                                       (Parm)
//		bool                                               bCastShadows                                               (Parm)
void AGameCrowdAgent::SetLighting(bool bEnableLightEnvironment, const struct FLightingChannelContainer& AgentLightingChannel, bool bCastShadows)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.SetLighting");

	AGameCrowdAgent_SetLighting_Params params {};
	params.bEnableLightEnvironment = bEnableLightEnvironment;
	params.AgentLightingChannel = AgentLightingChannel;
	params.bCastShadows = bCastShadows;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.DisplayDebug
//		Flags  -> ()
// Parameters:
//		class AHUD*                                        HUD                                                        (Parm)
//		float                                              out_YL                                                     (Parm, OutParm)
//		float                                              out_YPos                                                   (Parm, OutParm)
void AGameCrowdAgent::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.DisplayDebug");

	AGameCrowdAgent_DisplayDebug_Params params {};
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
//		Name   -> Function GameFramework.GameCrowdAgent.Destroyed
//		Flags  -> ()
void AGameCrowdAgent::Destroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.Destroyed");

	AGameCrowdAgent_Destroyed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.ResetPooledAgent
//		Flags  -> ()
void AGameCrowdAgent::ResetPooledAgent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.ResetPooledAgent");

	AGameCrowdAgent_ResetPooledAgent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.KillAgent
//		Flags  -> ()
void AGameCrowdAgent::KillAgent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.KillAgent");

	AGameCrowdAgent_KillAgent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.PostBeginPlay
//		Flags  -> (Net, NetReliable, Exec, Native, Const, Public, NetServer, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
void AGameCrowdAgent::PostBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PostBeginPlay");

	AGameCrowdAgent_PostBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.SetMaxSpeed
//		Flags  -> ()
void AGameCrowdAgent::SetMaxSpeed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.SetMaxSpeed");

	AGameCrowdAgent_SetMaxSpeed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.SetCurrentDestination
//		Flags  -> ()
// Parameters:
//		class AGameCrowdDestination*                       NewDest                                                    (Parm)
void AGameCrowdAgent::SetCurrentDestination(class AGameCrowdDestination* NewDest)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.SetCurrentDestination");

	AGameCrowdAgent_SetCurrentDestination_Params params {};
	params.NewDest = NewDest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.WaitForGroupMembers
//		Flags  -> ()
void AGameCrowdAgent::WaitForGroupMembers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.WaitForGroupMembers");

	AGameCrowdAgent_WaitForGroupMembers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.PickBehaviorFrom
//		Flags  -> (NetReliable, Exec, Event, Const, Public, NetServer, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
//		TArray<struct FBehaviorEntry>                      BehaviorList                                               (Parm, NeedCtorLink)
//		struct FVector                                     BestCameraLoc                                              (OptionalParm, Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AGameCrowdAgent::PickBehaviorFrom(TArray<struct FBehaviorEntry> BehaviorList, const struct FVector& BestCameraLoc)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PickBehaviorFrom");

	AGameCrowdAgent_PickBehaviorFrom_Params params {};
	params.BehaviorList = BehaviorList;
	params.BestCameraLoc = BestCameraLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.IsPanicked
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AGameCrowdAgent::IsPanicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.IsPanicked");

	AGameCrowdAgent_IsPanicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.FellOutOfWorld
//		Flags  -> ()
// Parameters:
//		class UClass*                                      dmgType                                                    (Parm)
void AGameCrowdAgent::FellOutOfWorld(class UClass* dmgType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.FellOutOfWorld");

	AGameCrowdAgent_FellOutOfWorld_Params params {};
	params.dmgType = dmgType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgent.GetCollisionExtent
//		Flags  -> ()
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector AGameCrowdAgent::GetCollisionExtent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.GetCollisionExtent");

	AGameCrowdAgent_GetCollisionExtent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentSkeletal.CreateAttachments
//		Flags  -> ()
// Parameters:
void AGameCrowdAgentSkeletal::CreateAttachments()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.CreateAttachments");

	AGameCrowdAgentSkeletal_CreateAttachments_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentSkeletal.OnAnimEnd
//		Flags  -> ()
// Parameters:
//		class UAnimNodeSequence*                           SeqNode                                                    (Parm)
//		float                                              PlayedTime                                                 (Parm)
//		float                                              ExcessTime                                                 (Parm)
void AGameCrowdAgentSkeletal::OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.OnAnimEnd");

	AGameCrowdAgentSkeletal_OnAnimEnd_Params params {};
	params.SeqNode = SeqNode;
	params.PlayedTime = PlayedTime;
	params.ExcessTime = ExcessTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentSkeletal.StopIdleAnimation
//		Flags  -> ()
void AGameCrowdAgentSkeletal::StopIdleAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.StopIdleAnimation");

	AGameCrowdAgentSkeletal_StopIdleAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentSkeletal.PlayIdleAnimation
//		Flags  -> ()
void AGameCrowdAgentSkeletal::PlayIdleAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.PlayIdleAnimation");

	AGameCrowdAgentSkeletal_PlayIdleAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentSkeletal.ClearLatentAnimation
//		Flags  -> ()
void AGameCrowdAgentSkeletal::ClearLatentAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.ClearLatentAnimation");

	AGameCrowdAgentSkeletal_ClearLatentAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentSkeletal.OnPlayAgentAnimation
//		Flags  -> ()
// Parameters:
//		class USeqAct_PlayAgentAnimation*                  Action                                                     (Parm)
void AGameCrowdAgentSkeletal::OnPlayAgentAnimation(class USeqAct_PlayAgentAnimation* Action)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.OnPlayAgentAnimation");

	AGameCrowdAgentSkeletal_OnPlayAgentAnimation_Params params {};
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentSkeletal.SetRootMotion
//		Flags  -> ()
// Parameters:
//		bool                                               bRootMotionEnabled                                         (Parm)
void AGameCrowdAgentSkeletal::SetRootMotion(bool bRootMotionEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.SetRootMotion");

	AGameCrowdAgentSkeletal_SetRootMotion_Params params {};
	params.bRootMotionEnabled = bRootMotionEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentSkeletal.PlayDeath
//		Flags  -> ()
// Parameters:
//		struct FVector                                     KillMomentum                                               (Parm)
void AGameCrowdAgentSkeletal::PlayDeath(const struct FVector& KillMomentum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.PlayDeath");

	AGameCrowdAgentSkeletal_PlayDeath_Params params {};
	params.KillMomentum = KillMomentum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentSkeletal.SetLighting
//		Flags  -> ()
// Parameters:
//		bool                                               bEnableLightEnvironment                                    (Parm)
//		struct FLightingChannelContainer                   AgentLightingChannel                                       (Parm)
//		bool                                               bCastShadows                                               (Parm)
void AGameCrowdAgentSkeletal::SetLighting(bool bEnableLightEnvironment, const struct FLightingChannelContainer& AgentLightingChannel, bool bCastShadows)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.SetLighting");

	AGameCrowdAgentSkeletal_SetLighting_Params params {};
	params.bEnableLightEnvironment = bEnableLightEnvironment;
	params.AgentLightingChannel = AgentLightingChannel;
	params.bCastShadows = bCastShadows;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentSkeletal.PostBeginPlay
//		Flags  -> ()
void AGameCrowdAgentSkeletal::PostBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.PostBeginPlay");

	AGameCrowdAgentSkeletal_PostBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentSM.StopBehavior
//		Flags  -> ()
void AGameCrowdAgentSM::StopBehavior()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSM.StopBehavior");

	AGameCrowdAgentSM_StopBehavior_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentSM.ActivateBehavior
//		Flags  -> ()
// Parameters:
//		class UGameCrowdAgentBehavior*                     NewBehaviorArchetype                                       (Parm)
//		class AActor*                                      LookAtActor                                                (OptionalParm, Parm)
void AGameCrowdAgentSM::ActivateBehavior(class UGameCrowdAgentBehavior* NewBehaviorArchetype, class AActor* LookAtActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSM.ActivateBehavior");

	AGameCrowdAgentSM_ActivateBehavior_Params params {};
	params.NewBehaviorArchetype = NewBehaviorArchetype;
	params.LookAtActor = LookAtActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentSM.ChangeDebugColor
//		Flags  -> (Net, Event, Static, HasOptionalParms, Const, Public, NetServer, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
//		struct FColor                                      InC                                                        (Parm)
void AGameCrowdAgentSM::STATIC_ChangeDebugColor(const struct FColor& InC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSM.ChangeDebugColor");

	AGameCrowdAgentSM_ChangeDebugColor_Params params {};
	params.InC = InC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentSM.InitDebugColor
//		Flags  -> ()
void AGameCrowdAgentSM::InitDebugColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSM.InitDebugColor");

	AGameCrowdAgentSM_InitDebugColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentSM.PostBeginPlay
//		Flags  -> ()
void AGameCrowdAgentSM::PostBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSM.PostBeginPlay");

	AGameCrowdAgentSM_PostBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentBehavior.AllowBehaviorAt
//		Flags  -> ()
// Parameters:
//		class AGameCrowdDestination*                       Destination                                                (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameCrowdAgentBehavior::AllowBehaviorAt(class AGameCrowdDestination* Destination)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.AllowBehaviorAt");

	UGameCrowdAgentBehavior_AllowBehaviorAt_Params params {};
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentBehavior.AllowThisDestination
//		Flags  -> ()
// Parameters:
//		class AGameCrowdDestination*                       Destination                                                (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameCrowdAgentBehavior::AllowThisDestination(class AGameCrowdDestination* Destination)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.AllowThisDestination");

	UGameCrowdAgentBehavior_AllowThisDestination_Params params {};
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentBehavior.PropagateViralBehaviorTo
//		Flags  -> ()
// Parameters:
//		class AGameCrowdAgent*                             OtherAgent                                                 (Parm)
void UGameCrowdAgentBehavior::PropagateViralBehaviorTo(class AGameCrowdAgent* OtherAgent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.PropagateViralBehaviorTo");

	UGameCrowdAgentBehavior_PropagateViralBehaviorTo_Params params {};
	params.OtherAgent = OtherAgent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentBehavior.GetBehaviorInstigator
//		Flags  -> ()
// Parameters:
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ReturnParm)
class AActor* UGameCrowdAgentBehavior::GetBehaviorInstigator()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.GetBehaviorInstigator");

	UGameCrowdAgentBehavior_GetBehaviorInstigator_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentBehavior.ActivatedBy
//		Flags  -> ()
// Parameters:
//		class AActor*                                      NewActionTarget                                            (Parm)
void UGameCrowdAgentBehavior::ActivatedBy(class AActor* NewActionTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.ActivatedBy");

	UGameCrowdAgentBehavior_ActivatedBy_Params params {};
	params.NewActionTarget = NewActionTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentBehavior.GetDestinationActor
//		Flags  -> ()
// Parameters:
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ReturnParm)
class AActor* UGameCrowdAgentBehavior::GetDestinationActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.GetDestinationActor");

	UGameCrowdAgentBehavior_GetDestinationActor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentBehavior.ChangingDestination
//		Flags  -> ()
// Parameters:
//		class AGameCrowdDestination*                       NewDest                                                    (Parm)
void UGameCrowdAgentBehavior::ChangingDestination(class AGameCrowdDestination* NewDest)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.ChangingDestination");

	UGameCrowdAgentBehavior_ChangingDestination_Params params {};
	params.NewDest = NewDest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentBehavior.GetBehaviorString
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UGameCrowdAgentBehavior::GetBehaviorString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.GetBehaviorString");

	UGameCrowdAgentBehavior_GetBehaviorString_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentBehavior.OnAnimEnd
//		Flags  -> ()
// Parameters:
//		class UAnimNodeSequence*                           SeqNode                                                    (Parm)
//		float                                              PlayedTime                                                 (Parm)
//		float                                              ExcessTime                                                 (Parm)
void UGameCrowdAgentBehavior::OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.OnAnimEnd");

	UGameCrowdAgentBehavior_OnAnimEnd_Params params {};
	params.SeqNode = SeqNode;
	params.PlayedTime = PlayedTime;
	params.ExcessTime = ExcessTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentBehavior.StopBehavior
//		Flags  -> ()
void UGameCrowdAgentBehavior::StopBehavior()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.StopBehavior");

	UGameCrowdAgentBehavior_StopBehavior_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentBehavior.InitBehavior
//		Flags  -> ()
// Parameters:
//		class AGameCrowdAgent*                             Agent                                                      (Parm)
void UGameCrowdAgentBehavior::InitBehavior(class AGameCrowdAgent* Agent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.InitBehavior");

	UGameCrowdAgentBehavior_InitBehavior_Params params {};
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentBehavior.HandleMovement
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameCrowdAgentBehavior::HandleMovement()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.HandleMovement");

	UGameCrowdAgentBehavior_HandleMovement_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentBehavior.FinishedTargetRotation
//		Flags  -> ()
void UGameCrowdAgentBehavior::FinishedTargetRotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.FinishedTargetRotation");

	UGameCrowdAgentBehavior_FinishedTargetRotation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentBehavior.CanBeUsedBy
//		Flags  -> ()
// Parameters:
//		class AGameCrowdAgent*                             Agent                                                      (Parm)
//		struct FVector                                     CameraLoc                                                  (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameCrowdAgentBehavior::CanBeUsedBy(class AGameCrowdAgent* Agent, const struct FVector& CameraLoc)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.CanBeUsedBy");

	UGameCrowdAgentBehavior_CanBeUsedBy_Params params {};
	params.Agent = Agent;
	params.CameraLoc = CameraLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentBehavior.Tick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (Parm)
void UGameCrowdAgentBehavior::Tick(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.Tick");

	UGameCrowdAgentBehavior_Tick_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentBehavior.ShouldEndIdle
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameCrowdAgentBehavior::ShouldEndIdle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.ShouldEndIdle");

	UGameCrowdAgentBehavior_ShouldEndIdle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdAgentBehavior.TriggerCrowdBehavior
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GameFramework_ECrowdBehaviorEvent>     EventType                                                  (Parm)
//		class AActor*                                      Instigator                                                 (Parm)
//		struct FVector                                     AtLocation                                                 (Parm)
//		float                                              InRange                                                    (Parm)
//		float                                              InDuration                                                 (Parm)
//		class AActor*                                      BaseActor                                                  (OptionalParm, Parm)
//		bool                                               bRequireLOS                                                (OptionalParm, Parm)
//		class AGameCrowdBehaviorPoint*                     ReturnValue                                                (Parm, OutParm, ReturnParm)
class AGameCrowdBehaviorPoint* UGameCrowdAgentBehavior::TriggerCrowdBehavior(TEnumAsByte<GameFramework_ECrowdBehaviorEvent> EventType, class AActor* Instigator, const struct FVector& AtLocation, float InRange, float InDuration, class AActor* BaseActor, bool bRequireLOS)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.TriggerCrowdBehavior");

	UGameCrowdAgentBehavior_TriggerCrowdBehavior_Params params {};
	params.EventType = EventType;
	params.Instigator = Instigator;
	params.AtLocation = AtLocation;
	params.InRange = InRange;
	params.InDuration = InDuration;
	params.BaseActor = BaseActor;
	params.bRequireLOS = bRequireLOS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdBehavior_PlayAnimation.GetBehaviorString
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UGameCrowdBehavior_PlayAnimation::GetBehaviorString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.GetBehaviorString");

	UGameCrowdBehavior_PlayAnimation_GetBehaviorString_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdBehavior_PlayAnimation.StopBehavior
//		Flags  -> ()
void UGameCrowdBehavior_PlayAnimation::StopBehavior()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.StopBehavior");

	UGameCrowdBehavior_PlayAnimation_StopBehavior_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdBehavior_PlayAnimation.PlayAgentAnimationNow
//		Flags  -> ()
// Parameters:
void UGameCrowdBehavior_PlayAnimation::PlayAgentAnimationNow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.PlayAgentAnimationNow");

	UGameCrowdBehavior_PlayAnimation_PlayAgentAnimationNow_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdBehavior_PlayAnimation.OnAnimEnd
//		Flags  -> ()
// Parameters:
//		class UAnimNodeSequence*                           SeqNode                                                    (Parm)
//		float                                              PlayedTime                                                 (Parm)
//		float                                              ExcessTime                                                 (Parm)
void UGameCrowdBehavior_PlayAnimation::OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.OnAnimEnd");

	UGameCrowdBehavior_PlayAnimation_OnAnimEnd_Params params {};
	params.SeqNode = SeqNode;
	params.PlayedTime = PlayedTime;
	params.ExcessTime = ExcessTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdBehavior_PlayAnimation.SetSequenceOutput
//		Flags  -> ()
void UGameCrowdBehavior_PlayAnimation::SetSequenceOutput()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.SetSequenceOutput");

	UGameCrowdBehavior_PlayAnimation_SetSequenceOutput_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdBehavior_PlayAnimation.FinishedTargetRotation
//		Flags  -> ()
void UGameCrowdBehavior_PlayAnimation::FinishedTargetRotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.FinishedTargetRotation");

	UGameCrowdBehavior_PlayAnimation_FinishedTargetRotation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdBehavior_PlayAnimation.InitBehavior
//		Flags  -> ()
// Parameters:
//		class AGameCrowdAgent*                             Agent                                                      (Parm)
void UGameCrowdBehavior_PlayAnimation::InitBehavior(class AGameCrowdAgent* Agent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.InitBehavior");

	UGameCrowdBehavior_PlayAnimation_InitBehavior_Params params {};
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorString
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UGameCrowdBehavior_RunFromPanic::GetBehaviorString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorString");

	UGameCrowdBehavior_RunFromPanic_GetBehaviorString_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowBehaviorAt
//		Flags  -> ()
// Parameters:
//		class AGameCrowdDestination*                       Destination                                                (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameCrowdBehavior_RunFromPanic::AllowBehaviorAt(class AGameCrowdDestination* Destination)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowBehaviorAt");

	UGameCrowdBehavior_RunFromPanic_AllowBehaviorAt_Params params {};
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowThisDestination
//		Flags  -> ()
// Parameters:
//		class AGameCrowdDestination*                       Destination                                                (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameCrowdBehavior_RunFromPanic::AllowThisDestination(class AGameCrowdDestination* Destination)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowThisDestination");

	UGameCrowdBehavior_RunFromPanic_AllowThisDestination_Params params {};
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorInstigator
//		Flags  -> ()
// Parameters:
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ReturnParm)
class AActor* UGameCrowdBehavior_RunFromPanic::GetBehaviorInstigator()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorInstigator");

	UGameCrowdBehavior_RunFromPanic_GetBehaviorInstigator_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdBehavior_RunFromPanic.StopBehavior
//		Flags  -> ()
void UGameCrowdBehavior_RunFromPanic::StopBehavior()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.StopBehavior");

	UGameCrowdBehavior_RunFromPanic_StopBehavior_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdBehavior_RunFromPanic.InitBehavior
//		Flags  -> ()
// Parameters:
//		class AGameCrowdAgent*                             Agent                                                      (Parm)
void UGameCrowdBehavior_RunFromPanic::InitBehavior(class AGameCrowdAgent* Agent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.InitBehavior");

	UGameCrowdBehavior_RunFromPanic_InitBehavior_Params params {};
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdBehavior_RunFromPanic.ActivatedBy
//		Flags  -> ()
// Parameters:
//		class AActor*                                      NewActionTarget                                            (Parm)
void UGameCrowdBehavior_RunFromPanic::ActivatedBy(class AActor* NewActionTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.ActivatedBy");

	UGameCrowdBehavior_RunFromPanic_ActivatedBy_Params params {};
	params.NewActionTarget = NewActionTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdBehavior_WaitForGroup.StopBehavior
//		Flags  -> ()
void UGameCrowdBehavior_WaitForGroup::StopBehavior()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitForGroup.StopBehavior");

	UGameCrowdBehavior_WaitForGroup_StopBehavior_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdBehavior_WaitForGroup.ShouldEndIdle
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameCrowdBehavior_WaitForGroup::ShouldEndIdle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitForGroup.ShouldEndIdle");

	UGameCrowdBehavior_WaitForGroup_ShouldEndIdle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdBehavior_WaitForGroup.GetBehaviorString
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UGameCrowdBehavior_WaitForGroup::GetBehaviorString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitForGroup.GetBehaviorString");

	UGameCrowdBehavior_WaitForGroup_GetBehaviorString_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdBehavior_WaitForGroup.InitBehavior
//		Flags  -> ()
// Parameters:
//		class AGameCrowdAgent*                             Agent                                                      (Parm)
void UGameCrowdBehavior_WaitForGroup::InitBehavior(class AGameCrowdAgent* Agent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitForGroup.InitBehavior");

	UGameCrowdBehavior_WaitForGroup_InitBehavior_Params params {};
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdBehavior_WaitInQueue.StopBehavior
//		Flags  -> ()
void UGameCrowdBehavior_WaitInQueue::StopBehavior()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.StopBehavior");

	UGameCrowdBehavior_WaitInQueue_StopBehavior_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdBehavior_WaitInQueue.ShouldEndIdle
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameCrowdBehavior_WaitInQueue::ShouldEndIdle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.ShouldEndIdle");

	UGameCrowdBehavior_WaitInQueue_ShouldEndIdle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdBehavior_WaitInQueue.GetBehaviorString
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UGameCrowdBehavior_WaitInQueue::GetBehaviorString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.GetBehaviorString");

	UGameCrowdBehavior_WaitInQueue_GetBehaviorString_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdBehavior_WaitInQueue.GetDestinationActor
//		Flags  -> ()
// Parameters:
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ReturnParm)
class AActor* UGameCrowdBehavior_WaitInQueue::GetDestinationActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.GetDestinationActor");

	UGameCrowdBehavior_WaitInQueue_GetDestinationActor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdBehavior_WaitInQueue.ChangingDestination
//		Flags  -> ()
// Parameters:
//		class AGameCrowdDestination*                       NewDest                                                    (Parm)
void UGameCrowdBehavior_WaitInQueue::ChangingDestination(class AGameCrowdDestination* NewDest)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.ChangingDestination");

	UGameCrowdBehavior_WaitInQueue_ChangingDestination_Params params {};
	params.NewDest = NewDest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdBehavior_WaitInQueue.HandleMovement
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameCrowdBehavior_WaitInQueue::HandleMovement()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.HandleMovement");

	UGameCrowdBehavior_WaitInQueue_HandleMovement_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdGroup.UpdateDestinations
//		Flags  -> ()
// Parameters:
//		class AGameCrowdDestination*                       NewDestination                                             (Parm)
void UGameCrowdGroup::UpdateDestinations(class AGameCrowdDestination* NewDestination)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdGroup.UpdateDestinations");

	UGameCrowdGroup_UpdateDestinations_Params params {};
	params.NewDestination = NewDestination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdGroup.RemoveMember
//		Flags  -> ()
// Parameters:
//		class AGameCrowdAgent*                             Agent                                                      (Parm)
void UGameCrowdGroup::RemoveMember(class AGameCrowdAgent* Agent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdGroup.RemoveMember");

	UGameCrowdGroup_RemoveMember_Params params {};
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdGroup.AddMember
//		Flags  -> ()
// Parameters:
//		class AGameCrowdAgent*                             Agent                                                      (Parm)
void UGameCrowdGroup::AddMember(class AGameCrowdAgent* Agent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdGroup.AddMember");

	UGameCrowdGroup_AddMember_Params params {};
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdInfoVolume.UnTouch
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Other                                                      (Parm)
void AGameCrowdInfoVolume::UnTouch(class AActor* Other)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdInfoVolume.UnTouch");

	AGameCrowdInfoVolume_UnTouch_Params params {};
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdInfoVolume.Touch
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Other                                                      (Parm)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, EditInline)
//		struct FVector                                     HitLocation                                                (Parm)
//		struct FVector                                     HitNormal                                                  (Parm)
void AGameCrowdInfoVolume::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdInfoVolume.Touch");

	AGameCrowdInfoVolume_Touch_Params params {};
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
//		Name   -> Function GameFramework.GameCrowdInteractionPoint.OnToggle
//		Flags  -> ()
// Parameters:
//		class USeqAct_Toggle*                              Action                                                     (Parm)
void AGameCrowdInteractionPoint::OnToggle(class USeqAct_Toggle* Action)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdInteractionPoint.OnToggle");

	AGameCrowdInteractionPoint_OnToggle_Params params {};
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdBehaviorPoint.Touch
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Other                                                      (Parm)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, EditInline)
//		struct FVector                                     HitLocation                                                (Parm)
//		struct FVector                                     HitNormal                                                  (Parm)
void AGameCrowdBehaviorPoint::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehaviorPoint.Touch");

	AGameCrowdBehaviorPoint_Touch_Params params {};
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
//		Name   -> Function GameFramework.GameCrowdBehaviorPoint.DestroySelf
//		Flags  -> ()
void AGameCrowdBehaviorPoint::DestroySelf()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehaviorPoint.DestroySelf");

	AGameCrowdBehaviorPoint_DestroySelf_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdBehaviorPoint.PostBeginPlay
//		Flags  -> ()
void AGameCrowdBehaviorPoint::PostBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehaviorPoint.PostBeginPlay");

	AGameCrowdBehaviorPoint_PostBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdDestination.DrawDebug
//		Flags  -> (Net, NetReliable, Simulated, Native, Event, Operator, Static, Const, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
//		TArray<struct FCrowdSpawnerPlayerInfo>             PlayerInfo                                                 (Const, Parm, OutParm, NeedCtorLink)
//		bool                                               bPresistent                                                (OptionalParm, Parm)
void AGameCrowdDestination::STATIC_DrawDebug(TArray<struct FCrowdSpawnerPlayerInfo>* PlayerInfo, bool bPresistent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.DrawDebug");

	AGameCrowdDestination_DrawDebug_Params params {};
	params.bPresistent = bPresistent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerInfo != nullptr)
		*PlayerInfo = params.PlayerInfo;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdDestination.GetDestinationRadius
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float AGameCrowdDestination::GetDestinationRadius()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.GetDestinationRadius");

	AGameCrowdDestination_GetDestinationRadius_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdDestination.PrioritizeSpawnPoint
//		Flags  -> ()
// Parameters:
//		TArray<struct FCrowdSpawnerPlayerInfo>             PlayerInfo                                                 (Const, Parm, OutParm, NeedCtorLink)
//		float                                              MaxSpawnDist                                               (Parm)
void AGameCrowdDestination::PrioritizeSpawnPoint(TArray<struct FCrowdSpawnerPlayerInfo>* PlayerInfo, float MaxSpawnDist)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.PrioritizeSpawnPoint");

	AGameCrowdDestination_PrioritizeSpawnPoint_Params params {};
	params.MaxSpawnDist = MaxSpawnDist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerInfo != nullptr)
		*PlayerInfo = params.PlayerInfo;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdDestination.AnalyzeSpawnPoint
//		Flags  -> (NetReliable, Exec, Native, HasOptionalParms, Const, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
//		TArray<struct FCrowdSpawnerPlayerInfo>             PlayerInfo                                                 (Const, Parm, OutParm, NeedCtorLink)
//		float                                              MaxSpawnDistSq                                             (Parm)
//		bool                                               bForceNavMeshPathing                                       (Parm)
//		class UNavigationHandle*                           NavHandle                                                  (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AGameCrowdDestination::AnalyzeSpawnPoint(TArray<struct FCrowdSpawnerPlayerInfo>* PlayerInfo, float MaxSpawnDistSq, bool bForceNavMeshPathing, class UNavigationHandle* NavHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.AnalyzeSpawnPoint");

	AGameCrowdDestination_AnalyzeSpawnPoint_Params params {};
	params.MaxSpawnDistSq = MaxSpawnDistSq;
	params.bForceNavMeshPathing = bForceNavMeshPathing;
	params.NavHandle = NavHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerInfo != nullptr)
		*PlayerInfo = params.PlayerInfo;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdDestination.GetSpawnPosition
//		Flags  -> (Exec, Native, Event, HasOptionalParms, Const, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
//		class USeqAct_GameCrowdSpawner*                    Spawner                                                    (Parm)
//		struct FVector                                     SpawnPos                                                   (Parm, OutParm)
//		struct FRotator                                    SpawnRot                                                   (Parm, OutParm)
void AGameCrowdDestination::GetSpawnPosition(class USeqAct_GameCrowdSpawner* Spawner, struct FVector* SpawnPos, struct FRotator* SpawnRot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.GetSpawnPosition");

	AGameCrowdDestination_GetSpawnPosition_Params params {};
	params.Spawner = Spawner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpawnPos != nullptr)
		*SpawnPos = params.SpawnPos;
	if (SpawnRot != nullptr)
		*SpawnRot = params.SpawnRot;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdDestination.GetSpawnRadius
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float AGameCrowdDestination::GetSpawnRadius()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.GetSpawnRadius");

	AGameCrowdDestination_GetSpawnRadius_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdDestination.AllowableDestinationFor
//		Flags  -> ()
// Parameters:
//		class AGameCrowdAgent*                             Agent                                                      (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AGameCrowdDestination::AllowableDestinationFor(class AGameCrowdAgent* Agent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.AllowableDestinationFor");

	AGameCrowdDestination_AllowableDestinationFor_Params params {};
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdDestination.AtCapacity
//		Flags  -> ()
// Parameters:
//		unsigned char                                      CheckCnt                                                   (OptionalParm, Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AGameCrowdDestination::AtCapacity(unsigned char CheckCnt)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.AtCapacity");

	AGameCrowdDestination_AtCapacity_Params params {};
	params.CheckCnt = CheckCnt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdDestination.IncrementCustomerCount
//		Flags  -> ()
// Parameters:
//		class AGameCrowdAgent*                             ArrivingAgent                                              (Parm)
void AGameCrowdDestination::IncrementCustomerCount(class AGameCrowdAgent* ArrivingAgent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.IncrementCustomerCount");

	AGameCrowdDestination_IncrementCustomerCount_Params params {};
	params.ArrivingAgent = ArrivingAgent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdDestination.DecrementCustomerCount
//		Flags  -> ()
// Parameters:
//		class AGameCrowdAgent*                             DepartingAgent                                             (Parm)
void AGameCrowdDestination::DecrementCustomerCount(class AGameCrowdAgent* DepartingAgent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.DecrementCustomerCount");

	AGameCrowdDestination_DecrementCustomerCount_Params params {};
	params.DepartingAgent = DepartingAgent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdDestination.PickNewDestinationFor
//		Flags  -> ()
// Parameters:
//		class AGameCrowdAgent*                             Agent                                                      (Parm)
//		bool                                               bIgnoreRestrictions                                        (Parm)
void AGameCrowdDestination::PickNewDestinationFor(class AGameCrowdAgent* Agent, bool bIgnoreRestrictions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.PickNewDestinationFor");

	AGameCrowdDestination_PickNewDestinationFor_Params params {};
	params.Agent = Agent;
	params.bIgnoreRestrictions = bIgnoreRestrictions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdDestination.ReachedDestination
//		Flags  -> ()
// Parameters:
//		class AGameCrowdAgent*                             Agent                                                      (Parm)
void AGameCrowdDestination::ReachedDestination(class AGameCrowdAgent* Agent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.ReachedDestination");

	AGameCrowdDestination_ReachedDestination_Params params {};
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdDestination.Destroyed
//		Flags  -> ()
void AGameCrowdDestination::Destroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.Destroyed");

	AGameCrowdDestination_Destroyed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdDestination.PostBeginPlay
//		Flags  -> ()
// Parameters:
void AGameCrowdDestination::PostBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.PostBeginPlay");

	AGameCrowdDestination_PostBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdDestination.ReachedByAgent
//		Flags  -> ()
// Parameters:
//		class AGameCrowdAgent*                             Agent                                                      (Parm)
//		struct FVector                                     TestPosition                                               (Parm)
//		bool                                               bTestExactly                                               (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AGameCrowdDestination::ReachedByAgent(class AGameCrowdAgent* Agent, const struct FVector& TestPosition, bool bTestExactly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.ReachedByAgent");

	AGameCrowdDestination_ReachedByAgent_Params params {};
	params.Agent = Agent;
	params.TestPosition = TestPosition;
	params.bTestExactly = bTestExactly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdDestinationQueuePoint.HasCustomer
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AGameCrowdDestinationQueuePoint::HasCustomer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.HasCustomer");

	AGameCrowdDestinationQueuePoint_HasCustomer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdDestinationQueuePoint.ClearQueue
//		Flags  -> ()
// Parameters:
//		class AGameCrowdAgent*                             OldCustomer                                                (Parm)
void AGameCrowdDestinationQueuePoint::ClearQueue(class AGameCrowdAgent* OldCustomer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.ClearQueue");

	AGameCrowdDestinationQueuePoint_ClearQueue_Params params {};
	params.OldCustomer = OldCustomer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdDestinationQueuePoint.AddCustomer
//		Flags  -> ()
// Parameters:
//		class AGameCrowdAgent*                             NewCustomer                                                (Parm)
//		class AGameCrowdInteractionPoint*                  PreviousPosition                                           (Parm)
void AGameCrowdDestinationQueuePoint::AddCustomer(class AGameCrowdAgent* NewCustomer, class AGameCrowdInteractionPoint* PreviousPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.AddCustomer");

	AGameCrowdDestinationQueuePoint_AddCustomer_Params params {};
	params.NewCustomer = NewCustomer;
	params.PreviousPosition = PreviousPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdDestinationQueuePoint.ActuallyAdvance
//		Flags  -> ()
// Parameters:
void AGameCrowdDestinationQueuePoint::ActuallyAdvance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.ActuallyAdvance");

	AGameCrowdDestinationQueuePoint_ActuallyAdvance_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdDestinationQueuePoint.AdvanceCustomerTo
//		Flags  -> ()
// Parameters:
//		class AGameCrowdInteractionPoint*                  FrontPosition                                              (Parm)
void AGameCrowdDestinationQueuePoint::AdvanceCustomerTo(class AGameCrowdInteractionPoint* FrontPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.AdvanceCustomerTo");

	AGameCrowdDestinationQueuePoint_AdvanceCustomerTo_Params params {};
	params.FrontPosition = FrontPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdDestinationQueuePoint.ReachedDestination
//		Flags  -> ()
// Parameters:
//		class AGameCrowdAgent*                             Agent                                                      (Parm)
void AGameCrowdDestinationQueuePoint::ReachedDestination(class AGameCrowdAgent* Agent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.ReachedDestination");

	AGameCrowdDestinationQueuePoint_ReachedDestination_Params params {};
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdDestinationQueuePoint.HasSpace
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AGameCrowdDestinationQueuePoint::HasSpace()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.HasSpace");

	AGameCrowdDestinationQueuePoint_HasSpace_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdDestinationQueuePoint.QueueReachedBy
//		Flags  -> ()
// Parameters:
//		class AGameCrowdAgent*                             Agent                                                      (Parm)
//		struct FVector                                     TestPosition                                               (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AGameCrowdDestinationQueuePoint::QueueReachedBy(class AGameCrowdAgent* Agent, const struct FVector& TestPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.QueueReachedBy");

	AGameCrowdDestinationQueuePoint_QueueReachedBy_Params params {};
	params.Agent = Agent;
	params.TestPosition = TestPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdPopulationManager.CreateNewAgent
//		Flags  -> (Singular, NetReliable, Exec, Event, Static, HasOptionalParms, Public, NetServer, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
//		struct FCrowdSpawnInfoItem                         Item                                                       (Parm, OutParm, NeedCtorLink)
//		class AGameCrowdDestination*                       SpawnLoc                                                   (Parm)
//		class AGameCrowdAgent*                             AgentTemplate                                              (Parm)
//		class UGameCrowdGroup*                             NewGroup                                                   (Parm)
//		class AGameCrowdAgent*                             ReturnValue                                                (Parm, OutParm, ReturnParm)
class AGameCrowdAgent* AGameCrowdPopulationManager::STATIC_CreateNewAgent(struct FCrowdSpawnInfoItem* Item, class AGameCrowdDestination* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.CreateNewAgent");

	AGameCrowdPopulationManager_CreateNewAgent_Params params {};
	params.SpawnLoc = SpawnLoc;
	params.AgentTemplate = AgentTemplate;
	params.NewGroup = NewGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdPopulationManager.Warmup
//		Flags  -> ()
// Parameters:
//		struct FCrowdSpawnInfoItem                         Item                                                       (Parm, OutParm, NeedCtorLink)
//		int                                                WarmupNum                                                  (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AGameCrowdPopulationManager::Warmup(struct FCrowdSpawnInfoItem* Item, int WarmupNum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.Warmup");

	AGameCrowdPopulationManager_Warmup_Params params {};
	params.WarmupNum = WarmupNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdPopulationManager.SpawnAgent
//		Flags  -> ()
// Parameters:
//		struct FCrowdSpawnInfoItem                         Item                                                       (Parm, OutParm, NeedCtorLink)
//		class AGameCrowdDestination*                       SpawnLoc                                                   (Parm)
//		class AGameCrowdAgent*                             ReturnValue                                                (Parm, OutParm, ReturnParm)
class AGameCrowdAgent* AGameCrowdPopulationManager::SpawnAgent(struct FCrowdSpawnInfoItem* Item, class AGameCrowdDestination* SpawnLoc)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.SpawnAgent");

	AGameCrowdPopulationManager_SpawnAgent_Params params {};
	params.SpawnLoc = SpawnLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdPopulationManager.SpawnAgentByIdx
//		Flags  -> ()
// Parameters:
//		int                                                SpawnerIdx                                                 (Parm)
//		class AGameCrowdDestination*                       SpawnLoc                                                   (Parm)
//		class AGameCrowdAgent*                             ReturnValue                                                (Parm, OutParm, ReturnParm)
class AGameCrowdAgent* AGameCrowdPopulationManager::SpawnAgentByIdx(int SpawnerIdx, class AGameCrowdDestination* SpawnLoc)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.SpawnAgentByIdx");

	AGameCrowdPopulationManager_SpawnAgentByIdx_Params params {};
	params.SpawnerIdx = SpawnerIdx;
	params.SpawnLoc = SpawnLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdPopulationManager.ValidateSpawnAt
//		Flags  -> (Singular, NetReliable, Native, Operator, Static, HasOptionalParms, Public, NetServer, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
//		struct FCrowdSpawnInfoItem                         Item                                                       (Parm, OutParm, NeedCtorLink)
//		class AGameCrowdDestination*                       Candidate                                                  (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AGameCrowdPopulationManager::STATIC_ValidateSpawnAt(struct FCrowdSpawnInfoItem* Item, class AGameCrowdDestination* Candidate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.ValidateSpawnAt");

	AGameCrowdPopulationManager_ValidateSpawnAt_Params params {};
	params.Candidate = Candidate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdPopulationManager.AddPrioritizedSpawnPoint
//		Flags  -> ()
// Parameters:
//		struct FCrowdSpawnInfoItem                         Item                                                       (Parm, OutParm, NeedCtorLink)
//		class AGameCrowdDestination*                       GCD                                                        (Parm)
void AGameCrowdPopulationManager::AddPrioritizedSpawnPoint(struct FCrowdSpawnInfoItem* Item, class AGameCrowdDestination* GCD)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.AddPrioritizedSpawnPoint");

	AGameCrowdPopulationManager_AddPrioritizedSpawnPoint_Params params {};
	params.GCD = GCD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdPopulationManager.AnalyzeSpawnPoints
//		Flags  -> ()
// Parameters:
//		struct FCrowdSpawnInfoItem                         Item                                                       (Parm, OutParm, NeedCtorLink)
//		int                                                StartIndex                                                 (Parm)
//		int                                                NumToUpdate                                                (Parm)
void AGameCrowdPopulationManager::AnalyzeSpawnPoints(struct FCrowdSpawnInfoItem* Item, int StartIndex, int NumToUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.AnalyzeSpawnPoints");

	AGameCrowdPopulationManager_AnalyzeSpawnPoints_Params params {};
	params.StartIndex = StartIndex;
	params.NumToUpdate = NumToUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdPopulationManager.PrioritizeSpawnPoints
//		Flags  -> ()
// Parameters:
//		struct FCrowdSpawnInfoItem                         Item                                                       (Parm, OutParm, NeedCtorLink)
//		float                                              DeltaTime                                                  (Parm)
void AGameCrowdPopulationManager::PrioritizeSpawnPoints(struct FCrowdSpawnInfoItem* Item, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.PrioritizeSpawnPoints");

	AGameCrowdPopulationManager_PrioritizeSpawnPoints_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdPopulationManager.StaticGetPlayerInfo
//		Flags  -> ()
// Parameters:
//		TArray<struct FCrowdSpawnerPlayerInfo>             out_PlayerInfo                                             (Parm, OutParm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AGameCrowdPopulationManager::StaticGetPlayerInfo(TArray<struct FCrowdSpawnerPlayerInfo>* out_PlayerInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.StaticGetPlayerInfo");

	AGameCrowdPopulationManager_StaticGetPlayerInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (out_PlayerInfo != nullptr)
		*out_PlayerInfo = params.out_PlayerInfo;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdPopulationManager.GetPlayerInfo
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AGameCrowdPopulationManager::GetPlayerInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.GetPlayerInfo");

	AGameCrowdPopulationManager_GetPlayerInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdPopulationManager.PickSpawnPoint
//		Flags  -> ()
// Parameters:
//		struct FCrowdSpawnInfoItem                         Item                                                       (Parm, OutParm, NeedCtorLink)
//		class AGameCrowdDestination*                       ReturnValue                                                (Parm, OutParm, ReturnParm)
class AGameCrowdDestination* AGameCrowdPopulationManager::PickSpawnPoint(struct FCrowdSpawnInfoItem* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.PickSpawnPoint");

	AGameCrowdPopulationManager_PickSpawnPoint_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdPopulationManager.UpdateSpawner
//		Flags  -> ()
// Parameters:
//		struct FCrowdSpawnInfoItem                         Item                                                       (Parm, OutParm, NeedCtorLink)
//		float                                              DeltaTime                                                  (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AGameCrowdPopulationManager::UpdateSpawner(struct FCrowdSpawnInfoItem* Item, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.UpdateSpawner");

	AGameCrowdPopulationManager_UpdateSpawner_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdPopulationManager.UpdateAllSpawners
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (Parm)
void AGameCrowdPopulationManager::UpdateAllSpawners(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.UpdateAllSpawners");

	AGameCrowdPopulationManager_UpdateAllSpawners_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdPopulationManager.Tick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (Parm)
void AGameCrowdPopulationManager::Tick(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.Tick");

	AGameCrowdPopulationManager_Tick_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdPopulationManager.ShouldDebugDestinations
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AGameCrowdPopulationManager::ShouldDebugDestinations()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.ShouldDebugDestinations");

	AGameCrowdPopulationManager_ShouldDebugDestinations_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdPopulationManager.IsSpawningActive
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AGameCrowdPopulationManager::IsSpawningActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.IsSpawningActive");

	AGameCrowdPopulationManager_IsSpawningActive_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdPopulationManager.DisplayDebug
//		Flags  -> (Singular, Net, NetReliable, Simulated, Exec, HasOptionalParms, Public, NetServer, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
//		class AHUD*                                        HUD                                                        (Parm)
//		float                                              out_YL                                                     (Parm, OutParm)
//		float                                              out_YPos                                                   (Parm, OutParm)
void AGameCrowdPopulationManager::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.DisplayDebug");

	AGameCrowdPopulationManager_DisplayDebug_Params params {};
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
//		Name   -> Function GameFramework.GameCrowdPopulationManager.AgentDestroyed
//		Flags  -> ()
// Parameters:
//		class AGameCrowdAgent*                             Agent                                                      (Parm)
void AGameCrowdPopulationManager::AgentDestroyed(class AGameCrowdAgent* Agent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.AgentDestroyed");

	AGameCrowdPopulationManager_AgentDestroyed_Params params {};
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdPopulationManager.FlushAllAgents
//		Flags  -> ()
void AGameCrowdPopulationManager::FlushAllAgents()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.FlushAllAgents");

	AGameCrowdPopulationManager_FlushAllAgents_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdPopulationManager.FlushAgents
//		Flags  -> ()
// Parameters:
//		struct FCrowdSpawnInfoItem                         Item                                                       (Parm, NeedCtorLink)
void AGameCrowdPopulationManager::FlushAgents(const struct FCrowdSpawnInfoItem& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.FlushAgents");

	AGameCrowdPopulationManager_FlushAgents_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdPopulationManager.CreateSpawner
//		Flags  -> ()
// Parameters:
//		class USeqAct_GameCrowdPopulationManagerToggle*    inAction                                                   (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int AGameCrowdPopulationManager::CreateSpawner(class USeqAct_GameCrowdPopulationManagerToggle* inAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.CreateSpawner");

	AGameCrowdPopulationManager_CreateSpawner_Params params {};
	params.inAction = inAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdPopulationManager.SetCrowdInfoVolume
//		Flags  -> ()
// Parameters:
//		class AGameCrowdInfoVolume*                        Vol                                                        (Parm)
void AGameCrowdPopulationManager::SetCrowdInfoVolume(class AGameCrowdInfoVolume* Vol)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.SetCrowdInfoVolume");

	AGameCrowdPopulationManager_SetCrowdInfoVolume_Params params {};
	params.Vol = Vol;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdPopulationManager.RemoveSpawnPoint
//		Flags  -> ()
// Parameters:
//		class AGameCrowdDestination*                       GCD                                                        (Parm)
void AGameCrowdPopulationManager::RemoveSpawnPoint(class AGameCrowdDestination* GCD)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.RemoveSpawnPoint");

	AGameCrowdPopulationManager_RemoveSpawnPoint_Params params {};
	params.GCD = GCD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdPopulationManager.AddSpawnPoint
//		Flags  -> ()
// Parameters:
//		class AGameCrowdDestination*                       GCD                                                        (Parm)
void AGameCrowdPopulationManager::AddSpawnPoint(class AGameCrowdDestination* GCD)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.AddSpawnPoint");

	AGameCrowdPopulationManager_AddSpawnPoint_Params params {};
	params.GCD = GCD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdPopulationManager.NotifyPathChanged
//		Flags  -> ()
void AGameCrowdPopulationManager::NotifyPathChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.NotifyPathChanged");

	AGameCrowdPopulationManager_NotifyPathChanged_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdPopulationManager.PostBeginPlay
//		Flags  -> ()
void AGameCrowdPopulationManager::PostBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.PostBeginPlay");

	AGameCrowdPopulationManager_PostBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdReplicationActor.ReplicatedEvent
//		Flags  -> ()
// Parameters:
//		struct FName                                       VarName                                                    (Parm)
void AGameCrowdReplicationActor::ReplicatedEvent(const struct FName& VarName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdReplicationActor.ReplicatedEvent");

	AGameCrowdReplicationActor_ReplicatedEvent_Params params {};
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameExplosionActor.ChooseCameraShake
//		Flags  -> (Singular, NetReliable, Simulated, Exec, Operator, HasOptionalParms, Const, Public, NetServer, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
//		struct FVector                                     Epicenter                                                  (Parm)
//		class APlayerController*                           PC                                                         (Parm)
//		class UCameraShake*                                ReturnValue                                                (Parm, OutParm, ReturnParm)
class UCameraShake* AGameExplosionActor::ChooseCameraShake(const struct FVector& Epicenter, class APlayerController* PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.ChooseCameraShake");

	AGameExplosionActor_ChooseCameraShake_Params params {};
	params.Epicenter = Epicenter;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameExplosionActor.SpawnCameraLensEffects
//		Flags  -> ()
void AGameExplosionActor::SpawnCameraLensEffects()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpawnCameraLensEffects");

	AGameExplosionActor_SpawnCameraLensEffects_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameExplosionActor.DoExplosionCameraEffects
//		Flags  -> ()
// Parameters:
void AGameExplosionActor::DoExplosionCameraEffects()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DoExplosionCameraEffects");

	AGameExplosionActor_DoExplosionCameraEffects_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameExplosionActor.DrawDebug
//		Flags  -> (Singular, Simulated, Exec, Event, Operator, HasOptionalParms, Const, Public, NetServer, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
void AGameExplosionActor::DrawDebug()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DrawDebug");

	AGameExplosionActor_DrawDebug_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameExplosionActor.DelayedExplosionDamage
//		Flags  -> ()
void AGameExplosionActor::DelayedExplosionDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DelayedExplosionDamage");

	AGameExplosionActor_DelayedExplosionDamage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameExplosionActor.Explode
//		Flags  -> ()
// Parameters:
//		class UGameExplosion*                              NewExplosionTemplate                                       (Parm)
//		struct FVector                                     Direction                                                  (OptionalParm, Parm)
void AGameExplosionActor::Explode(class UGameExplosion* NewExplosionTemplate, const struct FVector& Direction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.Explode");

	AGameExplosionActor_Explode_Params params {};
	params.NewExplosionTemplate = NewExplosionTemplate;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameExplosionActor.SpawnExplosionFogVolume
//		Flags  -> ()
void AGameExplosionActor::SpawnExplosionFogVolume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpawnExplosionFogVolume");

	AGameExplosionActor_SpawnExplosionFogVolume_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameExplosionActor.SpawnExplosionDecal
//		Flags  -> ()
void AGameExplosionActor::SpawnExplosionDecal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpawnExplosionDecal");

	AGameExplosionActor_SpawnExplosionDecal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameExplosionActor.SpawnExplosionParticleSystem
//		Flags  -> ()
// Parameters:
//		class UParticleSystem*                             Template                                                   (Parm)
void AGameExplosionActor::SpawnExplosionParticleSystem(class UParticleSystem* Template)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpawnExplosionParticleSystem");

	AGameExplosionActor_SpawnExplosionParticleSystem_Params params {};
	params.Template = Template;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameExplosionActor.UpdateExplosionTemplateWithPerMaterialFX
//		Flags  -> ()
// Parameters:
//		class UPhysicalMaterial*                           PhysMaterial                                               (Parm)
void AGameExplosionActor::UpdateExplosionTemplateWithPerMaterialFX(class UPhysicalMaterial* PhysMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.UpdateExplosionTemplateWithPerMaterialFX");

	AGameExplosionActor_UpdateExplosionTemplateWithPerMaterialFX_Params params {};
	params.PhysMaterial = PhysMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameExplosionActor.SpecialCringeEffectsFor
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Victim                                                     (Parm)
//		float                                              VictimDist                                                 (Parm)
void AGameExplosionActor::SpecialCringeEffectsFor(class AActor* Victim, float VictimDist)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpecialCringeEffectsFor");

	AGameExplosionActor_SpecialCringeEffectsFor_Params params {};
	params.Victim = Victim;
	params.VictimDist = VictimDist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameExplosionActor.SpecialPawnEffectsFor
//		Flags  -> ()
// Parameters:
//		class AGamePawn*                                   VictimPawn                                                 (Parm)
//		float                                              VictimDist                                                 (Parm)
void AGameExplosionActor::SpecialPawnEffectsFor(class AGamePawn* VictimPawn, float VictimDist)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpecialPawnEffectsFor");

	AGameExplosionActor_SpecialPawnEffectsFor_Params params {};
	params.VictimPawn = VictimPawn;
	params.VictimDist = VictimDist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameExplosionActor.GetEffectCheckRadius
//		Flags  -> ()
// Parameters:
//		bool                                               bCauseDamage                                               (Parm)
//		bool                                               bCauseFractureEffects                                      (Parm)
//		bool                                               bCauseEffects                                              (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float AGameExplosionActor::GetEffectCheckRadius(bool bCauseDamage, bool bCauseFractureEffects, bool bCauseEffects)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.GetEffectCheckRadius");

	AGameExplosionActor_GetEffectCheckRadius_Params params {};
	params.bCauseDamage = bCauseDamage;
	params.bCauseFractureEffects = bCauseFractureEffects;
	params.bCauseEffects = bCauseEffects;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameExplosionActor.DoExplosionDamage
//		Flags  -> (Net, HasOptionalParms, Const, Public, NetServer, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
//		bool                                               bCauseDamage                                               (Parm)
//		bool                                               bCauseEffects                                              (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AGameExplosionActor::DoExplosionDamage(bool bCauseDamage, bool bCauseEffects)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DoExplosionDamage");

	AGameExplosionActor_DoExplosionDamage_Params params {};
	params.bCauseDamage = bCauseDamage;
	params.bCauseEffects = bCauseEffects;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameExplosionActor.BoxDistanceToPoint
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Start                                                      (Parm)
//		struct FBox                                        BBox                                                       (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float AGameExplosionActor::BoxDistanceToPoint(const struct FVector& Start, const struct FBox& BBox)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.BoxDistanceToPoint");

	AGameExplosionActor_BoxDistanceToPoint_Params params {};
	params.Start = Start;
	params.BBox = BBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameExplosionActor.IsBehindExplosion
//		Flags  -> ()
// Parameters:
//		class AActor*                                      A                                                          (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AGameExplosionActor::IsBehindExplosion(class AActor* A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.IsBehindExplosion");

	AGameExplosionActor_IsBehindExplosion_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameExplosionActor.DoFullDamageToActor
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Victim                                                     (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AGameExplosionActor::DoFullDamageToActor(class AActor* Victim)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DoFullDamageToActor");

	AGameExplosionActor_DoFullDamageToActor_Params params {};
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameExplosionActor.GetPhysicalMaterial
//		Flags  -> (Singular, Net, NetReliable, Native, Event, Static, Const, Public, NetServer, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
//		class UPhysicalMaterial*                           ReturnValue                                                (Parm, OutParm, ReturnParm)
class UPhysicalMaterial* AGameExplosionActor::STATIC_GetPhysicalMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.GetPhysicalMaterial");

	AGameExplosionActor_GetPhysicalMaterial_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameExplosionActor.PreBeginPlay
//		Flags  -> ()
void AGameExplosionActor::PreBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.PreBeginPlay");

	AGameExplosionActor_PreBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GamePawn.ReattachMeshWithoutBeingSeen
//		Flags  -> ()
void AGamePawn::ReattachMeshWithoutBeingSeen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePawn.ReattachMeshWithoutBeingSeen");

	AGamePawn_ReattachMeshWithoutBeingSeen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GamePawn.ReattachMesh
//		Flags  -> ()
void AGamePawn::ReattachMesh()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePawn.ReattachMesh");

	AGamePawn_ReattachMesh_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GamePawn.UpdateShadowSettings
//		Flags  -> ()
// Parameters:
//		bool                                               bInWantShadow                                              (Parm)
void AGamePawn::UpdateShadowSettings(bool bInWantShadow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePawn.UpdateShadowSettings");

	AGamePawn_UpdateShadowSettings_Params params {};
	params.bInWantShadow = bInWantShadow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.DebugCameraController.ConsoleCommand
//		Flags  -> ()
// Parameters:
//		struct FString                                     Command                                                    (Parm, NeedCtorLink)
//		bool                                               bWriteToLog                                                (OptionalParm, Parm)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString ADebugCameraController::ConsoleCommand(const struct FString& Command, bool bWriteToLog)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.ConsoleCommand");

	ADebugCameraController_ConsoleCommand_Params params {};
	params.Command = Command;
	params.bWriteToLog = bWriteToLog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.DebugCameraController.ShowDebugSelectedInfo
//		Flags  -> ()
void ADebugCameraController::ShowDebugSelectedInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.ShowDebugSelectedInfo");

	ADebugCameraController_ShowDebugSelectedInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.DebugCameraController.NativeInputKey
//		Flags  -> (Singular, Net, Simulated, Native, Operator, Static, HasOptionalParms, Const, Public, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
//		int                                                ControllerId                                               (Parm)
//		struct FName                                       Key                                                        (Parm)
//		TEnumAsByte<Core_EInputEvent>                      Event                                                      (Parm)
//		float                                              AmountDepressed                                            (OptionalParm, Parm)
//		bool                                               bGamepad                                                   (OptionalParm, Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool ADebugCameraController::STATIC_NativeInputKey(int ControllerId, const struct FName& Key, TEnumAsByte<Core_EInputEvent> Event, float AmountDepressed, bool bGamepad)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.NativeInputKey");

	ADebugCameraController_NativeInputKey_Params params {};
	params.ControllerId = ControllerId;
	params.Key = Key;
	params.Event = Event;
	params.AmountDepressed = AmountDepressed;
	params.bGamepad = bGamepad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.DebugCameraController.InitDebugInputSystem
//		Flags  -> ()
void ADebugCameraController::InitDebugInputSystem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.InitDebugInputSystem");

	ADebugCameraController_InitDebugInputSystem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.DebugCameraController.DisableDebugCamera
//		Flags  -> ()
void ADebugCameraController::DisableDebugCamera()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.DisableDebugCamera");

	ADebugCameraController_DisableDebugCamera_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.DebugCameraController.NormalSpeed
//		Flags  -> ()
void ADebugCameraController::NormalSpeed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.NormalSpeed");

	ADebugCameraController_NormalSpeed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.DebugCameraController.MoreSpeed
//		Flags  -> ()
void ADebugCameraController::MoreSpeed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.MoreSpeed");

	ADebugCameraController_MoreSpeed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.DebugCameraController.SetFreezeRendering
//		Flags  -> ()
void ADebugCameraController::SetFreezeRendering()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.SetFreezeRendering");

	ADebugCameraController_SetFreezeRendering_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.DebugCameraController.OnDeactivate
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           PC                                                         (Parm)
void ADebugCameraController::OnDeactivate(class APlayerController* PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.OnDeactivate");

	ADebugCameraController_OnDeactivate_Params params {};
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.DebugCameraController.OnActivate
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           PC                                                         (Parm)
void ADebugCameraController::OnActivate(class APlayerController* PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.OnActivate");

	ADebugCameraController_OnActivate_Params params {};
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.DebugCameraController.PostBeginPlay
//		Flags  -> ()
void ADebugCameraController::PostBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.PostBeginPlay");

	ADebugCameraController_PostBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.DebugCameraController.Unselect
//		Flags  -> ()
void ADebugCameraController::Unselect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.Unselect");

	ADebugCameraController_Unselect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.DebugCameraController.SecondarySelect
//		Flags  -> ()
// Parameters:
//		struct FVector                                     HitLoc                                                     (Parm)
//		struct FVector                                     HitNormal                                                  (Parm)
//		struct FTraceHitInfo                               HitInfo                                                    (Parm)
void ADebugCameraController::SecondarySelect(const struct FVector& HitLoc, const struct FVector& HitNormal, const struct FTraceHitInfo& HitInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.SecondarySelect");

	ADebugCameraController_SecondarySelect_Params params {};
	params.HitLoc = HitLoc;
	params.HitNormal = HitNormal;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.DebugCameraController.PrimarySelect
//		Flags  -> ()
// Parameters:
//		struct FVector                                     HitLoc                                                     (Parm)
//		struct FVector                                     HitNormal                                                  (Parm)
//		struct FTraceHitInfo                               HitInfo                                                    (Parm)
void ADebugCameraController::PrimarySelect(const struct FVector& HitLoc, const struct FVector& HitNormal, const struct FTraceHitInfo& HitInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.PrimarySelect");

	ADebugCameraController_PrimarySelect_Params params {};
	params.HitLoc = HitLoc;
	params.HitNormal = HitNormal;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileInputZone.AddKismetEventHandler
//		Flags  -> ()
// Parameters:
//		class USeqEvent_MobileZoneBase*                    NewHandler                                                 (Parm)
void UMobileInputZone::AddKismetEventHandler(class USeqEvent_MobileZoneBase* NewHandler)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.AddKismetEventHandler");

	UMobileInputZone_AddKismetEventHandler_Params params {};
	params.NewHandler = NewHandler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileInputZone.OnPostDrawZone
//		Flags  -> ()
// Parameters:
//		class UMobileInputZone*                            Zone                                                       (Parm)
//		class UCanvas*                                     Canvas                                                     (Parm)
void UMobileInputZone::OnPostDrawZone(class UMobileInputZone* Zone, class UCanvas* Canvas)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.OnPostDrawZone");

	UMobileInputZone_OnPostDrawZone_Params params {};
	params.Zone = Zone;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileInputZone.OnPreDrawZone
//		Flags  -> ()
// Parameters:
//		class UMobileInputZone*                            Zone                                                       (Parm)
//		class UCanvas*                                     Canvas                                                     (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UMobileInputZone::OnPreDrawZone(class UMobileInputZone* Zone, class UCanvas* Canvas)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.OnPreDrawZone");

	UMobileInputZone_OnPreDrawZone_Params params {};
	params.Zone = Zone;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileInputZone.OnProcessSlide
//		Flags  -> ()
// Parameters:
//		class UMobileInputZone*                            Zone                                                       (Parm)
//		TEnumAsByte<Engine_ETouchType>                     EventType                                                  (Parm)
//		int                                                SlideValue                                                 (Parm)
//		struct FVector2D                                   ViewportSize                                               (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UMobileInputZone::OnProcessSlide(class UMobileInputZone* Zone, TEnumAsByte<Engine_ETouchType> EventType, int SlideValue, const struct FVector2D& ViewportSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.OnProcessSlide");

	UMobileInputZone_OnProcessSlide_Params params {};
	params.Zone = Zone;
	params.EventType = EventType;
	params.SlideValue = SlideValue;
	params.ViewportSize = ViewportSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileInputZone.OnDoubleTapDelegate
//		Flags  -> ()
// Parameters:
//		class UMobileInputZone*                            Zone                                                       (Parm)
//		TEnumAsByte<Engine_ETouchType>                     EventType                                                  (Parm)
//		struct FVector2D                                   TouchLocation                                              (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UMobileInputZone::OnDoubleTapDelegate(class UMobileInputZone* Zone, TEnumAsByte<Engine_ETouchType> EventType, const struct FVector2D& TouchLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.OnDoubleTapDelegate");

	UMobileInputZone_OnDoubleTapDelegate_Params params {};
	params.Zone = Zone;
	params.EventType = EventType;
	params.TouchLocation = TouchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileInputZone.OnTapDelegate
//		Flags  -> ()
// Parameters:
//		class UMobileInputZone*                            Zone                                                       (Parm)
//		TEnumAsByte<Engine_ETouchType>                     EventType                                                  (Parm)
//		struct FVector2D                                   TouchLocation                                              (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UMobileInputZone::OnTapDelegate(class UMobileInputZone* Zone, TEnumAsByte<Engine_ETouchType> EventType, const struct FVector2D& TouchLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.OnTapDelegate");

	UMobileInputZone_OnTapDelegate_Params params {};
	params.Zone = Zone;
	params.EventType = EventType;
	params.TouchLocation = TouchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileInputZone.OnProcessInputDelegate
//		Flags  -> ()
// Parameters:
//		class UMobileInputZone*                            Zone                                                       (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		int                                                Handle                                                     (Parm)
//		TEnumAsByte<Engine_ETouchType>                     EventType                                                  (Parm)
//		struct FVector2D                                   TouchLocation                                              (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UMobileInputZone::OnProcessInputDelegate(class UMobileInputZone* Zone, float DeltaTime, int Handle, TEnumAsByte<Engine_ETouchType> EventType, const struct FVector2D& TouchLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.OnProcessInputDelegate");

	UMobileInputZone_OnProcessInputDelegate_Params params {};
	params.Zone = Zone;
	params.DeltaTime = DeltaTime;
	params.Handle = Handle;
	params.EventType = EventType;
	params.TouchLocation = TouchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileInputZone.DeactivateZone
//		Flags  -> ()
void UMobileInputZone::DeactivateZone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.DeactivateZone");

	UMobileInputZone_DeactivateZone_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileInputZone.ActivateZone
//		Flags  -> ()
void UMobileInputZone::ActivateZone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.ActivateZone");

	UMobileInputZone_ActivateZone_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileHUD.RenderKismetHud
//		Flags  -> ()
// Parameters:
void AMobileHUD::RenderKismetHud()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.RenderKismetHud");

	AMobileHUD_RenderKismetHud_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileHUD.AddKismetRenderEvent
//		Flags  -> ()
// Parameters:
//		class USeqEvent_HudRender*                         NewEvent                                                   (Parm)
void AMobileHUD::AddKismetRenderEvent(class USeqEvent_HudRender* NewEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.AddKismetRenderEvent");

	AMobileHUD_AddKismetRenderEvent_Params params {};
	params.NewEvent = NewEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileHUD.RefreshKismetLinks
//		Flags  -> ()
// Parameters:
void AMobileHUD::RefreshKismetLinks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.RefreshKismetLinks");

	AMobileHUD_RefreshKismetLinks_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileHUD.DrawMobileZone_Slider
//		Flags  -> (Singular, NetReliable, Simulated, Operator, HasOptionalParms, Public, Private, NetServer, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
//		class UMobileInputZone*                            Zone                                                       (Parm)
void AMobileHUD::DrawMobileZone_Slider(class UMobileInputZone* Zone)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawMobileZone_Slider");

	AMobileHUD_DrawMobileZone_Slider_Params params {};
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileHUD.DrawMobileTilt
//		Flags  -> ()
// Parameters:
//		class UMobilePlayerInput*                          MobileInput                                                (Parm)
void AMobileHUD::DrawMobileTilt(class UMobilePlayerInput* MobileInput)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawMobileTilt");

	AMobileHUD_DrawMobileTilt_Params params {};
	params.MobileInput = MobileInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileHUD.DrawMobileZone_Trackball
//		Flags  -> ()
// Parameters:
//		class UMobileInputZone*                            Zone                                                       (Parm)
void AMobileHUD::DrawMobileZone_Trackball(class UMobileInputZone* Zone)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawMobileZone_Trackball");

	AMobileHUD_DrawMobileZone_Trackball_Params params {};
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileHUD.DrawMobileZone_Joystick
//		Flags  -> (Net, NetReliable, Exec, Native, Operator, Static, Public, Private, NetServer, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
//		class UMobileInputZone*                            Zone                                                       (Parm)
void AMobileHUD::STATIC_DrawMobileZone_Joystick(class UMobileInputZone* Zone)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawMobileZone_Joystick");

	AMobileHUD_DrawMobileZone_Joystick_Params params {};
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileHUD.DrawMobileZone_Button
//		Flags  -> ()
// Parameters:
//		class UMobileInputZone*                            Zone                                                       (Parm)
void AMobileHUD::DrawMobileZone_Button(class UMobileInputZone* Zone)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawMobileZone_Button");

	AMobileHUD_DrawMobileZone_Button_Params params {};
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileHUD.DrawInputZoneOverlays
//		Flags  -> ()
// Parameters:
void AMobileHUD::DrawInputZoneOverlays()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawInputZoneOverlays");

	AMobileHUD_DrawInputZoneOverlays_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileHUD.RenderMobileMenu
//		Flags  -> ()
// Parameters:
void AMobileHUD::RenderMobileMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.RenderMobileMenu");

	AMobileHUD_RenderMobileMenu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileHUD.ShowMobileHud
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AMobileHUD::ShowMobileHud()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.ShowMobileHud");

	AMobileHUD_ShowMobileHud_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileHUD.DrawMobileDebugString
//		Flags  -> ()
// Parameters:
//		float                                              XPos                                                       (Parm)
//		float                                              YPos                                                       (Parm)
//		struct FString                                     Str                                                        (Parm, NeedCtorLink)
void AMobileHUD::DrawMobileDebugString(float XPos, float YPos, const struct FString& Str)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawMobileDebugString");

	AMobileHUD_DrawMobileDebugString_Params params {};
	params.XPos = XPos;
	params.YPos = YPos;
	params.Str = Str;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileHUD.PostRender
//		Flags  -> ()
void AMobileHUD::PostRender()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.PostRender");

	AMobileHUD_PostRender_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileHUD.PostBeginPlay
//		Flags  -> ()
void AMobileHUD::PostBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.PostBeginPlay");

	AMobileHUD_PostBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuObject.GetIconIndexes
//		Flags  -> ()
// Parameters:
//		TArray<int>                                        IconIndexes                                                (Parm, OutParm, NeedCtorLink)
void UMobileMenuObject::GetIconIndexes(TArray<int>* IconIndexes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObject.GetIconIndexes");

	UMobileMenuObject_GetIconIndexes_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IconIndexes != nullptr)
		*IconIndexes = params.IconIndexes;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuObject.RenderObject
//		Flags  -> ()
// Parameters:
//		class UCanvas*                                     Canvas                                                     (Parm)
//		float                                              DeltaTime                                                  (Parm)
void UMobileMenuObject::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObject.RenderObject");

	UMobileMenuObject_RenderObject_Params params {};
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuObject.SetCanvasPos
//		Flags  -> ()
// Parameters:
//		class UCanvas*                                     Canvas                                                     (Parm)
//		float                                              OffsetX                                                    (OptionalParm, Parm)
//		float                                              OffsetY                                                    (OptionalParm, Parm)
void UMobileMenuObject::SetCanvasPos(class UCanvas* Canvas, float OffsetX, float OffsetY)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObject.SetCanvasPos");

	UMobileMenuObject_SetCanvasPos_Params params {};
	params.Canvas = Canvas;
	params.OffsetX = OffsetX;
	params.OffsetY = OffsetY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuObject.InitMenuObject
//		Flags  -> ()
// Parameters:
//		class UMobilePlayerInput*                          PlayerInput                                                (Parm)
//		class UMobileMenuScene*                            Scene                                                      (Parm)
//		int                                                ScreenWidth                                                (Parm)
//		int                                                ScreenHeight                                               (Parm)
//		bool                                               bIsFirstInitialization                                     (Parm)
void UMobileMenuObject::InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight, bool bIsFirstInitialization)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObject.InitMenuObject");

	UMobileMenuObject_InitMenuObject_Params params {};
	params.PlayerInput = PlayerInput;
	params.Scene = Scene;
	params.ScreenWidth = ScreenWidth;
	params.ScreenHeight = ScreenHeight;
	params.bIsFirstInitialization = bIsFirstInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuObject.GetRealPosition
//		Flags  -> ()
// Parameters:
//		float                                              PosX                                                       (Parm, OutParm)
//		float                                              PosY                                                       (Parm, OutParm)
void UMobileMenuObject::GetRealPosition(float* PosX, float* PosY)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObject.GetRealPosition");

	UMobileMenuObject_GetRealPosition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PosX != nullptr)
		*PosX = params.PosX;
	if (PosY != nullptr)
		*PosY = params.PosY;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuObject.OnTouch
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<Engine_ETouchType>                     EventType                                                  (Parm)
//		float                                              TouchX                                                     (Parm)
//		float                                              TouchY                                                     (Parm)
//		class UMobileMenuObject*                           ObjectOver                                                 (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UMobileMenuObject::OnTouch(TEnumAsByte<Engine_ETouchType> EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObject.OnTouch");

	UMobileMenuObject_OnTouch_Params params {};
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;
	params.ObjectOver = ObjectOver;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuImage.RenderObject
//		Flags  -> (Singular, Net, NetReliable, Event, HasOptionalParms, Protected, NetServer, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
//		class UCanvas*                                     Canvas                                                     (Parm)
//		float                                              DeltaTime                                                  (Parm)
void UMobileMenuImage::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuImage.RenderObject");

	UMobileMenuImage_RenderObject_Params params {};
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuScene.MobileMenuCommand
//		Flags  -> ()
// Parameters:
//		struct FString                                     Command                                                    (Parm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UMobileMenuScene::MobileMenuCommand(const struct FString& Command)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.MobileMenuCommand");

	UMobileMenuScene_MobileMenuCommand_Params params {};
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuScene.FindMenuObject
//		Flags  -> ()
// Parameters:
//		struct FString                                     Tag                                                        (Parm, NeedCtorLink)
//		class UMobileMenuObject*                           ReturnValue                                                (Parm, OutParm, ReturnParm)
class UMobileMenuObject* UMobileMenuScene::FindMenuObject(const struct FString& Tag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.FindMenuObject");

	UMobileMenuScene_FindMenuObject_Params params {};
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuScene.CleanUpScene
//		Flags  -> ()
void UMobileMenuScene::CleanUpScene()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.CleanUpScene");

	UMobileMenuScene_CleanUpScene_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuScene.Closed
//		Flags  -> ()
void UMobileMenuScene::Closed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.Closed");

	UMobileMenuScene_Closed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuScene.Closing
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UMobileMenuScene::Closing()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.Closing");

	UMobileMenuScene_Closing_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuScene.MadeTopMenu
//		Flags  -> ()
void UMobileMenuScene::MadeTopMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.MadeTopMenu");

	UMobileMenuScene_MadeTopMenu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuScene.Opened
//		Flags  -> ()
// Parameters:
//		struct FString                                     Mode                                                       (Parm, NeedCtorLink)
void UMobileMenuScene::Opened(const struct FString& Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.Opened");

	UMobileMenuScene_Opened_Params params {};
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuScene.OnSceneTouch
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<Engine_ETouchType>                     EventType                                                  (Parm)
//		float                                              TouchX                                                     (Parm)
//		float                                              TouchY                                                     (Parm)
//		bool                                               bInside                                                    (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UMobileMenuScene::OnSceneTouch(TEnumAsByte<Engine_ETouchType> EventType, float TouchX, float TouchY, bool bInside)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.OnSceneTouch");

	UMobileMenuScene_OnSceneTouch_Params params {};
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;
	params.bInside = bInside;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuScene.OnTouch
//		Flags  -> ()
// Parameters:
//		class UMobileMenuObject*                           Sender                                                     (Parm)
//		TEnumAsByte<Engine_ETouchType>                     EventType                                                  (Parm)
//		float                                              TouchX                                                     (Parm)
//		float                                              TouchY                                                     (Parm)
void UMobileMenuScene::OnTouch(class UMobileMenuObject* Sender, TEnumAsByte<Engine_ETouchType> EventType, float TouchX, float TouchY)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.OnTouch");

	UMobileMenuScene_OnTouch_Params params {};
	params.Sender = Sender;
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuScene.PostRenderMenuObject
//		Flags  -> ()
// Parameters:
//		class UMobileMenuObject*                           MenuObject                                                 (Parm)
//		class UCanvas*                                     Canvas                                                     (Parm)
//		float                                              RenderDelta                                                (Parm)
void UMobileMenuScene::PostRenderMenuObject(class UMobileMenuObject* MenuObject, class UCanvas* Canvas, float RenderDelta)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.PostRenderMenuObject");

	UMobileMenuScene_PostRenderMenuObject_Params params {};
	params.MenuObject = MenuObject;
	params.Canvas = Canvas;
	params.RenderDelta = RenderDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuScene.PreRenderMenuObject
//		Flags  -> ()
// Parameters:
//		class UMobileMenuObject*                           MenuObject                                                 (Parm)
//		class UCanvas*                                     Canvas                                                     (Parm)
//		float                                              RenderDelta                                                (Parm)
void UMobileMenuScene::PreRenderMenuObject(class UMobileMenuObject* MenuObject, class UCanvas* Canvas, float RenderDelta)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.PreRenderMenuObject");

	UMobileMenuScene_PreRenderMenuObject_Params params {};
	params.MenuObject = MenuObject;
	params.Canvas = Canvas;
	params.RenderDelta = RenderDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuScene.RenderScene
//		Flags  -> ()
// Parameters:
//		class UCanvas*                                     Canvas                                                     (Parm)
//		float                                              RenderDelta                                                (Parm)
void UMobileMenuScene::RenderScene(class UCanvas* Canvas, float RenderDelta)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.RenderScene");

	UMobileMenuScene_RenderScene_Params params {};
	params.Canvas = Canvas;
	params.RenderDelta = RenderDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuScene.GetSceneFont
//		Flags  -> ()
// Parameters:
//		class UFont*                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
class UFont* UMobileMenuScene::GetSceneFont()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.GetSceneFont");

	UMobileMenuScene_GetSceneFont_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuScene.InitMenuScene
//		Flags  -> ()
// Parameters:
//		class UMobilePlayerInput*                          PlayerInput                                                (Parm)
//		int                                                ScreenWidth                                                (Parm)
//		int                                                ScreenHeight                                               (Parm)
//		bool                                               bIsFirstInitialization                                     (Parm)
void UMobileMenuScene::InitMenuScene(class UMobilePlayerInput* PlayerInput, int ScreenWidth, int ScreenHeight, bool bIsFirstInitialization)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.InitMenuScene");

	UMobileMenuScene_InitMenuScene_Params params {};
	params.PlayerInput = PlayerInput;
	params.ScreenWidth = ScreenWidth;
	params.ScreenHeight = ScreenHeight;
	params.bIsFirstInitialization = bIsFirstInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuScene.GetGlobalScaleY
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UMobileMenuScene::GetGlobalScaleY()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.GetGlobalScaleY");

	UMobileMenuScene_GetGlobalScaleY_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuScene.GetGlobalScaleX
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UMobileMenuScene::GetGlobalScaleX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.GetGlobalScaleX");

	UMobileMenuScene_GetGlobalScaleX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.OpenMobileMenuMode
//		Flags  -> ()
// Parameters:
//		struct FString                                     MenuClassName                                              (Parm, NeedCtorLink)
//		struct FString                                     Mode                                                       (Parm, NeedCtorLink)
//		class UMobileMenuScene*                            ReturnValue                                                (Parm, OutParm, ReturnParm)
class UMobileMenuScene* UMobilePlayerInput::OpenMobileMenuMode(const struct FString& MenuClassName, const struct FString& Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OpenMobileMenuMode");

	UMobilePlayerInput_OpenMobileMenuMode_Params params {};
	params.MenuClassName = MenuClassName;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.OpenMobileMenu
//		Flags  -> ()
// Parameters:
//		struct FString                                     MenuClassName                                              (Parm, NeedCtorLink)
//		class UMobileMenuScene*                            ReturnValue                                                (Parm, OutParm, ReturnParm)
class UMobileMenuScene* UMobilePlayerInput::OpenMobileMenu(const struct FString& MenuClassName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OpenMobileMenu");

	UMobilePlayerInput_OpenMobileMenu_Params params {};
	params.MenuClassName = MenuClassName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.MobileMenuCommand
//		Flags  -> ()
// Parameters:
//		struct FString                                     MenuCommand                                                (Parm, NeedCtorLink)
void UMobilePlayerInput::MobileMenuCommand(const struct FString& MenuCommand)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.MobileMenuCommand");

	UMobilePlayerInput_MobileMenuCommand_Params params {};
	params.MenuCommand = MenuCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.SceneRenderToggle
//		Flags  -> ()
void UMobilePlayerInput::SceneRenderToggle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.SceneRenderToggle");

	UMobilePlayerInput_SceneRenderToggle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.PreClientTravel
//		Flags  -> ()
// Parameters:
//		struct FString                                     PendingURL                                                 (Parm, NeedCtorLink)
//		TEnumAsByte<Engine_ETravelType>                    TravelType                                                 (Parm)
//		bool                                               bIsSeamlessTravel                                          (Parm)
void UMobilePlayerInput::PreClientTravel(const struct FString& PendingURL, TEnumAsByte<Engine_ETravelType> TravelType, bool bIsSeamlessTravel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.PreClientTravel");

	UMobilePlayerInput_PreClientTravel_Params params {};
	params.PendingURL = PendingURL;
	params.TravelType = TravelType;
	params.bIsSeamlessTravel = bIsSeamlessTravel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.RenderMenus
//		Flags  -> ()
// Parameters:
//		class UCanvas*                                     Canvas                                                     (Parm)
//		float                                              RenderDelta                                                (Parm)
void UMobilePlayerInput::RenderMenus(class UCanvas* Canvas, float RenderDelta)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.RenderMenus");

	UMobilePlayerInput_RenderMenus_Params params {};
	params.Canvas = Canvas;
	params.RenderDelta = RenderDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.CloseAllMenus
//		Flags  -> ()
void UMobilePlayerInput::CloseAllMenus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.CloseAllMenus");

	UMobilePlayerInput_CloseAllMenus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.CloseMenuScene
//		Flags  -> ()
// Parameters:
//		class UMobileMenuScene*                            SceneToClose                                               (Parm)
void UMobilePlayerInput::CloseMenuScene(class UMobileMenuScene* SceneToClose)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.CloseMenuScene");

	UMobilePlayerInput_CloseMenuScene_Params params {};
	params.SceneToClose = SceneToClose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.OpenMenuScene
//		Flags  -> (Singular, NetReliable, Native, Event, Operator, Const, Public, Private, NetServer, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
//		class UClass*                                      SceneClass                                                 (Parm)
//		struct FString                                     Mode                                                       (OptionalParm, Parm, NeedCtorLink)
//		class UMobileMenuScene*                            ReturnValue                                                (Parm, OutParm, ReturnParm)
class UMobileMenuScene* UMobilePlayerInput::OpenMenuScene(class UClass* SceneClass, const struct FString& Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OpenMenuScene");

	UMobilePlayerInput_OpenMenuScene_Params params {};
	params.SceneClass = SceneClass;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.SetMobileInputConfig
//		Flags  -> ()
// Parameters:
//		struct FString                                     GroupName                                                  (Parm, NeedCtorLink)
void UMobilePlayerInput::SetMobileInputConfig(const struct FString& GroupName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.SetMobileInputConfig");

	UMobilePlayerInput_SetMobileInputConfig_Params params {};
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.ActivateInputGroup
//		Flags  -> ()
// Parameters:
//		struct FString                                     GroupName                                                  (Parm, NeedCtorLink)
void UMobilePlayerInput::ActivateInputGroup(const struct FString& GroupName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.ActivateInputGroup");

	UMobilePlayerInput_ActivateInputGroup_Params params {};
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.GetCurrentZones
//		Flags  -> ()
// Parameters:
//		TArray<class UMobileInputZone*>                    ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
TArray<class UMobileInputZone*> UMobilePlayerInput::GetCurrentZones()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.GetCurrentZones");

	UMobilePlayerInput_GetCurrentZones_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.HasZones
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UMobilePlayerInput::HasZones()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.HasZones");

	UMobilePlayerInput_HasZones_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.FindorAddZone
//		Flags  -> ()
// Parameters:
//		struct FString                                     ZoneName                                                   (Parm, NeedCtorLink)
//		class UMobileInputZone*                            ReturnValue                                                (Parm, OutParm, ReturnParm)
class UMobileInputZone* UMobilePlayerInput::FindorAddZone(const struct FString& ZoneName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.FindorAddZone");

	UMobilePlayerInput_FindorAddZone_Params params {};
	params.ZoneName = ZoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.FindZone
//		Flags  -> ()
// Parameters:
//		struct FString                                     ZoneName                                                   (Parm, NeedCtorLink)
//		class UMobileInputZone*                            ReturnValue                                                (Parm, OutParm, ReturnParm)
class UMobileInputZone* UMobilePlayerInput::FindZone(const struct FString& ZoneName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.FindZone");

	UMobilePlayerInput_FindZone_Params params {};
	params.ZoneName = ZoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.AddKismetRawInputEventHandler
//		Flags  -> ()
// Parameters:
//		class USeqEvent_MobileRawInput*                    NewHandler                                                 (Parm)
void UMobilePlayerInput::AddKismetRawInputEventHandler(class USeqEvent_MobileRawInput* NewHandler)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.AddKismetRawInputEventHandler");

	UMobilePlayerInput_AddKismetRawInputEventHandler_Params params {};
	params.NewHandler = NewHandler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.AddKismetEventHandler
//		Flags  -> ()
// Parameters:
//		class USeqEvent_MobileBase*                        NewHandler                                                 (Parm)
void UMobilePlayerInput::AddKismetEventHandler(class USeqEvent_MobileBase* NewHandler)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.AddKismetEventHandler");

	UMobilePlayerInput_AddKismetEventHandler_Params params {};
	params.NewHandler = NewHandler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.RefreshKismetLinks
//		Flags  -> ()
// Parameters:
void UMobilePlayerInput::RefreshKismetLinks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.RefreshKismetLinks");

	UMobilePlayerInput_RefreshKismetLinks_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.SwapZoneOwners
//		Flags  -> ()
void UMobilePlayerInput::SwapZoneOwners()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.SwapZoneOwners");

	UMobilePlayerInput_SwapZoneOwners_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.InitializeInputZones
//		Flags  -> ()
// Parameters:
void UMobilePlayerInput::InitializeInputZones()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.InitializeInputZones");

	UMobilePlayerInput_InitializeInputZones_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.InitTouchSystem
//		Flags  -> ()
void UMobilePlayerInput::InitTouchSystem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.InitTouchSystem");

	UMobilePlayerInput_InitTouchSystem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.ClientInitInputSystem
//		Flags  -> ()
void UMobilePlayerInput::ClientInitInputSystem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.ClientInitInputSystem");

	UMobilePlayerInput_ClientInitInputSystem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.InitInputSystem
//		Flags  -> ()
void UMobilePlayerInput::InitInputSystem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.InitInputSystem");

	UMobilePlayerInput_InitInputSystem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.ProcessWorldTouch
//		Flags  -> ()
// Parameters:
//		class UMobileInputZone*                            Zone                                                       (Parm)
//		TEnumAsByte<Engine_ETouchType>                     EventType                                                  (Parm)
//		struct FVector2D                                   TouchLocation                                              (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UMobilePlayerInput::ProcessWorldTouch(class UMobileInputZone* Zone, TEnumAsByte<Engine_ETouchType> EventType, const struct FVector2D& TouchLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.ProcessWorldTouch");

	UMobilePlayerInput_ProcessWorldTouch_Params params {};
	params.Zone = Zone;
	params.EventType = EventType;
	params.TouchLocation = TouchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.SendInputAxis
//		Flags  -> ()
// Parameters:
//		struct FName                                       Key                                                        (Parm)
//		float                                              Delta                                                      (Parm)
//		float                                              DeltaTime                                                  (Parm)
void UMobilePlayerInput::SendInputAxis(const struct FName& Key, float Delta, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.SendInputAxis");

	UMobilePlayerInput_SendInputAxis_Params params {};
	params.Key = Key;
	params.Delta = Delta;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.SendInputKey
//		Flags  -> ()
// Parameters:
//		struct FName                                       Key                                                        (Parm)
//		TEnumAsByte<Core_EInputEvent>                      Event                                                      (Parm)
//		float                                              AmountDepressed                                            (Parm)
void UMobilePlayerInput::SendInputKey(const struct FName& Key, TEnumAsByte<Core_EInputEvent> Event, float AmountDepressed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.SendInputKey");

	UMobilePlayerInput_SendInputKey_Params params {};
	params.Key = Key;
	params.Event = Event;
	params.AmountDepressed = AmountDepressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.ConditionalUpdateInputZones
//		Flags  -> ()
// Parameters:
//		int                                                NewViewportX                                               (Parm)
//		int                                                NewViewportY                                               (Parm)
//		int                                                NewViewportSizeX                                           (Parm)
//		int                                                NewViewportSizeY                                           (Parm)
void UMobilePlayerInput::ConditionalUpdateInputZones(int NewViewportX, int NewViewportY, int NewViewportSizeX, int NewViewportSizeY)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.ConditionalUpdateInputZones");

	UMobilePlayerInput_ConditionalUpdateInputZones_Params params {};
	params.NewViewportX = NewViewportX;
	params.NewViewportY = NewViewportY;
	params.NewViewportSizeX = NewViewportSizeX;
	params.NewViewportSizeY = NewViewportSizeY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.NativeInitializeInputZones
//		Flags  -> ()
// Parameters:
//		bool                                               bIsFirstInitialize                                         (Parm)
void UMobilePlayerInput::NativeInitializeInputZones(bool bIsFirstInitialize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.NativeInitializeInputZones");

	UMobilePlayerInput_NativeInitializeInputZones_Params params {};
	params.bIsFirstInitialize = bIsFirstInitialize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.NativeInitializeInputSystem
//		Flags  -> ()
void UMobilePlayerInput::NativeInitializeInputSystem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.NativeInitializeInputSystem");

	UMobilePlayerInput_NativeInitializeInputSystem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.OnInputTouch
//		Flags  -> ()
// Parameters:
//		int                                                Handle                                                     (Parm)
//		TEnumAsByte<Engine_ETouchType>                     Type                                                       (Parm)
//		struct FVector2D                                   TouchLocation                                              (Parm)
//		float                                              DeviceTimestamp                                            (Parm)
//		int                                                TouchpadIndex                                              (Parm)
void UMobilePlayerInput::OnInputTouch(int Handle, TEnumAsByte<Engine_ETouchType> Type, const struct FVector2D& TouchLocation, float DeviceTimestamp, int TouchpadIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OnInputTouch");

	UMobilePlayerInput_OnInputTouch_Params params {};
	params.Handle = Handle;
	params.Type = Type;
	params.TouchLocation = TouchLocation;
	params.DeviceTimestamp = DeviceTimestamp;
	params.TouchpadIndex = TouchpadIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.OnPreviewTouch
//		Flags  -> ()
// Parameters:
//		float                                              X                                                          (Parm)
//		float                                              Y                                                          (Parm)
//		int                                                TouchpadIndex                                              (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UMobilePlayerInput::OnPreviewTouch(float X, float Y, int TouchpadIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OnPreviewTouch");

	UMobilePlayerInput_OnPreviewTouch_Params params {};
	params.X = X;
	params.Y = Y;
	params.TouchpadIndex = TouchpadIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.OnTouchNotHandledInMenu
//		Flags  -> ()
void UMobilePlayerInput::OnTouchNotHandledInMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OnTouchNotHandledInMenu");

	UMobilePlayerInput_OnTouchNotHandledInMenu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.PlayerInput
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (Parm)
void UMobilePlayerInput::PlayerInput(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.PlayerInput");

	UMobilePlayerInput_PlayerInput_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.CancelMobileInput
//		Flags  -> ()
void UMobilePlayerInput::CancelMobileInput()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.CancelMobileInput");

	UMobilePlayerInput_CancelMobileInput_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobilePlayerInput.ProcessMobileInput
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (Parm)
void UMobilePlayerInput::ProcessMobileInput(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.ProcessMobileInput");

	UMobilePlayerInput_ProcessMobileInput_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle
//		Flags  -> ()
void UNavMeshGoal_OutOfViewFrom::Recycle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle");

	UNavMeshGoal_OutOfViewFrom_Recycle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.NavMeshGoal_OutOfViewFrom.MustBeHiddenFromThisPoint
//		Flags  -> ()
// Parameters:
//		class UNavigationHandle*                           NavHandle                                                  (Parm)
//		struct FVector                                     InOutOfViewLocation                                        (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UNavMeshGoal_OutOfViewFrom::MustBeHiddenFromThisPoint(class UNavigationHandle* NavHandle, const struct FVector& InOutOfViewLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.NavMeshGoal_OutOfViewFrom.MustBeHiddenFromThisPoint");

	UNavMeshGoal_OutOfViewFrom_MustBeHiddenFromThisPoint_Params params {};
	params.NavHandle = NavHandle;
	params.InOutOfViewLocation = InOutOfViewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative
//		Flags  -> ()
void UNavMeshGoal_OutOfViewFrom::RecycleNative()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative");

	UNavMeshGoal_OutOfViewFrom_RecycleNative_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle
//		Flags  -> ()
void UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::Recycle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle");

	UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_Recycle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.BiasAgainstPolysWithinDistanceOfLocations
//		Flags  -> ()
// Parameters:
//		class UNavigationHandle*                           NavHandle                                                  (Parm)
//		struct FVector                                     InLocation                                                 (Const, Parm)
//		struct FRotator                                    InRotation                                                 (Const, Parm)
//		float                                              InDistanceToCheck                                          (Const, Parm)
//		TArray<struct FVector>                             InLocationsToCheck                                         (Const, Parm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::BiasAgainstPolysWithinDistanceOfLocations(class UNavigationHandle* NavHandle, const struct FVector& InLocation, const struct FRotator& InRotation, float InDistanceToCheck, TArray<struct FVector> InLocationsToCheck)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.BiasAgainstPolysWithinDistanceOfLocations");

	UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_BiasAgainstPolysWithinDistanceOfLocations_Params params {};
	params.NavHandle = NavHandle;
	params.InLocation = InLocation;
	params.InRotation = InRotation;
	params.InDistanceToCheck = InDistanceToCheck;
	params.InLocationsToCheck = InLocationsToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.SecondaryViewportClient.PostRender
//		Flags  -> ()
// Parameters:
//		class UCanvas*                                     Canvas                                                     (Parm)
void USecondaryViewportClient::PostRender(class UCanvas* Canvas)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.SecondaryViewportClient.PostRender");

	USecondaryViewportClient_PostRender_Params params {};
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileSecondaryViewportClient.PostRender
//		Flags  -> ()
// Parameters:
//		class UCanvas*                                     Canvas                                                     (Parm)
void UMobileSecondaryViewportClient::PostRender(class UCanvas* Canvas)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileSecondaryViewportClient.PostRender");

	UMobileSecondaryViewportClient_PostRender_Params params {};
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.AgentDestroyed
//		Flags  -> ()
// Parameters:
//		class AGameCrowdAgent*                             Agent                                                      (Parm)
void USeqAct_GameCrowdPopulationManagerToggle::AgentDestroyed(class AGameCrowdAgent* Agent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.AgentDestroyed");

	USeqAct_GameCrowdPopulationManagerToggle_AgentDestroyed_Params params {};
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetMaxSpawnDist
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float USeqAct_GameCrowdPopulationManagerToggle::GetMaxSpawnDist()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetMaxSpawnDist");

	USeqAct_GameCrowdPopulationManagerToggle_GetMaxSpawnDist_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.FillCrowdSpawnInfoItem
//		Flags  -> ()
// Parameters:
//		struct FCrowdSpawnInfoItem                         out_Item                                                   (Parm, OutParm, NeedCtorLink)
//		class AGameCrowdPopulationManager*                 PopMgr                                                     (Parm)
void USeqAct_GameCrowdPopulationManagerToggle::FillCrowdSpawnInfoItem(struct FCrowdSpawnInfoItem* out_Item, class AGameCrowdPopulationManager* PopMgr)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.FillCrowdSpawnInfoItem");

	USeqAct_GameCrowdPopulationManagerToggle_FillCrowdSpawnInfoItem_Params params {};
	params.PopMgr = PopMgr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (out_Item != nullptr)
		*out_Item = params.out_Item;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetObjClassVersion
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int USeqAct_GameCrowdPopulationManagerToggle::GetObjClassVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetObjClassVersion");

	USeqAct_GameCrowdPopulationManagerToggle_GetObjClassVersion_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.SeqAct_GameCrowdSpawner.GetObjClassVersion
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int USeqAct_GameCrowdSpawner::GetObjClassVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdSpawner.GetObjClassVersion");

	USeqAct_GameCrowdSpawner_GetObjClassVersion_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.SeqAct_MobileSaveLoadValue.GetObjClassVersion
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int USeqAct_MobileSaveLoadValue::GetObjClassVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_MobileSaveLoadValue.GetObjClassVersion");

	USeqAct_MobileSaveLoadValue_GetObjClassVersion_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.SeqAct_PlayAgentAnimation.SetCurrentAnimationActionFor
//		Flags  -> ()
// Parameters:
//		class AGameCrowdAgentSkeletal*                     Agent                                                      (Parm)
void USeqAct_PlayAgentAnimation::SetCurrentAnimationActionFor(class AGameCrowdAgentSkeletal* Agent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_PlayAgentAnimation.SetCurrentAnimationActionFor");

	USeqAct_PlayAgentAnimation_SetCurrentAnimationActionFor_Params params {};
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.SeqAct_PlayAgentAnimation.GetObjClassVersion
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int USeqAct_PlayAgentAnimation::GetObjClassVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_PlayAgentAnimation.GetObjClassVersion");

	USeqAct_PlayAgentAnimation_GetObjClassVersion_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.SeqEvent_HudRender.Render
//		Flags  -> ()
// Parameters:
//		class UCanvas*                                     TargetCanvas                                               (Parm)
//		class AHUD*                                        TargetHud                                                  (Parm)
void USeqEvent_HudRender::Render(class UCanvas* TargetCanvas, class AHUD* TargetHud)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_HudRender.Render");

	USeqEvent_HudRender_Render_Params params {};
	params.TargetCanvas = TargetCanvas;
	params.TargetHud = TargetHud;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.SeqEvent_HudRender.RegisterEvent
//		Flags  -> ()
// Parameters:
void USeqEvent_HudRender::RegisterEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_HudRender.RegisterEvent");

	USeqEvent_HudRender_RegisterEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.SeqEvent_MobileBase.AddToMobileInput
//		Flags  -> ()
// Parameters:
//		class UMobilePlayerInput*                          MPI                                                        (Parm)
void USeqEvent_MobileBase::AddToMobileInput(class UMobilePlayerInput* MPI)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_MobileBase.AddToMobileInput");

	USeqEvent_MobileBase_AddToMobileInput_Params params {};
	params.MPI = MPI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.SeqEvent_MobileBase.RegisterEvent
//		Flags  -> ()
// Parameters:
void USeqEvent_MobileBase::RegisterEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_MobileBase.RegisterEvent");

	USeqEvent_MobileBase_RegisterEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.SeqEvent_MobileMotion.GetObjClassVersion
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int USeqEvent_MobileMotion::GetObjClassVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_MobileMotion.GetObjClassVersion");

	USeqEvent_MobileMotion_GetObjClassVersion_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.SeqEvent_MobileZoneBase.AddToMobileInput
//		Flags  -> ()
// Parameters:
//		class UMobilePlayerInput*                          MPI                                                        (Parm)
void USeqEvent_MobileZoneBase::AddToMobileInput(class UMobilePlayerInput* MPI)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_MobileZoneBase.AddToMobileInput");

	USeqEvent_MobileZoneBase_AddToMobileInput_Params params {};
	params.MPI = MPI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.SeqEvent_MobileRawInput.RegisterEvent
//		Flags  -> ()
// Parameters:
void USeqEvent_MobileRawInput::RegisterEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_MobileRawInput.RegisterEvent");

	USeqEvent_MobileRawInput_RegisterEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCameraBase.ModifyPostProcessSettings
//		Flags  -> ()
// Parameters:
//		struct FPostProcessSettings                        PP                                                         (Parm, OutParm, NeedCtorLink)
void UGameCameraBase::ModifyPostProcessSettings(struct FPostProcessSettings* PP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.ModifyPostProcessSettings");

	UGameCameraBase_ModifyPostProcessSettings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PP != nullptr)
		*PP = params.PP;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCameraBase.Init
//		Flags  -> ()
void UGameCameraBase::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.Init");

	UGameCameraBase_Init_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCameraBase.DisplayDebug
//		Flags  -> ()
// Parameters:
//		class AHUD*                                        HUD                                                        (Parm)
//		float                                              out_YL                                                     (Parm, OutParm)
//		float                                              out_YPos                                                   (Parm, OutParm)
void UGameCameraBase::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.DisplayDebug");

	UGameCameraBase_DisplayDebug_Params params {};
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
//		Name   -> Function GameFramework.GameCameraBase.ProcessViewRotation
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (Parm)
//		class AActor*                                      ViewTarget                                                 (Parm)
//		struct FRotator                                    out_ViewRotation                                           (Parm, OutParm)
//		struct FRotator                                    out_DeltaRot                                               (Parm, OutParm)
void UGameCameraBase::ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.ProcessViewRotation");

	UGameCameraBase_ProcessViewRotation_Params params {};
	params.DeltaTime = DeltaTime;
	params.ViewTarget = ViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (out_ViewRotation != nullptr)
		*out_ViewRotation = params.out_ViewRotation;
	if (out_DeltaRot != nullptr)
		*out_DeltaRot = params.out_DeltaRot;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCameraBase.UpdateCamera
//		Flags  -> ()
// Parameters:
//		class APawn*                                       P                                                          (Parm)
//		class AGamePlayerCamera*                           CameraActor                                                (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		struct FTViewTarget                                OutVT                                                      (Parm, OutParm)
void UGameCameraBase::UpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.UpdateCamera");

	UGameCameraBase_UpdateCamera_Params params {};
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
//		Name   -> Function GameFramework.GameCameraBase.ResetInterpolation
//		Flags  -> ()
void UGameCameraBase::ResetInterpolation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.ResetInterpolation");

	UGameCameraBase_ResetInterpolation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCameraBase.OnBecomeInActive
//		Flags  -> ()
// Parameters:
//		class UGameCameraBase*                             NewCamera                                                  (Parm)
void UGameCameraBase::OnBecomeInActive(class UGameCameraBase* NewCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.OnBecomeInActive");

	UGameCameraBase_OnBecomeInActive_Params params {};
	params.NewCamera = NewCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCameraBase.OnBecomeActive
//		Flags  -> ()
// Parameters:
//		class UGameCameraBase*                             OldCamera                                                  (Parm)
void UGameCameraBase::OnBecomeActive(class UGameCameraBase* OldCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.OnBecomeActive");

	UGameCameraBase_OnBecomeActive_Params params {};
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCamera.ResetInterpolation
//		Flags  -> ()
void UGameThirdPersonCamera::ResetInterpolation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.ResetInterpolation");

	UGameThirdPersonCamera_ResetInterpolation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCamera.ModifyPostProcessSettings
//		Flags  -> ()
// Parameters:
//		struct FPostProcessSettings                        PP                                                         (Parm, OutParm, NeedCtorLink)
void UGameThirdPersonCamera::ModifyPostProcessSettings(struct FPostProcessSettings* PP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.ModifyPostProcessSettings");

	UGameThirdPersonCamera_ModifyPostProcessSettings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PP != nullptr)
		*PP = params.PP;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCamera.OnBecomeActive
//		Flags  -> ()
// Parameters:
//		class UGameCameraBase*                             OldCamera                                                  (Parm)
void UGameThirdPersonCamera::OnBecomeActive(class UGameCameraBase* OldCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.OnBecomeActive");

	UGameThirdPersonCamera_OnBecomeActive_Params params {};
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCamera.ProcessViewRotation
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (Parm)
//		class AActor*                                      ViewTarget                                                 (Parm)
//		struct FRotator                                    out_ViewRotation                                           (Parm, OutParm)
//		struct FRotator                                    out_DeltaRot                                               (Parm, OutParm)
void UGameThirdPersonCamera::ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.ProcessViewRotation");

	UGameThirdPersonCamera_ProcessViewRotation_Params params {};
	params.DeltaTime = DeltaTime;
	params.ViewTarget = ViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (out_ViewRotation != nullptr)
		*out_ViewRotation = params.out_ViewRotation;
	if (out_DeltaRot != nullptr)
		*out_DeltaRot = params.out_DeltaRot;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCamera.UpdateCameraMode
//		Flags  -> ()
// Parameters:
//		class APawn*                                       P                                                          (Parm)
void UGameThirdPersonCamera::UpdateCameraMode(class APawn* P)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.UpdateCameraMode");

	UGameThirdPersonCamera_UpdateCameraMode_Params params {};
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCamera.FindBestCameraMode
//		Flags  -> ()
// Parameters:
//		class APawn*                                       P                                                          (Parm)
//		class UGameThirdPersonCameraMode*                  ReturnValue                                                (Parm, OutParm, ReturnParm)
class UGameThirdPersonCameraMode* UGameThirdPersonCamera::FindBestCameraMode(class APawn* P)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.FindBestCameraMode");

	UGameThirdPersonCamera_FindBestCameraMode_Params params {};
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCamera.AdjustFocusPointInterpolation
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    Delta                                                      (Parm)
void UGameThirdPersonCamera::AdjustFocusPointInterpolation(const struct FRotator& Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.AdjustFocusPointInterpolation");

	UGameThirdPersonCamera_AdjustFocusPointInterpolation_Params params {};
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCamera.GetActualFocusLocation
//		Flags  -> (Singular, Net, Simulated, Operator, Const, Private, NetServer, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UGameThirdPersonCamera::GetActualFocusLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.GetActualFocusLocation");

	UGameThirdPersonCamera_GetActualFocusLocation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCamera.UpdateFocusPoint
//		Flags  -> ()
// Parameters:
//		class APawn*                                       P                                                          (Parm)
void UGameThirdPersonCamera::UpdateFocusPoint(class APawn* P)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.UpdateFocusPoint");

	UGameThirdPersonCamera_UpdateFocusPoint_Params params {};
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCamera.ClearFocusPoint
//		Flags  -> ()
// Parameters:
//		bool                                               bLeaveCameraRotation                                       (OptionalParm, Parm)
void UGameThirdPersonCamera::ClearFocusPoint(bool bLeaveCameraRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.ClearFocusPoint");

	UGameThirdPersonCamera_ClearFocusPoint_Params params {};
	params.bLeaveCameraRotation = bLeaveCameraRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCamera.GetFocusActor
//		Flags  -> ()
// Parameters:
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ReturnParm)
class AActor* UGameThirdPersonCamera::GetFocusActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.GetFocusActor");

	UGameThirdPersonCamera_GetFocusActor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCamera.SetFocusOnActor
//		Flags  -> ()
// Parameters:
//		class AActor*                                      FocusActor                                                 (Parm)
//		struct FName                                       FocusBoneName                                              (Parm)
//		struct FVector2D                                   InterpSpeedRange                                           (Parm)
//		struct FVector2D                                   InFocusFOV                                                 (Parm)
//		float                                              CameraFOV                                                  (OptionalParm, Parm)
//		bool                                               bAlwaysFocus                                               (OptionalParm, Parm)
//		bool                                               bAdjustCamera                                              (OptionalParm, Parm)
//		bool                                               bIgnoreTrace                                               (OptionalParm, Parm)
//		float                                              FocusPitchOffsetDeg                                        (OptionalParm, Parm)
void UGameThirdPersonCamera::SetFocusOnActor(class AActor* FocusActor, const struct FName& FocusBoneName, const struct FVector2D& InterpSpeedRange, const struct FVector2D& InFocusFOV, float CameraFOV, bool bAlwaysFocus, bool bAdjustCamera, bool bIgnoreTrace, float FocusPitchOffsetDeg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.SetFocusOnActor");

	UGameThirdPersonCamera_SetFocusOnActor_Params params {};
	params.FocusActor = FocusActor;
	params.FocusBoneName = FocusBoneName;
	params.InterpSpeedRange = InterpSpeedRange;
	params.InFocusFOV = InFocusFOV;
	params.CameraFOV = CameraFOV;
	params.bAlwaysFocus = bAlwaysFocus;
	params.bAdjustCamera = bAdjustCamera;
	params.bIgnoreTrace = bIgnoreTrace;
	params.FocusPitchOffsetDeg = FocusPitchOffsetDeg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCamera.SetFocusOnLoc
//		Flags  -> ()
// Parameters:
//		struct FVector                                     FocusWorldLoc                                              (Parm)
//		struct FVector2D                                   InterpSpeedRange                                           (Parm)
//		struct FVector2D                                   InFocusFOV                                                 (Parm)
//		float                                              CameraFOV                                                  (OptionalParm, Parm)
//		bool                                               bAlwaysFocus                                               (OptionalParm, Parm)
//		bool                                               bAdjustCamera                                              (OptionalParm, Parm)
//		bool                                               bIgnoreTrace                                               (OptionalParm, Parm)
//		float                                              FocusPitchOffsetDeg                                        (OptionalParm, Parm)
void UGameThirdPersonCamera::SetFocusOnLoc(const struct FVector& FocusWorldLoc, const struct FVector2D& InterpSpeedRange, const struct FVector2D& InFocusFOV, float CameraFOV, bool bAlwaysFocus, bool bAdjustCamera, bool bIgnoreTrace, float FocusPitchOffsetDeg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.SetFocusOnLoc");

	UGameThirdPersonCamera_SetFocusOnLoc_Params params {};
	params.FocusWorldLoc = FocusWorldLoc;
	params.InterpSpeedRange = InterpSpeedRange;
	params.InFocusFOV = InFocusFOV;
	params.CameraFOV = CameraFOV;
	params.bAlwaysFocus = bAlwaysFocus;
	params.bAdjustCamera = bAdjustCamera;
	params.bIgnoreTrace = bIgnoreTrace;
	params.FocusPitchOffsetDeg = FocusPitchOffsetDeg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCamera.AdjustTurn
//		Flags  -> ()
// Parameters:
//		int                                                AngleOffset                                                (Parm)
void UGameThirdPersonCamera::AdjustTurn(int AngleOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.AdjustTurn");

	UGameThirdPersonCamera_AdjustTurn_Params params {};
	params.AngleOffset = AngleOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCamera.EndTurn
//		Flags  -> ()
void UGameThirdPersonCamera::EndTurn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.EndTurn");

	UGameThirdPersonCamera_EndTurn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCamera.BeginTurn
//		Flags  -> ()
// Parameters:
//		int                                                StartAngle                                                 (Parm)
//		int                                                EndAngle                                                   (Parm)
//		float                                              TimeSec                                                    (Parm)
//		float                                              DelaySec                                                   (OptionalParm, Parm)
//		bool                                               bAlignTargetWhenFinished                                   (OptionalParm, Parm)
void UGameThirdPersonCamera::BeginTurn(int StartAngle, int EndAngle, float TimeSec, float DelaySec, bool bAlignTargetWhenFinished)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.BeginTurn");

	UGameThirdPersonCamera_BeginTurn_Params params {};
	params.StartAngle = StartAngle;
	params.EndAngle = EndAngle;
	params.TimeSec = TimeSec;
	params.DelaySec = DelaySec;
	params.bAlignTargetWhenFinished = bAlignTargetWhenFinished;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCamera.PlayerUpdateCamera
//		Flags  -> ()
// Parameters:
//		class APawn*                                       P                                                          (Parm)
//		class AGamePlayerCamera*                           CameraActor                                                (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		struct FTViewTarget                                OutVT                                                      (Parm, OutParm)
void UGameThirdPersonCamera::PlayerUpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.PlayerUpdateCamera");

	UGameThirdPersonCamera_PlayerUpdateCamera_Params params {};
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
//		Name   -> Function GameFramework.GameThirdPersonCamera.UpdateCamera
//		Flags  -> ()
// Parameters:
//		class APawn*                                       P                                                          (Parm)
//		class AGamePlayerCamera*                           CameraActor                                                (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		struct FTViewTarget                                OutVT                                                      (Parm, OutParm)
void UGameThirdPersonCamera::UpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.UpdateCamera");

	UGameThirdPersonCamera_UpdateCamera_Params params {};
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
//		Name   -> Function GameFramework.GameThirdPersonCamera.GetDesiredFOV
//		Flags  -> ()
// Parameters:
//		class APawn*                                       ViewedPawn                                                 (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UGameThirdPersonCamera::GetDesiredFOV(class APawn* ViewedPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.GetDesiredFOV");

	UGameThirdPersonCamera_GetDesiredFOV_Params params {};
	params.ViewedPawn = ViewedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCamera.Init
//		Flags  -> ()
void UGameThirdPersonCamera::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.Init");

	UGameThirdPersonCamera_Init_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCamera.Reset
//		Flags  -> ()
void UGameThirdPersonCamera::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.Reset");

	UGameThirdPersonCamera_Reset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCamera.CreateCameraMode
//		Flags  -> ()
// Parameters:
//		class UClass*                                      ModeClass                                                  (Parm)
//		class UGameThirdPersonCameraMode*                  ReturnValue                                                (Parm, OutParm, ReturnParm)
class UGameThirdPersonCameraMode* UGameThirdPersonCamera::CreateCameraMode(class UClass* ModeClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.CreateCameraMode");

	UGameThirdPersonCamera_CreateCameraMode_Params params {};
	params.ModeClass = ModeClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GamePlayerCamera.AdjustFOVForViewport
//		Flags  -> ()
// Parameters:
//		float                                              inHorizFOV                                                 (Parm)
//		class APawn*                                       CameraTargetPawn                                           (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float AGamePlayerCamera::AdjustFOVForViewport(float inHorizFOV, class APawn* CameraTargetPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.AdjustFOVForViewport");

	AGamePlayerCamera_AdjustFOVForViewport_Params params {};
	params.inHorizFOV = inHorizFOV;
	params.CameraTargetPawn = CameraTargetPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GamePlayerCamera.ProcessViewRotation
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (Parm)
//		struct FRotator                                    out_ViewRotation                                           (Parm, OutParm)
//		struct FRotator                                    out_DeltaRot                                               (Parm, OutParm)
void AGamePlayerCamera::ProcessViewRotation(float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.ProcessViewRotation");

	AGamePlayerCamera_ProcessViewRotation_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (out_ViewRotation != nullptr)
		*out_ViewRotation = params.out_ViewRotation;
	if (out_DeltaRot != nullptr)
		*out_DeltaRot = params.out_DeltaRot;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GamePlayerCamera.ResetInterpolation
//		Flags  -> ()
void AGamePlayerCamera::ResetInterpolation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.ResetInterpolation");

	AGamePlayerCamera_ResetInterpolation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GamePlayerCamera.SetColorScale
//		Flags  -> ()
// Parameters:
//		struct FVector                                     NewColorScale                                              (Parm)
void AGamePlayerCamera::SetColorScale(const struct FVector& NewColorScale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.SetColorScale");

	AGamePlayerCamera_SetColorScale_Params params {};
	params.NewColorScale = NewColorScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GamePlayerCamera.DisplayDebug
//		Flags  -> ()
// Parameters:
//		class AHUD*                                        HUD                                                        (Parm)
//		float                                              out_YL                                                     (Parm, OutParm)
//		float                                              out_YPos                                                   (Parm, OutParm)
void AGamePlayerCamera::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.DisplayDebug");

	AGamePlayerCamera_DisplayDebug_Params params {};
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
//		Name   -> Function GameFramework.GamePlayerCamera.UpdateCameraLensEffects
//		Flags  -> ()
// Parameters:
//		struct FTViewTarget                                OutVT                                                      (Const, Parm, OutParm)
void AGamePlayerCamera::UpdateCameraLensEffects(struct FTViewTarget* OutVT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.UpdateCameraLensEffects");

	AGamePlayerCamera_UpdateCameraLensEffects_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GamePlayerCamera.UpdateViewTarget
//		Flags  -> ()
// Parameters:
//		struct FTViewTarget                                OutVT                                                      (Parm, OutParm)
//		float                                              DeltaTime                                                  (Parm)
void AGamePlayerCamera::UpdateViewTarget(struct FTViewTarget* OutVT, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.UpdateViewTarget");

	AGamePlayerCamera_UpdateViewTarget_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GamePlayerCamera.ShouldConstrainAspectRatio
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AGamePlayerCamera::ShouldConstrainAspectRatio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.ShouldConstrainAspectRatio");

	AGamePlayerCamera_ShouldConstrainAspectRatio_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GamePlayerCamera.FindBestCameraType
//		Flags  -> ()
// Parameters:
//		class AActor*                                      CameraTarget                                               (Parm)
//		class UGameCameraBase*                             ReturnValue                                                (Parm, OutParm, ReturnParm)
class UGameCameraBase* AGamePlayerCamera::FindBestCameraType(class AActor* CameraTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.FindBestCameraType");

	AGamePlayerCamera_FindBestCameraType_Params params {};
	params.CameraTarget = CameraTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GamePlayerCamera.Reset
//		Flags  -> ()
void AGamePlayerCamera::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.Reset");

	AGamePlayerCamera_Reset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GamePlayerCamera.PostBeginPlay
//		Flags  -> ()
void AGamePlayerCamera::PostBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.PostBeginPlay");

	AGamePlayerCamera_PostBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GamePlayerCamera.CacheLastTargetBaseInfo
//		Flags  -> ()
// Parameters:
//		class AActor*                                      TargetBase                                                 (Parm)
void AGamePlayerCamera::CacheLastTargetBaseInfo(class AActor* TargetBase)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.CacheLastTargetBaseInfo");

	AGamePlayerCamera_CacheLastTargetBaseInfo_Params params {};
	params.TargetBase = TargetBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GamePlayerCamera.CreateCamera
//		Flags  -> ()
// Parameters:
//		class UClass*                                      CameraClass                                                (Parm)
//		class UGameCameraBase*                             ReturnValue                                                (Parm, OutParm, ReturnParm)
class UGameCameraBase* AGamePlayerCamera::CreateCamera(class UClass* CameraClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.CreateCamera");

	AGamePlayerCamera_CreateCamera_Params params {};
	params.CameraClass = CameraClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCameraMode.SetViewOffset
//		Flags  -> ()
// Parameters:
//		struct FViewOffsetData                             NewViewOffset                                              (Const, Parm, OutParm)
void UGameThirdPersonCameraMode::SetViewOffset(struct FViewOffsetData* NewViewOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.SetViewOffset");

	UGameThirdPersonCameraMode_SetViewOffset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewViewOffset != nullptr)
		*NewViewOffset = params.NewViewOffset;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCameraMode.ModifyPostProcessSettings
//		Flags  -> ()
// Parameters:
//		struct FPostProcessSettings                        PP                                                         (Parm, OutParm, NeedCtorLink)
void UGameThirdPersonCameraMode::ModifyPostProcessSettings(struct FPostProcessSettings* PP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.ModifyPostProcessSettings");

	UGameThirdPersonCameraMode_ModifyPostProcessSettings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PP != nullptr)
		*PP = params.PP;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCameraMode.UpdatePostProcess
//		Flags  -> (Net, NetReliable, Native, Operator, Static, HasOptionalParms, Const, Private, NetServer, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
//		struct FTViewTarget                                VT                                                         (Const, Parm, OutParm)
//		float                                              DeltaTime                                                  (Parm)
void UGameThirdPersonCameraMode::STATIC_UpdatePostProcess(struct FTViewTarget* VT, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.UpdatePostProcess");

	UGameThirdPersonCameraMode_UpdatePostProcess_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (VT != nullptr)
		*VT = params.VT;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCameraMode.DOFTrace
//		Flags  -> (Singular, Net, Exec, Operator, HasOptionalParms, Const, Private, NetServer, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
//		class AActor*                                      TraceOwner                                                 (Parm)
//		struct FVector                                     StartTrace                                                 (Parm)
//		struct FVector                                     EndTrace                                                   (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UGameThirdPersonCameraMode::DOFTrace(class AActor* TraceOwner, const struct FVector& StartTrace, const struct FVector& EndTrace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.DOFTrace");

	UGameThirdPersonCameraMode_DOFTrace_Params params {};
	params.TraceOwner = TraceOwner;
	params.StartTrace = StartTrace;
	params.EndTrace = EndTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCameraMode.GetDOFFocusLoc
//		Flags  -> ()
// Parameters:
//		class AActor*                                      TraceOwner                                                 (Parm)
//		struct FVector                                     StartTrace                                                 (Parm)
//		struct FVector                                     EndTrace                                                   (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UGameThirdPersonCameraMode::GetDOFFocusLoc(class AActor* TraceOwner, const struct FVector& StartTrace, const struct FVector& EndTrace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.GetDOFFocusLoc");

	UGameThirdPersonCameraMode_GetDOFFocusLoc_Params params {};
	params.TraceOwner = TraceOwner;
	params.StartTrace = StartTrace;
	params.EndTrace = EndTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCameraMode.ProcessViewRotation
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (Parm)
//		class AActor*                                      ViewTarget                                                 (Parm)
//		struct FRotator                                    out_ViewRotation                                           (Parm, OutParm)
//		struct FRotator                                    out_DeltaRot                                               (Parm, OutParm)
void UGameThirdPersonCameraMode::ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.ProcessViewRotation");

	UGameThirdPersonCameraMode_ProcessViewRotation_Params params {};
	params.DeltaTime = DeltaTime;
	params.ViewTarget = ViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (out_ViewRotation != nullptr)
		*out_ViewRotation = params.out_ViewRotation;
	if (out_DeltaRot != nullptr)
		*out_DeltaRot = params.out_DeltaRot;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCameraMode.SetFocusPoint
//		Flags  -> ()
// Parameters:
//		class APawn*                                       ViewedPawn                                                 (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameThirdPersonCameraMode::SetFocusPoint(class APawn* ViewedPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.SetFocusPoint");

	UGameThirdPersonCameraMode_SetFocusPoint_Params params {};
	params.ViewedPawn = ViewedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCameraMode.GetCameraWorstCaseLoc
//		Flags  -> ()
// Parameters:
//		class APawn*                                       TargetPawn                                                 (Parm)
//		struct FTViewTarget                                CurrentViewTarget                                          (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UGameThirdPersonCameraMode::GetCameraWorstCaseLoc(class APawn* TargetPawn, const struct FTViewTarget& CurrentViewTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.GetCameraWorstCaseLoc");

	UGameThirdPersonCameraMode_GetCameraWorstCaseLoc_Params params {};
	params.TargetPawn = TargetPawn;
	params.CurrentViewTarget = CurrentViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCameraMode.GetDesiredFOV
//		Flags  -> ()
// Parameters:
//		class APawn*                                       ViewedPawn                                                 (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UGameThirdPersonCameraMode::GetDesiredFOV(class APawn* ViewedPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.GetDesiredFOV");

	UGameThirdPersonCameraMode_GetDesiredFOV_Params params {};
	params.ViewedPawn = ViewedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCameraMode.AdjustViewOffset
//		Flags  -> ()
// Parameters:
//		class APawn*                                       P                                                          (Parm)
//		struct FVector                                     Offset                                                     (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UGameThirdPersonCameraMode::AdjustViewOffset(class APawn* P, const struct FVector& Offset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.AdjustViewOffset");

	UGameThirdPersonCameraMode_AdjustViewOffset_Params params {};
	params.P = P;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCameraMode.OnBecomeInActive
//		Flags  -> ()
// Parameters:
//		class APawn*                                       TargetPawn                                                 (Parm)
//		class UGameThirdPersonCameraMode*                  NewMode                                                    (Parm)
void UGameThirdPersonCameraMode::OnBecomeInActive(class APawn* TargetPawn, class UGameThirdPersonCameraMode* NewMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.OnBecomeInActive");

	UGameThirdPersonCameraMode_OnBecomeInActive_Params params {};
	params.TargetPawn = TargetPawn;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCameraMode.OnBecomeActive
//		Flags  -> ()
// Parameters:
//		class APawn*                                       TargetPawn                                                 (Parm)
//		class UGameThirdPersonCameraMode*                  PrevMode                                                   (Parm)
void UGameThirdPersonCameraMode::OnBecomeActive(class APawn* TargetPawn, class UGameThirdPersonCameraMode* PrevMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.OnBecomeActive");

	UGameThirdPersonCameraMode_OnBecomeActive_Params params {};
	params.TargetPawn = TargetPawn;
	params.PrevMode = PrevMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameThirdPersonCameraMode.Init
//		Flags  -> ()
void UGameThirdPersonCameraMode::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.Init");

	UGameThirdPersonCameraMode_Init_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameSpecialMove.RelativeToWorldOffset
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    InRotation                                                 (Parm)
//		struct FVector                                     RelativeSpaceOffset                                        (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UGameSpecialMove::RelativeToWorldOffset(const struct FRotator& InRotation, const struct FVector& RelativeSpaceOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.RelativeToWorldOffset");

	UGameSpecialMove_RelativeToWorldOffset_Params params {};
	params.InRotation = InRotation;
	params.RelativeSpaceOffset = RelativeSpaceOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameSpecialMove.WorldToRelativeOffset
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    InRotation                                                 (Parm)
//		struct FVector                                     WorldSpaceOffset                                           (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UGameSpecialMove::WorldToRelativeOffset(const struct FRotator& InRotation, const struct FVector& WorldSpaceOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.WorldToRelativeOffset");

	UGameSpecialMove_WorldToRelativeOffset_Params params {};
	params.InRotation = InRotation;
	params.WorldSpaceOffset = WorldSpaceOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameSpecialMove.ForcePawnRotation
//		Flags  -> ()
// Parameters:
//		class APawn*                                       P                                                          (Parm)
//		struct FRotator                                    NewRotation                                                (Parm)
void UGameSpecialMove::ForcePawnRotation(class APawn* P, const struct FRotator& NewRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.ForcePawnRotation");

	UGameSpecialMove_ForcePawnRotation_Params params {};
	params.P = P;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameSpecialMove.MessageEvent
//		Flags  -> ()
// Parameters:
//		struct FName                                       EventName                                                  (Parm)
//		class UObject*                                     Sender                                                     (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameSpecialMove::MessageEvent(const struct FName& EventName, class UObject* Sender)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.MessageEvent");

	UGameSpecialMove_MessageEvent_Params params {};
	params.EventName = EventName;
	params.Sender = Sender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameSpecialMove.ResetFacePreciseRotation
//		Flags  -> ()
void UGameSpecialMove::ResetFacePreciseRotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.ResetFacePreciseRotation");

	UGameSpecialMove_ResetFacePreciseRotation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameSpecialMove.ReachedPrecisePosition
//		Flags  -> ()
void UGameSpecialMove::ReachedPrecisePosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.ReachedPrecisePosition");

	UGameSpecialMove_ReachedPrecisePosition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameSpecialMove.SetFacePreciseRotation
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    RotationToFace                                             (Parm)
//		float                                              InterpolationTime                                          (Parm)
void UGameSpecialMove::SetFacePreciseRotation(const struct FRotator& RotationToFace, float InterpolationTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.SetFacePreciseRotation");

	UGameSpecialMove_SetFacePreciseRotation_Params params {};
	params.RotationToFace = RotationToFace;
	params.InterpolationTime = InterpolationTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameSpecialMove.SetReachPreciseDestination
//		Flags  -> ()
// Parameters:
//		struct FVector                                     DestinationToReach                                         (Parm)
//		bool                                               bCancel                                                    (OptionalParm, Parm)
void UGameSpecialMove::SetReachPreciseDestination(const struct FVector& DestinationToReach, bool bCancel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.SetReachPreciseDestination");

	UGameSpecialMove_SetReachPreciseDestination_Params params {};
	params.DestinationToReach = DestinationToReach;
	params.bCancel = bCancel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameSpecialMove.ShouldReplicate
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameSpecialMove::ShouldReplicate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.ShouldReplicate");

	UGameSpecialMove_ShouldReplicate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameSpecialMove.SpecialMoveFlagsUpdated
//		Flags  -> ()
void UGameSpecialMove::SpecialMoveFlagsUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.SpecialMoveFlagsUpdated");

	UGameSpecialMove_SpecialMoveFlagsUpdated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameSpecialMove.Tick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (Parm)
void UGameSpecialMove::Tick(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.Tick");

	UGameSpecialMove_Tick_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameSpecialMove.SpecialMoveEnded
//		Flags  -> ()
// Parameters:
//		struct FName                                       PrevMove                                                   (Parm)
//		struct FName                                       NextMove                                                   (Parm)
void UGameSpecialMove::SpecialMoveEnded(const struct FName& PrevMove, const struct FName& NextMove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.SpecialMoveEnded");

	UGameSpecialMove_SpecialMoveEnded_Params params {};
	params.PrevMove = PrevMove;
	params.NextMove = NextMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameSpecialMove.SpecialMoveStarted
//		Flags  -> ()
// Parameters:
//		bool                                               bForced                                                    (Parm)
//		struct FName                                       PrevMove                                                   (Parm)
void UGameSpecialMove::SpecialMoveStarted(bool bForced, const struct FName& PrevMove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.SpecialMoveStarted");

	UGameSpecialMove_SpecialMoveStarted_Params params {};
	params.bForced = bForced;
	params.PrevMove = PrevMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameSpecialMove.InternalCanDoSpecialMove
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameSpecialMove::InternalCanDoSpecialMove()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.InternalCanDoSpecialMove");

	UGameSpecialMove_InternalCanDoSpecialMove_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameSpecialMove.CanDoSpecialMove
//		Flags  -> ()
// Parameters:
//		bool                                               bForceCheck                                                (OptionalParm, Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameSpecialMove::CanDoSpecialMove(bool bForceCheck)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.CanDoSpecialMove");

	UGameSpecialMove_CanDoSpecialMove_Params params {};
	params.bForceCheck = bForceCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameSpecialMove.CanOverrideSpecialMove
//		Flags  -> ()
// Parameters:
//		struct FName                                       InMove                                                     (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameSpecialMove::CanOverrideSpecialMove(const struct FName& InMove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.CanOverrideSpecialMove");

	UGameSpecialMove_CanOverrideSpecialMove_Params params {};
	params.InMove = InMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameSpecialMove.CanOverrideMoveWith
//		Flags  -> ()
// Parameters:
//		struct FName                                       NewMove                                                    (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameSpecialMove::CanOverrideMoveWith(const struct FName& NewMove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.CanOverrideMoveWith");

	UGameSpecialMove_CanOverrideMoveWith_Params params {};
	params.NewMove = NewMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameSpecialMove.CanChainMove
//		Flags  -> ()
// Parameters:
//		struct FName                                       NextMove                                                   (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameSpecialMove::CanChainMove(const struct FName& NextMove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.CanChainMove");

	UGameSpecialMove_CanChainMove_Params params {};
	params.NextMove = NextMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameSpecialMove.ExtractSpecialMoveFlags
//		Flags  -> ()
// Parameters:
//		int                                                Flags                                                      (Parm)
void UGameSpecialMove::ExtractSpecialMoveFlags(int Flags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.ExtractSpecialMoveFlags");

	UGameSpecialMove_ExtractSpecialMoveFlags_Params params {};
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameSpecialMove.InitSpecialMoveFlags
//		Flags  -> ()
// Parameters:
//		int                                                out_Flags                                                  (Parm, OutParm)
void UGameSpecialMove::InitSpecialMoveFlags(int* out_Flags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.InitSpecialMoveFlags");

	UGameSpecialMove_InitSpecialMoveFlags_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (out_Flags != nullptr)
		*out_Flags = params.out_Flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameSpecialMove.InitSpecialMove
//		Flags  -> ()
// Parameters:
//		class AGamePawn*                                   inPawn                                                     (Parm)
//		struct FName                                       InHandle                                                   (Parm)
void UGameSpecialMove::InitSpecialMove(class AGamePawn* inPawn, const struct FName& InHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.InitSpecialMove");

	UGameSpecialMove_InitSpecialMove_Params params {};
	params.inPawn = inPawn;
	params.InHandle = InHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameStateObject.Reset
//		Flags  -> ()
void UGameStateObject::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameStateObject.Reset");

	UGameStateObject_Reset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameStateObject.PreProcessStream
//		Flags  -> ()
void UGameStateObject::PreProcessStream()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameStateObject.PreProcessStream");

	UGameStateObject_PreProcessStream_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameStatsAggregator.GetAggregateMappingIDs
//		Flags  -> ()
// Parameters:
//		int                                                EventID                                                    (Parm)
//		int                                                AggregateID                                                (Parm, OutParm)
//		int                                                TargetAggregateID                                          (Parm, OutParm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameStatsAggregator::GetAggregateMappingIDs(int EventID, int* AggregateID, int* TargetAggregateID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameStatsAggregator.GetAggregateMappingIDs");

	UGameStatsAggregator_GetAggregateMappingIDs_Params params {};
	params.EventID = EventID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AggregateID != nullptr)
		*AggregateID = params.AggregateID;
	if (TargetAggregateID != nullptr)
		*TargetAggregateID = params.TargetAggregateID;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameStatsAggregator.Reset
//		Flags  -> ()
void UGameStatsAggregator::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameStatsAggregator.Reset");

	UGameStatsAggregator_Reset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameStatsAggregator.PostProcessStream
//		Flags  -> ()
void UGameStatsAggregator::PostProcessStream()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameStatsAggregator.PostProcessStream");

	UGameStatsAggregator_PostProcessStream_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameStatsAggregator.PreProcessStream
//		Flags  -> ()
void UGameStatsAggregator::PreProcessStream()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameStatsAggregator.PreProcessStream");

	UGameStatsAggregator_PreProcessStream_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.DebugCameraHUD.PostRender
//		Flags  -> (Net, NetReliable, Simulated, Native, Static, HasOptionalParms, Const, Public, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
void ADebugCameraHUD::STATIC_PostRender()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraHUD.PostRender");

	ADebugCameraHUD_PostRender_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.DebugCameraHUD.DisplayMaterials
//		Flags  -> ()
// Parameters:
//		float                                              X                                                          (Parm)
//		float                                              Y                                                          (Parm, OutParm)
//		float                                              DY                                                         (Parm)
//		class UMeshComponent*                              MeshComp                                                   (Parm, EditInline)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool ADebugCameraHUD::DisplayMaterials(float X, float* Y, float DY, class UMeshComponent* MeshComp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraHUD.DisplayMaterials");

	ADebugCameraHUD_DisplayMaterials_Params params {};
	params.X = X;
	params.DY = DY;
	params.MeshComp = MeshComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Y != nullptr)
		*Y = params.Y;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.DebugCameraHUD.PostBeginPlay
//		Flags  -> ()
void ADebugCameraHUD::PostBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraHUD.PostBeginPlay");

	ADebugCameraHUD_PostBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.DebugCameraInput.InputKey
//		Flags  -> ()
// Parameters:
//		int                                                ControllerId                                               (Parm)
//		struct FName                                       Key                                                        (Parm)
//		TEnumAsByte<Core_EInputEvent>                      Event                                                      (Parm)
//		float                                              AmountDepressed                                            (OptionalParm, Parm)
//		bool                                               bGamepad                                                   (OptionalParm, Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UDebugCameraInput::InputKey(int ControllerId, const struct FName& Key, TEnumAsByte<Core_EInputEvent> Event, float AmountDepressed, bool bGamepad)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraInput.InputKey");

	UDebugCameraInput_InputKey_Params params {};
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
//		Name   -> Function GameFramework.GameCrowdSpawnerInterface.GetMaxSpawnDist
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UGameCrowdSpawnerInterface::GetMaxSpawnDist()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdSpawnerInterface.GetMaxSpawnDist");

	UGameCrowdSpawnerInterface_GetMaxSpawnDist_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdSpawnerInterface.AgentDestroyed
//		Flags  -> ()
// Parameters:
//		class AGameCrowdAgent*                             Agent                                                      (Parm)
void UGameCrowdSpawnerInterface::AgentDestroyed(class AGameCrowdAgent* Agent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdSpawnerInterface.AgentDestroyed");

	UGameCrowdSpawnerInterface_AgentDestroyed_Params params {};
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameCrowdSpawnInterface.GetSpawnPosition
//		Flags  -> ()
// Parameters:
//		class USeqAct_GameCrowdSpawner*                    Spawner                                                    (Parm)
//		struct FVector                                     SpawnPos                                                   (Parm, OutParm)
//		struct FRotator                                    SpawnRot                                                   (Parm, OutParm)
void UGameCrowdSpawnInterface::GetSpawnPosition(class USeqAct_GameCrowdSpawner* Spawner, struct FVector* SpawnPos, struct FRotator* SpawnRot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdSpawnInterface.GetSpawnPosition");

	UGameCrowdSpawnInterface_GetSpawnPosition_Params params {};
	params.Spawner = Spawner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpawnPos != nullptr)
		*SpawnPos = params.SpawnPos;
	if (SpawnRot != nullptr)
		*SpawnRot = params.SpawnRot;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICmd_Hover_MoveToGoal.IsEnemyBasedOnInterpActor
//		Flags  -> ()
// Parameters:
//		class APawn*                                       InEnemy                                                    (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameAICmd_Hover_MoveToGoal::IsEnemyBasedOnInterpActor(class APawn* InEnemy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal.IsEnemyBasedOnInterpActor");

	UGameAICmd_Hover_MoveToGoal_IsEnemyBasedOnInterpActor_Params params {};
	params.InEnemy = InEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICmd_Hover_MoveToGoal.HandlePathObstruction
//		Flags  -> ()
// Parameters:
//		class AActor*                                      BlockedBy                                                  (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameAICmd_Hover_MoveToGoal::HandlePathObstruction(class AActor* BlockedBy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal.HandlePathObstruction");

	UGameAICmd_Hover_MoveToGoal_HandlePathObstruction_Params params {};
	params.BlockedBy = BlockedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICmd_Hover_MoveToGoal.Pushed
//		Flags  -> ()
void UGameAICmd_Hover_MoveToGoal::Pushed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal.Pushed");

	UGameAICmd_Hover_MoveToGoal_Pushed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICmd_Hover_MoveToGoal.MoveToGoal
//		Flags  -> ()
// Parameters:
//		class AGameAIController*                           AI                                                         (Parm)
//		class AActor*                                      InGoal                                                     (Parm)
//		float                                              InGoalDistance                                             (Parm)
//		float                                              InHoverHeight                                              (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameAICmd_Hover_MoveToGoal::MoveToGoal(class AGameAIController* AI, class AActor* InGoal, float InGoalDistance, float InHoverHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal.MoveToGoal");

	UGameAICmd_Hover_MoveToGoal_MoveToGoal_Params params {};
	params.AI = AI;
	params.InGoal = InGoal;
	params.InGoalDistance = InGoalDistance;
	params.InHoverHeight = InHoverHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.DrawDebug
//		Flags  -> ()
// Parameters:
//		class AHUD*                                        H                                                          (Parm)
//		struct FName                                       Category                                                   (Parm)
void UGameAICmd_Hover_MoveToGoal_Mesh::DrawDebug(class AHUD* H, const struct FName& Category)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.DrawDebug");

	UGameAICmd_Hover_MoveToGoal_Mesh_DrawDebug_Params params {};
	params.H = H;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.IsEnemyBasedOnInterpActor
//		Flags  -> ()
// Parameters:
//		class APawn*                                       InEnemy                                                    (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameAICmd_Hover_MoveToGoal_Mesh::IsEnemyBasedOnInterpActor(class APawn* InEnemy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.IsEnemyBasedOnInterpActor");

	UGameAICmd_Hover_MoveToGoal_Mesh_IsEnemyBasedOnInterpActor_Params params {};
	params.InEnemy = InEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ShouldUpdateBreadCrumbs
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameAICmd_Hover_MoveToGoal_Mesh::ShouldUpdateBreadCrumbs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ShouldUpdateBreadCrumbs");

	UGameAICmd_Hover_MoveToGoal_Mesh_ShouldUpdateBreadCrumbs_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HasReachedGoal
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameAICmd_Hover_MoveToGoal_Mesh::HasReachedGoal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HasReachedGoal");

	UGameAICmd_Hover_MoveToGoal_Mesh_HasReachedGoal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ReEvaluatePath
//		Flags  -> ()
void UGameAICmd_Hover_MoveToGoal_Mesh::ReEvaluatePath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ReEvaluatePath");

	UGameAICmd_Hover_MoveToGoal_Mesh_ReEvaluatePath_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HandlePathObstruction
//		Flags  -> ()
// Parameters:
//		class AActor*                                      BlockedBy                                                  (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameAICmd_Hover_MoveToGoal_Mesh::HandlePathObstruction(class AActor* BlockedBy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HandlePathObstruction");

	UGameAICmd_Hover_MoveToGoal_Mesh_HandlePathObstruction_Params params {};
	params.BlockedBy = BlockedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Tick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (Parm)
void UGameAICmd_Hover_MoveToGoal_Mesh::Tick(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Tick");

	UGameAICmd_Hover_MoveToGoal_Mesh_Tick_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Popped
//		Flags  -> ()
void UGameAICmd_Hover_MoveToGoal_Mesh::Popped()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Popped");

	UGameAICmd_Hover_MoveToGoal_Mesh_Popped_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Pushed
//		Flags  -> ()
void UGameAICmd_Hover_MoveToGoal_Mesh::Pushed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Pushed");

	UGameAICmd_Hover_MoveToGoal_Mesh_Pushed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverBackToMesh
//		Flags  -> ()
// Parameters:
//		class AGameAIController*                           AI                                                         (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameAICmd_Hover_MoveToGoal_Mesh::HoverBackToMesh(class AGameAIController* AI)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverBackToMesh");

	UGameAICmd_Hover_MoveToGoal_Mesh_HoverBackToMesh_Params params {};
	params.AI = AI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToPoint
//		Flags  -> ()
// Parameters:
//		class AGameAIController*                           AI                                                         (Parm)
//		struct FVector                                     InPoint                                                    (Parm)
//		float                                              InGoalDistance                                             (Parm)
//		float                                              InHoverHeight                                              (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameAICmd_Hover_MoveToGoal_Mesh::HoverToPoint(class AGameAIController* AI, const struct FVector& InPoint, float InGoalDistance, float InHoverHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToPoint");

	UGameAICmd_Hover_MoveToGoal_Mesh_HoverToPoint_Params params {};
	params.AI = AI;
	params.InPoint = InPoint;
	params.InGoalDistance = InGoalDistance;
	params.InHoverHeight = InHoverHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToGoal
//		Flags  -> ()
// Parameters:
//		class AGameAIController*                           AI                                                         (Parm)
//		class AActor*                                      InGoal                                                     (Parm)
//		float                                              InGoalDistance                                             (Parm)
//		float                                              InHoverHeight                                              (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UGameAICmd_Hover_MoveToGoal_Mesh::HoverToGoal(class AGameAIController* AI, class AActor* InGoal, float InGoalDistance, float InHoverHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToGoal");

	UGameAICmd_Hover_MoveToGoal_Mesh_HoverToGoal_Params params {};
	params.AI = AI;
	params.InGoal = InGoal;
	params.InGoalDistance = InGoalDistance;
	params.InHoverHeight = InHoverHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameFixedCamera.OnBecomeActive
//		Flags  -> ()
// Parameters:
//		class UGameCameraBase*                             OldCamera                                                  (Parm)
void UGameFixedCamera::OnBecomeActive(class UGameCameraBase* OldCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameFixedCamera.OnBecomeActive");

	UGameFixedCamera_OnBecomeActive_Params params {};
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameFixedCamera.UpdateCamera
//		Flags  -> ()
// Parameters:
//		class APawn*                                       P                                                          (Parm)
//		class AGamePlayerCamera*                           CameraActor                                                (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		struct FTViewTarget                                OutVT                                                      (Parm, OutParm)
void UGameFixedCamera::UpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameFixedCamera.UpdateCamera");

	UGameFixedCamera_UpdateCamera_Params params {};
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
//		Name   -> Function GameFramework.GameKActorSpawnableEffect.StartScalingDown
//		Flags  -> ()
void AGameKActorSpawnableEffect::StartScalingDown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameKActorSpawnableEffect.StartScalingDown");

	AGameKActorSpawnableEffect_StartScalingDown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameKActorSpawnableEffect.FellOutOfWorld
//		Flags  -> ()
// Parameters:
//		class UClass*                                      dmgType                                                    (Parm)
void AGameKActorSpawnableEffect::FellOutOfWorld(class UClass* dmgType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameKActorSpawnableEffect.FellOutOfWorld");

	AGameKActorSpawnableEffect_FellOutOfWorld_Params params {};
	params.dmgType = dmgType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.GameKActorSpawnableEffect.PostBeginPlay
//		Flags  -> ()
void AGameKActorSpawnableEffect::PostBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.GameKActorSpawnableEffect.PostBeginPlay");

	AGameKActorSpawnableEffect_PostBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileDebugCameraController.SetupDebugZones
//		Flags  -> (NetReliable, Simulated, Event, Static, HasOptionalParms, Const, Private, NetServer, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
void AMobileDebugCameraController::STATIC_SetupDebugZones()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraController.SetupDebugZones");

	AMobileDebugCameraController_SetupDebugZones_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileDebugCameraController.InitInputSystem
//		Flags  -> ()
void AMobileDebugCameraController::InitInputSystem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraController.InitInputSystem");

	AMobileDebugCameraController_InitInputSystem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileDebugCameraController.OnDeactivate
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           PC                                                         (Parm)
void AMobileDebugCameraController::OnDeactivate(class APlayerController* PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraController.OnDeactivate");

	AMobileDebugCameraController_OnDeactivate_Params params {};
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileDebugCameraController.InitDebugInputSystem
//		Flags  -> ()
void AMobileDebugCameraController::InitDebugInputSystem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraController.InitDebugInputSystem");

	AMobileDebugCameraController_InitDebugInputSystem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileDebugCameraController.OnActivate
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           PC                                                         (Parm)
void AMobileDebugCameraController::OnActivate(class APlayerController* PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraController.OnActivate");

	AMobileDebugCameraController_OnActivate_Params params {};
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileDebugCameraInput.InputKey
//		Flags  -> ()
// Parameters:
//		int                                                ControllerId                                               (Parm)
//		struct FName                                       Key                                                        (Parm)
//		TEnumAsByte<Core_EInputEvent>                      Event                                                      (Parm)
//		float                                              AmountDepressed                                            (OptionalParm, Parm)
//		bool                                               bGamepad                                                   (OptionalParm, Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UMobileDebugCameraInput::InputKey(int ControllerId, const struct FName& Key, TEnumAsByte<Core_EInputEvent> Event, float AmountDepressed, bool bGamepad)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraInput.InputKey");

	UMobileDebugCameraInput_InputKey_Params params {};
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
//		Name   -> Function GameFramework.MobileDebugCameraHUD.PostRender
//		Flags  -> (Singular, Net, NetReliable, Exec, Native, Static, HasOptionalParms, Public, Private, NetServer, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
void AMobileDebugCameraHUD::STATIC_PostRender()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraHUD.PostRender");

	AMobileDebugCameraHUD_PostRender_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileDebugCameraHUD.DisplayMaterials
//		Flags  -> ()
// Parameters:
//		float                                              X                                                          (Parm)
//		float                                              Y                                                          (Parm, OutParm)
//		float                                              DY                                                         (Parm)
//		class UMeshComponent*                              MeshComp                                                   (Parm, EditInline)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool AMobileDebugCameraHUD::DisplayMaterials(float X, float* Y, float DY, class UMeshComponent* MeshComp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraHUD.DisplayMaterials");

	AMobileDebugCameraHUD_DisplayMaterials_Params params {};
	params.X = X;
	params.DY = DY;
	params.MeshComp = MeshComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Y != nullptr)
		*Y = params.Y;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileDebugCameraHUD.PostBeginPlay
//		Flags  -> ()
void AMobileDebugCameraHUD::PostBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraHUD.PostBeginPlay");

	AMobileDebugCameraHUD_PostBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuBar.UpdateItemViewports
//		Flags  -> ()
// Parameters:
void UMobileMenuBar::UpdateItemViewports()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.UpdateItemViewports");

	UMobileMenuBar_UpdateItemViewports_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuBar.SetFirstItem
//		Flags  -> ()
// Parameters:
//		int                                                first                                                      (Parm)
void UMobileMenuBar::SetFirstItem(int first)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.SetFirstItem");

	UMobileMenuBar_SetFirstItem_Params params {};
	params.first = first;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuBar.RenderItem
//		Flags  -> ()
// Parameters:
//		class UCanvas*                                     Canvas                                                     (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		int                                                ItemIndex                                                  (Parm)
void UMobileMenuBar::RenderItem(class UCanvas* Canvas, float DeltaTime, int ItemIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.RenderItem");

	UMobileMenuBar_RenderItem_Params params {};
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;
	params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuBar.RenderObject
//		Flags  -> ()
// Parameters:
//		class UCanvas*                                     Canvas                                                     (Parm)
//		float                                              DeltaTime                                                  (Parm)
void UMobileMenuBar::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.RenderObject");

	UMobileMenuBar_RenderObject_Params params {};
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuBar.OnTouch
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<Engine_ETouchType>                     EventType                                                  (Parm)
//		float                                              TouchX                                                     (Parm)
//		float                                              TouchY                                                     (Parm)
//		class UMobileMenuObject*                           ObjectOver                                                 (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UMobileMenuBar::OnTouch(TEnumAsByte<Engine_ETouchType> EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.OnTouch");

	UMobileMenuBar_OnTouch_Params params {};
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;
	params.ObjectOver = ObjectOver;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuBar.GetSelected
//		Flags  -> ()
// Parameters:
//		class UMobileMenuBarItem*                          ReturnValue                                                (Parm, OutParm, ReturnParm)
class UMobileMenuBarItem* UMobileMenuBar::GetSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.GetSelected");

	UMobileMenuBar_GetSelected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuBar.Num
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UMobileMenuBar::Num()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.Num");

	UMobileMenuBar_Num_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuBar.AddItem
//		Flags  -> ()
// Parameters:
//		class UMobileMenuBarItem*                          Item                                                       (Parm)
//		int                                                Index                                                      (OptionalParm, Parm)
void UMobileMenuBar::AddItem(class UMobileMenuBarItem* Item, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.AddItem");

	UMobileMenuBar_AddItem_Params params {};
	params.Item = Item;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuBar.InitMenuObject
//		Flags  -> ()
// Parameters:
//		class UMobilePlayerInput*                          PlayerInput                                                (Parm)
//		class UMobileMenuScene*                            Scene                                                      (Parm)
//		int                                                ScreenWidth                                                (Parm)
//		int                                                ScreenHeight                                               (Parm)
//		bool                                               bIsFirstInitialization                                     (Parm)
void UMobileMenuBar::InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight, bool bIsFirstInitialization)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.InitMenuObject");

	UMobileMenuBar_InitMenuObject_Params params {};
	params.PlayerInput = PlayerInput;
	params.Scene = Scene;
	params.ScreenWidth = ScreenWidth;
	params.ScreenHeight = ScreenHeight;
	params.bIsFirstInitialization = bIsFirstInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuBarItem.RenderItem
//		Flags  -> ()
// Parameters:
//		class UMobileMenuBar*                              Bar                                                        (Parm)
//		class UCanvas*                                     Canvas                                                     (Parm)
//		float                                              DeltaTime                                                  (Parm)
void UMobileMenuBarItem::RenderItem(class UMobileMenuBar* Bar, class UCanvas* Canvas, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBarItem.RenderItem");

	UMobileMenuBarItem_RenderItem_Params params {};
	params.Bar = Bar;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuButton.RenderCaption
//		Flags  -> ()
// Parameters:
//		class UCanvas*                                     Canvas                                                     (Parm)
void UMobileMenuButton::RenderCaption(class UCanvas* Canvas)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuButton.RenderCaption");

	UMobileMenuButton_RenderCaption_Params params {};
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuButton.RenderObject
//		Flags  -> (Net, Native, Operator, Static, Protected, NetServer, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
//		class UCanvas*                                     Canvas                                                     (Parm)
//		float                                              DeltaTime                                                  (Parm)
void UMobileMenuButton::STATIC_RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuButton.RenderObject");

	UMobileMenuButton_RenderObject_Params params {};
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuButton.InitMenuObject
//		Flags  -> ()
// Parameters:
//		class UMobilePlayerInput*                          PlayerInput                                                (Parm)
//		class UMobileMenuScene*                            Scene                                                      (Parm)
//		int                                                ScreenWidth                                                (Parm)
//		int                                                ScreenHeight                                               (Parm)
//		bool                                               bIsFirstInitialization                                     (Parm)
void UMobileMenuButton::InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight, bool bIsFirstInitialization)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuButton.InitMenuObject");

	UMobileMenuButton_InitMenuObject_Params params {};
	params.PlayerInput = PlayerInput;
	params.Scene = Scene;
	params.ScreenWidth = ScreenWidth;
	params.ScreenHeight = ScreenHeight;
	params.bIsFirstInitialization = bIsFirstInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuElement.GetIconIndexes
//		Flags  -> ()
// Parameters:
//		TArray<int>                                        IconIndexes                                                (Parm, OutParm, NeedCtorLink)
void UMobileMenuElement::GetIconIndexes(TArray<int>* IconIndexes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuElement.GetIconIndexes");

	UMobileMenuElement_GetIconIndexes_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IconIndexes != nullptr)
		*IconIndexes = params.IconIndexes;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuElement.RenderElement
//		Flags  -> ()
// Parameters:
//		class UMobileMenuObject*                           Owner                                                      (Parm)
//		class UCanvas*                                     Canvas                                                     (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		float                                              Opacity                                                    (Parm)
void UMobileMenuElement::RenderElement(class UMobileMenuObject* Owner, class UCanvas* Canvas, float DeltaTime, float Opacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuElement.RenderElement");

	UMobileMenuElement_RenderElement_Params params {};
	params.Owner = Owner;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuElement.OnTouch
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<Engine_ETouchType>                     EventType                                                  (Parm)
//		float                                              TouchX                                                     (Parm)
//		float                                              TouchY                                                     (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UMobileMenuElement::OnTouch(TEnumAsByte<Engine_ETouchType> EventType, float TouchX, float TouchY, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuElement.OnTouch");

	UMobileMenuElement_OnTouch_Params params {};
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuGame.RestartPlayer
//		Flags  -> ()
// Parameters:
//		class AController*                                 NewPlayer                                                  (Parm)
void AMobileMenuGame::RestartPlayer(class AController* NewPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuGame.RestartPlayer");

	AMobileMenuGame_RestartPlayer_Params params {};
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuGame.StartMatch
//		Flags  -> ()
void AMobileMenuGame::StartMatch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuGame.StartMatch");

	AMobileMenuGame_StartMatch_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuGame.PostLogin
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           NewPlayer                                                  (Parm)
void AMobileMenuGame::PostLogin(class APlayerController* NewPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuGame.PostLogin");

	AMobileMenuGame_PostLogin_Params params {};
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuInventory.GetIconIndexes
//		Flags  -> ()
// Parameters:
//		TArray<int>                                        IconIndexes                                                (Parm, OutParm, NeedCtorLink)
void UMobileMenuInventory::GetIconIndexes(TArray<int>* IconIndexes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.GetIconIndexes");

	UMobileMenuInventory_GetIconIndexes_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IconIndexes != nullptr)
		*IconIndexes = params.IconIndexes;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuInventory.RenderDragItem
//		Flags  -> ()
// Parameters:
//		class UCanvas*                                     Canvas                                                     (Parm)
//		float                                              DeltaTime                                                  (Parm)
void UMobileMenuInventory::RenderDragItem(class UCanvas* Canvas, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.RenderDragItem");

	UMobileMenuInventory_RenderDragItem_Params params {};
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuInventory.RenderObject
//		Flags  -> ()
// Parameters:
//		class UCanvas*                                     Canvas                                                     (Parm)
//		float                                              DeltaTime                                                  (Parm)
void UMobileMenuInventory::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.RenderObject");

	UMobileMenuInventory_RenderObject_Params params {};
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuInventory.GetIndexOfItem
//		Flags  -> ()
// Parameters:
//		class UMobileMenuElement*                          Item                                                       (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UMobileMenuInventory::GetIndexOfItem(class UMobileMenuElement* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.GetIndexOfItem");

	UMobileMenuInventory_GetIndexOfItem_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuInventory.FindSlotIndexAt
//		Flags  -> ()
// Parameters:
//		float                                              X                                                          (Parm)
//		float                                              Y                                                          (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UMobileMenuInventory::FindSlotIndexAt(float X, float Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.FindSlotIndexAt");

	UMobileMenuInventory_FindSlotIndexAt_Params params {};
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuInventory.InitDragAt
//		Flags  -> ()
// Parameters:
//		int                                                TouchX                                                     (Parm)
//		int                                                TouchY                                                     (Parm)
void UMobileMenuInventory::InitDragAt(int TouchX, int TouchY)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.InitDragAt");

	UMobileMenuInventory_InitDragAt_Params params {};
	params.TouchX = TouchX;
	params.TouchY = TouchY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuInventory.UpdateItemInSlot
//		Flags  -> ()
// Parameters:
//		int                                                InSlot                                                     (Parm)
void UMobileMenuInventory::UpdateItemInSlot(int InSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.UpdateItemInSlot");

	UMobileMenuInventory_UpdateItemInSlot_Params params {};
	params.InSlot = InSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuInventory.AddItemToSlot
//		Flags  -> ()
// Parameters:
//		class UMobileMenuElement*                          Element                                                    (Parm)
//		int                                                ToSlot                                                     (Parm)
//		class UMobileMenuElement*                          ReturnValue                                                (Parm, OutParm, ReturnParm)
class UMobileMenuElement* UMobileMenuInventory::AddItemToSlot(class UMobileMenuElement* Element, int ToSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.AddItemToSlot");

	UMobileMenuInventory_AddItemToSlot_Params params {};
	params.Element = Element;
	params.ToSlot = ToSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuInventory.SwapItemsInSlots
//		Flags  -> ()
// Parameters:
//		int                                                Slot0                                                      (Parm)
//		int                                                Slot1                                                      (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UMobileMenuInventory::SwapItemsInSlots(int Slot0, int Slot1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.SwapItemsInSlots");

	UMobileMenuInventory_SwapItemsInSlots_Params params {};
	params.Slot0 = Slot0;
	params.Slot1 = Slot1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuInventory.OnTouch
//		Flags  -> (Singular, Simulated, Exec, Native, Operator, Static, HasOptionalParms, Protected, NetServer, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
//		TEnumAsByte<Engine_ETouchType>                     EventType                                                  (Parm)
//		float                                              TouchX                                                     (Parm)
//		float                                              TouchY                                                     (Parm)
//		class UMobileMenuObject*                           ObjectOver                                                 (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UMobileMenuInventory::STATIC_OnTouch(TEnumAsByte<Engine_ETouchType> EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.OnTouch");

	UMobileMenuInventory_OnTouch_Params params {};
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;
	params.ObjectOver = ObjectOver;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuInventory.CanPutItemInSlot
//		Flags  -> ()
// Parameters:
//		class UMobileMenuElement*                          Item                                                       (Parm)
//		class UMobileMenuElement*                          ToSlot                                                     (Parm)
//		int                                                ToIdx                                                      (Parm)
//		int                                                FromIdx                                                    (OptionalParm, Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UMobileMenuInventory::CanPutItemInSlot(class UMobileMenuElement* Item, class UMobileMenuElement* ToSlot, int ToIdx, int FromIdx)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.CanPutItemInSlot");

	UMobileMenuInventory_CanPutItemInSlot_Params params {};
	params.Item = Item;
	params.ToSlot = ToSlot;
	params.ToIdx = ToIdx;
	params.FromIdx = FromIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuInventory.ScaleSlot
//		Flags  -> ()
// Parameters:
//		class UMobileMenuElement*                          Slot                                                       (Parm)
void UMobileMenuInventory::ScaleSlot(class UMobileMenuElement* Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.ScaleSlot");

	UMobileMenuInventory_ScaleSlot_Params params {};
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuInventory.AddSlot
//		Flags  -> ()
// Parameters:
//		class UMobileMenuElement*                          Slot                                                       (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UMobileMenuInventory::AddSlot(class UMobileMenuElement* Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.AddSlot");

	UMobileMenuInventory_AddSlot_Params params {};
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuInventory.InitMenuObject
//		Flags  -> ()
// Parameters:
//		class UMobilePlayerInput*                          PlayerInput                                                (Parm)
//		class UMobileMenuScene*                            Scene                                                      (Parm)
//		int                                                ScreenWidth                                                (Parm)
//		int                                                ScreenHeight                                               (Parm)
//		bool                                               bIsFirstInitialization                                     (Parm)
void UMobileMenuInventory::InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight, bool bIsFirstInitialization)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.InitMenuObject");

	UMobileMenuInventory_InitMenuObject_Params params {};
	params.PlayerInput = PlayerInput;
	params.Scene = Scene;
	params.ScreenWidth = ScreenWidth;
	params.ScreenHeight = ScreenHeight;
	params.bIsFirstInitialization = bIsFirstInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuInventory.OnUpdateDrag
//		Flags  -> ()
// Parameters:
//		struct FDragElementInfo                            Before                                                     (Const, Parm, OutParm)
//		struct FDragElementInfo                            After                                                      (Const, Parm, OutParm)
void UMobileMenuInventory::OnUpdateDrag(struct FDragElementInfo* Before, struct FDragElementInfo* After)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.OnUpdateDrag");

	UMobileMenuInventory_OnUpdateDrag_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Before != nullptr)
		*Before = params.Before;
	if (After != nullptr)
		*After = params.After;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuInventory.DoCanPutItemInSlot
//		Flags  -> ()
// Parameters:
//		class UMobileMenuInventory*                        FromInv                                                    (Parm)
//		class UMobileMenuElement*                          Item                                                       (Parm)
//		class UMobileMenuElement*                          ToSlot                                                     (Parm)
//		int                                                ToIdx                                                      (Parm)
//		int                                                FromIdx                                                    (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UMobileMenuInventory::DoCanPutItemInSlot(class UMobileMenuInventory* FromInv, class UMobileMenuElement* Item, class UMobileMenuElement* ToSlot, int ToIdx, int FromIdx)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.DoCanPutItemInSlot");

	UMobileMenuInventory_DoCanPutItemInSlot_Params params {};
	params.FromInv = FromInv;
	params.Item = Item;
	params.ToSlot = ToSlot;
	params.ToIdx = ToIdx;
	params.FromIdx = FromIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuInventory.OnUpdateItemInSlot
//		Flags  -> ()
// Parameters:
//		class UMobileMenuInventory*                        FromInv                                                    (Parm)
//		int                                                SlotIndex                                                  (Parm)
void UMobileMenuInventory::OnUpdateItemInSlot(class UMobileMenuInventory* FromInv, int SlotIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.OnUpdateItemInSlot");

	UMobileMenuInventory_OnUpdateItemInSlot_Params params {};
	params.FromInv = FromInv;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuLabel.RenderObject
//		Flags  -> ()
// Parameters:
//		class UCanvas*                                     Canvas                                                     (Parm)
//		float                                              DeltaTime                                                  (Parm)
void UMobileMenuLabel::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuLabel.RenderObject");

	UMobileMenuLabel_RenderObject_Params params {};
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuList.GetIconIndexes
//		Flags  -> ()
// Parameters:
//		TArray<int>                                        IconIndexes                                                (Parm, OutParm, NeedCtorLink)
void UMobileMenuList::GetIconIndexes(TArray<int>* IconIndexes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.GetIconIndexes");

	UMobileMenuList_GetIconIndexes_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IconIndexes != nullptr)
		*IconIndexes = params.IconIndexes;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuList.ItemScrollSize
//		Flags  -> ()
// Parameters:
//		class UMobileMenuListItem*                         Item                                                       (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UMobileMenuList::ItemScrollSize(class UMobileMenuListItem* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.ItemScrollSize");

	UMobileMenuList_ItemScrollSize_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuList.RenderObject
//		Flags  -> (Singular, Net, Simulated, Static, HasOptionalParms, Const, Protected, NetServer, HasOutParms, NetClient, DLLImport, K2Override)
// Parameters:
//		class UCanvas*                                     Canvas                                                     (Parm)
//		float                                              DeltaTime                                                  (Parm)
void UMobileMenuList::STATIC_RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.RenderObject");

	UMobileMenuList_RenderObject_Params params {};
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuList.UpdateScroll
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (Parm)
void UMobileMenuList::UpdateScroll(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.UpdateScroll");

	UMobileMenuList_UpdateScroll_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuList.CalculateSelectedItem
//		Flags  -> ()
// Parameters:
//		struct FSelectedMenuItem                           Selected                                                   (Parm, OutParm)
//		float                                              ScrollAmount                                               (Parm)
//		bool                                               bForceZeroAdjustment                                       (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UMobileMenuList::CalculateSelectedItem(struct FSelectedMenuItem* Selected, float ScrollAmount, bool bForceZeroAdjustment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.CalculateSelectedItem");

	UMobileMenuList_CalculateSelectedItem_Params params {};
	params.ScrollAmount = ScrollAmount;
	params.bForceZeroAdjustment = bForceZeroAdjustment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Selected != nullptr)
		*Selected = params.Selected;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuList.GetItemClickPosition
//		Flags  -> ()
// Parameters:
//		float                                              MouseX                                                     (Parm, OutParm)
//		float                                              MouseY                                                     (Parm, OutParm)
//		class UMobileMenuListItem*                         ReturnValue                                                (Parm, OutParm, ReturnParm)
class UMobileMenuListItem* UMobileMenuList::GetItemClickPosition(float* MouseX, float* MouseY)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.GetItemClickPosition");

	UMobileMenuList_GetItemClickPosition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseX != nullptr)
		*MouseX = params.MouseX;
	if (MouseY != nullptr)
		*MouseY = params.MouseY;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuList.OnTouch
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<Engine_ETouchType>                     EventType                                                  (Parm)
//		float                                              TouchX                                                     (Parm)
//		float                                              TouchY                                                     (Parm)
//		class UMobileMenuObject*                           ObjectOver                                                 (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UMobileMenuList::OnTouch(TEnumAsByte<Engine_ETouchType> EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.OnTouch");

	UMobileMenuList_OnTouch_Params params {};
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;
	params.ObjectOver = ObjectOver;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuList.SetSelectedItem
//		Flags  -> ()
// Parameters:
//		int                                                ItemIndex                                                  (Parm)
//		bool                                               bForceAll                                                  (OptionalParm, Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UMobileMenuList::SetSelectedItem(int ItemIndex, bool bForceAll)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.SetSelectedItem");

	UMobileMenuList_SetSelectedItem_Params params {};
	params.ItemIndex = ItemIndex;
	params.bForceAll = bForceAll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuList.GetNumVisible
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UMobileMenuList::GetNumVisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.GetNumVisible");

	UMobileMenuList_GetNumVisible_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuList.SetSelectedToVisibleIndex
//		Flags  -> ()
// Parameters:
//		int                                                VisibleIndex                                               (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UMobileMenuList::SetSelectedToVisibleIndex(int VisibleIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.SetSelectedToVisibleIndex");

	UMobileMenuList_SetSelectedToVisibleIndex_Params params {};
	params.VisibleIndex = VisibleIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuList.GetVisibleIndexOfSelected
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UMobileMenuList::GetVisibleIndexOfSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.GetVisibleIndexOfSelected");

	UMobileMenuList_GetVisibleIndexOfSelected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuList.GetAmountSelected
//		Flags  -> ()
// Parameters:
//		class UMobileMenuListItem*                         Item                                                       (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UMobileMenuList::GetAmountSelected(class UMobileMenuListItem* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.GetAmountSelected");

	UMobileMenuList_GetAmountSelected_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuList.GetSelected
//		Flags  -> ()
// Parameters:
//		class UMobileMenuListItem*                         ReturnValue                                                (Parm, OutParm, ReturnParm)
class UMobileMenuListItem* UMobileMenuList::GetSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.GetSelected");

	UMobileMenuList_GetSelected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuList.Num
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UMobileMenuList::Num()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.Num");

	UMobileMenuList_Num_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuList.AddItem
//		Flags  -> ()
// Parameters:
//		class UMobileMenuListItem*                         Item                                                       (Parm)
//		int                                                Index                                                      (OptionalParm, Parm)
void UMobileMenuList::AddItem(class UMobileMenuListItem* Item, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.AddItem");

	UMobileMenuList_AddItem_Params params {};
	params.Item = Item;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuList.InitMenuObject
//		Flags  -> ()
// Parameters:
//		class UMobilePlayerInput*                          PlayerInput                                                (Parm)
//		class UMobileMenuScene*                            Scene                                                      (Parm)
//		int                                                ScreenWidth                                                (Parm)
//		int                                                ScreenHeight                                               (Parm)
//		bool                                               bIsFirstInitialization                                     (Parm)
void UMobileMenuList::InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight, bool bIsFirstInitialization)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.InitMenuObject");

	UMobileMenuList_InitMenuObject_Params params {};
	params.PlayerInput = PlayerInput;
	params.Scene = Scene;
	params.ScreenWidth = ScreenWidth;
	params.ScreenHeight = ScreenHeight;
	params.bIsFirstInitialization = bIsFirstInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuListItem.RenderItem
//		Flags  -> ()
// Parameters:
//		class UMobileMenuList*                             List                                                       (Parm)
//		class UCanvas*                                     Canvas                                                     (Parm)
//		float                                              DeltaTime                                                  (Parm)
void UMobileMenuListItem::RenderItem(class UMobileMenuList* List, class UCanvas* Canvas, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuListItem.RenderItem");

	UMobileMenuListItem_RenderItem_Params params {};
	params.List = List;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuObjectProxy.RenderObject
//		Flags  -> ()
// Parameters:
//		class UCanvas*                                     Canvas                                                     (Parm)
//		float                                              DeltaTime                                                  (Parm)
void UMobileMenuObjectProxy::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObjectProxy.RenderObject");

	UMobileMenuObjectProxy_RenderObject_Params params {};
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuObjectProxy.OnTouch
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<Engine_ETouchType>                     EventType                                                  (Parm)
//		float                                              TouchX                                                     (Parm)
//		float                                              TouchY                                                     (Parm)
//		class UMobileMenuObject*                           ObjectOver                                                 (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UMobileMenuObjectProxy::OnTouch(TEnumAsByte<Engine_ETouchType> EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObjectProxy.OnTouch");

	UMobileMenuObjectProxy_OnTouch_Params params {};
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;
	params.ObjectOver = ObjectOver;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuObjectProxy.OnRenderObject
//		Flags  -> ()
// Parameters:
//		class UMobileMenuObjectProxy*                      Proxy                                                      (Parm)
//		class UCanvas*                                     Canvas                                                     (Parm)
//		float                                              DeltaTime                                                  (Parm)
void UMobileMenuObjectProxy::OnRenderObject(class UMobileMenuObjectProxy* Proxy, class UCanvas* Canvas, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObjectProxy.OnRenderObject");

	UMobileMenuObjectProxy_OnRenderObject_Params params {};
	params.Proxy = Proxy;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileMenuObjectProxy.OnTouchEvent
//		Flags  -> ()
// Parameters:
//		class UMobileMenuObjectProxy*                      Proxy                                                      (Parm)
//		TEnumAsByte<Engine_ETouchType>                     EventType                                                  (Parm)
//		float                                              TouchX                                                     (Parm)
//		float                                              TouchY                                                     (Parm)
//		class UMobileMenuObject*                           ObjectOver                                                 (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UMobileMenuObjectProxy::OnTouchEvent(class UMobileMenuObjectProxy* Proxy, TEnumAsByte<Engine_ETouchType> EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObjectProxy.OnTouchEvent");

	UMobileMenuObjectProxy_OnTouchEvent_Params params {};
	params.Proxy = Proxy;
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;
	params.ObjectOver = ObjectOver;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileTouchInputVolume.HandleDragOver
//		Flags  -> ()
void AMobileTouchInputVolume::HandleDragOver()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileTouchInputVolume.HandleDragOver");

	AMobileTouchInputVolume_HandleDragOver_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileTouchInputVolume.HandleDoubleClick
//		Flags  -> ()
void AMobileTouchInputVolume::HandleDoubleClick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileTouchInputVolume.HandleDoubleClick");

	AMobileTouchInputVolume_HandleDoubleClick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileTouchInputVolume.HandleClick
//		Flags  -> ()
void AMobileTouchInputVolume::HandleClick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileTouchInputVolume.HandleClick");

	AMobileTouchInputVolume_HandleClick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.MobileTouchInputVolume.OnToggle
//		Flags  -> ()
// Parameters:
//		class USeqAct_Toggle*                              inAction                                                   (Parm)
void AMobileTouchInputVolume::OnToggle(class USeqAct_Toggle* inAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.MobileTouchInputVolume.OnToggle");

	AMobileTouchInputVolume_OnToggle_Params params {};
	params.inAction = inAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.TouchableElement3D.HandleDragOver
//		Flags  -> ()
void UTouchableElement3D::HandleDragOver()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.TouchableElement3D.HandleDragOver");

	UTouchableElement3D_HandleDragOver_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.TouchableElement3D.HandleDoubleClick
//		Flags  -> ()
void UTouchableElement3D::HandleDoubleClick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.TouchableElement3D.HandleDoubleClick");

	UTouchableElement3D_HandleDoubleClick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.TouchableElement3D.HandleClick
//		Flags  -> ()
void UTouchableElement3D::HandleClick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.TouchableElement3D.HandleClick");

	UTouchableElement3D_HandleClick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.PlayerCollectorGame.GetSeamlessTravelActorList
//		Flags  -> ()
// Parameters:
//		bool                                               bToEntry                                                   (Parm)
//		TArray<class AActor*>                              ActorList                                                  (Parm, OutParm, NeedCtorLink)
void APlayerCollectorGame::GetSeamlessTravelActorList(bool bToEntry, TArray<class AActor*>* ActorList)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.PlayerCollectorGame.GetSeamlessTravelActorList");

	APlayerCollectorGame_GetSeamlessTravelActorList_Params params {};
	params.bToEntry = bToEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActorList != nullptr)
		*ActorList = params.ActorList;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.PlayerCollectorGame.Login
//		Flags  -> ()
// Parameters:
//		struct FString                                     Portal                                                     (Parm, NeedCtorLink)
//		struct FString                                     Options                                                    (Parm, NeedCtorLink)
//		struct FUniqueNetId                                UniqueId                                                   (Const, Parm)
//		struct FString                                     ErrorMessage                                               (Parm, OutParm, NeedCtorLink)
//		class APlayerController*                           ReturnValue                                                (Parm, OutParm, ReturnParm)
class APlayerController* APlayerCollectorGame::Login(const struct FString& Portal, const struct FString& Options, const struct FUniqueNetId& UniqueId, struct FString* ErrorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.PlayerCollectorGame.Login");

	APlayerCollectorGame_Login_Params params {};
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
//		Name   -> Function GameFramework.SeqEvent_HudRenderImage.Render
//		Flags  -> ()
// Parameters:
//		class UCanvas*                                     TargetCanvas                                               (Parm)
//		class AHUD*                                        TargetHud                                                  (Parm)
void USeqEvent_HudRenderImage::Render(class UCanvas* TargetCanvas, class AHUD* TargetHud)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_HudRenderImage.Render");

	USeqEvent_HudRenderImage_Render_Params params {};
	params.TargetCanvas = TargetCanvas;
	params.TargetHud = TargetHud;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.SeqEvent_HudRenderText.GetObjClassVersion
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int USeqEvent_HudRenderText::GetObjClassVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_HudRenderText.GetObjClassVersion");

	USeqEvent_HudRenderText_GetObjClassVersion_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GameFramework.SeqEvent_HudRenderText.Render
//		Flags  -> ()
// Parameters:
//		class UCanvas*                                     TargetCanvas                                               (Parm)
//		class AHUD*                                        TargetHud                                                  (Parm)
void USeqEvent_HudRenderText::Render(class UCanvas* TargetCanvas, class AHUD* TargetHud)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_HudRenderText.Render");

	USeqEvent_HudRenderText_Render_Params params {};
	params.TargetCanvas = TargetCanvas;
	params.TargetHud = TargetHud;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
