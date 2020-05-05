#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Kapro_Character_BP_Race_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Kapro_Character_BP_Race.Kapro_Character_BP_Race_C.BlueprintAdjustOutputDamage
struct AKapro_Character_BP_Race_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Kapro_Character_BP_Race.Kapro_Character_BP_Race_C.UserConstructionScript
struct AKapro_Character_BP_Race_C_UserConstructionScript_Params
{
};

// Function Kapro_Character_BP_Race.Kapro_Character_BP_Race_C.ExecuteUbergraph_Kapro_Character_BP_Race
struct AKapro_Character_BP_Race_C_ExecuteUbergraph_Kapro_Character_BP_Race_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
