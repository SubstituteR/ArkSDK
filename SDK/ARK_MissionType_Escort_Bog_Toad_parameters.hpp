#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Escort_Bog_Toad_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.BPIsPhaseComplete
struct AMissionType_Escort_Bog_Toad_C_BPIsPhaseComplete_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.TryIncrementCheckpoint
struct AMissionType_Escort_Bog_Toad_C_TryIncrementCheckpoint_Params
{
	class AMissionTrigger**                            HitTrigger;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Succes;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               AtEnd;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.AttemptSpawnFrogFamily
struct AMissionType_Escort_Bog_Toad_C_AttemptSpawnFrogFamily_Params
{
};

// Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.SetDinoEscapeProperties
struct AMissionType_Escort_Bog_Toad_C_SetDinoEscapeProperties_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.MakeDinoBaby
struct AMissionType_Escort_Bog_Toad_C_MakeDinoBaby_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BabyAge;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.UserConstructionScript
struct AMissionType_Escort_Bog_Toad_C_UserConstructionScript_Params
{
};

// Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.BPOnMissionServerSetup
struct AMissionType_Escort_Bog_Toad_C_BPOnMissionServerSetup_Params
{
};

// Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.EscapePhaseStarted
struct AMissionType_Escort_Bog_Toad_C_EscapePhaseStarted_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.MultiFXFrogFamily
struct AMissionType_Escort_Bog_Toad_C_MultiFXFrogFamily_Params
{
	TArray<class APrimalDinoCharacter*>                Dinos;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.BPOnMissionComplete
struct AMissionType_Escort_Bog_Toad_C_BPOnMissionComplete_Params
{
	class AShooterCharacter**                          ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLastPhaseSuccess;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPRewarded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UPrimalItem*>                         ItemsRewarded;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.ExecuteUbergraph_MissionType_Escort_Bog_Toad
struct AMissionType_Escort_Bog_Toad_C_ExecuteUbergraph_MissionType_Escort_Bog_Toad_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
