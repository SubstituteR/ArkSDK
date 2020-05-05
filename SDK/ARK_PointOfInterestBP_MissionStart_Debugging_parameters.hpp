#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PointOfInterestBP_MissionStart_Debugging_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.client finish glitch fix multiuse
struct APointOfInterestBP_MissionStart_Debugging_C_client_finish_glitch_fix_multiuse_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.GetUsablePriority
struct APointOfInterestBP_MissionStart_Debugging_C_GetUsablePriority_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.GetGlitchMissionTag
struct APointOfInterestBP_MissionStart_Debugging_C_GetGlitchMissionTag_Params
{
	class APrimalBuff_MissionData*                     missionData;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       GlitchMissionTag;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.OnNearbyPlayerStateChange
struct APointOfInterestBP_MissionStart_Debugging_C_OnNearbyPlayerStateChange_Params
{
	bool                                               NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.RefreshPointData
struct APointOfInterestBP_MissionStart_Debugging_C_RefreshPointData_Params
{
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Is The Glitch Fixed
struct APointOfInterestBP_MissionStart_Debugging_C_Is_The_Glitch_Fixed_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Can Player Hold To Fix
struct APointOfInterestBP_MissionStart_Debugging_C_Can_Player_Hold_To_Fix_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Timer_Until_Fallback_Able_to_be_Activated_Again
struct APointOfInterestBP_MissionStart_Debugging_C_Timer_Until_Fallback_Able_to_be_Activated_Again_Params
{
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.fully give explorer note and play companion reaction
struct APointOfInterestBP_MissionStart_Debugging_C_fully_give_explorer_note_and_play_companion_reaction_Params
{
	int                                                ExplorerNoteIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController*                    Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Give Player Explorer Note
struct APointOfInterestBP_MissionStart_Debugging_C_Give_Player_Explorer_Note_Params
{
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Fully Charge
struct APointOfInterestBP_MissionStart_Debugging_C_Fully_Charge_Params
{
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.start lower charge
struct APointOfInterestBP_MissionStart_Debugging_C_start_lower_charge_Params
{
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.BPClientDoMultiUse
struct APointOfInterestBP_MissionStart_Debugging_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.BPGetMultiUseEntries
struct APointOfInterestBP_MissionStart_Debugging_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.OnGlitchFixStart
struct APointOfInterestBP_MissionStart_Debugging_C_OnGlitchFixStart_Params
{
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.OnGlitchFixEnd
struct APointOfInterestBP_MissionStart_Debugging_C_OnGlitchFixEnd_Params
{
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.UpdateFixState
struct APointOfInterestBP_MissionStart_Debugging_C_UpdateFixState_Params
{
	class AShooterCharacter*                           ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNewFixedState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInitialSync;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.BPServerHandleNetExecCommand
struct APointOfInterestBP_MissionStart_Debugging_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.CanPlayerStartMyMission
struct APointOfInterestBP_MissionStart_Debugging_C_CanPlayerStartMyMission_Params
{
	class APlayerController**                          PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.FixGlitchForPC
struct APointOfInterestBP_MissionStart_Debugging_C_FixGlitchForPC_Params
{
	class APlayerController*                           ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.SendFixStateToPC
struct APointOfInterestBP_MissionStart_Debugging_C_SendFixStateToPC_Params
{
	class APlayerController*                           ToPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInitialSync;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Has Completed This Glitch
struct APointOfInterestBP_MissionStart_Debugging_C_Has_Completed_This_Glitch_Params
{
	class AShooterCharacter*                           ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.BPClientHandleNetExecCommand
struct APointOfInterestBP_MissionStart_Debugging_C_BPClientHandleNetExecCommand_Params
{
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.StartMyMission
struct APointOfInterestBP_MissionStart_Debugging_C_StartMyMission_Params
{
	class APlayerController**                          WithPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.CanBeViewed
struct APointOfInterestBP_MissionStart_Debugging_C_CanBeViewed_Params
{
	class AActor**                                     ByActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.UserConstructionScript
struct APointOfInterestBP_MissionStart_Debugging_C_UserConstructionScript_Params
{
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Timeline_GlitchExpand__FinishedFunc
struct APointOfInterestBP_MissionStart_Debugging_C_Timeline_GlitchExpand__FinishedFunc_Params
{
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Timeline_GlitchExpand__UpdateFunc
struct APointOfInterestBP_MissionStart_Debugging_C_Timeline_GlitchExpand__UpdateFunc_Params
{
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Timeline_SpawnGlitch__FinishedFunc
struct APointOfInterestBP_MissionStart_Debugging_C_Timeline_SpawnGlitch__FinishedFunc_Params
{
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Timeline_SpawnGlitch__UpdateFunc
struct APointOfInterestBP_MissionStart_Debugging_C_Timeline_SpawnGlitch__UpdateFunc_Params
{
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.increase fixing pitch__FinishedFunc
struct APointOfInterestBP_MissionStart_Debugging_C_increase_fixing_pitch__FinishedFunc_Params
{
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.increase fixing pitch__UpdateFunc
struct APointOfInterestBP_MissionStart_Debugging_C_increase_fixing_pitch__UpdateFunc_Params
{
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.BndEvt__DetectNearbyPlayersSphere_K2Node_ComponentBoundEvent_162_ComponentBeginOverlapSignature__DelegateSignature
struct APointOfInterestBP_MissionStart_Debugging_C_BndEvt__DetectNearbyPlayersSphere_K2Node_ComponentBoundEvent_162_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Timer_Client_CheckForNoPlayers
struct APointOfInterestBP_MissionStart_Debugging_C_Timer_Client_CheckForNoPlayers_Params
{
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Timer_Server_TickFixing
struct APointOfInterestBP_MissionStart_Debugging_C_Timer_Server_TickFixing_Params
{
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Timer_CheckUntilLocalPlayers
struct APointOfInterestBP_MissionStart_Debugging_C_Timer_CheckUntilLocalPlayers_Params
{
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.BindEventForReactionVFX
struct APointOfInterestBP_MissionStart_Debugging_C_BindEventForReactionVFX_Params
{
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Delegate_OnCompanionReactionVfxSpawned__DelegateSignature_Event
struct APointOfInterestBP_MissionStart_Debugging_C_Delegate_OnCompanionReactionVfxSpawned__DelegateSignature_Event_Params
{
	class APrimalBuff_Companion*                       SpawnedByCompanion;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    SpawnedComp_VFX;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.request try fix glitch
struct APointOfInterestBP_MissionStart_Debugging_C_request_try_fix_glitch_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.increase fixing pitch event
struct APointOfInterestBP_MissionStart_Debugging_C_increase_fixing_pitch_event_Params
{
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.ReceiveBeginPlay
struct APointOfInterestBP_MissionStart_Debugging_C_ReceiveBeginPlay_Params
{
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Set glitch visible
struct APointOfInterestBP_MissionStart_Debugging_C_Set_glitch_visible_Params
{
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.force begin play events
struct APointOfInterestBP_MissionStart_Debugging_C_force_begin_play_events_Params
{
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.delay play reaction
struct APointOfInterestBP_MissionStart_Debugging_C_delay_play_reaction_Params
{
	struct FCompanionReactionData                      reaction;                                                 // (Parm)
	class APrimalBuff_Companion*                       HLNA;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.retry overlap events
struct APointOfInterestBP_MissionStart_Debugging_C_retry_overlap_events_Params
{
};

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.ExecuteUbergraph_PointOfInterestBP_MissionStart_Debugging
struct APointOfInterestBP_MissionStart_Debugging_C_ExecuteUbergraph_PointOfInterestBP_MissionStart_Debugging_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
