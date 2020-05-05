#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Bog_Raptor_Character_BP_Retrieve_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Bog_Raptor_Character_BP_Retrieve.Bog_Raptor_Character_BP_Retrieve_C.BlueprintCanAttack
struct ABog_Raptor_Character_BP_Retrieve_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Bog_Raptor_Character_BP_Retrieve.Bog_Raptor_Character_BP_Retrieve_C.UserConstructionScript
struct ABog_Raptor_Character_BP_Retrieve_C_UserConstructionScript_Params
{
};

// Function Bog_Raptor_Character_BP_Retrieve.Bog_Raptor_Character_BP_Retrieve_C.ExecuteUbergraph_Bog_Raptor_Character_BP_Retrieve
struct ABog_Raptor_Character_BP_Retrieve_C_ExecuteUbergraph_Bog_Raptor_Character_BP_Retrieve_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
