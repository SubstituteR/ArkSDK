// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Pteroteuthis_Char_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.GetNumBatteries
// ()
// Parameters:
// int                            numBatteries                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APteroteuthis_Char_BP_C::GetNumBatteries(int* numBatteries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.GetNumBatteries");

	APteroteuthis_Char_BP_C_GetNumBatteries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (numBatteries != nullptr)
		*numBatteries = params.numBatteries;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.Get Charge Variable Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APteroteuthis_Char_BP_C::Get_Charge_Variable_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, float* fValue, double* dValue, bool* bBValue, int* iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.Get Charge Variable Interface");

	APteroteuthis_Char_BP_C_Get_Charge_Variable_Interface_Params params;
	params.variableType = variableType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (fValue != nullptr)
		*fValue = params.fValue;
	if (dValue != nullptr)
		*dValue = params.dValue;
	if (bBValue != nullptr)
		*bBValue = params.bBValue;
	if (iValue != nullptr)
		*iValue = params.iValue;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.IsActorInBlast
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  ActorToCheck                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DirectionNormal                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartingLocation               (Parm, ZeroConstructor, IsPlainOldData)
// float                          degrees                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Range                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 UpNormal                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RightNormal                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           wasHit                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APteroteuthis_Char_BP_C::STATIC_IsActorInBlast(class AActor* ActorToCheck, const struct FVector& DirectionNormal, const struct FVector& StartingLocation, float degrees, float Range, const struct FVector& UpNormal, const struct FVector& RightNormal, bool* wasHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.IsActorInBlast");

	APteroteuthis_Char_BP_C_IsActorInBlast_Params params;
	params.ActorToCheck = ActorToCheck;
	params.DirectionNormal = DirectionNormal;
	params.StartingLocation = StartingLocation;
	params.degrees = degrees;
	params.Range = Range;
	params.UpNormal = UpNormal;
	params.RightNormal = RightNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (wasHit != nullptr)
		*wasHit = params.wasHit;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.BlueprintAdjustOutputDamage
// (NetReliable, NetRequest, Native, Event, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APteroteuthis_Char_BP_C::BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.BlueprintAdjustOutputDamage");

	APteroteuthis_Char_BP_C_BlueprintAdjustOutputDamage_Params params;
	params.AttackIndex = AttackIndex;
	params.OriginalDamageAmount = OriginalDamageAmount;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDamageType != nullptr)
		*OutDamageType = params.OutDamageType;
	if (OutDamageImpulse != nullptr)
		*OutDamageImpulse = params.OutDamageImpulse;

	return params.ReturnValue;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APteroteuthis_Char_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.BlueprintCanAttack");

	APteroteuthis_Char_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.BPShouldCancelDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APteroteuthis_Char_BP_C::BPShouldCancelDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.BPShouldCancelDoAttack");

	APteroteuthis_Char_BP_C_BPShouldCancelDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.BPTimerServer
// ()

void APteroteuthis_Char_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.BPTimerServer");

	APteroteuthis_Char_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.OverrideRandomWanderLocation
// ()
// Parameters:
// struct FVector                 originalDestination            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 inVec                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APteroteuthis_Char_BP_C::OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.OverrideRandomWanderLocation");

	APteroteuthis_Char_BP_C_OverrideRandomWanderLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (originalDestination != nullptr)
		*originalDestination = params.originalDestination;
	if (inVec != nullptr)
		*inVec = params.inVec;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.BPShouldForceFlee
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APteroteuthis_Char_BP_C::BPShouldForceFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.BPShouldForceFlee");

	APteroteuthis_Char_BP_C_BPShouldForceFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.BPTimerNonDedicated
// ()

void APteroteuthis_Char_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.BPTimerNonDedicated");

	APteroteuthis_Char_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.BPUnstasis
// ()

void APteroteuthis_Char_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.BPUnstasis");

	APteroteuthis_Char_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.Init
// ()

void APteroteuthis_Char_BP_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.Init");

	APteroteuthis_Char_BP_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.ReceiveBeginPlay
// ()

void APteroteuthis_Char_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.ReceiveBeginPlay");

	APteroteuthis_Char_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.CreateChargeManager
// ()

void APteroteuthis_Char_BP_C::CreateChargeManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.CreateChargeManager");

	APteroteuthis_Char_BP_C_CreateChargeManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.FindChargeLightTargetLocation
// (NetReliable, NetRequest, Exec, Event, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APteroteuthis_Char_BP_C::FindChargeLightTargetLocation(class AActor* Target, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.FindChargeLightTargetLocation");

	APteroteuthis_Char_BP_C_FindChargeLightTargetLocation_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.UserConstructionScript
// ()

void APteroteuthis_Char_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.UserConstructionScript");

	APteroteuthis_Char_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.Interface Check for Batteries and Update Multicast
// ()

void APteroteuthis_Char_BP_C::Interface_Check_for_Batteries_and_Update_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.Interface Check for Batteries and Update Multicast");

	APteroteuthis_Char_BP_C_Interface_Check_for_Batteries_and_Update_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.Charge Variable Event Boolean MulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void APteroteuthis_Char_BP_C::Charge_Variable_Event_Boolean_MulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.Charge Variable Event Boolean MulticastInterface");

	APteroteuthis_Char_BP_C_Charge_Variable_Event_Boolean_MulticastInterface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.Charge Variable Event Float Multicast Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void APteroteuthis_Char_BP_C::Charge_Variable_Event_Float_Multicast_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.Charge Variable Event Float Multicast Interface");

	APteroteuthis_Char_BP_C_Charge_Variable_Event_Float_Multicast_Interface_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.Charge Variable Event Double MulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void APteroteuthis_Char_BP_C::Charge_Variable_Event_Double_MulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.Charge Variable Event Double MulticastInterface");

	APteroteuthis_Char_BP_C_Charge_Variable_Event_Double_MulticastInterface_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.Charge Variable Event Boolean Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void APteroteuthis_Char_BP_C::Charge_Variable_Event_Boolean_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.Charge Variable Event Boolean Interface");

	APteroteuthis_Char_BP_C_Charge_Variable_Event_Boolean_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.ChargeVariableEventFloatInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void APteroteuthis_Char_BP_C::ChargeVariableEventFloatInterface(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.ChargeVariableEventFloatInterface");

	APteroteuthis_Char_BP_C_ChargeVariableEventFloatInterface_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.ChargeVariableEventDoubleInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void APteroteuthis_Char_BP_C::ChargeVariableEventDoubleInterface(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.ChargeVariableEventDoubleInterface");

	APteroteuthis_Char_BP_C_ChargeVariableEventDoubleInterface_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.ChargeVariableEventIntInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void APteroteuthis_Char_BP_C::ChargeVariableEventIntInterface(TEnumAsByte<E_ChargeVariableNames> variableType, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.ChargeVariableEventIntInterface");

	APteroteuthis_Char_BP_C_ChargeVariableEventIntInterface_Params params;
	params.variableType = variableType;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.ChargeVariableEventIntMulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void APteroteuthis_Char_BP_C::ChargeVariableEventIntMulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.ChargeVariableEventIntMulticastInterface");

	APteroteuthis_Char_BP_C_ChargeVariableEventIntMulticastInterface_Params params;
	params.variableType = variableType;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.Set Charge Variable Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicast                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           triggerEvent                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicastEvent                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void APteroteuthis_Char_BP_C::Set_Charge_Variable_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool multicast, float fValue, double dValue, bool bBValue, bool triggerEvent, bool multicastEvent, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.Set Charge Variable Interface");

	APteroteuthis_Char_BP_C_Set_Charge_Variable_Interface_Params params;
	params.variableType = variableType;
	params.multicast = multicast;
	params.fValue = fValue;
	params.dValue = dValue;
	params.bBValue = bBValue;
	params.triggerEvent = triggerEvent;
	params.multicastEvent = multicastEvent;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.Charge Variable Event Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void APteroteuthis_Char_BP_C::Charge_Variable_Event_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.Charge Variable Event Interface");

	APteroteuthis_Char_BP_C_Charge_Variable_Event_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.Charge Variable Event Trigger Multicast Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            iVariable                      (Parm, ZeroConstructor, IsPlainOldData)

void APteroteuthis_Char_BP_C::Charge_Variable_Event_Trigger_Multicast_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int iVariable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.Charge Variable Event Trigger Multicast Interface");

	APteroteuthis_Char_BP_C_Charge_Variable_Event_Trigger_Multicast_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;
	params.iVariable = iVariable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.ChargeVariableEvent
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void APteroteuthis_Char_BP_C::ChargeVariableEvent(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.ChargeVariableEvent");

	APteroteuthis_Char_BP_C_ChargeVariableEvent_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.ChargeVariableEvent_Multicast
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void APteroteuthis_Char_BP_C::ChargeVariableEvent_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.ChargeVariableEvent_Multicast");

	APteroteuthis_Char_BP_C_ChargeVariableEvent_Multicast_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.DisableChargeSoundAfterDelay
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void APteroteuthis_Char_BP_C::DisableChargeSoundAfterDelay(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.DisableChargeSoundAfterDelay");

	APteroteuthis_Char_BP_C_DisableChargeSoundAfterDelay_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.ExecuteUbergraph_Pteroteuthis_Char_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APteroteuthis_Char_BP_C::ExecuteUbergraph_Pteroteuthis_Char_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP.Pteroteuthis_Char_BP_C.ExecuteUbergraph_Pteroteuthis_Char_BP");

	APteroteuthis_Char_BP_C_ExecuteUbergraph_Pteroteuthis_Char_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
