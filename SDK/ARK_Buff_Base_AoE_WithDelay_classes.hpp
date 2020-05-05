#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Base_AoE_WithDelay_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Base_AoE_WithDelay.Buff_Base_AoE_WithDelay_C
// 0x0008 (0x0940 - 0x0938)
class ABuff_Base_AoE_WithDelay_C : public ABuff_Base_AoE_C
{
public:
	float                                              DelayedAoEBuffRange;                                      // 0x0938(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayedAoEBuffTime;                                       // 0x093C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Base_AoE_WithDelay.Buff_Base_AoE_WithDelay_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetFinalAoE();
	void ExecuteUbergraph_Buff_Base_AoE_WithDelay(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
