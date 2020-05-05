#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_ChargeEmitter_LightBug_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.ChargeVariableEvent
struct ABuff_ChargeEmitter_LightBug_C_ChargeVariableEvent_Params
{
	TEnumAsByte<E_ChargeVariableNames>*                variableType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bBValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             fValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double*                                            dValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               iValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.Modify Charge
struct ABuff_ChargeEmitter_LightBug_C_Modify_Charge_Params
{
	bool*                                              SetValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              multicast;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              triggerEvent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              multicastEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              chargeAdded;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.Pre Timer Modify Charge Actions
struct ABuff_ChargeEmitter_LightBug_C_Pre_Timer_Modify_Charge_Actions_Params
{
	bool                                               shouldSkipModify;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.Is Harvest Cooldown Over
struct ABuff_ChargeEmitter_LightBug_C_Is_Harvest_Cooldown_Over_Params
{
	bool                                               isOver;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.CanPlayerHarvest
struct ABuff_ChargeEmitter_LightBug_C_CanPlayerHarvest_Params
{
	class APlayerController**                          Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              toBattery;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canHarvest;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.CanEmitCharge
struct ABuff_ChargeEmitter_LightBug_C_CanEmitCharge_Params
{
	bool                                               canEmit;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.Take Harvesting Charge From Character
struct ABuff_ChargeEmitter_LightBug_C_Take_Harvesting_Charge_From_Character_Params
{
	float*                                             chargeHarvested;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              chargeTaken;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.ShouldEnableTimers
struct ABuff_ChargeEmitter_LightBug_C_ShouldEnableTimers_Params
{
	bool                                               tickServer;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               TickClient;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.OnChargeHarvested
struct ABuff_ChargeEmitter_LightBug_C_OnChargeHarvested_Params
{
	float*                                             amountHarvested;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.Is EmitterAvailableForHarvesting
struct ABuff_ChargeEmitter_LightBug_C_Is_EmitterAvailableForHarvesting_Params
{
	bool                                               available;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.Should Update Charge On Timer
struct ABuff_ChargeEmitter_LightBug_C_Should_Update_Charge_On_Timer_Params
{
	bool                                               shouldUpdateWithTimer;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.CanReceive Charge
struct ABuff_ChargeEmitter_LightBug_C_CanReceive_Charge_Params
{
	bool                                               canReceive;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.UserConstructionScript
struct ABuff_ChargeEmitter_LightBug_C_UserConstructionScript_Params
{
};

// Function Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C.ExecuteUbergraph_Buff_ChargeEmitter_LightBug
struct ABuff_ChargeEmitter_LightBug_C_ExecuteUbergraph_Buff_ChargeEmitter_LightBug_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
