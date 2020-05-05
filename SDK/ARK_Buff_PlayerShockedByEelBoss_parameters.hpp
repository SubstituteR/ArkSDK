#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_PlayerShockedByEelBoss_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_PlayerShockedByEelBoss.Buff_PlayerShockedByEelBoss_C.ShockShake
struct ABuff_PlayerShockedByEelBoss_C_ShockShake_Params
{
};

// Function Buff_PlayerShockedByEelBoss.Buff_PlayerShockedByEelBoss_C.BuffTickClient
struct ABuff_PlayerShockedByEelBoss_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PlayerShockedByEelBoss.Buff_PlayerShockedByEelBoss_C.UserConstructionScript
struct ABuff_PlayerShockedByEelBoss_C_UserConstructionScript_Params
{
};

// Function Buff_PlayerShockedByEelBoss.Buff_PlayerShockedByEelBoss_C.ReceiveBeginPlay
struct ABuff_PlayerShockedByEelBoss_C_ReceiveBeginPlay_Params
{
};

// Function Buff_PlayerShockedByEelBoss.Buff_PlayerShockedByEelBoss_C.ExecuteUbergraph_Buff_PlayerShockedByEelBoss
struct ABuff_PlayerShockedByEelBoss_C_ExecuteUbergraph_Buff_PlayerShockedByEelBoss_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
