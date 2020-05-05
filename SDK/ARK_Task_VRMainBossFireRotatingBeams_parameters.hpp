#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Task_VRMainBossFireRotatingBeams_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_VRMainBossFireRotatingBeams.Task_VRMainBossFireRotatingBeams_C.ReceiveTick
struct UTask_VRMainBossFireRotatingBeams_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_VRMainBossFireRotatingBeams.Task_VRMainBossFireRotatingBeams_C.ReceiveExecute
struct UTask_VRMainBossFireRotatingBeams_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_VRMainBossFireRotatingBeams.Task_VRMainBossFireRotatingBeams_C.ExecuteUbergraph_Task_VRMainBossFireRotatingBeams
struct UTask_VRMainBossFireRotatingBeams_C_ExecuteUbergraph_Task_VRMainBossFireRotatingBeams_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
