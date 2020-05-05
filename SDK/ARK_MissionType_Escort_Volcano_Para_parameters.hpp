#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Escort_Volcano_Para_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.TryIncrementCheckpoint
struct AMissionType_Escort_Volcano_Para_C_TryIncrementCheckpoint_Params
{
	class AMissionTrigger**                            HitTrigger;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Succes;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               AtEnd;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.BPIsPhaseComplete
struct AMissionType_Escort_Volcano_Para_C_BPIsPhaseComplete_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.SetDinoEscapeProperties
struct AMissionType_Escort_Volcano_Para_C_SetDinoEscapeProperties_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.GetExplosionEmittersThisCheckpoint
struct AMissionType_Escort_Volcano_Para_C_GetExplosionEmittersThisCheckpoint_Params
{
};

// Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.SpawnExplosionEmitter
struct AMissionType_Escort_Volcano_Para_C_SpawnExplosionEmitter_Params
{
};

// Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.ExtraEscortDinoSetup
struct AMissionType_Escort_Volcano_Para_C_ExtraEscortDinoSetup_Params
{
};

// Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.ExtraFollowerSetup
struct AMissionType_Escort_Volcano_Para_C_ExtraFollowerSetup_Params
{
	int*                                               index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.UserConstructionScript
struct AMissionType_Escort_Volcano_Para_C_UserConstructionScript_Params
{
};

// Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.Event_EscortDinoDied
struct AMissionType_Escort_Volcano_Para_C_Event_EscortDinoDied_Params
{
	class APrimalCharacter**                           DiedCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.BPOnMissionServerSetup
struct AMissionType_Escort_Volcano_Para_C_BPOnMissionServerSetup_Params
{
};

// Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.EscapePhaseStarted
struct AMissionType_Escort_Volcano_Para_C_EscapePhaseStarted_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.ExecuteUbergraph_MissionType_Escort_Volcano_Para
struct AMissionType_Escort_Volcano_Para_C_ExecuteUbergraph_MissionType_Escort_Volcano_Para_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
