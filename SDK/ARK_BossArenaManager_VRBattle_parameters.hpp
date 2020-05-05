#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BossArenaManager_VRBattle_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BossArenaManager_VRBattle.BossArenaManager_VRBattle_C.IsAVRBattleMissionActive?
struct ABossArenaManager_VRBattle_C_IsAVRBattleMissionActive__Params
{
	bool                                               FoundAVRMission;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BossArenaManager_VRBattle.BossArenaManager_VRBattle_C.UserConstructionScript
struct ABossArenaManager_VRBattle_C_UserConstructionScript_Params
{
};

// Function BossArenaManager_VRBattle.BossArenaManager_VRBattle_C.ReceiveBeginPlay
struct ABossArenaManager_VRBattle_C_ReceiveBeginPlay_Params
{
};

// Function BossArenaManager_VRBattle.BossArenaManager_VRBattle_C.ExecuteUbergraph_BossArenaManager_VRBattle
struct ABossArenaManager_VRBattle_C_ExecuteUbergraph_BossArenaManager_VRBattle_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
