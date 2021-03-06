#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_MinigunNearingOverheat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_MinigunNearingOverheat.Buff_MinigunNearingOverheat_C
// 0x0020 (0x0950 - 0x0930)
class ABuff_MinigunNearingOverheat_C : public APrimalBuff
{
public:
	float                                              StaminaDrain;                                             // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0934(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    NearlyOverheatPostProcess;                                // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 StaminaPercentToNearlyOverheatPostProcessIntensity_Curve; // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 StaminaPercentToNearlyOverheatParticleIntensity_Curve;    // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_MinigunNearingOverheat.Buff_MinigunNearingOverheat_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void BuffTickClient(float* DeltaTime);
	float GetBuffPostprocessIntensity();
	bool AllowPostProcessEffect();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_MinigunNearingOverheat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
