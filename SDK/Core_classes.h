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
// Classes
//---------------------------------------------------------------------------

// Class Core.Object
// 0x0050
class UObject
{
public:
	static TUObjectArray*                              GObjects;                                                  // 0x0000(0x0008)
	void*                                              VfTable;                                                   // 0x0000(0x0008) NOT AUTO-GENERATED PROPERTY
	void*                                              HashNext;                                                  // 0x0008(0x0008) NOT AUTO-GENERATED PROPERTY
	FQWord                                             ObjectFlags;                                               // 0x0010(0x0008) NOT AUTO-GENERATED PROPERTY
	void*                                              StateFrame;                                                // 0x0018(0x0008) NOT AUTO-GENERATED PROPERTY
	class UObject*                                     Linker;                                                    // 0x0020(0x0008) NOT AUTO-GENERATED PROPERTY
	int                                                InternalIndex;                                             // 0x0028(0x0004) NOT AUTO-GENERATED PROPERTY
	int                                                NetIndex;                                                  // 0x002C(0x0004) NOT AUTO-GENERATED PROPERTY
	class UObject*                                     Outer;                                                     // 0x0030(0x0008) NOT AUTO-GENERATED PROPERTY
	FName                                              Name;                                                      // 0x0038(0x0008) NOT AUTO-GENERATED PROPERTY
	class UClass*                                      Class;                                                     // 0x0040(0x0008) NOT AUTO-GENERATED PROPERTY
	class UObject*                                     ObjectArchetype;                                           // 0x0048(0x0008) NOT AUTO-GENERATED PROPERTY


	static inline TUObjectArray& GetGlobalObjects()
	{
		return *GObjects;
	}

	std::string GetName() const;

	std::string GetFullName() const;

	template<typename T>
	static T* FindObject(const std::string& name)
	{
		for (int i = 0; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);
	
			if (object == nullptr)
			{
				continue;
			}
	
			if (object->GetFullName() == name)
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	template<typename T>
	static T* FindObject()
	{
		auto v = T::StaticClass();
		for (int i = 0; i < CG::UObject::GetGlobalObjects().Num(); ++i)
		{
			auto object = CG::UObject::GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->IsA(v))
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	template<typename T>
	static std::vector<T*> FindObjects(const std::string& name)
	{
		std::vector<T*> ret;
		for (int i = 0; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->GetFullName() == name)
			{
				ret.push_back(static_cast<T*>(object));
			}
		}
		return ret;
	}

	template<typename T>
	static std::vector<T*> FindObjects()
	{
		std::vector<T*> ret;
		auto v = T::StaticClass();
		for (int i = 0; i < CG::UObject::GetGlobalObjects().Num(); ++i)
		{
			auto object = CG::UObject::GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->IsA(v))
			{
				ret.push_back(static_cast<T*>(object));
			}
		}
		return ret;
	}

	static UClass* FindClass(const std::string& name)
	{
		return FindObject<UClass>(name);
	}

	template<typename T>
	static T* GetObjectCasted(std::size_t index)
	{
		return static_cast<T*>(GetGlobalObjects().GetByIndex(index));
	}

	bool IsA(UClass* cmp) const;

	inline void ProcessEvent(class UFunction* function, void* parms)
	{
		GetVFunction<void(*)(UObject*, class UFunction*, void*)>(this, 67)(this, function, parms);
	}

	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.Object");
		return ptr;
	}



	void ProfNodeEvent(const struct FString& EventName);
	void ProfNodeSetDepthThreshold(int Depth);
	void ProfNodeSetTimeThresholdSeconds(float Threshold);
	void ProfNodeStop(int AssumedTimerIndex);
	int ProfNodeStart(const struct FString& TimerName);
	struct FString GetStringFromGuid(struct FGuid* InGuid);
	struct FGuid GetGuidFromString(struct FString* InGuidString);
	struct FGuid CreateGuid();
	bool IsGuidValid(struct FGuid* InGuid);
	void InvalidateGuid(struct FGuid* InGuid);
	struct FString GetLanguage();
	int GetRandomOptionSumFrequency(TArray<float>* FreqList);
	int GetBuildChangelistNumber();
	int GetEngineVersion();
	void GetSystemTime(int* Year, int* Month, int* DayOfWeek, int* Day, int* Hour, int* Min, int* Sec, int* MSec);
	struct FString TimeStamp();
	struct FVector TransformVectorByRotation(const struct FRotator& SourceRotation, const struct FVector& SourceVector, bool bInverse);
	struct FName GetPackageName();
	bool IsPendingKill();
	float ByteToFloat(unsigned char inputByte, bool bSigned);
	unsigned char FloatToByte(float inputFloat, bool bSigned);
	float UnwindHeading(float A);
	float FindDeltaAngle(float A1, float A2);
	float GetHeadingAngle(const struct FVector& Dir);
	void GetAngularDegreesFromRadians(struct FVector2D* OutFOV);
	void GetAngularFromDotDist(struct FVector2D* OutAngDist, const struct FVector2D& DotDist);
	bool GetAngularDistance(struct FVector2D* OutAngularDist, const struct FVector& Direction, const struct FVector& AxisX, const struct FVector& AxisY, const struct FVector& AxisZ);
	bool GetDotDistance(struct FVector2D* OutDotDist, const struct FVector& Direction, const struct FVector& AxisX, const struct FVector& AxisY, const struct FVector& AxisZ);
	struct FVector PointProjectToPlane(const struct FVector& Point, const struct FVector& A, const struct FVector& B, const struct FVector& C);
	float STATIC_PointDistToPlane(const struct FVector& Point, const struct FRotator& Orientation, const struct FVector& Origin, struct FVector* out_ClosestPoint);
	float PointDistToSegment(const struct FVector& Point, const struct FVector& StartPoint, const struct FVector& EndPoint, struct FVector* OutClosestPoint);
	float PointDistToLine(const struct FVector& Point, const struct FVector& Line, const struct FVector& Origin, struct FVector* OutClosestPoint);
	bool GetPerObjectConfigSections(class UClass* SearchClass, TArray<struct FString>* out_SectionNames, class UObject* ObjectOuter, int MaxResults);
	void ImportJSON(const struct FString& PropertyName, struct FString* JSON);
	void StaticSaveConfig();
	void SaveConfig();
	class UObject* FindObject(const struct FString& ObjectName, class UClass* ObjectClass);
	class UObject* DynamicLoadObject(const struct FString& ObjectName, class UClass* ObjectClass, bool MayFail);
	int EnumFromString(class UObject* E, const struct FName& ValueName);
	struct FName GetEnum(class UObject* E, int I);
	void Disable(const struct FName& ProbeFunc);
	void Enable(const struct FName& ProbeFunc);
	void ContinuedState();
	void PausedState();
	void PoppedState();
	void PushedState();
	void EndState(const struct FName& NextStateName);
	void BeginState(const struct FName& PreviousStateName);
	void DumpStateStack();
	void PopState(bool bPopAll);
	void PushState(const struct FName& NewState, const struct FName& NewLabel);
	struct FName GetStateName();
	bool IsChildState(const struct FName& TestState, const struct FName& TestParentState);
	bool IsInState(const struct FName& TestState, bool bTestStateStack);
	void GotoState(const struct FName& NewState, const struct FName& Label, bool bForceEvents, bool bKeepStack);
	bool IsUTracing();
	void SetUTracing(bool bShouldUTrace);
	struct FName GetFuncName();
	void DebugBreak(int UserFlags, TEnumAsByte<Core_EDebugBreakType> DebuggerType);
	struct FString GetScriptTrace();
	void ScriptTrace();
	struct FString ParseLocalizedPropertyPath(const struct FString& PathName);
	struct FString Localize(const struct FString& SectionName, const struct FString& KeyName, const struct FString& PackageName);
	void WarnInternal(const struct FString& S);
	void LogInternal(const struct FString& S, const struct FName& Tag);
	struct FLinearColor Subtract_LinearColorLinearColor(const struct FLinearColor& A, const struct FLinearColor& B);
	struct FLinearColor Multiply_LinearColorFloat(const struct FLinearColor& LC, float Mult);
	struct FLinearColor ColorToLinearColor(const struct FColor& OldColor);
	struct FLinearColor STATIC_MakeLinearColor(float R, float G, float B, float A);
	struct FColor STATIC_LerpColor(const struct FColor& A, const struct FColor& B, float Alpha);
	struct FColor STATIC_MakeColor(unsigned char R, unsigned char G, unsigned char B, unsigned char A);
	struct FColor Add_ColorColor(const struct FColor& A, const struct FColor& B);
	struct FColor Multiply_ColorFloat(const struct FColor& A, float B);
	struct FColor Multiply_FloatColor(float A, const struct FColor& B);
	struct FColor Subtract_ColorColor(const struct FColor& A, const struct FColor& B);
	struct FVector2D EvalInterpCurveVector2D(struct FInterpCurveVector2D* Vector2DCurve, float InVal);
	struct FVector EvalInterpCurveVector(struct FInterpCurveVector* VectorCurve, float InVal);
	float EvalInterpCurveFloat(struct FInterpCurveFloat* FloatCurve, float InVal);
	struct FVector2D vect2d(float InX, float InY);
	float GetMappedRangeValue(const struct FVector2D& InputRange, const struct FVector2D& OutputRange, float Value);
	float GetRangePctByValue(const struct FVector2D& Range, float Value);
	float GetRangeValueByPct(const struct FVector2D& Range, float Pct);
	struct FVector2D SubtractEqual_Vector2DVector2D(struct FVector2D* A, const struct FVector2D& B);
	struct FVector2D AddEqual_Vector2DVector2D(struct FVector2D* A, const struct FVector2D& B);
	struct FVector2D DivideEqual_Vector2DFloat(struct FVector2D* A, float B);
	struct FVector2D MultiplyEqual_Vector2DFloat(struct FVector2D* A, float B);
	struct FVector2D Divide_Vector2DFloat(const struct FVector2D& A, float B);
	struct FVector2D Multiply_Vector2DFloat(const struct FVector2D& A, float B);
	struct FVector2D Subtract_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	struct FVector2D Add_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	struct FQuat Subtract_QuatQuat(const struct FQuat& A, const struct FQuat& B);
	struct FQuat Add_QuatQuat(const struct FQuat& A, const struct FQuat& B);
	struct FQuat QuatSlerp(const struct FQuat& A, const struct FQuat& B, float Alpha, bool bShortestPath);
	struct FRotator QuatToRotator(const struct FQuat& A);
	struct FQuat QuatFromRotator(const struct FRotator& A);
	struct FQuat QuatFromAxisAndAngle(const struct FVector& Axis, float Angle);
	struct FQuat QuatFindBetween(const struct FVector& A, const struct FVector& B);
	struct FVector QuatRotateVector(const struct FQuat& A, const struct FVector& B);
	struct FQuat QuatInvert(const struct FQuat& A);
	float QuatDot(const struct FQuat& A, const struct FQuat& B);
	struct FQuat QuatProduct(const struct FQuat& A, const struct FQuat& B);
	struct FVector MatrixGetAxis(const struct FMatrix& TM, TEnumAsByte<Core_EAxis> Axis);
	struct FVector MatrixGetOrigin(const struct FMatrix& TM);
	struct FRotator MatrixGetRotator(const struct FMatrix& TM);
	struct FMatrix MakeRotationMatrix(const struct FRotator& Rotation);
	struct FMatrix MakeRotationTranslationMatrix(const struct FVector& Translation, const struct FRotator& Rotation);
	struct FVector InverseTransformNormal(const struct FMatrix& TM, const struct FVector& A);
	struct FVector TransformNormal(const struct FMatrix& TM, const struct FVector& A);
	struct FVector InverseTransformVector(const struct FMatrix& TM, const struct FVector& A);
	struct FVector TransformVector(const struct FMatrix& TM, const struct FVector& A);
	struct FMatrix Multiply_MatrixMatrix(const struct FMatrix& A, const struct FMatrix& B);
	bool NotEqual_NameName(const struct FName& A, const struct FName& B);
	bool EqualEqual_NameName(const struct FName& A, const struct FName& B);
	bool IsA(const struct FName& ClassName);
	bool ClassIsChildOf(class UClass* TestClass, class UClass* ParentClass);
	bool NotEqual_InterfaceInterface();
	bool EqualEqual_InterfaceInterface();
	bool NotEqual_ObjectObject(class UObject* A, class UObject* B);
	bool EqualEqual_ObjectObject(class UObject* A, class UObject* B);
	struct FString PathName(class UObject* CheckObject);
	TArray<struct FString> SplitString(const struct FString& Source, const struct FString& Delimiter, bool bCullEmpty);
	void ParseStringIntoArray(const struct FString& BaseString, TArray<struct FString>* Pieces, const struct FString& delim, bool bCullEmpty);
	void JoinArray(TArray<struct FString> StringArray, struct FString* out_Result, const struct FString& delim, bool bIgnoreBlanks);
	struct FString GetRightMost(const struct FString& Text);
	struct FString Split(const struct FString& Text, const struct FString& SplitStr, bool bOmitSplitStr);
	struct FString Repl(const struct FString& Src, const struct FString& Match, const struct FString& With, bool bCaseSensitive);
	int Asc(const struct FString& S);
	struct FString Chr(int I);
	struct FString Locs(const struct FString& S);
	struct FString Caps(const struct FString& S);
	struct FString Right(const struct FString& S, int I);
	struct FString Left(const struct FString& S, int I);
	struct FString Mid(const struct FString& S, int I, int J);
	int InStr(const struct FString& S, const struct FString& T, bool bSearchFromRight, bool bIgnoreCase, int StartPos);
	int Len(const struct FString& S);
	struct FString SubtractEqual_StrStr(struct FString* A, const struct FString& B);
	struct FString AtEqual_StrStr(struct FString* A, const struct FString& B);
	struct FString ConcatEqual_StrStr(struct FString* A, const struct FString& B);
	bool ComplementEqual_StrStr(const struct FString& A, const struct FString& B);
	bool NotEqual_StrStr(const struct FString& A, const struct FString& B);
	bool EqualEqual_StrStr(const struct FString& A, const struct FString& B);
	bool GreaterEqual_StrStr(const struct FString& A, const struct FString& B);
	bool LessEqual_StrStr(const struct FString& A, const struct FString& B);
	bool Greater_StrStr(const struct FString& A, const struct FString& B);
	bool Less_StrStr(const struct FString& A, const struct FString& B);
	struct FString At_StrStr(const struct FString& A, const struct FString& B);
	struct FString Concat_StrStr(const struct FString& A, const struct FString& B);
	struct FRotator STATIC_MakeRotator(int Pitch, int Yaw, int Roll);
	bool SClampRotAxis(float DeltaTime, int ViewAxis, int* out_DeltaViewAxis, int MaxLimit, int MinLimit, float InterpolationSpeed);
	int ClampRotAxisFromRange(int Current, int Min, int Max);
	int ClampRotAxisFromBase(int Current, int Center, int MaxDelta);
	void ClampRotAxis(int ViewAxis, int* out_DeltaViewAxis, int MaxLimit, int MinLimit);
	float RSize(const struct FRotator& R);
	float RDiff(const struct FRotator& A, const struct FRotator& B);
	int NormalizeRotAxis(int Angle);
	struct FRotator RInterpTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed, bool bConstantInterpSpeed);
	struct FRotator RTransform(const struct FRotator& R, const struct FRotator& RBasis);
	struct FRotator RLerp(const struct FRotator& A, const struct FRotator& B, float Alpha, bool bShortestPath);
	struct FRotator Normalize(const struct FRotator& Rot);
	struct FRotator OrthoRotation(const struct FVector& X, const struct FVector& Y, const struct FVector& Z);
	struct FRotator RotRand(bool bRoll);
	struct FVector GetRotatorAxis(const struct FRotator& A, int Axis);
	void GetUnAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z);
	void GetAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z);
	bool ClockwiseFrom_IntInt(int A, int B);
	struct FRotator SubtractEqual_RotatorRotator(struct FRotator* A, const struct FRotator& B);
	struct FRotator AddEqual_RotatorRotator(struct FRotator* A, const struct FRotator& B);
	struct FRotator Subtract_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	struct FRotator Add_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	struct FRotator DivideEqual_RotatorFloat(struct FRotator* A, float B);
	struct FRotator MultiplyEqual_RotatorFloat(struct FRotator* A, float B);
	struct FRotator Divide_RotatorFloat(const struct FRotator& A, float B);
	struct FRotator Multiply_FloatRotator(float A, const struct FRotator& B);
	struct FRotator Multiply_RotatorFloat(const struct FRotator& A, float B);
	bool NotEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	bool EqualEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	bool InCylinder(const struct FVector& Origin, const struct FRotator& Dir, float Width, const struct FVector& A, bool bIgnoreZ);
	float NoZDot(const struct FVector& A, const struct FVector& B);
	struct FVector ClampLength(const struct FVector& V, float MaxLength);
	struct FVector VInterpTo(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed);
	bool IsZero(const struct FVector& A);
	struct FVector ProjectOnTo(const struct FVector& X, const struct FVector& Y);
	struct FVector MirrorVectorByNormal(const struct FVector& InVect, const struct FVector& InNormal);
	struct FVector VRandCone2(const struct FVector& Dir, float HorizontalConeHalfAngleRadians, float VerticalConeHalfAngleRadians);
	struct FVector VRandCone(const struct FVector& Dir, float ConeHalfAngleRadians);
	struct FVector VRand();
	struct FVector VLerp(const struct FVector& A, const struct FVector& B, float Alpha);
	struct FVector Normal2D(const struct FVector& A);
	struct FVector Normal(const struct FVector& A);
	float VSizeSq2D(const struct FVector& A);
	float VSizeSq(const struct FVector& A);
	float VSize2D(const struct FVector& A);
	float VSize(const struct FVector& A);
	struct FVector SubtractEqual_VectorVector(struct FVector* A, const struct FVector& B);
	struct FVector AddEqual_VectorVector(struct FVector* A, const struct FVector& B);
	struct FVector DivideEqual_VectorFloat(struct FVector* A, float B);
	struct FVector MultiplyEqual_VectorVector(struct FVector* A, const struct FVector& B);
	struct FVector MultiplyEqual_VectorFloat(struct FVector* A, float B);
	struct FVector Cross_VectorVector(const struct FVector& A, const struct FVector& B);
	float Dot_VectorVector(const struct FVector& A, const struct FVector& B);
	bool NotEqual_VectorVector(const struct FVector& A, const struct FVector& B);
	bool EqualEqual_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector GreaterGreater_VectorRotator(const struct FVector& A, const struct FRotator& B);
	struct FVector LessLess_VectorRotator(const struct FVector& A, const struct FRotator& B);
	struct FVector Subtract_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector Add_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector Divide_VectorFloat(const struct FVector& A, float B);
	struct FVector Multiply_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector Multiply_FloatVector(float A, const struct FVector& B);
	struct FVector Multiply_VectorFloat(const struct FVector& A, float B);
	struct FVector Subtract_PreVector(const struct FVector& A);
	float FInterpConstantTo(float Current, float Target, float DeltaTime, float InterpSpeed);
	float FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed);
	float FPctByRange(float Value, float InMin, float InMax);
	float RandRange(float InMin, float InMax);
	float FInterpEaseInOut(float A, float B, float Alpha, float Exp);
	float FInterpEaseOut(float A, float B, float Alpha, float Exp);
	float FInterpEaseIn(float A, float B, float Alpha, float Exp);
	float FCubicInterp(float P0, float T0, float P1, float T1, float A);
	int FCeil(float A);
	int FFloor(float A);
	int Round(float A);
	float Lerp(float A, float B, float Alpha);
	float FClamp(float V, float A, float B);
	float FMax(float A, float B);
	float FMin(float A, float B);
	float FRand();
	float Square(float A);
	float Sqrt(float A);
	float Loge(float A);
	float Exp(float A);
	float Atan2(float A, float B);
	float Atan(float A);
	float Tan(float A);
	float Acos(float A);
	float Cos(float A);
	float Asin(float A);
	float Sin(float A);
	float Abs(float A);
	float SubtractEqual_FloatFloat(float* A, float B);
	float AddEqual_FloatFloat(float* A, float B);
	float DivideEqual_FloatFloat(float* A, float B);
	float MultiplyEqual_FloatFloat(float* A, float B);
	bool NotEqual_FloatFloat(float A, float B);
	bool ComplementEqual_FloatFloat(float A, float B);
	bool EqualEqual_FloatFloat(float A, float B);
	bool GreaterEqual_FloatFloat(float A, float B);
	bool LessEqual_FloatFloat(float A, float B);
	bool Greater_FloatFloat(float A, float B);
	bool Less_FloatFloat(float A, float B);
	float Subtract_FloatFloat(float A, float B);
	float Add_FloatFloat(float A, float B);
	float Percent_FloatFloat(float A, float B);
	float Divide_FloatFloat(float A, float B);
	float Multiply_FloatFloat(float A, float B);
	float MultiplyMultiply_FloatFloat(float Base, float Exp);
	float Subtract_PreFloat(float A);
	struct FString ToHex(int A);
	int Clamp(int V, int A, int B);
	int Max(int A, int B);
	int Min(int A, int B);
	int Rand(int Max);
	int SubtractSubtract_Int(int* A);
	int AddAdd_Int(int* A);
	int SubtractSubtract_PreInt(int* A);
	int AddAdd_PreInt(int* A);
	int SubtractEqual_IntInt(int* A, int B);
	int AddEqual_IntInt(int* A, int B);
	int DivideEqual_IntFloat(int* A, float B);
	int MultiplyEqual_IntFloat(int* A, float B);
	int Or_IntInt(int A, int B);
	int Xor_IntInt(int A, int B);
	int And_IntInt(int A, int B);
	bool NotEqual_IntInt(int A, int B);
	bool EqualEqual_IntInt(int A, int B);
	bool GreaterEqual_IntInt(int A, int B);
	bool LessEqual_IntInt(int A, int B);
	bool Greater_IntInt(int A, int B);
	bool Less_IntInt(int A, int B);
	int GreaterGreaterGreater_IntInt(int A, int B);
	int GreaterGreater_IntInt(int A, int B);
	int LessLess_IntInt(int A, int B);
	int Subtract_IntInt(int A, int B);
	int Add_IntInt(int A, int B);
	int Percent_IntInt(int A, int B);
	int Divide_IntInt(int A, int B);
	int Multiply_IntInt(int A, int B);
	int Subtract_PreInt(int A);
	int Complement_PreInt(int A);
	unsigned char SubtractSubtract_Byte(unsigned char* A);
	unsigned char AddAdd_Byte(unsigned char* A);
	unsigned char SubtractSubtract_PreByte(unsigned char* A);
	unsigned char AddAdd_PreByte(unsigned char* A);
	unsigned char SubtractEqual_ByteByte(unsigned char* A, unsigned char B);
	unsigned char AddEqual_ByteByte(unsigned char* A, unsigned char B);
	unsigned char DivideEqual_ByteByte(unsigned char* A, unsigned char B);
	unsigned char MultiplyEqual_ByteFloat(unsigned char* A, float B);
	unsigned char MultiplyEqual_ByteByte(unsigned char* A, unsigned char B);
	bool OrOr_BoolBool(bool A, bool B);
	bool XorXor_BoolBool(bool A, bool B);
	bool AndAnd_BoolBool(bool A, bool B);
	bool NotEqual_BoolBool(bool A, bool B);
	bool EqualEqual_BoolBool(bool A, bool B);
	bool Not_PreBool(bool A);
};

// Class Core.TextBuffer
// 0x0030 (FullSize[0x0080] - InheritedSize[0x0050])
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData_4V6N[0x30];                                    // 0x0050(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.TextBuffer");
		return ptr;
	}



};

// Class Core.Subsystem
// 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
class USubsystem : public UObject
{
public:
	struct FPointer                                    VfTable_FExec;                                             // 0x0050(0x0008) (Const, Native, NoExport)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.Subsystem");
		return ptr;
	}



};

// Class Core.System
// 0x00F4 (FullSize[0x014C] - InheritedSize[0x0058])
class USystem : public USubsystem
{
public:
	unsigned char                                      UnknownData_OQTM[0x54];                                    // 0x0058(0x0054) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             ReleaseCookedPaths;                                        // 0x00AC(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             SeekFreePCPaths;                                           // 0x00BC(0x0010) (Config, NeedCtorLink)
	unsigned char                                      UnknownData_F0R6[0x50];                                    // 0x00CC(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             SeekFreePCExtensions;                                      // 0x011C(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             CutdownPaths;                                              // 0x00EC(0x0010) (Config, NeedCtorLink)
	unsigned char                                      UnknownData_37J8[0x30];                                    // 0x00FC(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             LocalizationPaths;                                         // 0x012C(0x0010) (Config, NeedCtorLink)
	struct FString                                     TextureFileCacheExtension;                                 // 0x013C(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             Extensions;                                                // 0x010C(0x0010) (Config, NeedCtorLink)
	TArray<struct FName>                               Suppress;                                                  // 0x00FC(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             FRScriptPaths;                                             // 0x00DC(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             ScriptPaths;                                               // 0x00CC(0x0010) (Config, NeedCtorLink)
	TArray<struct FString>                             Paths;                                                     // 0x009C(0x0010) (Config, NeedCtorLink)
	struct FString                                     CacheExt;                                                  // 0x008C(0x0010) (Config, NeedCtorLink)
	struct FString                                     CachePath;                                                 // 0x007C(0x0010) (Config, NeedCtorLink)
	struct FString                                     SavePath;                                                  // 0x006C(0x0010) (Config, NeedCtorLink)
	float                                              AsyncIOBandwidthLimit;                                     // 0x0068(0x0004) (Config)
	int                                                PackageSizeSoftLimit;                                      // 0x0064(0x0004) (Config)
	int                                                MaxOverallCacheSize;                                       // 0x0060(0x0004) (Config)
	int                                                MaxStaleCacheSize;                                         // 0x005C(0x0004) (Config)
	int                                                StaleCacheDays;                                            // 0x0058(0x0004) (Config)
	unsigned char                                      UnknownData_XESK[0xF0];                                    // 0x005C(0x00F0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.System");
		return ptr;
	}



};

// Class Core.PackageMap
// 0x00A0 (FullSize[0x00F0] - InheritedSize[0x0050])
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData_SRAC[0xA0];                                    // 0x0050(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.PackageMap");
		return ptr;
	}



};

// Class Core.ObjectSerializer
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class UObjectSerializer : public UObject
{
public:
	unsigned char                                      UnknownData_4U41[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.ObjectSerializer");
		return ptr;
	}



};

// Class Core.ObjectRedirector
// 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData_A1BX[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.ObjectRedirector");
		return ptr;
	}



};

// Class Core.LocAssetRedirector
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class ULocAssetRedirector : public UObjectRedirector
{
public:
	TArray<struct FDestinationLocObject>               DestinationLocObjectInfoList;                              // 0x0058(0x0010) (Edit, NeedCtorLink)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.LocAssetRedirector");
		return ptr;
	}



};

// Class Core.MetaData
// 0x0048 (FullSize[0x0098] - InheritedSize[0x0050])
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData_DV5B[0x48];                                    // 0x0050(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.MetaData");
		return ptr;
	}



};

// Class Core.Linker
// 0x0168 (FullSize[0x01B8] - InheritedSize[0x0050])
class ULinker : public UObject
{
public:
	unsigned char                                      UnknownData_AUX4[0x168];                                   // 0x0050(0x0168) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.Linker");
		return ptr;
	}



};

// Class Core.LinkerSave
// 0x00C0 (FullSize[0x0278] - InheritedSize[0x01B8])
class ULinkerSave : public ULinker
{
public:
	unsigned char                                      UnknownData_W2LN[0xC0];                                    // 0x01B8(0x00C0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.LinkerSave");
		return ptr;
	}



};

// Class Core.LinkerLoad
// 0x0610 (FullSize[0x07C8] - InheritedSize[0x01B8])
class ULinkerLoad : public ULinker
{
public:
	unsigned char                                      UnknownData_Y382[0x610];                                   // 0x01B8(0x0610) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.LinkerLoad");
		return ptr;
	}



};

// Class Core.Interface
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UInterface : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.Interface");
		return ptr;
	}



};

// Class Core.Field
// 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
class UField : public UObject
{
public:
	class UField*                                      Next;                                                      // 0x0050(0x0008) NOT AUTO-GENERATED PROPERTY


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.Field");
		return ptr;
	}



};

// Class Core.Struct
// 0x0050 (FullSize[0x00A8] - InheritedSize[0x0058])
class UStruct : public UField
{
public:
	class UField*                                      SuperField;                                                // 0x0058(0x0008) NOT AUTO-GENERATED PROPERTY
	class UField*                                      Children;                                                  // 0x0060(0x0008) NOT AUTO-GENERATED PROPERTY
	int32_t                                            PropertySize;                                              // 0x0068(0x0004) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      pad_0XS2SZQPIG[0x4C];                                      // 0x006C(0x004C) NOT AUTO-GENERATED PROPERTY


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.Struct");
		return ptr;
	}



};

// Class Core.ScriptStruct
// 0x0024 (FullSize[0x00CC] - InheritedSize[0x00A8])
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData_2D71[0x24];                                    // 0x00A8(0x0024) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.ScriptStruct");
		return ptr;
	}



};

// Class Core.Function
// 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
class UFunction : public UStruct
{
public:
	int32_t                                            FunctionFlags;                                             // 0x00B8(0x0004) NOT AUTO-GENERATED PROPERTY
	uint16_t                                         iNative;                                                   // 0x00BC(0x0002) NOT AUTO-GENERATED PROPERTY
	uint16_t                                         RepOffset;                                                 // 0x00BE(0x0002) NOT AUTO-GENERATED PROPERTY
	FName                                              FriendlyName;                                              // 0x00C0(0x0008) NOT AUTO-GENERATED PROPERTY
	uint8_t                                          OperPrecedence;                                            // 0x00C8(0x0001) NOT AUTO-GENERATED PROPERTY
	uint8_t                                          NumParms;                                                  // 0x00C9(0x0001) NOT AUTO-GENERATED PROPERTY
	uint16_t                                         ParmsSize;                                                 // 0x00CA(0x0002) NOT AUTO-GENERATED PROPERTY
	uint16_t                                         ReturnValueOffset;                                         // 0x00CC(0x0002) NOT AUTO-GENERATED PROPERTY
	class UStructProperty*                             FirstStructWithDefaults;                                   // 0x00CE(0x0008) NOT AUTO-GENERATED PROPERTY
	void*                                              Func;                                                      // 0x00D6(0x0008) NOT AUTO-GENERATED PROPERTY


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.Function");
		return ptr;
	}



};

// Class Core.Property
// 0x0030 (FullSize[0x0088] - InheritedSize[0x0058])
class UProperty : public UField
{
public:
	unsigned char                                      UnknownData_7FDU[0x30];                                    // 0x0058(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.Property");
		return ptr;
	}



};

// Class Core.StructProperty
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UStructProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_EHK4[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.StructProperty");
		return ptr;
	}



};

// Class Core.StrProperty
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UStrProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.StrProperty");
		return ptr;
	}



};

// Class Core.ObjectProperty
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UObjectProperty : public UProperty//, //public UObjectPropertyBase
{
public:
	unsigned char                                      UnknownData_KLUM[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.ObjectProperty");
		return ptr;
	}



};

// Class Core.ComponentProperty
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UComponentProperty : public UObjectProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.ComponentProperty");
		return ptr;
	}



};

// Class Core.ClassProperty
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData_FDER[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.ClassProperty");
		return ptr;
	}



};

// Class Core.NameProperty
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UNameProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.NameProperty");
		return ptr;
	}



};

// Class Core.MapProperty
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_JM0P[0x10];                                    // 0x0088(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.MapProperty");
		return ptr;
	}



};

// Class Core.IntProperty
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UIntProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_W9E9[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.IntProperty");
		return ptr;
	}



};

// Class Core.InterfaceProperty
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UInterfaceProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_CVEG[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.InterfaceProperty");
		return ptr;
	}



};

// Class Core.FloatProperty
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UFloatProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.FloatProperty");
		return ptr;
	}



};

// Class Core.DelegateProperty
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_OZ38[0x10];                                    // 0x0088(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.DelegateProperty");
		return ptr;
	}



};

// Class Core.ByteProperty
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UByteProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_SL73[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.ByteProperty");
		return ptr;
	}



};

// Class Core.BoolProperty
// 0x0004 (FullSize[0x008C] - InheritedSize[0x0088])
class UBoolProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_K3YZ[0x4];                                     // 0x0088(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.BoolProperty");
		return ptr;
	}



};

// Class Core.ArrayProperty
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UArrayProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_LYDN[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.ArrayProperty");
		return ptr;
	}



};

// Class Core.Enum
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData_IVXZ[0x10];                                    // 0x0058(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.Enum");
		return ptr;
	}



};

// Class Core.Const
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UConst : public UField
{
public:
	unsigned char                                      UnknownData_9QSV[0x10];                                    // 0x0058(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.Const");
		return ptr;
	}



};

// Class Core.Factory
// 0x0048 (FullSize[0x0098] - InheritedSize[0x0050])
class UFactory : public UObject
{
public:
	class UClass*                                      SupportedClass;                                            // 0x0050(0x0008)
	class UClass*                                      ContextClass;                                              // 0x0058(0x0008)
	struct FString                                     Description;                                               // 0x0060(0x0010) (NeedCtorLink)
	TArray<struct FString>                             Formats;                                                   // 0x0070(0x0010) (NeedCtorLink)
	unsigned long                                      bCreateNew : 1;                                            // 0x0080(0x0001) BIT_FIELD
	unsigned long                                      bEditAfterNew : 1;                                         // 0x0080(0x0001) BIT_FIELD
	unsigned long                                      bEditorImport : 1;                                         // 0x0080(0x0001) BIT_FIELD
	unsigned long                                      bText : 1;                                                 // 0x0080(0x0001) BIT_FIELD
	int                                                AutoPriority;                                              // 0x0084(0x0004)
	TArray<struct FString>                             ValidGameNames;                                            // 0x0088(0x0010) (NeedCtorLink)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.Factory");
		return ptr;
	}



};

// Class Core.TextBufferFactory
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UTextBufferFactory : public UFactory
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.TextBufferFactory");
		return ptr;
	}



};

// Class Core.Exporter
// 0x0034 (FullSize[0x0084] - InheritedSize[0x0050])
class UExporter : public UObject
{
public:
	unsigned char                                      UnknownData_TAIL[0x18];                                    // 0x0050(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             FormatDescription;                                         // 0x0068(0x0010) (NeedCtorLink)
	TArray<struct FString>                             FormatExtension;                                           // 0x0058(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData_ULWN[0x1C];                                    // 0x0068(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.Exporter");
		return ptr;
	}



};

// Class Core.Component
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class UComponent : public UObject
{
public:
	class UClass*                                      TemplateOwnerClass;                                        // 0x0050(0x0008) (Const, Native)
	struct FName                                       TemplateName;                                              // 0x0058(0x0008) (Const, Native)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.Component");
		return ptr;
	}



};

// Class Core.DistributionVector
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class UDistributionVector : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                                 // 0x0060(0x0008) (Const, Native, NoExport)
	unsigned long                                      bCanBeBaked : 1;                                           // 0x0068(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bIsDirty : 1;                                              // 0x0068(0x0001) BIT_FIELD


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.DistributionVector");
		return ptr;
	}



	struct FVector GetVectorValue(float F, int LastExtreme);
};

// Class Core.DistributionFloat
// 0x000C (FullSize[0x006C] - InheritedSize[0x0060])
class UDistributionFloat : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                                 // 0x0060(0x0008) (Const, Native, NoExport)
	unsigned long                                      bCanBeBaked : 1;                                           // 0x0068(0x0001) BIT_FIELD (Edit)
	unsigned long                                      bIsDirty : 1;                                              // 0x0068(0x0001) BIT_FIELD


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.DistributionFloat");
		return ptr;
	}



	float GetFloatValue(float F);
};

// Class Core.Commandlet
// 0x0054 (FullSize[0x00A4] - InheritedSize[0x0050])
class UCommandlet : public UObject
{
public:
	struct FString                                     HelpDescription;                                           // 0x0050(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     HelpUsage;                                                 // 0x0060(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     HelpWebLink;                                               // 0x0070(0x0010) (Const, Localized, NeedCtorLink)
	TArray<struct FString>                             HelpParamNames;                                            // 0x0080(0x0010) (Const, Localized, NeedCtorLink)
	TArray<struct FString>                             HelpParamDescriptions;                                     // 0x0090(0x0010) (Const, Localized, NeedCtorLink)
	unsigned long                                      IsServer : 1;                                              // 0x00A0(0x0001) BIT_FIELD
	unsigned long                                      IsClient : 1;                                              // 0x00A0(0x0001) BIT_FIELD
	unsigned long                                      IsEditor : 1;                                              // 0x00A0(0x0001) BIT_FIELD
	unsigned long                                      LogToConsole : 1;                                          // 0x00A0(0x0001) BIT_FIELD
	unsigned long                                      ShowErrorCount : 1;                                        // 0x00A0(0x0001) BIT_FIELD


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.Commandlet");
		return ptr;
	}



	int Main(const struct FString& Params);
};

// Class Core.HelpCommandlet
// 0x0000 (FullSize[0x00A4] - InheritedSize[0x00A4])
class UHelpCommandlet : public UCommandlet
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.HelpCommandlet");
		return ptr;
	}



	int Main(const struct FString& Params);
};

// Class Core.Package
// 0x00B0 (FullSize[0x0100] - InheritedSize[0x0050])
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData_9KSH[0xB0];                                    // 0x0050(0x00B0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.Package");
		return ptr;
	}



};

// Class Core.State
// 0x0054 (FullSize[0x00FC] - InheritedSize[0x00A8])
class UState : public UStruct
{
public:
	unsigned char                                      UnknownData_MCIT[0x54];                                    // 0x00A8(0x0054) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.State");
		return ptr;
	}



};

// Class Core.Class
// 0x00E0 (FullSize[0x01DC] - InheritedSize[0x00FC])
class UClass : public UState
{
public:
	unsigned char                                      pad_2I5SF7NFLF[0x88];                                      // 0x00FC(0x0088) NOT AUTO-GENERATED PROPERTY
	class UObject*                                     ClassDefaultObject;                                        // 0x0184(0x0008) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      pad_YC8QUOK25J[0x70];                                      // 0x018C(0x0070) NOT AUTO-GENERATED PROPERTY


	template<typename T>
	inline T* CreateDefaultObject()
	{
		return static_cast<T*>(CreateDefaultObject());
	}

	//inline UObject* CreateDefaultObject()
	//{
	//	using Fn = UObject*(__thiscall *)(UClass*, unsigned int);
	//	//UClass::GetDefaultObject can be found with the sig
	//	//85 C0 75 21 39 05 ?? ?? ?? ?? 74 19 F7 86 ?? 00 00 00 00 00 00 10 75 0D F6 05 ?? ?? ?? ?? 02 0F 84
	//	static Fn fn = nullptr;
	//	
	//	return fn(this, 0);
	//	//or use the default object (WARNING: may be null)
	//	//return ClassDefaultObject;
	//}

	inline UObject* CreateDefaultObject()
	{
		// return nullptr;
		return GetVFunction<UObject*(*)(UClass*)>(this, 67)(this);
	}

	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Core.Class");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
