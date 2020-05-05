#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_RaceMissionHelper_HoverSkiff_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_RaceMissionHelper_HoverSkiff.Buff_RaceMissionHelper_HoverSkiff_C.BPPreventAddingOtherBuff
struct ABuff_RaceMissionHelper_HoverSkiff_C_BPPreventAddingOtherBuff_Params
{
	class UClass**                                     anotherBuffClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RaceMissionHelper_HoverSkiff.Buff_RaceMissionHelper_HoverSkiff_C.UserConstructionScript
struct ABuff_RaceMissionHelper_HoverSkiff_C_UserConstructionScript_Params
{
};

// Function Buff_RaceMissionHelper_HoverSkiff.Buff_RaceMissionHelper_HoverSkiff_C.ExecuteUbergraph_Buff_RaceMissionHelper_HoverSkiff
struct ABuff_RaceMissionHelper_HoverSkiff_C_ExecuteUbergraph_Buff_RaceMissionHelper_HoverSkiff_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
