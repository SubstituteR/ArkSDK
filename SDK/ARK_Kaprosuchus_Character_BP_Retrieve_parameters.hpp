#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Kaprosuchus_Character_BP_Retrieve_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Kaprosuchus_Character_BP_Retrieve.Kaprosuchus_Character_BP_Retrieve_C.BlueprintCanAttack
struct AKaprosuchus_Character_BP_Retrieve_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Kaprosuchus_Character_BP_Retrieve.Kaprosuchus_Character_BP_Retrieve_C.BPAdjustDamage
struct AKaprosuchus_Character_BP_Retrieve_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Kaprosuchus_Character_BP_Retrieve.Kaprosuchus_Character_BP_Retrieve_C.BPDidClearCarriedCharacter
struct AKaprosuchus_Character_BP_Retrieve_C_BPDidClearCarriedCharacter_Params
{
	class APrimalCharacter**                           PreviousCarriedCharacter;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Kaprosuchus_Character_BP_Retrieve.Kaprosuchus_Character_BP_Retrieve_C.UserConstructionScript
struct AKaprosuchus_Character_BP_Retrieve_C_UserConstructionScript_Params
{
};

// Function Kaprosuchus_Character_BP_Retrieve.Kaprosuchus_Character_BP_Retrieve_C.ExecuteUbergraph_Kaprosuchus_Character_BP_Retrieve
struct AKaprosuchus_Character_BP_Retrieve_C_ExecuteUbergraph_Kaprosuchus_Character_BP_Retrieve_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
