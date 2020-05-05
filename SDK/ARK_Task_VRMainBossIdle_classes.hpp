#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Task_VRMainBossIdle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Task_VRMainBossIdle.Task_VRMainBossIdle_C
// 0x0000 (0x0078 - 0x0078)
class UTask_VRMainBossIdle_C : public UBTTask_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Task_VRMainBossIdle.Task_VRMainBossIdle_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_Task_VRMainBossIdle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
