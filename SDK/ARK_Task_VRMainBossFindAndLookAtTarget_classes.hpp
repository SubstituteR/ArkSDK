#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Task_VRMainBossFindAndLookAtTarget_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Task_VRMainBossFindAndLookAtTarget.Task_VRMainBossFindAndLookAtTarget_C
// 0x0004 (0x007C - 0x0078)
class UTask_VRMainBossFindAndLookAtTarget_C : public UBTTask_BlueprintBase
{
public:
	float                                              SuccessAngle;                                             // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Task_VRMainBossFindAndLookAtTarget.Task_VRMainBossFindAndLookAtTarget_C");
		return ptr;
	}


	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_Task_VRMainBossFindAndLookAtTarget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
