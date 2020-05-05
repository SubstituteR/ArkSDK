#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Mission_Escort_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Mission_Escort.Buff_Mission_Escort_C.UserConstructionScript
struct ABuff_Mission_Escort_C_UserConstructionScript_Params
{
};

// Function Buff_Mission_Escort.Buff_Mission_Escort_C.BuffTickClient
struct ABuff_Mission_Escort_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Mission_Escort.Buff_Mission_Escort_C.ExecuteUbergraph_Buff_Mission_Escort
struct ABuff_Mission_Escort_C_ExecuteUbergraph_Buff_Mission_Escort_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
