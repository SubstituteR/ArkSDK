#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Task_VRMainBossFindAndLookAtTarget_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_VRMainBossFindAndLookAtTarget.Task_VRMainBossFindAndLookAtTarget_C.ReceiveTick
struct UTask_VRMainBossFindAndLookAtTarget_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_VRMainBossFindAndLookAtTarget.Task_VRMainBossFindAndLookAtTarget_C.ReceiveExecute
struct UTask_VRMainBossFindAndLookAtTarget_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_VRMainBossFindAndLookAtTarget.Task_VRMainBossFindAndLookAtTarget_C.ExecuteUbergraph_Task_VRMainBossFindAndLookAtTarget
struct UTask_VRMainBossFindAndLookAtTarget_C_ExecuteUbergraph_Task_VRMainBossFindAndLookAtTarget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
