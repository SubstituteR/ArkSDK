#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Task_VRMainBossFireEyeBeams_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_VRMainBossFireEyeBeams.Task_VRMainBossFireEyeBeams_C.ReceiveTick
struct UTask_VRMainBossFireEyeBeams_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_VRMainBossFireEyeBeams.Task_VRMainBossFireEyeBeams_C.ReceiveExecute
struct UTask_VRMainBossFireEyeBeams_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_VRMainBossFireEyeBeams.Task_VRMainBossFireEyeBeams_C.ExecuteUbergraph_Task_VRMainBossFireEyeBeams
struct UTask_VRMainBossFireEyeBeams_C_ExecuteUbergraph_Task_VRMainBossFireEyeBeams_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
