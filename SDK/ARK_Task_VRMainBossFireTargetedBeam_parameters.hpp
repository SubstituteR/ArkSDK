#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Task_VRMainBossFireTargetedBeam_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_VRMainBossFireTargetedBeam.Task_VRMainBossFireTargetedBeam_C.ReceiveTick
struct UTask_VRMainBossFireTargetedBeam_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_VRMainBossFireTargetedBeam.Task_VRMainBossFireTargetedBeam_C.ReceiveExecute
struct UTask_VRMainBossFireTargetedBeam_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_VRMainBossFireTargetedBeam.Task_VRMainBossFireTargetedBeam_C.ExecuteUbergraph_Task_VRMainBossFireTargetedBeam
struct UTask_VRMainBossFireTargetedBeam_C_ExecuteUbergraph_Task_VRMainBossFireTargetedBeam_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
