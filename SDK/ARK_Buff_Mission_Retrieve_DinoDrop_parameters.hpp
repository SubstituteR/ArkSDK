#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Mission_Retrieve_DinoDrop_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Mission_Retrieve_DinoDrop.Buff_Mission_Retrieve_DinoDrop_C.UserConstructionScript
struct ABuff_Mission_Retrieve_DinoDrop_C_UserConstructionScript_Params
{
};

// Function Buff_Mission_Retrieve_DinoDrop.Buff_Mission_Retrieve_DinoDrop_C.BuffTickClient
struct ABuff_Mission_Retrieve_DinoDrop_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Mission_Retrieve_DinoDrop.Buff_Mission_Retrieve_DinoDrop_C.ExecuteUbergraph_Buff_Mission_Retrieve_DinoDrop
struct ABuff_Mission_Retrieve_DinoDrop_C_ExecuteUbergraph_Buff_Mission_Retrieve_DinoDrop_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
