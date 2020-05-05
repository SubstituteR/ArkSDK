#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoAttackState_BotWithMeleeWeapon_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackState_BotWithMeleeWeapon.DinoAttackState_BotWithMeleeWeapon_C.BPGetSocketLocation
struct UDinoAttackState_BotWithMeleeWeapon_C_BPGetSocketLocation_Params
{
	struct FName                                       SocketName;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     SocketLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_BotWithMeleeWeapon.DinoAttackState_BotWithMeleeWeapon_C.ExecuteUbergraph_DinoAttackState_BotWithMeleeWeapon
struct UDinoAttackState_BotWithMeleeWeapon_C_ExecuteUbergraph_DinoAttackState_BotWithMeleeWeapon_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
