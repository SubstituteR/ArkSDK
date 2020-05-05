// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_ChargeManager_Chupacabra_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.ManagerCustomEvent
// ()
// Parameters:
// class AActor**                 requestingActor                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_ChargeManagerType>* requiresManagerOfType          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_Chupacabra_C::ManagerCustomEvent(class AActor** requestingActor, TEnumAsByte<E_ChargeManagerType>* requiresManagerOfType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.ManagerCustomEvent");

	ABuff_ChargeManager_Chupacabra_C_ManagerCustomEvent_Params params;
	params.requestingActor = requestingActor;
	params.requiresManagerOfType = requiresManagerOfType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.ShouldEnableTimers
// ()
// Parameters:
// bool                           tickServer                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           TickClient                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_Chupacabra_C::ShouldEnableTimers(bool* tickServer, bool* TickClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.ShouldEnableTimers");

	ABuff_ChargeManager_Chupacabra_C_ShouldEnableTimers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (tickServer != nullptr)
		*tickServer = params.tickServer;
	if (TickClient != nullptr)
		*TickClient = params.TickClient;
}


// Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.On Instant Cringe Charge Received
// ()
// Parameters:
// float                          timeToCringe                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_Chupacabra_C::On_Instant_Cringe_Charge_Received(float timeToCringe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.On Instant Cringe Charge Received");

	ABuff_ChargeManager_Chupacabra_C_On_Instant_Cringe_Charge_Received_Params params;
	params.timeToCringe = timeToCringe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.Get ChargeInEnvironment
// ()
// Parameters:
// bool*                          getRawValue                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          receivedCharge                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_Chupacabra_C::Get_ChargeInEnvironment(bool* getRawValue, float* receivedCharge)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.Get ChargeInEnvironment");

	ABuff_ChargeManager_Chupacabra_C_Get_ChargeInEnvironment_Params params;
	params.getRawValue = getRawValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (receivedCharge != nullptr)
		*receivedCharge = params.receivedCharge;
}


// Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.TriggerChargeBeamIfNeeded
// ()

void ABuff_ChargeManager_Chupacabra_C::TriggerChargeBeamIfNeeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.TriggerChargeBeamIfNeeded");

	ABuff_ChargeManager_Chupacabra_C_TriggerChargeBeamIfNeeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.BPPreventAddingOtherBuff
// ()
// Parameters:
// class UClass**                 anotherBuffClass               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_ChargeManager_Chupacabra_C::BPPreventAddingOtherBuff(class UClass** anotherBuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.BPPreventAddingOtherBuff");

	ABuff_ChargeManager_Chupacabra_C_BPPreventAddingOtherBuff_Params params;
	params.anotherBuffClass = anotherBuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.PreventActorTargeting
// ()
// Parameters:
// class AActor**                 ByActor                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_ChargeManager_Chupacabra_C::PreventActorTargeting(class AActor** ByActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.PreventActorTargeting");

	ABuff_ChargeManager_Chupacabra_C_PreventActorTargeting_Params params;
	params.ByActor = ByActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.OnChargeEvent
// ()

void ABuff_ChargeManager_Chupacabra_C::OnChargeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.OnChargeEvent");

	ABuff_ChargeManager_Chupacabra_C_OnChargeEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.CanReceive Charge
// ()
// Parameters:
// bool                           canReceive                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_Chupacabra_C::CanReceive_Charge(bool* canReceive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.CanReceive Charge");

	ABuff_ChargeManager_Chupacabra_C_CanReceive_Charge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canReceive != nullptr)
		*canReceive = params.canReceive;
}


// Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.UserConstructionScript
// ()

void ABuff_ChargeManager_Chupacabra_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.UserConstructionScript");

	ABuff_ChargeManager_Chupacabra_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.ExecuteUbergraph_Buff_ChargeManager_Chupacabra
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_Chupacabra_C::ExecuteUbergraph_Buff_ChargeManager_Chupacabra(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.ExecuteUbergraph_Buff_ChargeManager_Chupacabra");

	ABuff_ChargeManager_Chupacabra_C_ExecuteUbergraph_Buff_ChargeManager_Chupacabra_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
