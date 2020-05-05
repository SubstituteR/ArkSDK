#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_AttackStateRanged_Fireball_Cherufe_Gauntlet_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AttackStateRanged_Fireball_Cherufe_Gauntlet.AttackStateRanged_Fireball_Cherufe_Gauntlet_C.BPRangedAttack
struct UAttackStateRanged_Fireball_Cherufe_Gauntlet_C_BPRangedAttack_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     TargetVelocity;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function AttackStateRanged_Fireball_Cherufe_Gauntlet.AttackStateRanged_Fireball_Cherufe_Gauntlet_C.ExecuteUbergraph_AttackStateRanged_Fireball_Cherufe_Gauntlet
struct UAttackStateRanged_Fireball_Cherufe_Gauntlet_C_ExecuteUbergraph_AttackStateRanged_Fireball_Cherufe_Gauntlet_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
