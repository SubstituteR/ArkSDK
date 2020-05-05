#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicRex_Character_BP_Malfunctioned_Adolescent_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BionicRex_Character_BP_Malfunctioned_Adolescent.BionicRex_Character_BP_Malfunctioned_Adolescent_C.BlueprintAdjustOutputDamage
struct ABionicRex_Character_BP_Malfunctioned_Adolescent_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BionicRex_Character_BP_Malfunctioned_Adolescent.BionicRex_Character_BP_Malfunctioned_Adolescent_C.BPAdjustDamage
struct ABionicRex_Character_BP_Malfunctioned_Adolescent_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BionicRex_Character_BP_Malfunctioned_Adolescent.BionicRex_Character_BP_Malfunctioned_Adolescent_C.UserConstructionScript
struct ABionicRex_Character_BP_Malfunctioned_Adolescent_C_UserConstructionScript_Params
{
};

// Function BionicRex_Character_BP_Malfunctioned_Adolescent.BionicRex_Character_BP_Malfunctioned_Adolescent_C.ReceiveBeginPlay
struct ABionicRex_Character_BP_Malfunctioned_Adolescent_C_ReceiveBeginPlay_Params
{
};

// Function BionicRex_Character_BP_Malfunctioned_Adolescent.BionicRex_Character_BP_Malfunctioned_Adolescent_C.ExecuteUbergraph_BionicRex_Character_BP_Malfunctioned_Adolescent
struct ABionicRex_Character_BP_Malfunctioned_Adolescent_C_ExecuteUbergraph_BionicRex_Character_BP_Malfunctioned_Adolescent_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
