#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_ChargeManager_Chupacabra_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.ManagerCustomEvent
struct ABuff_ChargeManager_Chupacabra_C_ManagerCustomEvent_Params
{
	class AActor**                                     requestingActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_ChargeManagerType>*                  requiresManagerOfType;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.ShouldEnableTimers
struct ABuff_ChargeManager_Chupacabra_C_ShouldEnableTimers_Params
{
	bool                                               tickServer;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               TickClient;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.On Instant Cringe Charge Received
struct ABuff_ChargeManager_Chupacabra_C_On_Instant_Cringe_Charge_Received_Params
{
	float                                              timeToCringe;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.Get ChargeInEnvironment
struct ABuff_ChargeManager_Chupacabra_C_Get_ChargeInEnvironment_Params
{
	bool*                                              getRawValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              receivedCharge;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.TriggerChargeBeamIfNeeded
struct ABuff_ChargeManager_Chupacabra_C_TriggerChargeBeamIfNeeded_Params
{
};

// Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.BPPreventAddingOtherBuff
struct ABuff_ChargeManager_Chupacabra_C_BPPreventAddingOtherBuff_Params
{
	class UClass**                                     anotherBuffClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.PreventActorTargeting
struct ABuff_ChargeManager_Chupacabra_C_PreventActorTargeting_Params
{
	class AActor**                                     ByActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.OnChargeEvent
struct ABuff_ChargeManager_Chupacabra_C_OnChargeEvent_Params
{
};

// Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.CanReceive Charge
struct ABuff_ChargeManager_Chupacabra_C_CanReceive_Charge_Params
{
	bool                                               canReceive;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.UserConstructionScript
struct ABuff_ChargeManager_Chupacabra_C_UserConstructionScript_Params
{
};

// Function Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C.ExecuteUbergraph_Buff_ChargeManager_Chupacabra
struct ABuff_ChargeManager_Chupacabra_C_ExecuteUbergraph_Buff_ChargeManager_Chupacabra_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
