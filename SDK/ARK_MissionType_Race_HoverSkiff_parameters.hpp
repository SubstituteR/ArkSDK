#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Race_HoverSkiff_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionType_Race_HoverSkiff.MissionType_Race_HoverSkiff_C.OnMissionPhaseStarted
struct AMissionType_Race_HoverSkiff_C_OnMissionPhaseStarted_Params
{
	struct FName*                                      OldPhase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NewPhase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race_HoverSkiff.MissionType_Race_HoverSkiff_C.UserConstructionScript
struct AMissionType_Race_HoverSkiff_C_UserConstructionScript_Params
{
};

// Function MissionType_Race_HoverSkiff.MissionType_Race_HoverSkiff_C.ExecuteUbergraph_MissionType_Race_HoverSkiff
struct AMissionType_Race_HoverSkiff_C_ExecuteUbergraph_MissionType_Race_HoverSkiff_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
