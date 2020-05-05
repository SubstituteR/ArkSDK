#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Task_VRMainBossIdle_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_VRMainBossIdle.Task_VRMainBossIdle_C.ReceiveExecute
struct UTask_VRMainBossIdle_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_VRMainBossIdle.Task_VRMainBossIdle_C.ExecuteUbergraph_Task_VRMainBossIdle
struct UTask_VRMainBossIdle_C_ExecuteUbergraph_Task_VRMainBossIdle_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
