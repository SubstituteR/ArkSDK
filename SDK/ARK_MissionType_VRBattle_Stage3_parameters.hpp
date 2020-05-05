#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_VRBattle_Stage3_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionType_VRBattle_Stage3.MissionType_VRBattle_Stage3_C.UserConstructionScript
struct AMissionType_VRBattle_Stage3_C_UserConstructionScript_Params
{
};

// Function MissionType_VRBattle_Stage3.MissionType_VRBattle_Stage3_C.OnTeleportAndLevelDestroyPhaseStarted
struct AMissionType_VRBattle_Stage3_C_OnTeleportAndLevelDestroyPhaseStarted_Params
{
	struct FName*                                      OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Stage3.MissionType_VRBattle_Stage3_C.ExecuteUbergraph_MissionType_VRBattle_Stage3
struct AMissionType_VRBattle_Stage3_C_ExecuteUbergraph_MissionType_VRBattle_Stage3_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
