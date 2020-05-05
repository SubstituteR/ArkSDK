#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_GenesisBossArenaKiller_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GenesisBossArenaKiller.GenesisBossArenaKiller_C.IsMissionActive
struct AGenesisBossArenaKiller_C_IsMissionActive_Params
{
	bool                                               OutVal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GenesisBossArenaKiller.GenesisBossArenaKiller_C.ReceiveTick
struct AGenesisBossArenaKiller_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenesisBossArenaKiller.GenesisBossArenaKiller_C.Get All Actors in Boss Arena
struct AGenesisBossArenaKiller_C_Get_All_Actors_in_Boss_Arena_Params
{
	bool                                               bIncludeUnconscious;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeUntamedCreatures;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeDead;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnorePlayers;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreDinos;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreAttached;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              TheActors;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function GenesisBossArenaKiller.GenesisBossArenaKiller_C.Kill All Occupants
struct AGenesisBossArenaKiller_C_Kill_All_Occupants_Params
{
};

// Function GenesisBossArenaKiller.GenesisBossArenaKiller_C.Teleport Back to Home
struct AGenesisBossArenaKiller_C_Teleport_Back_to_Home_Params
{
};

// Function GenesisBossArenaKiller.GenesisBossArenaKiller_C.UserConstructionScript
struct AGenesisBossArenaKiller_C_UserConstructionScript_Params
{
};

// Function GenesisBossArenaKiller.GenesisBossArenaKiller_C.ReceiveBeginPlay
struct AGenesisBossArenaKiller_C_ReceiveBeginPlay_Params
{
};

// Function GenesisBossArenaKiller.GenesisBossArenaKiller_C.KillThem
struct AGenesisBossArenaKiller_C_KillThem_Params
{
};

// Function GenesisBossArenaKiller.GenesisBossArenaKiller_C.ExecuteUbergraph_GenesisBossArenaKiller
struct AGenesisBossArenaKiller_C_ExecuteUbergraph_GenesisBossArenaKiller_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
