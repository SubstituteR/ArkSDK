#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Task_VRMainBossCooldown_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Task_VRMainBossCooldown.Task_VRMainBossCooldown_C
// 0x0028 (0x00A0 - 0x0078)
class UTask_VRMainBossCooldown_C : public UBTTask_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      CooldownBBKeySelector;                                    // 0x0078(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Task_VRMainBossCooldown.Task_VRMainBossCooldown_C");
		return ptr;
	}


	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ExecuteUbergraph_Task_VRMainBossCooldown(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
