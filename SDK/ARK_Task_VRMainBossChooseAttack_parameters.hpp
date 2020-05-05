#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Task_VRMainBossChooseAttack_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_VRMainBossChooseAttack.Task_VRMainBossChooseAttack_C.ReceiveExecute
struct UTask_VRMainBossChooseAttack_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_VRMainBossChooseAttack.Task_VRMainBossChooseAttack_C.ExecuteUbergraph_Task_VRMainBossChooseAttack
struct UTask_VRMainBossChooseAttack_C_ExecuteUbergraph_Task_VRMainBossChooseAttack_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
