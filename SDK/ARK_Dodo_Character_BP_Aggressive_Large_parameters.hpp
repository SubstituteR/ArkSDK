#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Dodo_Character_BP_Aggressive_Large_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Dodo_Character_BP_Aggressive_Large.Dodo_Character_BP_Aggressive_Large_C.BPAdjustDamage
struct ADodo_Character_BP_Aggressive_Large_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dodo_Character_BP_Aggressive_Large.Dodo_Character_BP_Aggressive_Large_C.UserConstructionScript
struct ADodo_Character_BP_Aggressive_Large_C_UserConstructionScript_Params
{
};

// Function Dodo_Character_BP_Aggressive_Large.Dodo_Character_BP_Aggressive_Large_C.ExecuteUbergraph_Dodo_Character_BP_Aggressive_Large
struct ADodo_Character_BP_Aggressive_Large_C_ExecuteUbergraph_Dodo_Character_BP_Aggressive_Large_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
