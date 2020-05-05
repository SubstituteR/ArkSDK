#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Escort_Ocean_Dolphin_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionType_Escort_Ocean_Dolphin.MissionType_Escort_Ocean_Dolphin_C.SetDinoEscapeProperties
struct AMissionType_Escort_Ocean_Dolphin_C_SetDinoEscapeProperties_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ClearController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Ocean_Dolphin.MissionType_Escort_Ocean_Dolphin_C.AttemptSpawnPtero
struct AMissionType_Escort_Ocean_Dolphin_C_AttemptSpawnPtero_Params
{
};

// Function MissionType_Escort_Ocean_Dolphin.MissionType_Escort_Ocean_Dolphin_C.TryIncrementCheckpoint
struct AMissionType_Escort_Ocean_Dolphin_C_TryIncrementCheckpoint_Params
{
	class AMissionTrigger**                            HitTrigger;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Succes;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               AtEnd;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Ocean_Dolphin.MissionType_Escort_Ocean_Dolphin_C.BPIsPhaseComplete
struct AMissionType_Escort_Ocean_Dolphin_C_BPIsPhaseComplete_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Escort_Ocean_Dolphin.MissionType_Escort_Ocean_Dolphin_C.UserConstructionScript
struct AMissionType_Escort_Ocean_Dolphin_C_UserConstructionScript_Params
{
};

// Function MissionType_Escort_Ocean_Dolphin.MissionType_Escort_Ocean_Dolphin_C.BPOnMissionServerSetup
struct AMissionType_Escort_Ocean_Dolphin_C_BPOnMissionServerSetup_Params
{
};

// Function MissionType_Escort_Ocean_Dolphin.MissionType_Escort_Ocean_Dolphin_C.EscapePhaseStarted
struct AMissionType_Escort_Ocean_Dolphin_C_EscapePhaseStarted_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Ocean_Dolphin.MissionType_Escort_Ocean_Dolphin_C.BPOnMissionTriggerBeginOverlap
struct AMissionType_Escort_Ocean_Dolphin_C_BPOnMissionTriggerBeginOverlap_Params
{
	class AMissionTrigger**                            Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Ocean_Dolphin.MissionType_Escort_Ocean_Dolphin_C.ExecuteUbergraph_MissionType_Escort_Ocean_Dolphin
struct AMissionType_Escort_Ocean_Dolphin_C_ExecuteUbergraph_MissionType_Escort_Ocean_Dolphin_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
