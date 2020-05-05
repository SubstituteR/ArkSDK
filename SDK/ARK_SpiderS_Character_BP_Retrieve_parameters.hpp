#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_SpiderS_Character_BP_Retrieve_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SpiderS_Character_BP_Retrieve.SpiderS_Character_BP_Retrieve_C.BlueprintCanAttack
struct ASpiderS_Character_BP_Retrieve_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpiderS_Character_BP_Retrieve.SpiderS_Character_BP_Retrieve_C.UserConstructionScript
struct ASpiderS_Character_BP_Retrieve_C_UserConstructionScript_Params
{
};

// Function SpiderS_Character_BP_Retrieve.SpiderS_Character_BP_Retrieve_C.ExecuteUbergraph_SpiderS_Character_BP_Retrieve
struct ASpiderS_Character_BP_Retrieve_C_ExecuteUbergraph_SpiderS_Character_BP_Retrieve_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
