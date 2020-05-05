#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_AberrationPlayerGlobal_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_AberrationPlayerGlobal.Buff_AberrationPlayerGlobal_C.BuffTickClient
struct ABuff_AberrationPlayerGlobal_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_AberrationPlayerGlobal.Buff_AberrationPlayerGlobal_C.UserConstructionScript
struct ABuff_AberrationPlayerGlobal_C_UserConstructionScript_Params
{
};

// Function Buff_AberrationPlayerGlobal.Buff_AberrationPlayerGlobal_C.ExecuteUbergraph_Buff_AberrationPlayerGlobal
struct ABuff_AberrationPlayerGlobal_C_ExecuteUbergraph_Buff_AberrationPlayerGlobal_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
