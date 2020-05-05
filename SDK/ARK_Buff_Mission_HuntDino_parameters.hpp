#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Mission_HuntDino_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Mission_HuntDino.Buff_Mission_HuntDino_C.NotifyDamage
struct ABuff_Mission_HuntDino_C_NotifyDamage_Params
{
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     TheDamageCauser;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Mission_HuntDino.Buff_Mission_HuntDino_C.BuffOverrideFinalWanderLocation
struct ABuff_Mission_HuntDino_C_BuffOverrideFinalWanderLocation_Params
{
	struct FVector                                     outVec;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Mission_HuntDino.Buff_Mission_HuntDino_C.SetFleeing
struct ABuff_Mission_HuntDino_C_SetFleeing_Params
{
	struct FVector                                     Destination;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Mission_HuntDino.Buff_Mission_HuntDino_C.InitHuntBuff
struct ABuff_Mission_HuntDino_C_InitHuntBuff_Params
{
};

// Function Buff_Mission_HuntDino.Buff_Mission_HuntDino_C.ReceiveBeginPlay
struct ABuff_Mission_HuntDino_C_ReceiveBeginPlay_Params
{
};

// Function Buff_Mission_HuntDino.Buff_Mission_HuntDino_C.BPInstigatorPossessed
struct ABuff_Mission_HuntDino_C_BPInstigatorPossessed_Params
{
	class AController**                                ByController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Mission_HuntDino.Buff_Mission_HuntDino_C.BPOverrideTargetingDesire
struct ABuff_Mission_HuntDino_C_BPOverrideTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Mission_HuntDino.Buff_Mission_HuntDino_C.BuffAdjustDamage
struct ABuff_Mission_HuntDino_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Mission_HuntDino.Buff_Mission_HuntDino_C.UserConstructionScript
struct ABuff_Mission_HuntDino_C_UserConstructionScript_Params
{
};

// Function Buff_Mission_HuntDino.Buff_Mission_HuntDino_C.ExecuteUbergraph_Buff_Mission_HuntDino
struct ABuff_Mission_HuntDino_C_ExecuteUbergraph_Buff_Mission_HuntDino_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
