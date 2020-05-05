#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Task_MissionIdle_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_MissionIdle.Task_MissionIdle_C.ReceiveExecute
struct UTask_MissionIdle_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_MissionIdle.Task_MissionIdle_C.ExecuteUbergraph_Task_MissionIdle
struct UTask_MissionIdle_C_ExecuteUbergraph_Task_MissionIdle_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
