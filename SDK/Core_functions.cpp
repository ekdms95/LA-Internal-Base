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

std::string UObject::GetName() const
{
	std::string name(Name.GetName());
	if (Name.Number > 0)
	{
		name += '_' + std::to_string(Name.Number);
	}

	auto pos = name.rfind('/');
	if (pos == std::string::npos)
	{
		return name;
	}
	
	return name.substr(pos + 1);
}

std::string UObject::GetFullName() const
{
	std::string name;

	if (Class != nullptr)
	{
		std::string temp;
		for (auto p = Outer; p; p = p->Outer)
		{
			temp = p->GetName() + "." + temp;
		}

		name = Class->GetName();
		name += " ";
		name += temp;
		name += GetName();
	}

	return name;
}

bool UObject::IsA(UClass* cmp) const
{
	for (auto super = Class; super; super = static_cast<UClass*>(super->SuperField))
	{
		if (super == cmp)
		{
			return true;
		}
	}

	return false;
}

// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.ProfNodeEvent
//		Flags  -> ()
// Parameters:
//		struct FString                                     EventName                                                  (Parm, NeedCtorLink)
void UObject::ProfNodeEvent(const struct FString& EventName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.ProfNodeEvent");

	UObject_ProfNodeEvent_Params params {};
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.ProfNodeSetDepthThreshold
//		Flags  -> ()
// Parameters:
//		int                                                Depth                                                      (Parm)
void UObject::ProfNodeSetDepthThreshold(int Depth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.ProfNodeSetDepthThreshold");

	UObject_ProfNodeSetDepthThreshold_Params params {};
	params.Depth = Depth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.ProfNodeSetTimeThresholdSeconds
//		Flags  -> ()
// Parameters:
//		float                                              Threshold                                                  (Parm)
void UObject::ProfNodeSetTimeThresholdSeconds(float Threshold)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.ProfNodeSetTimeThresholdSeconds");

	UObject_ProfNodeSetTimeThresholdSeconds_Params params {};
	params.Threshold = Threshold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.ProfNodeStop
//		Flags  -> ()
// Parameters:
//		int                                                AssumedTimerIndex                                          (OptionalParm, Parm)
void UObject::ProfNodeStop(int AssumedTimerIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.ProfNodeStop");

	UObject_ProfNodeStop_Params params {};
	params.AssumedTimerIndex = AssumedTimerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.ProfNodeStart
//		Flags  -> ()
// Parameters:
//		struct FString                                     TimerName                                                  (Parm, NeedCtorLink)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::ProfNodeStart(const struct FString& TimerName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.ProfNodeStart");

	UObject_ProfNodeStart_Params params {};
	params.TimerName = TimerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GetStringFromGuid
//		Flags  -> ()
// Parameters:
//		struct FGuid                                       InGuid                                                     (Const, Parm, OutParm)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UObject::GetStringFromGuid(struct FGuid* InGuid)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GetStringFromGuid");

	UObject_GetStringFromGuid_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InGuid != nullptr)
		*InGuid = params.InGuid;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GetGuidFromString
//		Flags  -> ()
// Parameters:
//		struct FString                                     InGuidString                                               (Const, Parm, OutParm, NeedCtorLink)
//		struct FGuid                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FGuid UObject::GetGuidFromString(struct FString* InGuidString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GetGuidFromString");

	UObject_GetGuidFromString_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InGuidString != nullptr)
		*InGuidString = params.InGuidString;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.CreateGuid
//		Flags  -> ()
// Parameters:
//		struct FGuid                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FGuid UObject::CreateGuid()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.CreateGuid");

	UObject_CreateGuid_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.IsGuidValid
//		Flags  -> ()
// Parameters:
//		struct FGuid                                       InGuid                                                     (Const, Parm, OutParm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::IsGuidValid(struct FGuid* InGuid)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.IsGuidValid");

	UObject_IsGuidValid_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InGuid != nullptr)
		*InGuid = params.InGuid;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.InvalidateGuid
//		Flags  -> ()
// Parameters:
//		struct FGuid                                       InGuid                                                     (Parm, OutParm)
void UObject::InvalidateGuid(struct FGuid* InGuid)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.InvalidateGuid");

	UObject_InvalidateGuid_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InGuid != nullptr)
		*InGuid = params.InGuid;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GetLanguage
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UObject::GetLanguage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GetLanguage");

	UObject_GetLanguage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GetRandomOptionSumFrequency
//		Flags  -> ()
// Parameters:
//		TArray<float>                                      FreqList                                                   (Const, Parm, OutParm, NeedCtorLink)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::GetRandomOptionSumFrequency(TArray<float>* FreqList)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GetRandomOptionSumFrequency");

	UObject_GetRandomOptionSumFrequency_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FreqList != nullptr)
		*FreqList = params.FreqList;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GetBuildChangelistNumber
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::GetBuildChangelistNumber()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GetBuildChangelistNumber");

	UObject_GetBuildChangelistNumber_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GetEngineVersion
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::GetEngineVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GetEngineVersion");

	UObject_GetEngineVersion_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GetSystemTime
//		Flags  -> ()
// Parameters:
//		int                                                Year                                                       (Parm, OutParm)
//		int                                                Month                                                      (Parm, OutParm)
//		int                                                DayOfWeek                                                  (Parm, OutParm)
//		int                                                Day                                                        (Parm, OutParm)
//		int                                                Hour                                                       (Parm, OutParm)
//		int                                                Min                                                        (Parm, OutParm)
//		int                                                Sec                                                        (Parm, OutParm)
//		int                                                MSec                                                       (Parm, OutParm)
void UObject::GetSystemTime(int* Year, int* Month, int* DayOfWeek, int* Day, int* Hour, int* Min, int* Sec, int* MSec)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GetSystemTime");

	UObject_GetSystemTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Year != nullptr)
		*Year = params.Year;
	if (Month != nullptr)
		*Month = params.Month;
	if (DayOfWeek != nullptr)
		*DayOfWeek = params.DayOfWeek;
	if (Day != nullptr)
		*Day = params.Day;
	if (Hour != nullptr)
		*Hour = params.Hour;
	if (Min != nullptr)
		*Min = params.Min;
	if (Sec != nullptr)
		*Sec = params.Sec;
	if (MSec != nullptr)
		*MSec = params.MSec;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.TimeStamp
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UObject::TimeStamp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.TimeStamp");

	UObject_TimeStamp_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.TransformVectorByRotation
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    SourceRotation                                             (Parm)
//		struct FVector                                     SourceVector                                               (Parm)
//		bool                                               bInverse                                                   (OptionalParm, Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::TransformVectorByRotation(const struct FRotator& SourceRotation, const struct FVector& SourceVector, bool bInverse)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.TransformVectorByRotation");

	UObject_TransformVectorByRotation_Params params {};
	params.SourceRotation = SourceRotation;
	params.SourceVector = SourceVector;
	params.bInverse = bInverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GetPackageName
//		Flags  -> ()
// Parameters:
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FName UObject::GetPackageName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GetPackageName");

	UObject_GetPackageName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.IsPendingKill
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::IsPendingKill()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.IsPendingKill");

	UObject_IsPendingKill_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.ByteToFloat
//		Flags  -> ()
// Parameters:
//		unsigned char                                      inputByte                                                  (Parm)
//		bool                                               bSigned                                                    (OptionalParm, Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::ByteToFloat(unsigned char inputByte, bool bSigned)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.ByteToFloat");

	UObject_ByteToFloat_Params params {};
	params.inputByte = inputByte;
	params.bSigned = bSigned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.FloatToByte
//		Flags  -> ()
// Parameters:
//		float                                              inputFloat                                                 (Parm)
//		bool                                               bSigned                                                    (OptionalParm, Parm)
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ReturnParm)
unsigned char UObject::FloatToByte(float inputFloat, bool bSigned)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.FloatToByte");

	UObject_FloatToByte_Params params {};
	params.inputFloat = inputFloat;
	params.bSigned = bSigned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.UnwindHeading
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::UnwindHeading(float A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.UnwindHeading");

	UObject_UnwindHeading_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.FindDeltaAngle
//		Flags  -> ()
// Parameters:
//		float                                              A1                                                         (Parm)
//		float                                              A2                                                         (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::FindDeltaAngle(float A1, float A2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.FindDeltaAngle");

	UObject_FindDeltaAngle_Params params {};
	params.A1 = A1;
	params.A2 = A2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GetHeadingAngle
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Dir                                                        (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::GetHeadingAngle(const struct FVector& Dir)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GetHeadingAngle");

	UObject_GetHeadingAngle_Params params {};
	params.Dir = Dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GetAngularDegreesFromRadians
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   OutFOV                                                     (Parm, OutParm)
void UObject::GetAngularDegreesFromRadians(struct FVector2D* OutFOV)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GetAngularDegreesFromRadians");

	UObject_GetAngularDegreesFromRadians_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutFOV != nullptr)
		*OutFOV = params.OutFOV;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GetAngularFromDotDist
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   OutAngDist                                                 (Parm, OutParm)
//		struct FVector2D                                   DotDist                                                    (Parm)
void UObject::GetAngularFromDotDist(struct FVector2D* OutAngDist, const struct FVector2D& DotDist)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GetAngularFromDotDist");

	UObject_GetAngularFromDotDist_Params params {};
	params.DotDist = DotDist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAngDist != nullptr)
		*OutAngDist = params.OutAngDist;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GetAngularDistance
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   OutAngularDist                                             (Parm, OutParm)
//		struct FVector                                     Direction                                                  (Parm)
//		struct FVector                                     AxisX                                                      (Parm)
//		struct FVector                                     AxisY                                                      (Parm)
//		struct FVector                                     AxisZ                                                      (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::GetAngularDistance(struct FVector2D* OutAngularDist, const struct FVector& Direction, const struct FVector& AxisX, const struct FVector& AxisY, const struct FVector& AxisZ)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GetAngularDistance");

	UObject_GetAngularDistance_Params params {};
	params.Direction = Direction;
	params.AxisX = AxisX;
	params.AxisY = AxisY;
	params.AxisZ = AxisZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAngularDist != nullptr)
		*OutAngularDist = params.OutAngularDist;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GetDotDistance
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   OutDotDist                                                 (Parm, OutParm)
//		struct FVector                                     Direction                                                  (Parm)
//		struct FVector                                     AxisX                                                      (Parm)
//		struct FVector                                     AxisY                                                      (Parm)
//		struct FVector                                     AxisZ                                                      (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::GetDotDistance(struct FVector2D* OutDotDist, const struct FVector& Direction, const struct FVector& AxisX, const struct FVector& AxisY, const struct FVector& AxisZ)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GetDotDistance");

	UObject_GetDotDistance_Params params {};
	params.Direction = Direction;
	params.AxisX = AxisX;
	params.AxisY = AxisY;
	params.AxisZ = AxisZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutDotDist != nullptr)
		*OutDotDist = params.OutDotDist;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.PointProjectToPlane
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Point                                                      (Parm)
//		struct FVector                                     A                                                          (Parm)
//		struct FVector                                     B                                                          (Parm)
//		struct FVector                                     C                                                          (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::PointProjectToPlane(const struct FVector& Point, const struct FVector& A, const struct FVector& B, const struct FVector& C)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.PointProjectToPlane");

	UObject_PointProjectToPlane_Params params {};
	params.Point = Point;
	params.A = A;
	params.B = B;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.PointDistToPlane
//		Flags  -> (Singular, Net, Simulated, Native, Static, Const, Public, Private, Delegate, NetServer, NetClient, DLLImport, K2Call, K2Pure)
// Parameters:
//		struct FVector                                     Point                                                      (Parm)
//		struct FRotator                                    Orientation                                                (Parm)
//		struct FVector                                     Origin                                                     (Parm)
//		struct FVector                                     out_ClosestPoint                                           (OptionalParm, Parm, OutParm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::STATIC_PointDistToPlane(const struct FVector& Point, const struct FRotator& Orientation, const struct FVector& Origin, struct FVector* out_ClosestPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.PointDistToPlane");

	UObject_PointDistToPlane_Params params {};
	params.Point = Point;
	params.Orientation = Orientation;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (out_ClosestPoint != nullptr)
		*out_ClosestPoint = params.out_ClosestPoint;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.PointDistToSegment
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Point                                                      (Parm)
//		struct FVector                                     StartPoint                                                 (Parm)
//		struct FVector                                     EndPoint                                                   (Parm)
//		struct FVector                                     OutClosestPoint                                            (OptionalParm, Parm, OutParm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::PointDistToSegment(const struct FVector& Point, const struct FVector& StartPoint, const struct FVector& EndPoint, struct FVector* OutClosestPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.PointDistToSegment");

	UObject_PointDistToSegment_Params params {};
	params.Point = Point;
	params.StartPoint = StartPoint;
	params.EndPoint = EndPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutClosestPoint != nullptr)
		*OutClosestPoint = params.OutClosestPoint;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.PointDistToLine
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Point                                                      (Parm)
//		struct FVector                                     Line                                                       (Parm)
//		struct FVector                                     Origin                                                     (Parm)
//		struct FVector                                     OutClosestPoint                                            (OptionalParm, Parm, OutParm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::PointDistToLine(const struct FVector& Point, const struct FVector& Line, const struct FVector& Origin, struct FVector* OutClosestPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.PointDistToLine");

	UObject_PointDistToLine_Params params {};
	params.Point = Point;
	params.Line = Line;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutClosestPoint != nullptr)
		*OutClosestPoint = params.OutClosestPoint;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GetPerObjectConfigSections
//		Flags  -> ()
// Parameters:
//		class UClass*                                      SearchClass                                                (Parm)
//		TArray<struct FString>                             out_SectionNames                                           (Parm, OutParm, NeedCtorLink)
//		class UObject*                                     ObjectOuter                                                (OptionalParm, Parm)
//		int                                                MaxResults                                                 (OptionalParm, Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::GetPerObjectConfigSections(class UClass* SearchClass, TArray<struct FString>* out_SectionNames, class UObject* ObjectOuter, int MaxResults)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GetPerObjectConfigSections");

	UObject_GetPerObjectConfigSections_Params params {};
	params.SearchClass = SearchClass;
	params.ObjectOuter = ObjectOuter;
	params.MaxResults = MaxResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (out_SectionNames != nullptr)
		*out_SectionNames = params.out_SectionNames;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.ImportJSON
//		Flags  -> ()
// Parameters:
//		struct FString                                     PropertyName                                               (Parm, NeedCtorLink)
//		struct FString                                     JSON                                                       (Const, Parm, OutParm, NeedCtorLink)
void UObject::ImportJSON(const struct FString& PropertyName, struct FString* JSON)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.ImportJSON");

	UObject_ImportJSON_Params params {};
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (JSON != nullptr)
		*JSON = params.JSON;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.StaticSaveConfig
//		Flags  -> ()
void UObject::StaticSaveConfig()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.StaticSaveConfig");

	UObject_StaticSaveConfig_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.SaveConfig
//		Flags  -> ()
void UObject::SaveConfig()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.SaveConfig");

	UObject_SaveConfig_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.FindObject
//		Flags  -> ()
// Parameters:
//		struct FString                                     ObjectName                                                 (Parm, NeedCtorLink)
//		class UClass*                                      ObjectClass                                                (Parm)
//		class UObject*                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
class UObject* UObject::FindObject(const struct FString& ObjectName, class UClass* ObjectClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.FindObject");

	UObject_FindObject_Params params {};
	params.ObjectName = ObjectName;
	params.ObjectClass = ObjectClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.DynamicLoadObject
//		Flags  -> ()
// Parameters:
//		struct FString                                     ObjectName                                                 (Parm, NeedCtorLink)
//		class UClass*                                      ObjectClass                                                (Parm)
//		bool                                               MayFail                                                    (OptionalParm, Parm)
//		class UObject*                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
class UObject* UObject::DynamicLoadObject(const struct FString& ObjectName, class UClass* ObjectClass, bool MayFail)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.DynamicLoadObject");

	UObject_DynamicLoadObject_Params params {};
	params.ObjectName = ObjectName;
	params.ObjectClass = ObjectClass;
	params.MayFail = MayFail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.EnumFromString
//		Flags  -> ()
// Parameters:
//		class UObject*                                     E                                                          (Parm)
//		struct FName                                       ValueName                                                  (Parm, CoerceParm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::EnumFromString(class UObject* E, const struct FName& ValueName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.EnumFromString");

	UObject_EnumFromString_Params params {};
	params.E = E;
	params.ValueName = ValueName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GetEnum
//		Flags  -> ()
// Parameters:
//		class UObject*                                     E                                                          (Parm)
//		int                                                I                                                          (Parm, CoerceParm)
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FName UObject::GetEnum(class UObject* E, int I)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GetEnum");

	UObject_GetEnum_Params params {};
	params.E = E;
	params.I = I;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Disable
//		Flags  -> ()
// Parameters:
//		struct FName                                       ProbeFunc                                                  (Parm)
void UObject::Disable(const struct FName& ProbeFunc)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Disable");

	UObject_Disable_Params params {};
	params.ProbeFunc = ProbeFunc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Enable
//		Flags  -> ()
// Parameters:
//		struct FName                                       ProbeFunc                                                  (Parm)
void UObject::Enable(const struct FName& ProbeFunc)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Enable");

	UObject_Enable_Params params {};
	params.ProbeFunc = ProbeFunc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.ContinuedState
//		Flags  -> ()
void UObject::ContinuedState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.ContinuedState");

	UObject_ContinuedState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.PausedState
//		Flags  -> ()
void UObject::PausedState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.PausedState");

	UObject_PausedState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.PoppedState
//		Flags  -> ()
void UObject::PoppedState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.PoppedState");

	UObject_PoppedState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.PushedState
//		Flags  -> ()
void UObject::PushedState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.PushedState");

	UObject_PushedState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.EndState
//		Flags  -> ()
// Parameters:
//		struct FName                                       NextStateName                                              (Parm)
void UObject::EndState(const struct FName& NextStateName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.EndState");

	UObject_EndState_Params params {};
	params.NextStateName = NextStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.BeginState
//		Flags  -> ()
// Parameters:
//		struct FName                                       PreviousStateName                                          (Parm)
void UObject::BeginState(const struct FName& PreviousStateName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.BeginState");

	UObject_BeginState_Params params {};
	params.PreviousStateName = PreviousStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.DumpStateStack
//		Flags  -> ()
void UObject::DumpStateStack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.DumpStateStack");

	UObject_DumpStateStack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.PopState
//		Flags  -> ()
// Parameters:
//		bool                                               bPopAll                                                    (OptionalParm, Parm)
void UObject::PopState(bool bPopAll)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.PopState");

	UObject_PopState_Params params {};
	params.bPopAll = bPopAll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.PushState
//		Flags  -> ()
// Parameters:
//		struct FName                                       NewState                                                   (Parm)
//		struct FName                                       NewLabel                                                   (OptionalParm, Parm)
void UObject::PushState(const struct FName& NewState, const struct FName& NewLabel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.PushState");

	UObject_PushState_Params params {};
	params.NewState = NewState;
	params.NewLabel = NewLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GetStateName
//		Flags  -> ()
// Parameters:
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FName UObject::GetStateName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GetStateName");

	UObject_GetStateName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.IsChildState
//		Flags  -> ()
// Parameters:
//		struct FName                                       TestState                                                  (Parm)
//		struct FName                                       TestParentState                                            (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::IsChildState(const struct FName& TestState, const struct FName& TestParentState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.IsChildState");

	UObject_IsChildState_Params params {};
	params.TestState = TestState;
	params.TestParentState = TestParentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.IsInState
//		Flags  -> ()
// Parameters:
//		struct FName                                       TestState                                                  (Parm)
//		bool                                               bTestStateStack                                            (OptionalParm, Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::IsInState(const struct FName& TestState, bool bTestStateStack)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.IsInState");

	UObject_IsInState_Params params {};
	params.TestState = TestState;
	params.bTestStateStack = bTestStateStack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GotoState
//		Flags  -> ()
// Parameters:
//		struct FName                                       NewState                                                   (OptionalParm, Parm)
//		struct FName                                       Label                                                      (OptionalParm, Parm)
//		bool                                               bForceEvents                                               (OptionalParm, Parm)
//		bool                                               bKeepStack                                                 (OptionalParm, Parm)
void UObject::GotoState(const struct FName& NewState, const struct FName& Label, bool bForceEvents, bool bKeepStack)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GotoState");

	UObject_GotoState_Params params {};
	params.NewState = NewState;
	params.Label = Label;
	params.bForceEvents = bForceEvents;
	params.bKeepStack = bKeepStack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.IsUTracing
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::IsUTracing()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.IsUTracing");

	UObject_IsUTracing_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.SetUTracing
//		Flags  -> ()
// Parameters:
//		bool                                               bShouldUTrace                                              (Parm)
void UObject::SetUTracing(bool bShouldUTrace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.SetUTracing");

	UObject_SetUTracing_Params params {};
	params.bShouldUTrace = bShouldUTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GetFuncName
//		Flags  -> ()
// Parameters:
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FName UObject::GetFuncName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GetFuncName");

	UObject_GetFuncName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.DebugBreak
//		Flags  -> ()
// Parameters:
//		int                                                UserFlags                                                  (OptionalParm, Parm)
//		TEnumAsByte<Core_EDebugBreakType>                  DebuggerType                                               (OptionalParm, Parm)
void UObject::DebugBreak(int UserFlags, TEnumAsByte<Core_EDebugBreakType> DebuggerType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.DebugBreak");

	UObject_DebugBreak_Params params {};
	params.UserFlags = UserFlags;
	params.DebuggerType = DebuggerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GetScriptTrace
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UObject::GetScriptTrace()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GetScriptTrace");

	UObject_GetScriptTrace_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.ScriptTrace
//		Flags  -> ()
void UObject::ScriptTrace()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.ScriptTrace");

	UObject_ScriptTrace_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.ParseLocalizedPropertyPath
//		Flags  -> ()
// Parameters:
//		struct FString                                     PathName                                                   (Parm, NeedCtorLink)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UObject::ParseLocalizedPropertyPath(const struct FString& PathName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.ParseLocalizedPropertyPath");

	UObject_ParseLocalizedPropertyPath_Params params {};
	params.PathName = PathName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Localize
//		Flags  -> ()
// Parameters:
//		struct FString                                     SectionName                                                (Parm, NeedCtorLink)
//		struct FString                                     KeyName                                                    (Parm, NeedCtorLink)
//		struct FString                                     PackageName                                                (Parm, NeedCtorLink)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UObject::Localize(const struct FString& SectionName, const struct FString& KeyName, const struct FString& PackageName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Localize");

	UObject_Localize_Params params {};
	params.SectionName = SectionName;
	params.KeyName = KeyName;
	params.PackageName = PackageName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.WarnInternal
//		Flags  -> ()
// Parameters:
//		struct FString                                     S                                                          (Parm, CoerceParm, NeedCtorLink)
void UObject::WarnInternal(const struct FString& S)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.WarnInternal");

	UObject_WarnInternal_Params params {};
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.LogInternal
//		Flags  -> ()
// Parameters:
//		struct FString                                     S                                                          (Parm, CoerceParm, NeedCtorLink)
//		struct FName                                       Tag                                                        (OptionalParm, Parm)
void UObject::LogInternal(const struct FString& S, const struct FName& Tag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.LogInternal");

	UObject_LogInternal_Params params {};
	params.S = S;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Subtract_LinearColorLinearColor
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                A                                                          (Parm)
//		struct FLinearColor                                B                                                          (Parm)
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FLinearColor UObject::Subtract_LinearColorLinearColor(const struct FLinearColor& A, const struct FLinearColor& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_LinearColorLinearColor");

	UObject_Subtract_LinearColorLinearColor_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Multiply_LinearColorFloat
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                LC                                                         (Parm)
//		float                                              Mult                                                       (Parm)
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FLinearColor UObject::Multiply_LinearColorFloat(const struct FLinearColor& LC, float Mult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_LinearColorFloat");

	UObject_Multiply_LinearColorFloat_Params params {};
	params.LC = LC;
	params.Mult = Mult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.ColorToLinearColor
//		Flags  -> ()
// Parameters:
//		struct FColor                                      OldColor                                                   (Parm)
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FLinearColor UObject::ColorToLinearColor(const struct FColor& OldColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.ColorToLinearColor");

	UObject_ColorToLinearColor_Params params {};
	params.OldColor = OldColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.MakeLinearColor
//		Flags  -> (Singular, Native, Event, Static, Private, Delegate, NetServer, NetClient, K2Call, K2Pure)
// Parameters:
//		float                                              R                                                          (Parm)
//		float                                              G                                                          (Parm)
//		float                                              B                                                          (Parm)
//		float                                              A                                                          (Parm)
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FLinearColor UObject::STATIC_MakeLinearColor(float R, float G, float B, float A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.MakeLinearColor");

	UObject_MakeLinearColor_Params params {};
	params.R = R;
	params.G = G;
	params.B = B;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.LerpColor
//		Flags  -> (Net, Simulated, Exec, Native, Event, Static, Private, Delegate, NetServer, NetClient, K2Call, K2Pure)
// Parameters:
//		struct FColor                                      A                                                          (Parm)
//		struct FColor                                      B                                                          (Parm)
//		float                                              Alpha                                                      (Parm)
//		struct FColor                                      ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FColor UObject::STATIC_LerpColor(const struct FColor& A, const struct FColor& B, float Alpha)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.LerpColor");

	UObject_LerpColor_Params params {};
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.MakeColor
//		Flags  -> (Net, NetReliable, Exec, Native, Operator, Static, Private, Delegate, NetServer, NetClient, K2Call, K2Pure)
// Parameters:
//		unsigned char                                      R                                                          (Parm)
//		unsigned char                                      G                                                          (Parm)
//		unsigned char                                      B                                                          (Parm)
//		unsigned char                                      A                                                          (OptionalParm, Parm)
//		struct FColor                                      ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FColor UObject::STATIC_MakeColor(unsigned char R, unsigned char G, unsigned char B, unsigned char A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.MakeColor");

	UObject_MakeColor_Params params {};
	params.R = R;
	params.G = G;
	params.B = B;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Add_ColorColor
//		Flags  -> ()
// Parameters:
//		struct FColor                                      A                                                          (Parm)
//		struct FColor                                      B                                                          (Parm)
//		struct FColor                                      ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FColor UObject::Add_ColorColor(const struct FColor& A, const struct FColor& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Add_ColorColor");

	UObject_Add_ColorColor_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Multiply_ColorFloat
//		Flags  -> ()
// Parameters:
//		struct FColor                                      A                                                          (Parm)
//		float                                              B                                                          (Parm)
//		struct FColor                                      ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FColor UObject::Multiply_ColorFloat(const struct FColor& A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_ColorFloat");

	UObject_Multiply_ColorFloat_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Multiply_FloatColor
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		struct FColor                                      B                                                          (Parm)
//		struct FColor                                      ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FColor UObject::Multiply_FloatColor(float A, const struct FColor& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_FloatColor");

	UObject_Multiply_FloatColor_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Subtract_ColorColor
//		Flags  -> ()
// Parameters:
//		struct FColor                                      A                                                          (Parm)
//		struct FColor                                      B                                                          (Parm)
//		struct FColor                                      ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FColor UObject::Subtract_ColorColor(const struct FColor& A, const struct FColor& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_ColorColor");

	UObject_Subtract_ColorColor_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.EvalInterpCurveVector2D
//		Flags  -> ()
// Parameters:
//		struct FInterpCurveVector2D                        Vector2DCurve                                              (Const, Parm, OutParm, NeedCtorLink)
//		float                                              InVal                                                      (Parm)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector2D UObject::EvalInterpCurveVector2D(struct FInterpCurveVector2D* Vector2DCurve, float InVal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.EvalInterpCurveVector2D");

	UObject_EvalInterpCurveVector2D_Params params {};
	params.InVal = InVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Vector2DCurve != nullptr)
		*Vector2DCurve = params.Vector2DCurve;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.EvalInterpCurveVector
//		Flags  -> ()
// Parameters:
//		struct FInterpCurveVector                          VectorCurve                                                (Const, Parm, OutParm, NeedCtorLink)
//		float                                              InVal                                                      (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::EvalInterpCurveVector(struct FInterpCurveVector* VectorCurve, float InVal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.EvalInterpCurveVector");

	UObject_EvalInterpCurveVector_Params params {};
	params.InVal = InVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (VectorCurve != nullptr)
		*VectorCurve = params.VectorCurve;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.EvalInterpCurveFloat
//		Flags  -> ()
// Parameters:
//		struct FInterpCurveFloat                           FloatCurve                                                 (Const, Parm, OutParm, NeedCtorLink)
//		float                                              InVal                                                      (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::EvalInterpCurveFloat(struct FInterpCurveFloat* FloatCurve, float InVal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.EvalInterpCurveFloat");

	UObject_EvalInterpCurveFloat_Params params {};
	params.InVal = InVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FloatCurve != nullptr)
		*FloatCurve = params.FloatCurve;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.vect2d
//		Flags  -> (Singular, Exec, HasOptionalParms, Const, Private, HasDefaults, DLLImport, K2Override, K2Pure)
// Parameters:
//		float                                              InX                                                        (Parm)
//		float                                              InY                                                        (Parm)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector2D UObject::vect2d(float InX, float InY)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.vect2d");

	UObject_vect2d_Params params {};
	params.InX = InX;
	params.InY = InY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GetMappedRangeValue
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   InputRange                                                 (Parm)
//		struct FVector2D                                   OutputRange                                                (Parm)
//		float                                              Value                                                      (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::GetMappedRangeValue(const struct FVector2D& InputRange, const struct FVector2D& OutputRange, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GetMappedRangeValue");

	UObject_GetMappedRangeValue_Params params {};
	params.InputRange = InputRange;
	params.OutputRange = OutputRange;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GetRangePctByValue
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   Range                                                      (Parm)
//		float                                              Value                                                      (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::GetRangePctByValue(const struct FVector2D& Range, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GetRangePctByValue");

	UObject_GetRangePctByValue_Params params {};
	params.Range = Range;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GetRangeValueByPct
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   Range                                                      (Parm)
//		float                                              Pct                                                        (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::GetRangeValueByPct(const struct FVector2D& Range, float Pct)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GetRangeValueByPct");

	UObject_GetRangeValueByPct_Params params {};
	params.Range = Range;
	params.Pct = Pct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.SubtractEqual_Vector2DVector2D
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   A                                                          (Parm, OutParm)
//		struct FVector2D                                   B                                                          (Parm)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector2D UObject::SubtractEqual_Vector2DVector2D(struct FVector2D* A, const struct FVector2D& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_Vector2DVector2D");

	UObject_SubtractEqual_Vector2DVector2D_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.AddEqual_Vector2DVector2D
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   A                                                          (Parm, OutParm)
//		struct FVector2D                                   B                                                          (Parm)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector2D UObject::AddEqual_Vector2DVector2D(struct FVector2D* A, const struct FVector2D& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_Vector2DVector2D");

	UObject_AddEqual_Vector2DVector2D_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.DivideEqual_Vector2DFloat
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   A                                                          (Parm, OutParm)
//		float                                              B                                                          (Parm)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector2D UObject::DivideEqual_Vector2DFloat(struct FVector2D* A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_Vector2DFloat");

	UObject_DivideEqual_Vector2DFloat_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.MultiplyEqual_Vector2DFloat
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   A                                                          (Parm, OutParm)
//		float                                              B                                                          (Parm)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector2D UObject::MultiplyEqual_Vector2DFloat(struct FVector2D* A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_Vector2DFloat");

	UObject_MultiplyEqual_Vector2DFloat_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Divide_Vector2DFloat
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   A                                                          (Parm)
//		float                                              B                                                          (Parm)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector2D UObject::Divide_Vector2DFloat(const struct FVector2D& A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Divide_Vector2DFloat");

	UObject_Divide_Vector2DFloat_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Multiply_Vector2DFloat
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   A                                                          (Parm)
//		float                                              B                                                          (Parm)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector2D UObject::Multiply_Vector2DFloat(const struct FVector2D& A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_Vector2DFloat");

	UObject_Multiply_Vector2DFloat_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Subtract_Vector2DVector2D
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   A                                                          (Parm)
//		struct FVector2D                                   B                                                          (Parm)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector2D UObject::Subtract_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_Vector2DVector2D");

	UObject_Subtract_Vector2DVector2D_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Add_Vector2DVector2D
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   A                                                          (Parm)
//		struct FVector2D                                   B                                                          (Parm)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector2D UObject::Add_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Add_Vector2DVector2D");

	UObject_Add_Vector2DVector2D_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Subtract_QuatQuat
//		Flags  -> ()
// Parameters:
//		struct FQuat                                       A                                                          (Parm)
//		struct FQuat                                       B                                                          (Parm)
//		struct FQuat                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FQuat UObject::Subtract_QuatQuat(const struct FQuat& A, const struct FQuat& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_QuatQuat");

	UObject_Subtract_QuatQuat_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Add_QuatQuat
//		Flags  -> ()
// Parameters:
//		struct FQuat                                       A                                                          (Parm)
//		struct FQuat                                       B                                                          (Parm)
//		struct FQuat                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FQuat UObject::Add_QuatQuat(const struct FQuat& A, const struct FQuat& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Add_QuatQuat");

	UObject_Add_QuatQuat_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.QuatSlerp
//		Flags  -> ()
// Parameters:
//		struct FQuat                                       A                                                          (Parm)
//		struct FQuat                                       B                                                          (Parm)
//		float                                              Alpha                                                      (Parm)
//		bool                                               bShortestPath                                              (OptionalParm, Parm)
//		struct FQuat                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FQuat UObject::QuatSlerp(const struct FQuat& A, const struct FQuat& B, float Alpha, bool bShortestPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.QuatSlerp");

	UObject_QuatSlerp_Params params {};
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.bShortestPath = bShortestPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.QuatToRotator
//		Flags  -> ()
// Parameters:
//		struct FQuat                                       A                                                          (Parm)
//		struct FRotator                                    ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FRotator UObject::QuatToRotator(const struct FQuat& A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.QuatToRotator");

	UObject_QuatToRotator_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.QuatFromRotator
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    A                                                          (Parm)
//		struct FQuat                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FQuat UObject::QuatFromRotator(const struct FRotator& A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.QuatFromRotator");

	UObject_QuatFromRotator_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.QuatFromAxisAndAngle
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Axis                                                       (Parm)
//		float                                              Angle                                                      (Parm)
//		struct FQuat                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FQuat UObject::QuatFromAxisAndAngle(const struct FVector& Axis, float Angle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.QuatFromAxisAndAngle");

	UObject_QuatFromAxisAndAngle_Params params {};
	params.Axis = Axis;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.QuatFindBetween
//		Flags  -> ()
// Parameters:
//		struct FVector                                     A                                                          (Parm)
//		struct FVector                                     B                                                          (Parm)
//		struct FQuat                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FQuat UObject::QuatFindBetween(const struct FVector& A, const struct FVector& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.QuatFindBetween");

	UObject_QuatFindBetween_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.QuatRotateVector
//		Flags  -> ()
// Parameters:
//		struct FQuat                                       A                                                          (Parm)
//		struct FVector                                     B                                                          (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::QuatRotateVector(const struct FQuat& A, const struct FVector& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.QuatRotateVector");

	UObject_QuatRotateVector_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.QuatInvert
//		Flags  -> ()
// Parameters:
//		struct FQuat                                       A                                                          (Parm)
//		struct FQuat                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FQuat UObject::QuatInvert(const struct FQuat& A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.QuatInvert");

	UObject_QuatInvert_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.QuatDot
//		Flags  -> ()
// Parameters:
//		struct FQuat                                       A                                                          (Parm)
//		struct FQuat                                       B                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::QuatDot(const struct FQuat& A, const struct FQuat& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.QuatDot");

	UObject_QuatDot_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.QuatProduct
//		Flags  -> ()
// Parameters:
//		struct FQuat                                       A                                                          (Parm)
//		struct FQuat                                       B                                                          (Parm)
//		struct FQuat                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FQuat UObject::QuatProduct(const struct FQuat& A, const struct FQuat& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.QuatProduct");

	UObject_QuatProduct_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.MatrixGetAxis
//		Flags  -> ()
// Parameters:
//		struct FMatrix                                     TM                                                         (Parm)
//		TEnumAsByte<Core_EAxis>                            Axis                                                       (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::MatrixGetAxis(const struct FMatrix& TM, TEnumAsByte<Core_EAxis> Axis)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.MatrixGetAxis");

	UObject_MatrixGetAxis_Params params {};
	params.TM = TM;
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.MatrixGetOrigin
//		Flags  -> ()
// Parameters:
//		struct FMatrix                                     TM                                                         (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::MatrixGetOrigin(const struct FMatrix& TM)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.MatrixGetOrigin");

	UObject_MatrixGetOrigin_Params params {};
	params.TM = TM;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.MatrixGetRotator
//		Flags  -> ()
// Parameters:
//		struct FMatrix                                     TM                                                         (Parm)
//		struct FRotator                                    ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FRotator UObject::MatrixGetRotator(const struct FMatrix& TM)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.MatrixGetRotator");

	UObject_MatrixGetRotator_Params params {};
	params.TM = TM;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.MakeRotationMatrix
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    Rotation                                                   (Parm)
//		struct FMatrix                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FMatrix UObject::MakeRotationMatrix(const struct FRotator& Rotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.MakeRotationMatrix");

	UObject_MakeRotationMatrix_Params params {};
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.MakeRotationTranslationMatrix
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Translation                                                (Parm)
//		struct FRotator                                    Rotation                                                   (Parm)
//		struct FMatrix                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FMatrix UObject::MakeRotationTranslationMatrix(const struct FVector& Translation, const struct FRotator& Rotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.MakeRotationTranslationMatrix");

	UObject_MakeRotationTranslationMatrix_Params params {};
	params.Translation = Translation;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.InverseTransformNormal
//		Flags  -> ()
// Parameters:
//		struct FMatrix                                     TM                                                         (Parm)
//		struct FVector                                     A                                                          (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::InverseTransformNormal(const struct FMatrix& TM, const struct FVector& A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.InverseTransformNormal");

	UObject_InverseTransformNormal_Params params {};
	params.TM = TM;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.TransformNormal
//		Flags  -> ()
// Parameters:
//		struct FMatrix                                     TM                                                         (Parm)
//		struct FVector                                     A                                                          (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::TransformNormal(const struct FMatrix& TM, const struct FVector& A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.TransformNormal");

	UObject_TransformNormal_Params params {};
	params.TM = TM;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.InverseTransformVector
//		Flags  -> ()
// Parameters:
//		struct FMatrix                                     TM                                                         (Parm)
//		struct FVector                                     A                                                          (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::InverseTransformVector(const struct FMatrix& TM, const struct FVector& A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.InverseTransformVector");

	UObject_InverseTransformVector_Params params {};
	params.TM = TM;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.TransformVector
//		Flags  -> ()
// Parameters:
//		struct FMatrix                                     TM                                                         (Parm)
//		struct FVector                                     A                                                          (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::TransformVector(const struct FMatrix& TM, const struct FVector& A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.TransformVector");

	UObject_TransformVector_Params params {};
	params.TM = TM;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Multiply_MatrixMatrix
//		Flags  -> ()
// Parameters:
//		struct FMatrix                                     A                                                          (Parm)
//		struct FMatrix                                     B                                                          (Parm)
//		struct FMatrix                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FMatrix UObject::Multiply_MatrixMatrix(const struct FMatrix& A, const struct FMatrix& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_MatrixMatrix");

	UObject_Multiply_MatrixMatrix_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.NotEqual_NameName
//		Flags  -> ()
// Parameters:
//		struct FName                                       A                                                          (Parm)
//		struct FName                                       B                                                          (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::NotEqual_NameName(const struct FName& A, const struct FName& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_NameName");

	UObject_NotEqual_NameName_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.EqualEqual_NameName
//		Flags  -> ()
// Parameters:
//		struct FName                                       A                                                          (Parm)
//		struct FName                                       B                                                          (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::EqualEqual_NameName(const struct FName& A, const struct FName& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_NameName");

	UObject_EqualEqual_NameName_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.IsA
//		Flags  -> ()
// Parameters:
//		struct FName                                       ClassName                                                  (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::IsA(const struct FName& ClassName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.IsA");

	UObject_IsA_Params params {};
	params.ClassName = ClassName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.ClassIsChildOf
//		Flags  -> ()
// Parameters:
//		class UClass*                                      TestClass                                                  (Parm)
//		class UClass*                                      ParentClass                                                (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::ClassIsChildOf(class UClass* TestClass, class UClass* ParentClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.ClassIsChildOf");

	UObject_ClassIsChildOf_Params params {};
	params.TestClass = TestClass;
	params.ParentClass = ParentClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.NotEqual_InterfaceInterface
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::NotEqual_InterfaceInterface()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_InterfaceInterface");

	UObject_NotEqual_InterfaceInterface_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.EqualEqual_InterfaceInterface
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::EqualEqual_InterfaceInterface()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_InterfaceInterface");

	UObject_EqualEqual_InterfaceInterface_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.NotEqual_ObjectObject
//		Flags  -> ()
// Parameters:
//		class UObject*                                     A                                                          (Parm)
//		class UObject*                                     B                                                          (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::NotEqual_ObjectObject(class UObject* A, class UObject* B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_ObjectObject");

	UObject_NotEqual_ObjectObject_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.EqualEqual_ObjectObject
//		Flags  -> ()
// Parameters:
//		class UObject*                                     A                                                          (Parm)
//		class UObject*                                     B                                                          (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::EqualEqual_ObjectObject(class UObject* A, class UObject* B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_ObjectObject");

	UObject_EqualEqual_ObjectObject_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.PathName
//		Flags  -> ()
// Parameters:
//		class UObject*                                     CheckObject                                                (Parm)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UObject::PathName(class UObject* CheckObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.PathName");

	UObject_PathName_Params params {};
	params.CheckObject = CheckObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.SplitString
//		Flags  -> ()
// Parameters:
//		struct FString                                     Source                                                     (Parm, NeedCtorLink)
//		struct FString                                     Delimiter                                                  (OptionalParm, Parm, NeedCtorLink)
//		bool                                               bCullEmpty                                                 (OptionalParm, Parm)
//		TArray<struct FString>                             ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
TArray<struct FString> UObject::SplitString(const struct FString& Source, const struct FString& Delimiter, bool bCullEmpty)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.SplitString");

	UObject_SplitString_Params params {};
	params.Source = Source;
	params.Delimiter = Delimiter;
	params.bCullEmpty = bCullEmpty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.ParseStringIntoArray
//		Flags  -> ()
// Parameters:
//		struct FString                                     BaseString                                                 (Parm, NeedCtorLink)
//		TArray<struct FString>                             Pieces                                                     (Parm, OutParm, NeedCtorLink)
//		struct FString                                     delim                                                      (Parm, NeedCtorLink)
//		bool                                               bCullEmpty                                                 (Parm)
void UObject::ParseStringIntoArray(const struct FString& BaseString, TArray<struct FString>* Pieces, const struct FString& delim, bool bCullEmpty)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.ParseStringIntoArray");

	UObject_ParseStringIntoArray_Params params {};
	params.BaseString = BaseString;
	params.delim = delim;
	params.bCullEmpty = bCullEmpty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Pieces != nullptr)
		*Pieces = params.Pieces;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.JoinArray
//		Flags  -> ()
// Parameters:
//		TArray<struct FString>                             StringArray                                                (Parm, NeedCtorLink)
//		struct FString                                     out_Result                                                 (Parm, OutParm, NeedCtorLink)
//		struct FString                                     delim                                                      (OptionalParm, Parm, NeedCtorLink)
//		bool                                               bIgnoreBlanks                                              (OptionalParm, Parm)
void UObject::JoinArray(TArray<struct FString> StringArray, struct FString* out_Result, const struct FString& delim, bool bIgnoreBlanks)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.JoinArray");

	UObject_JoinArray_Params params {};
	params.StringArray = StringArray;
	params.delim = delim;
	params.bIgnoreBlanks = bIgnoreBlanks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (out_Result != nullptr)
		*out_Result = params.out_Result;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GetRightMost
//		Flags  -> ()
// Parameters:
//		struct FString                                     Text                                                       (Parm, CoerceParm, NeedCtorLink)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UObject::GetRightMost(const struct FString& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GetRightMost");

	UObject_GetRightMost_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Split
//		Flags  -> ()
// Parameters:
//		struct FString                                     Text                                                       (Parm, CoerceParm, NeedCtorLink)
//		struct FString                                     SplitStr                                                   (Parm, CoerceParm, NeedCtorLink)
//		bool                                               bOmitSplitStr                                              (OptionalParm, Parm)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UObject::Split(const struct FString& Text, const struct FString& SplitStr, bool bOmitSplitStr)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Split");

	UObject_Split_Params params {};
	params.Text = Text;
	params.SplitStr = SplitStr;
	params.bOmitSplitStr = bOmitSplitStr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Repl
//		Flags  -> ()
// Parameters:
//		struct FString                                     Src                                                        (Parm, CoerceParm, NeedCtorLink)
//		struct FString                                     Match                                                      (Parm, CoerceParm, NeedCtorLink)
//		struct FString                                     With                                                       (Parm, CoerceParm, NeedCtorLink)
//		bool                                               bCaseSensitive                                             (OptionalParm, Parm)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UObject::Repl(const struct FString& Src, const struct FString& Match, const struct FString& With, bool bCaseSensitive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Repl");

	UObject_Repl_Params params {};
	params.Src = Src;
	params.Match = Match;
	params.With = With;
	params.bCaseSensitive = bCaseSensitive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Asc
//		Flags  -> ()
// Parameters:
//		struct FString                                     S                                                          (Parm, NeedCtorLink)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::Asc(const struct FString& S)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Asc");

	UObject_Asc_Params params {};
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Chr
//		Flags  -> ()
// Parameters:
//		int                                                I                                                          (Parm)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UObject::Chr(int I)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Chr");

	UObject_Chr_Params params {};
	params.I = I;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Locs
//		Flags  -> ()
// Parameters:
//		struct FString                                     S                                                          (Parm, CoerceParm, NeedCtorLink)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UObject::Locs(const struct FString& S)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Locs");

	UObject_Locs_Params params {};
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Caps
//		Flags  -> ()
// Parameters:
//		struct FString                                     S                                                          (Parm, CoerceParm, NeedCtorLink)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UObject::Caps(const struct FString& S)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Caps");

	UObject_Caps_Params params {};
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Right
//		Flags  -> ()
// Parameters:
//		struct FString                                     S                                                          (Parm, CoerceParm, NeedCtorLink)
//		int                                                I                                                          (Parm)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UObject::Right(const struct FString& S, int I)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Right");

	UObject_Right_Params params {};
	params.S = S;
	params.I = I;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Left
//		Flags  -> ()
// Parameters:
//		struct FString                                     S                                                          (Parm, CoerceParm, NeedCtorLink)
//		int                                                I                                                          (Parm)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UObject::Left(const struct FString& S, int I)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Left");

	UObject_Left_Params params {};
	params.S = S;
	params.I = I;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Mid
//		Flags  -> ()
// Parameters:
//		struct FString                                     S                                                          (Parm, CoerceParm, NeedCtorLink)
//		int                                                I                                                          (Parm)
//		int                                                J                                                          (OptionalParm, Parm)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UObject::Mid(const struct FString& S, int I, int J)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Mid");

	UObject_Mid_Params params {};
	params.S = S;
	params.I = I;
	params.J = J;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.InStr
//		Flags  -> ()
// Parameters:
//		struct FString                                     S                                                          (Parm, CoerceParm, NeedCtorLink)
//		struct FString                                     T                                                          (Parm, CoerceParm, NeedCtorLink)
//		bool                                               bSearchFromRight                                           (OptionalParm, Parm)
//		bool                                               bIgnoreCase                                                (OptionalParm, Parm)
//		int                                                StartPos                                                   (OptionalParm, Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::InStr(const struct FString& S, const struct FString& T, bool bSearchFromRight, bool bIgnoreCase, int StartPos)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.InStr");

	UObject_InStr_Params params {};
	params.S = S;
	params.T = T;
	params.bSearchFromRight = bSearchFromRight;
	params.bIgnoreCase = bIgnoreCase;
	params.StartPos = StartPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Len
//		Flags  -> ()
// Parameters:
//		struct FString                                     S                                                          (Parm, CoerceParm, NeedCtorLink)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::Len(const struct FString& S)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Len");

	UObject_Len_Params params {};
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.SubtractEqual_StrStr
//		Flags  -> ()
// Parameters:
//		struct FString                                     A                                                          (Parm, OutParm, NeedCtorLink)
//		struct FString                                     B                                                          (Parm, CoerceParm, NeedCtorLink)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UObject::SubtractEqual_StrStr(struct FString* A, const struct FString& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_StrStr");

	UObject_SubtractEqual_StrStr_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.AtEqual_StrStr
//		Flags  -> ()
// Parameters:
//		struct FString                                     A                                                          (Parm, OutParm, NeedCtorLink)
//		struct FString                                     B                                                          (Parm, CoerceParm, NeedCtorLink)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UObject::AtEqual_StrStr(struct FString* A, const struct FString& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.AtEqual_StrStr");

	UObject_AtEqual_StrStr_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.ConcatEqual_StrStr
//		Flags  -> ()
// Parameters:
//		struct FString                                     A                                                          (Parm, OutParm, NeedCtorLink)
//		struct FString                                     B                                                          (Parm, CoerceParm, NeedCtorLink)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UObject::ConcatEqual_StrStr(struct FString* A, const struct FString& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.ConcatEqual_StrStr");

	UObject_ConcatEqual_StrStr_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.ComplementEqual_StrStr
//		Flags  -> ()
// Parameters:
//		struct FString                                     A                                                          (Parm, NeedCtorLink)
//		struct FString                                     B                                                          (Parm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::ComplementEqual_StrStr(const struct FString& A, const struct FString& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.ComplementEqual_StrStr");

	UObject_ComplementEqual_StrStr_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.NotEqual_StrStr
//		Flags  -> ()
// Parameters:
//		struct FString                                     A                                                          (Parm, NeedCtorLink)
//		struct FString                                     B                                                          (Parm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::NotEqual_StrStr(const struct FString& A, const struct FString& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_StrStr");

	UObject_NotEqual_StrStr_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.EqualEqual_StrStr
//		Flags  -> ()
// Parameters:
//		struct FString                                     A                                                          (Parm, NeedCtorLink)
//		struct FString                                     B                                                          (Parm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::EqualEqual_StrStr(const struct FString& A, const struct FString& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_StrStr");

	UObject_EqualEqual_StrStr_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GreaterEqual_StrStr
//		Flags  -> ()
// Parameters:
//		struct FString                                     A                                                          (Parm, NeedCtorLink)
//		struct FString                                     B                                                          (Parm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::GreaterEqual_StrStr(const struct FString& A, const struct FString& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterEqual_StrStr");

	UObject_GreaterEqual_StrStr_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.LessEqual_StrStr
//		Flags  -> ()
// Parameters:
//		struct FString                                     A                                                          (Parm, NeedCtorLink)
//		struct FString                                     B                                                          (Parm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::LessEqual_StrStr(const struct FString& A, const struct FString& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.LessEqual_StrStr");

	UObject_LessEqual_StrStr_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Greater_StrStr
//		Flags  -> ()
// Parameters:
//		struct FString                                     A                                                          (Parm, NeedCtorLink)
//		struct FString                                     B                                                          (Parm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::Greater_StrStr(const struct FString& A, const struct FString& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Greater_StrStr");

	UObject_Greater_StrStr_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Less_StrStr
//		Flags  -> ()
// Parameters:
//		struct FString                                     A                                                          (Parm, NeedCtorLink)
//		struct FString                                     B                                                          (Parm, NeedCtorLink)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::Less_StrStr(const struct FString& A, const struct FString& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Less_StrStr");

	UObject_Less_StrStr_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.At_StrStr
//		Flags  -> ()
// Parameters:
//		struct FString                                     A                                                          (Parm, CoerceParm, NeedCtorLink)
//		struct FString                                     B                                                          (Parm, CoerceParm, NeedCtorLink)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UObject::At_StrStr(const struct FString& A, const struct FString& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.At_StrStr");

	UObject_At_StrStr_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Concat_StrStr
//		Flags  -> ()
// Parameters:
//		struct FString                                     A                                                          (Parm, CoerceParm, NeedCtorLink)
//		struct FString                                     B                                                          (Parm, CoerceParm, NeedCtorLink)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UObject::Concat_StrStr(const struct FString& A, const struct FString& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Concat_StrStr");

	UObject_Concat_StrStr_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.MakeRotator
//		Flags  -> (Singular, NetReliable, Exec, Event, Static, HasOptionalParms, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, K2Override, K2Pure)
// Parameters:
//		int                                                Pitch                                                      (Parm)
//		int                                                Yaw                                                        (Parm)
//		int                                                Roll                                                       (Parm)
//		struct FRotator                                    ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FRotator UObject::STATIC_MakeRotator(int Pitch, int Yaw, int Roll)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.MakeRotator");

	UObject_MakeRotator_Params params {};
	params.Pitch = Pitch;
	params.Yaw = Yaw;
	params.Roll = Roll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.SClampRotAxis
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (Parm)
//		int                                                ViewAxis                                                   (Parm)
//		int                                                out_DeltaViewAxis                                          (Parm, OutParm)
//		int                                                MaxLimit                                                   (Parm)
//		int                                                MinLimit                                                   (Parm)
//		float                                              InterpolationSpeed                                         (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::SClampRotAxis(float DeltaTime, int ViewAxis, int* out_DeltaViewAxis, int MaxLimit, int MinLimit, float InterpolationSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.SClampRotAxis");

	UObject_SClampRotAxis_Params params {};
	params.DeltaTime = DeltaTime;
	params.ViewAxis = ViewAxis;
	params.MaxLimit = MaxLimit;
	params.MinLimit = MinLimit;
	params.InterpolationSpeed = InterpolationSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (out_DeltaViewAxis != nullptr)
		*out_DeltaViewAxis = params.out_DeltaViewAxis;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.ClampRotAxisFromRange
//		Flags  -> ()
// Parameters:
//		int                                                Current                                                    (Parm)
//		int                                                Min                                                        (Parm)
//		int                                                Max                                                        (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::ClampRotAxisFromRange(int Current, int Min, int Max)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.ClampRotAxisFromRange");

	UObject_ClampRotAxisFromRange_Params params {};
	params.Current = Current;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.ClampRotAxisFromBase
//		Flags  -> ()
// Parameters:
//		int                                                Current                                                    (Parm)
//		int                                                Center                                                     (Parm)
//		int                                                MaxDelta                                                   (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::ClampRotAxisFromBase(int Current, int Center, int MaxDelta)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.ClampRotAxisFromBase");

	UObject_ClampRotAxisFromBase_Params params {};
	params.Current = Current;
	params.Center = Center;
	params.MaxDelta = MaxDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.ClampRotAxis
//		Flags  -> ()
// Parameters:
//		int                                                ViewAxis                                                   (Parm)
//		int                                                out_DeltaViewAxis                                          (Parm, OutParm)
//		int                                                MaxLimit                                                   (Parm)
//		int                                                MinLimit                                                   (Parm)
void UObject::ClampRotAxis(int ViewAxis, int* out_DeltaViewAxis, int MaxLimit, int MinLimit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.ClampRotAxis");

	UObject_ClampRotAxis_Params params {};
	params.ViewAxis = ViewAxis;
	params.MaxLimit = MaxLimit;
	params.MinLimit = MinLimit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (out_DeltaViewAxis != nullptr)
		*out_DeltaViewAxis = params.out_DeltaViewAxis;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.RSize
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    R                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::RSize(const struct FRotator& R)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.RSize");

	UObject_RSize_Params params {};
	params.R = R;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.RDiff
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    A                                                          (Parm)
//		struct FRotator                                    B                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::RDiff(const struct FRotator& A, const struct FRotator& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.RDiff");

	UObject_RDiff_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.NormalizeRotAxis
//		Flags  -> ()
// Parameters:
//		int                                                Angle                                                      (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::NormalizeRotAxis(int Angle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.NormalizeRotAxis");

	UObject_NormalizeRotAxis_Params params {};
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.RInterpTo
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    Current                                                    (Parm)
//		struct FRotator                                    Target                                                     (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		float                                              InterpSpeed                                                (Parm)
//		bool                                               bConstantInterpSpeed                                       (OptionalParm, Parm)
//		struct FRotator                                    ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FRotator UObject::RInterpTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed, bool bConstantInterpSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.RInterpTo");

	UObject_RInterpTo_Params params {};
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;
	params.bConstantInterpSpeed = bConstantInterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.RTransform
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    R                                                          (Parm)
//		struct FRotator                                    RBasis                                                     (Parm)
//		struct FRotator                                    ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FRotator UObject::RTransform(const struct FRotator& R, const struct FRotator& RBasis)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.RTransform");

	UObject_RTransform_Params params {};
	params.R = R;
	params.RBasis = RBasis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.RLerp
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    A                                                          (Parm)
//		struct FRotator                                    B                                                          (Parm)
//		float                                              Alpha                                                      (Parm)
//		bool                                               bShortestPath                                              (OptionalParm, Parm)
//		struct FRotator                                    ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FRotator UObject::RLerp(const struct FRotator& A, const struct FRotator& B, float Alpha, bool bShortestPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.RLerp");

	UObject_RLerp_Params params {};
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.bShortestPath = bShortestPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Normalize
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    Rot                                                        (Parm)
//		struct FRotator                                    ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FRotator UObject::Normalize(const struct FRotator& Rot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Normalize");

	UObject_Normalize_Params params {};
	params.Rot = Rot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.OrthoRotation
//		Flags  -> ()
// Parameters:
//		struct FVector                                     X                                                          (Parm)
//		struct FVector                                     Y                                                          (Parm)
//		struct FVector                                     Z                                                          (Parm)
//		struct FRotator                                    ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FRotator UObject::OrthoRotation(const struct FVector& X, const struct FVector& Y, const struct FVector& Z)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.OrthoRotation");

	UObject_OrthoRotation_Params params {};
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.RotRand
//		Flags  -> ()
// Parameters:
//		bool                                               bRoll                                                      (OptionalParm, Parm)
//		struct FRotator                                    ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FRotator UObject::RotRand(bool bRoll)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.RotRand");

	UObject_RotRand_Params params {};
	params.bRoll = bRoll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GetRotatorAxis
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    A                                                          (Parm)
//		int                                                Axis                                                       (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::GetRotatorAxis(const struct FRotator& A, int Axis)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GetRotatorAxis");

	UObject_GetRotatorAxis_Params params {};
	params.A = A;
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GetUnAxes
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    A                                                          (Parm)
//		struct FVector                                     X                                                          (Parm, OutParm)
//		struct FVector                                     Y                                                          (Parm, OutParm)
//		struct FVector                                     Z                                                          (Parm, OutParm)
void UObject::GetUnAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GetUnAxes");

	UObject_GetUnAxes_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
	if (Z != nullptr)
		*Z = params.Z;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GetAxes
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    A                                                          (Parm)
//		struct FVector                                     X                                                          (Parm, OutParm)
//		struct FVector                                     Y                                                          (Parm, OutParm)
//		struct FVector                                     Z                                                          (Parm, OutParm)
void UObject::GetAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GetAxes");

	UObject_GetAxes_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
	if (Z != nullptr)
		*Z = params.Z;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.ClockwiseFrom_IntInt
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm)
//		int                                                B                                                          (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::ClockwiseFrom_IntInt(int A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.ClockwiseFrom_IntInt");

	UObject_ClockwiseFrom_IntInt_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.SubtractEqual_RotatorRotator
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    A                                                          (Parm, OutParm)
//		struct FRotator                                    B                                                          (Parm)
//		struct FRotator                                    ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FRotator UObject::SubtractEqual_RotatorRotator(struct FRotator* A, const struct FRotator& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_RotatorRotator");

	UObject_SubtractEqual_RotatorRotator_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.AddEqual_RotatorRotator
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    A                                                          (Parm, OutParm)
//		struct FRotator                                    B                                                          (Parm)
//		struct FRotator                                    ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FRotator UObject::AddEqual_RotatorRotator(struct FRotator* A, const struct FRotator& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_RotatorRotator");

	UObject_AddEqual_RotatorRotator_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Subtract_RotatorRotator
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    A                                                          (Parm)
//		struct FRotator                                    B                                                          (Parm)
//		struct FRotator                                    ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FRotator UObject::Subtract_RotatorRotator(const struct FRotator& A, const struct FRotator& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_RotatorRotator");

	UObject_Subtract_RotatorRotator_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Add_RotatorRotator
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    A                                                          (Parm)
//		struct FRotator                                    B                                                          (Parm)
//		struct FRotator                                    ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FRotator UObject::Add_RotatorRotator(const struct FRotator& A, const struct FRotator& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Add_RotatorRotator");

	UObject_Add_RotatorRotator_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.DivideEqual_RotatorFloat
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    A                                                          (Parm, OutParm)
//		float                                              B                                                          (Parm)
//		struct FRotator                                    ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FRotator UObject::DivideEqual_RotatorFloat(struct FRotator* A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_RotatorFloat");

	UObject_DivideEqual_RotatorFloat_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.MultiplyEqual_RotatorFloat
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    A                                                          (Parm, OutParm)
//		float                                              B                                                          (Parm)
//		struct FRotator                                    ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FRotator UObject::MultiplyEqual_RotatorFloat(struct FRotator* A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_RotatorFloat");

	UObject_MultiplyEqual_RotatorFloat_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Divide_RotatorFloat
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    A                                                          (Parm)
//		float                                              B                                                          (Parm)
//		struct FRotator                                    ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FRotator UObject::Divide_RotatorFloat(const struct FRotator& A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Divide_RotatorFloat");

	UObject_Divide_RotatorFloat_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Multiply_FloatRotator
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		struct FRotator                                    B                                                          (Parm)
//		struct FRotator                                    ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FRotator UObject::Multiply_FloatRotator(float A, const struct FRotator& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_FloatRotator");

	UObject_Multiply_FloatRotator_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Multiply_RotatorFloat
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    A                                                          (Parm)
//		float                                              B                                                          (Parm)
//		struct FRotator                                    ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FRotator UObject::Multiply_RotatorFloat(const struct FRotator& A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_RotatorFloat");

	UObject_Multiply_RotatorFloat_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.NotEqual_RotatorRotator
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    A                                                          (Parm)
//		struct FRotator                                    B                                                          (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::NotEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_RotatorRotator");

	UObject_NotEqual_RotatorRotator_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.EqualEqual_RotatorRotator
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    A                                                          (Parm)
//		struct FRotator                                    B                                                          (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::EqualEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_RotatorRotator");

	UObject_EqualEqual_RotatorRotator_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.InCylinder
//		Flags  -> (Singular, Native, Operator, HasOptionalParms, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, K2Override, K2Pure)
// Parameters:
//		struct FVector                                     Origin                                                     (Parm)
//		struct FRotator                                    Dir                                                        (Parm)
//		float                                              Width                                                      (Parm)
//		struct FVector                                     A                                                          (Parm)
//		bool                                               bIgnoreZ                                                   (OptionalParm, Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::InCylinder(const struct FVector& Origin, const struct FRotator& Dir, float Width, const struct FVector& A, bool bIgnoreZ)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.InCylinder");

	UObject_InCylinder_Params params {};
	params.Origin = Origin;
	params.Dir = Dir;
	params.Width = Width;
	params.A = A;
	params.bIgnoreZ = bIgnoreZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.NoZDot
//		Flags  -> ()
// Parameters:
//		struct FVector                                     A                                                          (Parm)
//		struct FVector                                     B                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::NoZDot(const struct FVector& A, const struct FVector& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.NoZDot");

	UObject_NoZDot_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.ClampLength
//		Flags  -> ()
// Parameters:
//		struct FVector                                     V                                                          (Parm)
//		float                                              MaxLength                                                  (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::ClampLength(const struct FVector& V, float MaxLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.ClampLength");

	UObject_ClampLength_Params params {};
	params.V = V;
	params.MaxLength = MaxLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.VInterpTo
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Current                                                    (Parm)
//		struct FVector                                     Target                                                     (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		float                                              InterpSpeed                                                (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::VInterpTo(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.VInterpTo");

	UObject_VInterpTo_Params params {};
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.IsZero
//		Flags  -> ()
// Parameters:
//		struct FVector                                     A                                                          (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::IsZero(const struct FVector& A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.IsZero");

	UObject_IsZero_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.ProjectOnTo
//		Flags  -> ()
// Parameters:
//		struct FVector                                     X                                                          (Parm)
//		struct FVector                                     Y                                                          (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::ProjectOnTo(const struct FVector& X, const struct FVector& Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.ProjectOnTo");

	UObject_ProjectOnTo_Params params {};
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.MirrorVectorByNormal
//		Flags  -> ()
// Parameters:
//		struct FVector                                     InVect                                                     (Parm)
//		struct FVector                                     InNormal                                                   (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::MirrorVectorByNormal(const struct FVector& InVect, const struct FVector& InNormal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.MirrorVectorByNormal");

	UObject_MirrorVectorByNormal_Params params {};
	params.InVect = InVect;
	params.InNormal = InNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.VRandCone2
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Dir                                                        (Parm)
//		float                                              HorizontalConeHalfAngleRadians                             (Parm)
//		float                                              VerticalConeHalfAngleRadians                               (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::VRandCone2(const struct FVector& Dir, float HorizontalConeHalfAngleRadians, float VerticalConeHalfAngleRadians)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.VRandCone2");

	UObject_VRandCone2_Params params {};
	params.Dir = Dir;
	params.HorizontalConeHalfAngleRadians = HorizontalConeHalfAngleRadians;
	params.VerticalConeHalfAngleRadians = VerticalConeHalfAngleRadians;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.VRandCone
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Dir                                                        (Parm)
//		float                                              ConeHalfAngleRadians                                       (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::VRandCone(const struct FVector& Dir, float ConeHalfAngleRadians)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.VRandCone");

	UObject_VRandCone_Params params {};
	params.Dir = Dir;
	params.ConeHalfAngleRadians = ConeHalfAngleRadians;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.VRand
//		Flags  -> ()
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::VRand()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.VRand");

	UObject_VRand_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.VLerp
//		Flags  -> ()
// Parameters:
//		struct FVector                                     A                                                          (Parm)
//		struct FVector                                     B                                                          (Parm)
//		float                                              Alpha                                                      (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::VLerp(const struct FVector& A, const struct FVector& B, float Alpha)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.VLerp");

	UObject_VLerp_Params params {};
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Normal2D
//		Flags  -> ()
// Parameters:
//		struct FVector                                     A                                                          (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::Normal2D(const struct FVector& A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Normal2D");

	UObject_Normal2D_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Normal
//		Flags  -> ()
// Parameters:
//		struct FVector                                     A                                                          (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::Normal(const struct FVector& A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Normal");

	UObject_Normal_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.VSizeSq2D
//		Flags  -> ()
// Parameters:
//		struct FVector                                     A                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::VSizeSq2D(const struct FVector& A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.VSizeSq2D");

	UObject_VSizeSq2D_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.VSizeSq
//		Flags  -> ()
// Parameters:
//		struct FVector                                     A                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::VSizeSq(const struct FVector& A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.VSizeSq");

	UObject_VSizeSq_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.VSize2D
//		Flags  -> ()
// Parameters:
//		struct FVector                                     A                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::VSize2D(const struct FVector& A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.VSize2D");

	UObject_VSize2D_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.VSize
//		Flags  -> ()
// Parameters:
//		struct FVector                                     A                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::VSize(const struct FVector& A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.VSize");

	UObject_VSize_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.SubtractEqual_VectorVector
//		Flags  -> ()
// Parameters:
//		struct FVector                                     A                                                          (Parm, OutParm)
//		struct FVector                                     B                                                          (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::SubtractEqual_VectorVector(struct FVector* A, const struct FVector& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_VectorVector");

	UObject_SubtractEqual_VectorVector_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.AddEqual_VectorVector
//		Flags  -> ()
// Parameters:
//		struct FVector                                     A                                                          (Parm, OutParm)
//		struct FVector                                     B                                                          (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::AddEqual_VectorVector(struct FVector* A, const struct FVector& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_VectorVector");

	UObject_AddEqual_VectorVector_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.DivideEqual_VectorFloat
//		Flags  -> ()
// Parameters:
//		struct FVector                                     A                                                          (Parm, OutParm)
//		float                                              B                                                          (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::DivideEqual_VectorFloat(struct FVector* A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_VectorFloat");

	UObject_DivideEqual_VectorFloat_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.MultiplyEqual_VectorVector
//		Flags  -> ()
// Parameters:
//		struct FVector                                     A                                                          (Parm, OutParm)
//		struct FVector                                     B                                                          (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::MultiplyEqual_VectorVector(struct FVector* A, const struct FVector& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_VectorVector");

	UObject_MultiplyEqual_VectorVector_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.MultiplyEqual_VectorFloat
//		Flags  -> ()
// Parameters:
//		struct FVector                                     A                                                          (Parm, OutParm)
//		float                                              B                                                          (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::MultiplyEqual_VectorFloat(struct FVector* A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_VectorFloat");

	UObject_MultiplyEqual_VectorFloat_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Cross_VectorVector
//		Flags  -> ()
// Parameters:
//		struct FVector                                     A                                                          (Parm)
//		struct FVector                                     B                                                          (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::Cross_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Cross_VectorVector");

	UObject_Cross_VectorVector_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Dot_VectorVector
//		Flags  -> ()
// Parameters:
//		struct FVector                                     A                                                          (Parm)
//		struct FVector                                     B                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::Dot_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Dot_VectorVector");

	UObject_Dot_VectorVector_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.NotEqual_VectorVector
//		Flags  -> ()
// Parameters:
//		struct FVector                                     A                                                          (Parm)
//		struct FVector                                     B                                                          (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::NotEqual_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_VectorVector");

	UObject_NotEqual_VectorVector_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.EqualEqual_VectorVector
//		Flags  -> ()
// Parameters:
//		struct FVector                                     A                                                          (Parm)
//		struct FVector                                     B                                                          (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::EqualEqual_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_VectorVector");

	UObject_EqualEqual_VectorVector_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GreaterGreater_VectorRotator
//		Flags  -> ()
// Parameters:
//		struct FVector                                     A                                                          (Parm)
//		struct FRotator                                    B                                                          (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::GreaterGreater_VectorRotator(const struct FVector& A, const struct FRotator& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterGreater_VectorRotator");

	UObject_GreaterGreater_VectorRotator_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.LessLess_VectorRotator
//		Flags  -> ()
// Parameters:
//		struct FVector                                     A                                                          (Parm)
//		struct FRotator                                    B                                                          (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::LessLess_VectorRotator(const struct FVector& A, const struct FRotator& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.LessLess_VectorRotator");

	UObject_LessLess_VectorRotator_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Subtract_VectorVector
//		Flags  -> ()
// Parameters:
//		struct FVector                                     A                                                          (Parm)
//		struct FVector                                     B                                                          (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::Subtract_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_VectorVector");

	UObject_Subtract_VectorVector_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Add_VectorVector
//		Flags  -> ()
// Parameters:
//		struct FVector                                     A                                                          (Parm)
//		struct FVector                                     B                                                          (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::Add_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Add_VectorVector");

	UObject_Add_VectorVector_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Divide_VectorFloat
//		Flags  -> ()
// Parameters:
//		struct FVector                                     A                                                          (Parm)
//		float                                              B                                                          (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::Divide_VectorFloat(const struct FVector& A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Divide_VectorFloat");

	UObject_Divide_VectorFloat_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Multiply_VectorVector
//		Flags  -> ()
// Parameters:
//		struct FVector                                     A                                                          (Parm)
//		struct FVector                                     B                                                          (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::Multiply_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_VectorVector");

	UObject_Multiply_VectorVector_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Multiply_FloatVector
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		struct FVector                                     B                                                          (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::Multiply_FloatVector(float A, const struct FVector& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_FloatVector");

	UObject_Multiply_FloatVector_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Multiply_VectorFloat
//		Flags  -> ()
// Parameters:
//		struct FVector                                     A                                                          (Parm)
//		float                                              B                                                          (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::Multiply_VectorFloat(const struct FVector& A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_VectorFloat");

	UObject_Multiply_VectorFloat_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Subtract_PreVector
//		Flags  -> ()
// Parameters:
//		struct FVector                                     A                                                          (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UObject::Subtract_PreVector(const struct FVector& A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_PreVector");

	UObject_Subtract_PreVector_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.FInterpConstantTo
//		Flags  -> ()
// Parameters:
//		float                                              Current                                                    (Parm)
//		float                                              Target                                                     (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		float                                              InterpSpeed                                                (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::FInterpConstantTo(float Current, float Target, float DeltaTime, float InterpSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.FInterpConstantTo");

	UObject_FInterpConstantTo_Params params {};
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.FInterpTo
//		Flags  -> ()
// Parameters:
//		float                                              Current                                                    (Parm)
//		float                                              Target                                                     (Parm)
//		float                                              DeltaTime                                                  (Parm)
//		float                                              InterpSpeed                                                (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.FInterpTo");

	UObject_FInterpTo_Params params {};
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.FPctByRange
//		Flags  -> ()
// Parameters:
//		float                                              Value                                                      (Parm)
//		float                                              InMin                                                      (Parm)
//		float                                              InMax                                                      (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::FPctByRange(float Value, float InMin, float InMax)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.FPctByRange");

	UObject_FPctByRange_Params params {};
	params.Value = Value;
	params.InMin = InMin;
	params.InMax = InMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.RandRange
//		Flags  -> ()
// Parameters:
//		float                                              InMin                                                      (Parm)
//		float                                              InMax                                                      (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::RandRange(float InMin, float InMax)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.RandRange");

	UObject_RandRange_Params params {};
	params.InMin = InMin;
	params.InMax = InMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.FInterpEaseInOut
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              B                                                          (Parm)
//		float                                              Alpha                                                      (Parm)
//		float                                              Exp                                                        (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::FInterpEaseInOut(float A, float B, float Alpha, float Exp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.FInterpEaseInOut");

	UObject_FInterpEaseInOut_Params params {};
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.Exp = Exp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.FInterpEaseOut
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              B                                                          (Parm)
//		float                                              Alpha                                                      (Parm)
//		float                                              Exp                                                        (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::FInterpEaseOut(float A, float B, float Alpha, float Exp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.FInterpEaseOut");

	UObject_FInterpEaseOut_Params params {};
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.Exp = Exp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.FInterpEaseIn
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              B                                                          (Parm)
//		float                                              Alpha                                                      (Parm)
//		float                                              Exp                                                        (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::FInterpEaseIn(float A, float B, float Alpha, float Exp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.FInterpEaseIn");

	UObject_FInterpEaseIn_Params params {};
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.Exp = Exp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.FCubicInterp
//		Flags  -> ()
// Parameters:
//		float                                              P0                                                         (Parm)
//		float                                              T0                                                         (Parm)
//		float                                              P1                                                         (Parm)
//		float                                              T1                                                         (Parm)
//		float                                              A                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::FCubicInterp(float P0, float T0, float P1, float T1, float A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.FCubicInterp");

	UObject_FCubicInterp_Params params {};
	params.P0 = P0;
	params.T0 = T0;
	params.P1 = P1;
	params.T1 = T1;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.FCeil
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::FCeil(float A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.FCeil");

	UObject_FCeil_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.FFloor
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::FFloor(float A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.FFloor");

	UObject_FFloor_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Round
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::Round(float A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Round");

	UObject_Round_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Lerp
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              B                                                          (Parm)
//		float                                              Alpha                                                      (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::Lerp(float A, float B, float Alpha)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Lerp");

	UObject_Lerp_Params params {};
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.FClamp
//		Flags  -> ()
// Parameters:
//		float                                              V                                                          (Parm)
//		float                                              A                                                          (Parm)
//		float                                              B                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::FClamp(float V, float A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.FClamp");

	UObject_FClamp_Params params {};
	params.V = V;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.FMax
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              B                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::FMax(float A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.FMax");

	UObject_FMax_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.FMin
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              B                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::FMin(float A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.FMin");

	UObject_FMin_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.FRand
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::FRand()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.FRand");

	UObject_FRand_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Square
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::Square(float A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Square");

	UObject_Square_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Sqrt
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::Sqrt(float A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Sqrt");

	UObject_Sqrt_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Loge
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::Loge(float A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Loge");

	UObject_Loge_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Exp
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::Exp(float A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Exp");

	UObject_Exp_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Atan2
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              B                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::Atan2(float A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Atan2");

	UObject_Atan2_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Atan
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::Atan(float A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Atan");

	UObject_Atan_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Tan
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::Tan(float A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Tan");

	UObject_Tan_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Acos
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::Acos(float A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Acos");

	UObject_Acos_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Cos
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::Cos(float A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Cos");

	UObject_Cos_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Asin
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::Asin(float A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Asin");

	UObject_Asin_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Sin
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::Sin(float A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Sin");

	UObject_Sin_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Abs
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::Abs(float A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Abs");

	UObject_Abs_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.SubtractEqual_FloatFloat
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm, OutParm)
//		float                                              B                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::SubtractEqual_FloatFloat(float* A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_FloatFloat");

	UObject_SubtractEqual_FloatFloat_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.AddEqual_FloatFloat
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm, OutParm)
//		float                                              B                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::AddEqual_FloatFloat(float* A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_FloatFloat");

	UObject_AddEqual_FloatFloat_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.DivideEqual_FloatFloat
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm, OutParm)
//		float                                              B                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::DivideEqual_FloatFloat(float* A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_FloatFloat");

	UObject_DivideEqual_FloatFloat_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.MultiplyEqual_FloatFloat
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm, OutParm)
//		float                                              B                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::MultiplyEqual_FloatFloat(float* A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_FloatFloat");

	UObject_MultiplyEqual_FloatFloat_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.NotEqual_FloatFloat
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              B                                                          (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::NotEqual_FloatFloat(float A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_FloatFloat");

	UObject_NotEqual_FloatFloat_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.ComplementEqual_FloatFloat
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              B                                                          (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::ComplementEqual_FloatFloat(float A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.ComplementEqual_FloatFloat");

	UObject_ComplementEqual_FloatFloat_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.EqualEqual_FloatFloat
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              B                                                          (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::EqualEqual_FloatFloat(float A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_FloatFloat");

	UObject_EqualEqual_FloatFloat_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GreaterEqual_FloatFloat
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              B                                                          (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::GreaterEqual_FloatFloat(float A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterEqual_FloatFloat");

	UObject_GreaterEqual_FloatFloat_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.LessEqual_FloatFloat
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              B                                                          (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::LessEqual_FloatFloat(float A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.LessEqual_FloatFloat");

	UObject_LessEqual_FloatFloat_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Greater_FloatFloat
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              B                                                          (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::Greater_FloatFloat(float A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Greater_FloatFloat");

	UObject_Greater_FloatFloat_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Less_FloatFloat
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              B                                                          (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::Less_FloatFloat(float A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Less_FloatFloat");

	UObject_Less_FloatFloat_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Subtract_FloatFloat
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              B                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::Subtract_FloatFloat(float A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_FloatFloat");

	UObject_Subtract_FloatFloat_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Add_FloatFloat
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              B                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::Add_FloatFloat(float A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Add_FloatFloat");

	UObject_Add_FloatFloat_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Percent_FloatFloat
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              B                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::Percent_FloatFloat(float A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Percent_FloatFloat");

	UObject_Percent_FloatFloat_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Divide_FloatFloat
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              B                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::Divide_FloatFloat(float A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Divide_FloatFloat");

	UObject_Divide_FloatFloat_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Multiply_FloatFloat
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              B                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::Multiply_FloatFloat(float A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_FloatFloat");

	UObject_Multiply_FloatFloat_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.MultiplyMultiply_FloatFloat
//		Flags  -> ()
// Parameters:
//		float                                              Base                                                       (Parm)
//		float                                              Exp                                                        (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::MultiplyMultiply_FloatFloat(float Base, float Exp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyMultiply_FloatFloat");

	UObject_MultiplyMultiply_FloatFloat_Params params {};
	params.Base = Base;
	params.Exp = Exp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Subtract_PreFloat
//		Flags  -> ()
// Parameters:
//		float                                              A                                                          (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UObject::Subtract_PreFloat(float A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_PreFloat");

	UObject_Subtract_PreFloat_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.ToHex
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NeedCtorLink)
struct FString UObject::ToHex(int A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.ToHex");

	UObject_ToHex_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Clamp
//		Flags  -> ()
// Parameters:
//		int                                                V                                                          (Parm)
//		int                                                A                                                          (Parm)
//		int                                                B                                                          (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::Clamp(int V, int A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Clamp");

	UObject_Clamp_Params params {};
	params.V = V;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Max
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm)
//		int                                                B                                                          (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::Max(int A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Max");

	UObject_Max_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Min
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm)
//		int                                                B                                                          (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::Min(int A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Min");

	UObject_Min_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Rand
//		Flags  -> ()
// Parameters:
//		int                                                Max                                                        (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::Rand(int Max)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Rand");

	UObject_Rand_Params params {};
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.SubtractSubtract_Int
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm, OutParm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::SubtractSubtract_Int(int* A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractSubtract_Int");

	UObject_SubtractSubtract_Int_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.AddAdd_Int
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm, OutParm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::AddAdd_Int(int* A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.AddAdd_Int");

	UObject_AddAdd_Int_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.SubtractSubtract_PreInt
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm, OutParm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::SubtractSubtract_PreInt(int* A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractSubtract_PreInt");

	UObject_SubtractSubtract_PreInt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.AddAdd_PreInt
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm, OutParm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::AddAdd_PreInt(int* A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.AddAdd_PreInt");

	UObject_AddAdd_PreInt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.SubtractEqual_IntInt
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm, OutParm)
//		int                                                B                                                          (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::SubtractEqual_IntInt(int* A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_IntInt");

	UObject_SubtractEqual_IntInt_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.AddEqual_IntInt
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm, OutParm)
//		int                                                B                                                          (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::AddEqual_IntInt(int* A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_IntInt");

	UObject_AddEqual_IntInt_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.DivideEqual_IntFloat
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm, OutParm)
//		float                                              B                                                          (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::DivideEqual_IntFloat(int* A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_IntFloat");

	UObject_DivideEqual_IntFloat_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.MultiplyEqual_IntFloat
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm, OutParm)
//		float                                              B                                                          (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::MultiplyEqual_IntFloat(int* A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_IntFloat");

	UObject_MultiplyEqual_IntFloat_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Or_IntInt
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm)
//		int                                                B                                                          (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::Or_IntInt(int A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Or_IntInt");

	UObject_Or_IntInt_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Xor_IntInt
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm)
//		int                                                B                                                          (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::Xor_IntInt(int A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Xor_IntInt");

	UObject_Xor_IntInt_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.And_IntInt
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm)
//		int                                                B                                                          (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::And_IntInt(int A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.And_IntInt");

	UObject_And_IntInt_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.NotEqual_IntInt
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm)
//		int                                                B                                                          (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::NotEqual_IntInt(int A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_IntInt");

	UObject_NotEqual_IntInt_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.EqualEqual_IntInt
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm)
//		int                                                B                                                          (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::EqualEqual_IntInt(int A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_IntInt");

	UObject_EqualEqual_IntInt_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GreaterEqual_IntInt
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm)
//		int                                                B                                                          (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::GreaterEqual_IntInt(int A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterEqual_IntInt");

	UObject_GreaterEqual_IntInt_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.LessEqual_IntInt
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm)
//		int                                                B                                                          (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::LessEqual_IntInt(int A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.LessEqual_IntInt");

	UObject_LessEqual_IntInt_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Greater_IntInt
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm)
//		int                                                B                                                          (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::Greater_IntInt(int A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Greater_IntInt");

	UObject_Greater_IntInt_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Less_IntInt
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm)
//		int                                                B                                                          (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::Less_IntInt(int A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Less_IntInt");

	UObject_Less_IntInt_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GreaterGreaterGreater_IntInt
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm)
//		int                                                B                                                          (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::GreaterGreaterGreater_IntInt(int A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterGreaterGreater_IntInt");

	UObject_GreaterGreaterGreater_IntInt_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.GreaterGreater_IntInt
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm)
//		int                                                B                                                          (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::GreaterGreater_IntInt(int A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterGreater_IntInt");

	UObject_GreaterGreater_IntInt_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.LessLess_IntInt
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm)
//		int                                                B                                                          (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::LessLess_IntInt(int A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.LessLess_IntInt");

	UObject_LessLess_IntInt_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Subtract_IntInt
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm)
//		int                                                B                                                          (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::Subtract_IntInt(int A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_IntInt");

	UObject_Subtract_IntInt_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Add_IntInt
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm)
//		int                                                B                                                          (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::Add_IntInt(int A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Add_IntInt");

	UObject_Add_IntInt_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Percent_IntInt
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm)
//		int                                                B                                                          (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::Percent_IntInt(int A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Percent_IntInt");

	UObject_Percent_IntInt_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Divide_IntInt
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm)
//		int                                                B                                                          (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::Divide_IntInt(int A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Divide_IntInt");

	UObject_Divide_IntInt_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Multiply_IntInt
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm)
//		int                                                B                                                          (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::Multiply_IntInt(int A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_IntInt");

	UObject_Multiply_IntInt_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Subtract_PreInt
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::Subtract_PreInt(int A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_PreInt");

	UObject_Subtract_PreInt_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Complement_PreInt
//		Flags  -> ()
// Parameters:
//		int                                                A                                                          (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UObject::Complement_PreInt(int A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Complement_PreInt");

	UObject_Complement_PreInt_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.SubtractSubtract_Byte
//		Flags  -> ()
// Parameters:
//		unsigned char                                      A                                                          (Parm, OutParm)
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ReturnParm)
unsigned char UObject::SubtractSubtract_Byte(unsigned char* A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractSubtract_Byte");

	UObject_SubtractSubtract_Byte_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.AddAdd_Byte
//		Flags  -> ()
// Parameters:
//		unsigned char                                      A                                                          (Parm, OutParm)
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ReturnParm)
unsigned char UObject::AddAdd_Byte(unsigned char* A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.AddAdd_Byte");

	UObject_AddAdd_Byte_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.SubtractSubtract_PreByte
//		Flags  -> ()
// Parameters:
//		unsigned char                                      A                                                          (Parm, OutParm)
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ReturnParm)
unsigned char UObject::SubtractSubtract_PreByte(unsigned char* A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractSubtract_PreByte");

	UObject_SubtractSubtract_PreByte_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.AddAdd_PreByte
//		Flags  -> ()
// Parameters:
//		unsigned char                                      A                                                          (Parm, OutParm)
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ReturnParm)
unsigned char UObject::AddAdd_PreByte(unsigned char* A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.AddAdd_PreByte");

	UObject_AddAdd_PreByte_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.SubtractEqual_ByteByte
//		Flags  -> ()
// Parameters:
//		unsigned char                                      A                                                          (Parm, OutParm)
//		unsigned char                                      B                                                          (Parm)
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ReturnParm)
unsigned char UObject::SubtractEqual_ByteByte(unsigned char* A, unsigned char B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_ByteByte");

	UObject_SubtractEqual_ByteByte_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.AddEqual_ByteByte
//		Flags  -> ()
// Parameters:
//		unsigned char                                      A                                                          (Parm, OutParm)
//		unsigned char                                      B                                                          (Parm)
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ReturnParm)
unsigned char UObject::AddEqual_ByteByte(unsigned char* A, unsigned char B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_ByteByte");

	UObject_AddEqual_ByteByte_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.DivideEqual_ByteByte
//		Flags  -> ()
// Parameters:
//		unsigned char                                      A                                                          (Parm, OutParm)
//		unsigned char                                      B                                                          (Parm)
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ReturnParm)
unsigned char UObject::DivideEqual_ByteByte(unsigned char* A, unsigned char B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_ByteByte");

	UObject_DivideEqual_ByteByte_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.MultiplyEqual_ByteFloat
//		Flags  -> ()
// Parameters:
//		unsigned char                                      A                                                          (Parm, OutParm)
//		float                                              B                                                          (Parm)
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ReturnParm)
unsigned char UObject::MultiplyEqual_ByteFloat(unsigned char* A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_ByteFloat");

	UObject_MultiplyEqual_ByteFloat_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.MultiplyEqual_ByteByte
//		Flags  -> ()
// Parameters:
//		unsigned char                                      A                                                          (Parm, OutParm)
//		unsigned char                                      B                                                          (Parm)
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ReturnParm)
unsigned char UObject::MultiplyEqual_ByteByte(unsigned char* A, unsigned char B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_ByteByte");

	UObject_MultiplyEqual_ByteByte_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.OrOr_BoolBool
//		Flags  -> ()
// Parameters:
//		bool                                               A                                                          (Parm)
//		bool                                               B                                                          (Parm, SkipParm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::OrOr_BoolBool(bool A, bool B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.OrOr_BoolBool");

	UObject_OrOr_BoolBool_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.XorXor_BoolBool
//		Flags  -> ()
// Parameters:
//		bool                                               A                                                          (Parm)
//		bool                                               B                                                          (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::XorXor_BoolBool(bool A, bool B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.XorXor_BoolBool");

	UObject_XorXor_BoolBool_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.AndAnd_BoolBool
//		Flags  -> ()
// Parameters:
//		bool                                               A                                                          (Parm)
//		bool                                               B                                                          (Parm, SkipParm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::AndAnd_BoolBool(bool A, bool B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.AndAnd_BoolBool");

	UObject_AndAnd_BoolBool_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.NotEqual_BoolBool
//		Flags  -> ()
// Parameters:
//		bool                                               A                                                          (Parm)
//		bool                                               B                                                          (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::NotEqual_BoolBool(bool A, bool B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_BoolBool");

	UObject_NotEqual_BoolBool_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.EqualEqual_BoolBool
//		Flags  -> ()
// Parameters:
//		bool                                               A                                                          (Parm)
//		bool                                               B                                                          (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::EqualEqual_BoolBool(bool A, bool B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_BoolBool");

	UObject_EqualEqual_BoolBool_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Object.Not_PreBool
//		Flags  -> ()
// Parameters:
//		bool                                               A                                                          (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ReturnParm)
bool UObject::Not_PreBool(bool A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Object.Not_PreBool");

	UObject_Not_PreBool_Params params {};
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.DistributionVector.GetVectorValue
//		Flags  -> ()
// Parameters:
//		float                                              F                                                          (OptionalParm, Parm)
//		int                                                LastExtreme                                                (OptionalParm, Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FVector UDistributionVector::GetVectorValue(float F, int LastExtreme)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.DistributionVector.GetVectorValue");

	UDistributionVector_GetVectorValue_Params params {};
	params.F = F;
	params.LastExtreme = LastExtreme;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.DistributionFloat.GetFloatValue
//		Flags  -> ()
// Parameters:
//		float                                              F                                                          (OptionalParm, Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ReturnParm)
float UDistributionFloat::GetFloatValue(float F)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.DistributionFloat.GetFloatValue");

	UDistributionFloat_GetFloatValue_Params params {};
	params.F = F;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.Commandlet.Main
//		Flags  -> ()
// Parameters:
//		struct FString                                     Params                                                     (Parm, NeedCtorLink)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UCommandlet::Main(const struct FString& Params)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.Commandlet.Main");

	UCommandlet_Main_Params params {};
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Core.HelpCommandlet.Main
//		Flags  -> ()
// Parameters:
//		struct FString                                     Params                                                     (Parm, NeedCtorLink)
//		int                                                ReturnValue                                                (Parm, OutParm, ReturnParm)
int UHelpCommandlet::Main(const struct FString& Params)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Core.HelpCommandlet.Main");

	UHelpCommandlet_Main_Params params {};
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
