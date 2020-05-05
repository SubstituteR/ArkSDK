#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_InsectSwarm_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass InsectSwarm_AIController_BP.InsectSwarm_AIController_BP_C
// 0x0022 (0x0974 - 0x0952)
class AInsectSwarm_AIController_BP_C : public ABaseSwarm_AIController_BP_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x0952(0x0002) MISSED OFFSET
	float                                              FoliageDestroyRadius;                                     // 0x0954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FoliageDestroyInterval;                                   // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x095C(0x0004) MISSED OFFSET
	double                                             LastFoliageDestroyTime;                                   // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FoliageDamagePerSecond;                                   // 0x0968(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxFoliageCheck;                                          // 0x096C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x0970(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InsectSwarm_AIController_BP.InsectSwarm_AIController_BP_C");
		return ptr;
	}


	void STATIC_Destroy_Foliage_In_Radius();
	float BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue);
	void ChangedAITarget();
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_InsectSwarm_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
