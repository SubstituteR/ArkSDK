#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Structure_Carnivorous_Plant_Trap_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Structure_Carnivorous_Plant_Trap.Structure_Carnivorous_Plant_Trap_C.ReactToNearbyPrey
struct AStructure_Carnivorous_Plant_Trap_C_ReactToNearbyPrey_Params
{
};

// Function Structure_Carnivorous_Plant_Trap.Structure_Carnivorous_Plant_Trap_C.AreAnyPreyNear
struct AStructure_Carnivorous_Plant_Trap_C_AreAnyPreyNear_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_Carnivorous_Plant_Trap.Structure_Carnivorous_Plant_Trap_C.Has Been Grown
struct AStructure_Carnivorous_Plant_Trap_C_Has_Been_Grown_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_Carnivorous_Plant_Trap.Structure_Carnivorous_Plant_Trap_C.Emerge
struct AStructure_Carnivorous_Plant_Trap_C_Emerge_Params
{
};

// Function Structure_Carnivorous_Plant_Trap.Structure_Carnivorous_Plant_Trap_C.Set Emerged Timer
struct AStructure_Carnivorous_Plant_Trap_C_Set_Emerged_Timer_Params
{
};

// Function Structure_Carnivorous_Plant_Trap.Structure_Carnivorous_Plant_Trap_C.Set Burrow Timer
struct AStructure_Carnivorous_Plant_Trap_C_Set_Burrow_Timer_Params
{
};

// Function Structure_Carnivorous_Plant_Trap.Structure_Carnivorous_Plant_Trap_C.While Burrowed
struct AStructure_Carnivorous_Plant_Trap_C_While_Burrowed_Params
{
};

// Function Structure_Carnivorous_Plant_Trap.Structure_Carnivorous_Plant_Trap_C.Burrow
struct AStructure_Carnivorous_Plant_Trap_C_Burrow_Params
{
};

// Function Structure_Carnivorous_Plant_Trap.Structure_Carnivorous_Plant_Trap_C.Has Emerged
struct AStructure_Carnivorous_Plant_Trap_C_Has_Emerged_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_Carnivorous_Plant_Trap.Structure_Carnivorous_Plant_Trap_C.Is Burrowed
struct AStructure_Carnivorous_Plant_Trap_C_Is_Burrowed_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_Carnivorous_Plant_Trap.Structure_Carnivorous_Plant_Trap_C.While Emerged
struct AStructure_Carnivorous_Plant_Trap_C_While_Emerged_Params
{
};

// Function Structure_Carnivorous_Plant_Trap.Structure_Carnivorous_Plant_Trap_C.BPAdjustDamage
struct AStructure_Carnivorous_Plant_Trap_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Structure_Carnivorous_Plant_Trap.Structure_Carnivorous_Plant_Trap_C.BPNotifyImmobilizedCharacterIsDeadOrInConscious
struct AStructure_Carnivorous_Plant_Trap_C_BPNotifyImmobilizedCharacterIsDeadOrInConscious_Params
{
	bool*                                              IsDead;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsConscious;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_Carnivorous_Plant_Trap.Structure_Carnivorous_Plant_Trap_C.UserConstructionScript
struct AStructure_Carnivorous_Plant_Trap_C_UserConstructionScript_Params
{
};

// Function Structure_Carnivorous_Plant_Trap.Structure_Carnivorous_Plant_Trap_C.ReceiveBeginPlay
struct AStructure_Carnivorous_Plant_Trap_C_ReceiveBeginPlay_Params
{
};

// Function Structure_Carnivorous_Plant_Trap.Structure_Carnivorous_Plant_Trap_C.PeriodicDamage
struct AStructure_Carnivorous_Plant_Trap_C_PeriodicDamage_Params
{
};

// Function Structure_Carnivorous_Plant_Trap.Structure_Carnivorous_Plant_Trap_C.ExecuteUbergraph_Structure_Carnivorous_Plant_Trap
struct AStructure_Carnivorous_Plant_Trap_C_ExecuteUbergraph_Structure_Carnivorous_Plant_Trap_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
