#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_MissionEscortDino_AllowCarry_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_MissionEscortDino_AllowCarry.Buff_MissionEscortDino_AllowCarry_C.BPCanBeCarried
struct ABuff_MissionEscortDino_AllowCarry_C_BPCanBeCarried_Params
{
	class APrimalCharacter**                           ByCarrier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_MissionEscortDino_AllowCarry.Buff_MissionEscortDino_AllowCarry_C.UserConstructionScript
struct ABuff_MissionEscortDino_AllowCarry_C_UserConstructionScript_Params
{
};

// Function Buff_MissionEscortDino_AllowCarry.Buff_MissionEscortDino_AllowCarry_C.ExecuteUbergraph_Buff_MissionEscortDino_AllowCarry
struct ABuff_MissionEscortDino_AllowCarry_C_ExecuteUbergraph_Buff_MissionEscortDino_AllowCarry_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
