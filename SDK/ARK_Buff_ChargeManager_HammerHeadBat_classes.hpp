#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_ChargeManager_HammerHeadBat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ChargeManager_HammerHeadBat.Buff_ChargeManager_HammerHeadBat_C
// 0x0010 (0x0A10 - 0x0A00)
class ABuff_ChargeManager_HammerHeadBat_C : public ABuff_ChargeManager_C
{
public:
	float                                              ChargeDamageMult;                                         // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChargeDamageReceivedMult;                                 // 0x0A04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NoChargeDamageMultiplier;                                 // 0x0A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NoChargeDamageReceivedMult;                               // 0x0A0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeManager_HammerHeadBat.Buff_ChargeManager_HammerHeadBat_C");
		return ptr;
	}


	void BuffTickServer(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ChargeManager_HammerHeadBat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
