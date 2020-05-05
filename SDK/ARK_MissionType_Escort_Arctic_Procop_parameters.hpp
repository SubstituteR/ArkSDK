#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Escort_Arctic_Procop_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.SetDinoEscapeProperties
struct AMissionType_Escort_Arctic_Procop_C_SetDinoEscapeProperties_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ClearController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.AttemptSpawnMother
struct AMissionType_Escort_Arctic_Procop_C_AttemptSpawnMother_Params
{
};

// Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.TryIncrementCheckpoint
struct AMissionType_Escort_Arctic_Procop_C_TryIncrementCheckpoint_Params
{
	class AMissionTrigger**                            HitTrigger;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Succes;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               AtEnd;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.ExtraEscortDinoSetup
struct AMissionType_Escort_Arctic_Procop_C_ExtraEscortDinoSetup_Params
{
};

// Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.BPIsPhaseComplete
struct AMissionType_Escort_Arctic_Procop_C_BPIsPhaseComplete_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.DinoJump
struct AMissionType_Escort_Arctic_Procop_C_DinoJump_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.MakeEscortBaby
struct AMissionType_Escort_Arctic_Procop_C_MakeEscortBaby_Params
{
};

// Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.UserConstructionScript
struct AMissionType_Escort_Arctic_Procop_C_UserConstructionScript_Params
{
};

// Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.BPOnMissionTriggerBeginOverlap
struct AMissionType_Escort_Arctic_Procop_C_BPOnMissionTriggerBeginOverlap_Params
{
	class AMissionTrigger**                            Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.BPOnMissionServerSetup
struct AMissionType_Escort_Arctic_Procop_C_BPOnMissionServerSetup_Params
{
};

// Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.EscapePhaseStarted
struct AMissionType_Escort_Arctic_Procop_C_EscapePhaseStarted_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.OnThrottledServerTick
struct AMissionType_Escort_Arctic_Procop_C_OnThrottledServerTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.ExecuteUbergraph_MissionType_Escort_Arctic_Procop
struct AMissionType_Escort_Arctic_Procop_C_ExecuteUbergraph_MissionType_Escort_Arctic_Procop_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
