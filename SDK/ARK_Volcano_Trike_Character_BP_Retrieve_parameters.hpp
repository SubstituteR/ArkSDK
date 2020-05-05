#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Volcano_Trike_Character_BP_Retrieve_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Volcano_Trike_Character_BP_Retrieve.Volcano_Trike_Character_BP_Retrieve_C.DoRamImpact
struct AVolcano_Trike_Character_BP_Retrieve_C_DoRamImpact_Params
{
	bool                                               HitSomething;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Volcano_Trike_Character_BP_Retrieve.Volcano_Trike_Character_BP_Retrieve_C.BlueprintCanAttack
struct AVolcano_Trike_Character_BP_Retrieve_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Volcano_Trike_Character_BP_Retrieve.Volcano_Trike_Character_BP_Retrieve_C.UserConstructionScript
struct AVolcano_Trike_Character_BP_Retrieve_C_UserConstructionScript_Params
{
};

// Function Volcano_Trike_Character_BP_Retrieve.Volcano_Trike_Character_BP_Retrieve_C.ExecuteUbergraph_Volcano_Trike_Character_BP_Retrieve
struct AVolcano_Trike_Character_BP_Retrieve_C_ExecuteUbergraph_Volcano_Trike_Character_BP_Retrieve_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
