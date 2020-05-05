#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoAttackState_EelBoss_AOE_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackState_EelBoss_AOE.DinoAttackState_EelBoss_AOE_C.StartAnimationStateEvent
struct UDinoAttackState_EelBoss_AOE_C_StartAnimationStateEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetRole>*                             Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_EelBoss_AOE.DinoAttackState_EelBoss_AOE_C.ExecuteUbergraph_DinoAttackState_EelBoss_AOE
struct UDinoAttackState_EelBoss_AOE_C_ExecuteUbergraph_DinoAttackState_EelBoss_AOE_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
