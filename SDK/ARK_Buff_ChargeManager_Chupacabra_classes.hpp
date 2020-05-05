#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_ChargeManager_Chupacabra_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C
// 0x0014 (0x0A14 - 0x0A00)
class ABuff_ChargeManager_Chupacabra_C : public ABuff_ChargeManager_C
{
public:
	TArray<class UClass*>                              buffsAllowedUnderground;                                  // 0x0A00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              finalReceivedCharge;                                      // 0x0A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeManager_Chupacabra.Buff_ChargeManager_Chupacabra_C");
		return ptr;
	}


	void ManagerCustomEvent(class AActor** requestingActor, TEnumAsByte<E_ChargeManagerType>* requiresManagerOfType);
	void ShouldEnableTimers(bool* tickServer, bool* TickClient);
	void On_Instant_Cringe_Charge_Received(float timeToCringe);
	void Get_ChargeInEnvironment(bool* getRawValue, float* receivedCharge);
	void TriggerChargeBeamIfNeeded();
	bool BPPreventAddingOtherBuff(class UClass** anotherBuffClass);
	bool PreventActorTargeting(class AActor** ByActor);
	void OnChargeEvent();
	void CanReceive_Charge(bool* canReceive);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ChargeManager_Chupacabra(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
