#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_ChargeEmitter_LightBug_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C
// 0x0004 (0x0B4C - 0x0B48)
class ABuff_ChargeEmitter_LightBug_C : public ABuff_ChargeEmitter_C
{
public:
	float                                              chargeLossCooldownAfterHarvesting;                        // 0x0B48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeEmitter_LightBug.Buff_ChargeEmitter_LightBug_C");
		return ptr;
	}


	void ChargeVariableEvent(TEnumAsByte<E_ChargeVariableNames>* variableType, bool* bBValue, float* fValue, double* dValue, int* iValue);
	void Modify_Charge(bool* SetValue, float* amount, bool* multicast, bool* triggerEvent, bool* multicastEvent, float* chargeAdded);
	void Pre_Timer_Modify_Charge_Actions(bool* shouldSkipModify);
	void Is_Harvest_Cooldown_Over(bool* isOver);
	void CanPlayerHarvest(class APlayerController** Controller, bool* toBattery, bool* canHarvest);
	void CanEmitCharge(bool* canEmit);
	void Take_Harvesting_Charge_From_Character(float* chargeHarvested, float* chargeTaken);
	void ShouldEnableTimers(bool* tickServer, bool* TickClient);
	void OnChargeHarvested(float* amountHarvested);
	void Is_EmitterAvailableForHarvesting(bool* available);
	void Should_Update_Charge_On_Timer(bool* shouldUpdateWithTimer);
	void CanReceive_Charge(bool* canReceive);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ChargeEmitter_LightBug(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
