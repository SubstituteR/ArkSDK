#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Task_MissionIdle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Task_MissionIdle.Task_MissionIdle_C
// 0x0000 (0x0078 - 0x0078)
class UTask_MissionIdle_C : public UBTTask_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Task_MissionIdle.Task_MissionIdle_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_Task_MissionIdle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
