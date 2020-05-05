#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_DissolvePawn_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_DissolvePawn.Buff_DissolvePawn_C.InitDeactivationTime
struct ABuff_DissolvePawn_C_InitDeactivationTime_Params
{
};

// Function Buff_DissolvePawn.Buff_DissolvePawn_C.ReceiveBeginPlay
struct ABuff_DissolvePawn_C_ReceiveBeginPlay_Params
{
};

// Function Buff_DissolvePawn.Buff_DissolvePawn_C.BuffTickClient
struct ABuff_DissolvePawn_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DissolvePawn.Buff_DissolvePawn_C.UserConstructionScript
struct ABuff_DissolvePawn_C_UserConstructionScript_Params
{
};

// Function Buff_DissolvePawn.Buff_DissolvePawn_C.ExecuteUbergraph_Buff_DissolvePawn
struct ABuff_DissolvePawn_C_ExecuteUbergraph_Buff_DissolvePawn_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
