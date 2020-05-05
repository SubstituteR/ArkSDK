#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_C.OnMissionPhaseStarted
struct AMissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_C_OnMissionPhaseStarted_Params
{
	struct FName*                                      OldPhase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NewPhase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_C.UserConstructionScript
struct AMissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_C_UserConstructionScript_Params
{
};

// Function MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_C.ExecuteUbergraph_MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly
struct AMissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_C_ExecuteUbergraph_MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
