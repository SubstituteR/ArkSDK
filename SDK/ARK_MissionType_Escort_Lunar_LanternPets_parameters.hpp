#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Escort_Lunar_LanternPets_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.InitMeshCheckpoints
struct AMissionType_Escort_Lunar_LanternPets_C_InitMeshCheckpoints_Params
{
};

// Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.GeneratePhaseRequirements
struct AMissionType_Escort_Lunar_LanternPets_C_GeneratePhaseRequirements_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionPhaseRequirement>            Requirements;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.TryIncrementCheckpoint
struct AMissionType_Escort_Lunar_LanternPets_C_TryIncrementCheckpoint_Params
{
	class AMissionTrigger**                            HitTrigger;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Succes;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               AtEnd;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.BPOnMissionDeactivated
struct AMissionType_Escort_Lunar_LanternPets_C_BPOnMissionDeactivated_Params
{
};

// Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.BPIsPhaseComplete
struct AMissionType_Escort_Lunar_LanternPets_C_BPIsPhaseComplete_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.SpawnTriggerDinos
struct AMissionType_Escort_Lunar_LanternPets_C_SpawnTriggerDinos_Params
{
	class AMissionTrigger**                            Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.UserConstructionScript
struct AMissionType_Escort_Lunar_LanternPets_C_UserConstructionScript_Params
{
};

// Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.BPOnMissionServerSetup
struct AMissionType_Escort_Lunar_LanternPets_C_BPOnMissionServerSetup_Params
{
};

// Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.EscapePhaseStarted
struct AMissionType_Escort_Lunar_LanternPets_C_EscapePhaseStarted_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.EscortPhaseStarted
struct AMissionType_Escort_Lunar_LanternPets_C_EscortPhaseStarted_Params
{
	struct FName*                                      OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.MultiDoTeleportFX
struct AMissionType_Escort_Lunar_LanternPets_C_MultiDoTeleportFX_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rot;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.OnThrottledServerTick
struct AMissionType_Escort_Lunar_LanternPets_C_OnThrottledServerTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.Event_EscortDinoDied
struct AMissionType_Escort_Lunar_LanternPets_C_Event_EscortDinoDied_Params
{
	class APrimalCharacter**                           DiedCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.ExecuteUbergraph_MissionType_Escort_Lunar_LanternPets
struct AMissionType_Escort_Lunar_LanternPets_C_ExecuteUbergraph_MissionType_Escort_Lunar_LanternPets_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
