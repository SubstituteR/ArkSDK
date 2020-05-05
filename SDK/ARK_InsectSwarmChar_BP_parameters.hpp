#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_InsectSwarmChar_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.BPPlayDying
struct AInsectSwarmChar_BP_C_BPPlayDying_Params
{
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class APawn**                                      InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.BPOverrideFloatingHUDLocation
struct AInsectSwarmChar_BP_C_BPOverrideFloatingHUDLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.FinishedAttackingTarget
struct AInsectSwarmChar_BP_C_FinishedAttackingTarget_Params
{
};

// Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.StartAttackingTarget
struct AInsectSwarmChar_BP_C_StartAttackingTarget_Params
{
};

// Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.SpottedTarget
struct AInsectSwarmChar_BP_C_SpottedTarget_Params
{
};

// Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.Check for Water Avoidance
struct AInsectSwarmChar_BP_C_Check_for_Water_Avoidance_Params
{
};

// Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.Can Damage Victim in Radius
struct AInsectSwarmChar_BP_C_Can_Damage_Victim_in_Radius_Params
{
	class AActor**                                     Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanDamage;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.Get Current Attack Duration
struct AInsectSwarmChar_BP_C_Get_Current_Attack_Duration_Params
{
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.DestroyTarget
struct AInsectSwarmChar_BP_C_DestroyTarget_Params
{
};

// Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.UserConstructionScript
struct AInsectSwarmChar_BP_C_UserConstructionScript_Params
{
};

// Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.ReceiveTick
struct AInsectSwarmChar_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InsectSwarmChar_BP.InsectSwarmChar_BP_C.ExecuteUbergraph_InsectSwarmChar_BP
struct AInsectSwarmChar_BP_C_ExecuteUbergraph_InsectSwarmChar_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
