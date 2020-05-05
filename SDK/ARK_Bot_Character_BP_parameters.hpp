#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Bot_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Bot_Character_BP.Bot_Character_BP_C.BPPlayDying
struct ABot_Character_BP_C_BPPlayDying_Params
{
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class APawn**                                      InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bot_Character_BP.Bot_Character_BP_C.BP_OnSetDeath
struct ABot_Character_BP_C_BP_OnSetDeath_Params
{
};

// Function Bot_Character_BP.Bot_Character_BP_C.PlayRandomTauntMontageFn
struct ABot_Character_BP_C_PlayRandomTauntMontageFn_Params
{
	float                                              MontageDuration;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bot_Character_BP.Bot_Character_BP_C.BPOverrideGetAttackAnimationIndex
struct ABot_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        AnimationArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bot_Character_BP.Bot_Character_BP_C.ReceivePossessed
struct ABot_Character_BP_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bot_Character_BP.Bot_Character_BP_C.GetMeleeSocketLocation
struct ABot_Character_BP_C_GetMeleeSocketLocation_Params
{
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SocketLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bot_Character_BP.Bot_Character_BP_C.UserConstructionScript
struct ABot_Character_BP_C_UserConstructionScript_Params
{
};

// Function Bot_Character_BP.Bot_Character_BP_C.ExecuteUbergraph_Bot_Character_BP
struct ABot_Character_BP_C_ExecuteUbergraph_Bot_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
