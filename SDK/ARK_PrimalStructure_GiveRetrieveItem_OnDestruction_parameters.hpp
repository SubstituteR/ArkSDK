#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalStructure_GiveRetrieveItem_OnDestruction_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalStructure_GiveRetrieveItem_OnDestruction.PrimalStructure_GiveRetrieveItem_OnDestruction_C.BPAdjustDamage
struct APrimalStructure_GiveRetrieveItem_OnDestruction_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalStructure_GiveRetrieveItem_OnDestruction.PrimalStructure_GiveRetrieveItem_OnDestruction_C.BPPlayDying
struct APrimalStructure_GiveRetrieveItem_OnDestruction_C_BPPlayDying_Params
{
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class APawn**                                      InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalStructure_GiveRetrieveItem_OnDestruction.PrimalStructure_GiveRetrieveItem_OnDestruction_C.UserConstructionScript
struct APrimalStructure_GiveRetrieveItem_OnDestruction_C_UserConstructionScript_Params
{
};

// Function PrimalStructure_GiveRetrieveItem_OnDestruction.PrimalStructure_GiveRetrieveItem_OnDestruction_C.ExecuteUbergraph_PrimalStructure_GiveRetrieveItem_OnDestruction
struct APrimalStructure_GiveRetrieveItem_OnDestruction_C_ExecuteUbergraph_PrimalStructure_GiveRetrieveItem_OnDestruction_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
