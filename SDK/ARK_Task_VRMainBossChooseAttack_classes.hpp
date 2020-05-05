#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Task_VRMainBossChooseAttack_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Task_VRMainBossChooseAttack.Task_VRMainBossChooseAttack_C
// 0x0028 (0x00A0 - 0x0078)
class UTask_VRMainBossChooseAttack_C : public UBTTask_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      BeamAttackBBKeySelector;                                  // 0x0078(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Task_VRMainBossChooseAttack.Task_VRMainBossChooseAttack_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_Task_VRMainBossChooseAttack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
