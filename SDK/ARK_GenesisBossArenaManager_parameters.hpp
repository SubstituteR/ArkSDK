#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_GenesisBossArenaManager_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GenesisBossArenaManager.GenesisBossArenaManager_C.Get All Actors in Boss Arena
struct AGenesisBossArenaManager_C_Get_All_Actors_in_Boss_Arena_Params
{
	bool                                               bIncludeUnconscious;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeUntamedCreatures;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeDead;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnorePlayers;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreDinos;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreAttached;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              TheActors;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function GenesisBossArenaManager.GenesisBossArenaManager_C.Kill All Occupants
struct AGenesisBossArenaManager_C_Kill_All_Occupants_Params
{
};

// Function GenesisBossArenaManager.GenesisBossArenaManager_C.Teleport Back to Home
struct AGenesisBossArenaManager_C_Teleport_Back_to_Home_Params
{
};

// Function GenesisBossArenaManager.GenesisBossArenaManager_C.UserConstructionScript
struct AGenesisBossArenaManager_C_UserConstructionScript_Params
{
};

// Function GenesisBossArenaManager.GenesisBossArenaManager_C.ReceiveBeginPlay
struct AGenesisBossArenaManager_C_ReceiveBeginPlay_Params
{
};

// Function GenesisBossArenaManager.GenesisBossArenaManager_C.ExecuteUbergraph_GenesisBossArenaManager
struct AGenesisBossArenaManager_C_ExecuteUbergraph_GenesisBossArenaManager_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
