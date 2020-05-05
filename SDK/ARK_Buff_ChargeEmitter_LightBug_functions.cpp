// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_ChargeEmitter_LightBug_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.ChargeVariableEvent
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames>* variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double*                        dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_LightBug_C::ChargeVariableEvent(TEnumAsByte<E_ChargeVariableNames>* variableType, bool* bBValue, float* fValue, double* dValue, int* iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.ChargeVariableEvent");

	ABuff_ChargeEmitter_LightBug_C_ChargeVariableEvent_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.Modify Charge
// ()
// Parameters:
// bool*                          SetValue                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         amount                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          multicast                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          triggerEvent                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          multicastEvent                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          chargeAdded                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_LightBug_C::Modify_Charge(bool* SetValue, float* amount, bool* multicast, bool* triggerEvent, bool* multicastEvent, float* chargeAdded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.Modify Charge");

	ABuff_ChargeEmitter_LightBug_C_Modify_Charge_Params params;
	params.SetValue = SetValue;
	params.amount = amount;
	params.multicast = multicast;
	params.triggerEvent = triggerEvent;
	params.multicastEvent = multicastEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (chargeAdded != nullptr)
		*chargeAdded = params.chargeAdded;
}


// Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.Pre Timer Modify Charge Actions
// ()
// Parameters:
// bool                           shouldSkipModify               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_LightBug_C::Pre_Timer_Modify_Charge_Actions(bool* shouldSkipModify)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.Pre Timer Modify Charge Actions");

	ABuff_ChargeEmitter_LightBug_C_Pre_Timer_Modify_Charge_Actions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldSkipModify != nullptr)
		*shouldSkipModify = params.shouldSkipModify;
}


// Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.Is Harvest Cooldown Over
// ()
// Parameters:
// bool                           isOver                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_LightBug_C::Is_Harvest_Cooldown_Over(bool* isOver)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.Is Harvest Cooldown Over");

	ABuff_ChargeEmitter_LightBug_C_Is_Harvest_Cooldown_Over_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isOver != nullptr)
		*isOver = params.isOver;
}


// Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.CanPlayerHarvest
// ()
// Parameters:
// class APlayerController**      Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          toBattery                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canHarvest                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_LightBug_C::CanPlayerHarvest(class APlayerController** Controller, bool* toBattery, bool* canHarvest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.CanPlayerHarvest");

	ABuff_ChargeEmitter_LightBug_C_CanPlayerHarvest_Params params;
	params.Controller = Controller;
	params.toBattery = toBattery;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canHarvest != nullptr)
		*canHarvest = params.canHarvest;
}


// Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.CanEmitCharge
// ()
// Parameters:
// bool                           canEmit                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_LightBug_C::CanEmitCharge(bool* canEmit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.CanEmitCharge");

	ABuff_ChargeEmitter_LightBug_C_CanEmitCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canEmit != nullptr)
		*canEmit = params.canEmit;
}


// Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.Take Harvesting Charge From Character
// ()
// Parameters:
// float*                         chargeHarvested                (Parm, ZeroConstructor, IsPlainOldData)
// float                          chargeTaken                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_LightBug_C::Take_Harvesting_Charge_From_Character(float* chargeHarvested, float* chargeTaken)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.Take Harvesting Charge From Character");

	ABuff_ChargeEmitter_LightBug_C_Take_Harvesting_Charge_From_Character_Params params;
	params.chargeHarvested = chargeHarvested;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (chargeTaken != nullptr)
		*chargeTaken = params.chargeTaken;
}


// Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.ShouldEnableTimers
// ()
// Parameters:
// bool                           tickServer                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           TickClient                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_LightBug_C::ShouldEnableTimers(bool* tickServer, bool* TickClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.ShouldEnableTimers");

	ABuff_ChargeEmitter_LightBug_C_ShouldEnableTimers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (tickServer != nullptr)
		*tickServer = params.tickServer;
	if (TickClient != nullptr)
		*TickClient = params.TickClient;
}


// Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.OnChargeHarvested
// ()
// Parameters:
// float*                         amountHarvested                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_LightBug_C::OnChargeHarvested(float* amountHarvested)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.OnChargeHarvested");

	ABuff_ChargeEmitter_LightBug_C_OnChargeHarvested_Params params;
	params.amountHarvested = amountHarvested;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.Is EmitterAvailableForHarvesting
// ()
// Parameters:
// bool                           available                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_LightBug_C::Is_EmitterAvailableForHarvesting(bool* available)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.Is EmitterAvailableForHarvesting");

	ABuff_ChargeEmitter_LightBug_C_Is_EmitterAvailableForHarvesting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (available != nullptr)
		*available = params.available;
}


// Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.Should Update Charge On Timer
// ()
// Parameters:
// bool                           shouldUpdateWithTimer          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_LightBug_C::Should_Update_Charge_On_Timer(bool* shouldUpdateWithTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.Should Update Charge On Timer");

	ABuff_ChargeEmitter_LightBug_C_Should_Update_Charge_On_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldUpdateWithTimer != nullptr)
		*shouldUpdateWithTimer = params.shouldUpdateWithTimer;
}


// Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.CanReceive Charge
// ()
// Parameters:
// bool                           canReceive                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_LightBug_C::CanReceive_Charge(bool* canReceive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.CanReceive Charge");

	ABuff_ChargeEmitter_LightBug_C_CanReceive_Charge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canReceive != nullptr)
		*canReceive = params.canReceive;
}


// Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.UserConstructionScript
// ()

void ABuff_ChargeEmitter_LightBug_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.UserConstructionScript");

	ABuff_ChargeEmitter_LightBug_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.ExecuteUbergraph_Buff_ChargeEmitter_LightBug
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_LightBug_C::ExecuteUbergraph_Buff_ChargeEmitter_LightBug(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.ExecuteUbergraph_Buff_ChargeEmitter_LightBug");

	ABuff_ChargeEmitter_LightBug_C_ExecuteUbergraph_Buff_ChargeEmitter_LightBug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
