#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Task_VRMainBossFireRotatingBeams_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Task_VRMainBossFireRotatingBeams.Task_VRMainBossFireRotatingBeams_C
// 0x0028 (0x00A0 - 0x0078)
class UTask_VRMainBossFireRotatingBeams_C : public UBTTask_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      CooldownBBKeySelector;                                    // 0x0078(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Task_VRMainBossFireRotatingBeams.Task_VRMainBossFireRotatingBeams_C");
		return ptr;
	}


	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_Task_VRMainBossFireRotatingBeams(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
