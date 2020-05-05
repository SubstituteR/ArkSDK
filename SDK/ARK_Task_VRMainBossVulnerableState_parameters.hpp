#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Task_VRMainBossVulnerableState_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_VRMainBossVulnerableState.Task_VRMainBossVulnerableState_C.ReceiveTick
struct UTask_VRMainBossVulnerableState_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_VRMainBossVulnerableState.Task_VRMainBossVulnerableState_C.ExecuteUbergraph_Task_VRMainBossVulnerableState
struct UTask_VRMainBossVulnerableState_C_ExecuteUbergraph_Task_VRMainBossVulnerableState_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
