#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Escort_Ocean_Turtle_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.AttemptSpawnTurtlePals
struct AMissionType_Escort_Ocean_Turtle_C_AttemptSpawnTurtlePals_Params
{
};

// Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.BPIsPhaseComplete
struct AMissionType_Escort_Ocean_Turtle_C_BPIsPhaseComplete_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.SetDinoEscapeProperties
struct AMissionType_Escort_Ocean_Turtle_C_SetDinoEscapeProperties_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.AttemptUpdateDeepWaterSpawnWeights
struct AMissionType_Escort_Ocean_Turtle_C_AttemptUpdateDeepWaterSpawnWeights_Params
{
};

// Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.TryIncrementCheckpoint
struct AMissionType_Escort_Ocean_Turtle_C_TryIncrementCheckpoint_Params
{
	class AMissionTrigger**                            HitTrigger;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Succes;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               AtEnd;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.SpawnCyclones
struct AMissionType_Escort_Ocean_Turtle_C_SpawnCyclones_Params
{
	TArray<class AMissionServerSidePoint*>             CyclonePoints;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.GetCyclonesThisCheckpoint
struct AMissionType_Escort_Ocean_Turtle_C_GetCyclonesThisCheckpoint_Params
{
};

// Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.ExtraEscortDinoSetup
struct AMissionType_Escort_Ocean_Turtle_C_ExtraEscortDinoSetup_Params
{
};

// Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.ExtraFollowerSetup
struct AMissionType_Escort_Ocean_Turtle_C_ExtraFollowerSetup_Params
{
	int*                                               index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.UserConstructionScript
struct AMissionType_Escort_Ocean_Turtle_C_UserConstructionScript_Params
{
};

// Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.BPOnMissionServerSetup
struct AMissionType_Escort_Ocean_Turtle_C_BPOnMissionServerSetup_Params
{
};

// Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.EscapePhaseStarted
struct AMissionType_Escort_Ocean_Turtle_C_EscapePhaseStarted_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.MultiFXTurtlePals
struct AMissionType_Escort_Ocean_Turtle_C_MultiFXTurtlePals_Params
{
	TArray<class APrimalDinoCharacter*>                Dinos;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.BPOnMissionComplete
struct AMissionType_Escort_Ocean_Turtle_C_BPOnMissionComplete_Params
{
	class AShooterCharacter**                          ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLastPhaseSuccess;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPRewarded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UPrimalItem*>                         ItemsRewarded;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.ExecuteUbergraph_MissionType_Escort_Ocean_Turtle
struct AMissionType_Escort_Ocean_Turtle_C_ExecuteUbergraph_MissionType_Escort_Ocean_Turtle_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
