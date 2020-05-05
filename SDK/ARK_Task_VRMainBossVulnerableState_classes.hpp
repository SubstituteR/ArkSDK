#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Task_VRMainBossVulnerableState_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Task_VRMainBossVulnerableState.Task_VRMainBossVulnerableState_C
// 0x0028 (0x00A0 - 0x0078)
class UTask_VRMainBossVulnerableState_C : public UBTTask_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      BlackboardKeySelector;                                    // 0x0078(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Task_VRMainBossVulnerableState.Task_VRMainBossVulnerableState_C");
		return ptr;
	}


	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ExecuteUbergraph_Task_VRMainBossVulnerableState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
