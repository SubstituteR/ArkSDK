#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_VRBattle_Player_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.GetPlayerController
struct ABuff_VRBattle_Player_C_GetPlayerController_Params
{
	class APlayerController*                           PC;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.IsReady?
struct ABuff_VRBattle_Player_C_IsReady__Params
{
	bool                                               Ready_;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.BPServerHandleNetExecCommand
struct ABuff_VRBattle_Player_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.EnsureBossIsVisible
struct ABuff_VRBattle_Player_C_EnsureBossIsVisible_Params
{
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Play Current Boss Montage
struct ABuff_VRBattle_Player_C_Play_Current_Boss_Montage_Params
{
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.InitializeBossActor
struct ABuff_VRBattle_Player_C_InitializeBossActor_Params
{
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Does Companion Reaction Match?
struct ABuff_VRBattle_Player_C_Does_Companion_Reaction_Match__Params
{
	struct FVRBattleCompanionData                      BossReaction;                                             // (Parm, OutParm, ReferenceParm)
	struct FCompanionReactionData                      CompanionReaction;                                        // (Parm, OutParm, ReferenceParm)
	bool                                               Matches;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Does Boss CompanionReaction Match?
struct ABuff_VRBattle_Player_C_Does_Boss_CompanionReaction_Match__Params
{
	struct FVRBattleCompanionData                      BossReaction;                                             // (Parm, OutParm, ReferenceParm)
	struct FCompanionReactionData                      CompanionReaction;                                        // (Parm, OutParm, ReferenceParm)
	bool                                               Matches;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Get Current VR Battle Companion Data
struct ABuff_VRBattle_Player_C_Get_Current_VR_Battle_Companion_Data_Params
{
	bool                                               IsValid_;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVRBattleCompanionData                      Data;                                                     // (Parm, OutParm)
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Does Companion Reaction Data Match Current Request?
struct ABuff_VRBattle_Player_C_Does_Companion_Reaction_Data_Match_Current_Request__Params
{
	struct FCompanionReactionData                      ReactionData;                                             // (Parm, OutParm, ReferenceParm)
	bool                                               Matches;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Stop Companion Reaction
struct ABuff_VRBattle_Player_C_Stop_Companion_Reaction_Params
{
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.MakeCompanionHackingEvent
struct ABuff_VRBattle_Player_C_MakeCompanionHackingEvent_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.IsCarryingMaxCodeKeys
struct ABuff_VRBattle_Player_C_IsCarryingMaxCodeKeys_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Get Modified Max Code Keys That Can be Carried
struct ABuff_VRBattle_Player_C_Get_Modified_Max_Code_Keys_That_Can_be_Carried_Params
{
	int                                                Num;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.BuffTickServer
struct ABuff_VRBattle_Player_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.UserConstructionScript
struct ABuff_VRBattle_Player_C_UserConstructionScript_Params
{
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.DoSpawnPortalFX
struct ABuff_VRBattle_Player_C_DoSpawnPortalFX_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Server_StartCompanionHacking
struct ABuff_VRBattle_Player_C_Server_StartCompanionHacking_Params
{
	float                                              HackingDuration;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Kiosk;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Multicast_StartCompanionHacking
struct ABuff_VRBattle_Player_C_Multicast_StartCompanionHacking_Params
{
	float                                              HackDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Kiosk;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Server_StopCompanionHacking
struct ABuff_VRBattle_Player_C_Server_StopCompanionHacking_Params
{
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Multicast_StopCompanionHacking
struct ABuff_VRBattle_Player_C_Multicast_StopCompanionHacking_Params
{
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Server_StopCompanionReaction
struct ABuff_VRBattle_Player_C_Server_StopCompanionReaction_Params
{
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Multicast_StopCompanionReaction
struct ABuff_VRBattle_Player_C_Multicast_StopCompanionReaction_Params
{
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.BuffTickClient
struct ABuff_VRBattle_Player_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.StartBossCompanionReactionSequence
struct ABuff_VRBattle_Player_C_StartBossCompanionReactionSequence_Params
{
	struct FVRBattleBossCompanionReactionSequence      Sequence;                                                 // (Parm, OutParm, ReferenceParm)
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.PlayBossCompanionReaction
struct ABuff_VRBattle_Player_C_PlayBossCompanionReaction_Params
{
	int                                                ReactionIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.PlayBossLine
struct ABuff_VRBattle_Player_C_PlayBossLine_Params
{
	struct FVRBattleCompanionData                      CompanionData;                                            // (Parm)
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.PlayCompanionLine
struct ABuff_VRBattle_Player_C_PlayCompanionLine_Params
{
	struct FVRBattleCompanionData                      CompanionData;                                            // (Parm)
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.OnReactionPlayed_Delegate_Event
struct ABuff_VRBattle_Player_C_OnReactionPlayed_Delegate_Event_Params
{
	class APrimalBuff_Companion*                       ReactingCompanion;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCompanionReactionData                      ReactionData;                                             // (Parm, OutParm, ReferenceParm)
	int                                                UniqueID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.StartDelayedBossCompanionSequence
struct ABuff_VRBattle_Player_C_StartDelayedBossCompanionSequence_Params
{
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.BPDeactivated
struct ABuff_VRBattle_Player_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.OnReactionStopped_Delegate_Event
struct ABuff_VRBattle_Player_C_OnReactionStopped_Delegate_Event_Params
{
	class APrimalBuff_Companion*                       ReactingCompanion;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCompanionReactionData                      ReactionData;                                             // (Parm, OutParm, ReferenceParm)
	int                                                UniqueID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Cancel Boss Companion Sequence
struct ABuff_VRBattle_Player_C_Cancel_Boss_Companion_Sequence_Params
{
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.PlayPhaseEventSequence
struct ABuff_VRBattle_Player_C_PlayPhaseEventSequence_Params
{
	struct FName                                       PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVRBattlePhaseEvent>                   Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Multicast_OnPhaseEvent_Event
struct ABuff_VRBattle_Player_C_Multicast_OnPhaseEvent_Event_Params
{
	struct FName                                       PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVRBattlePhaseEvent>                   Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.ServerBroadcastPhaseEvent
struct ABuff_VRBattle_Player_C_ServerBroadcastPhaseEvent_Params
{
	struct FName                                       PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVRBattlePhaseEvent>                   EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Client_PlayPickupNoise
struct ABuff_VRBattle_Player_C_Client_PlayPickupNoise_Params
{
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.ShowBossLastWordsSubtitles
struct ABuff_VRBattle_Player_C_ShowBossLastWordsSubtitles_Params
{
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.CheckSendKeyFullAlert
struct ABuff_VRBattle_Player_C_CheckSendKeyFullAlert_Params
{
	bool                                               IsFull;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.ExecuteUbergraph_Buff_VRBattle_Player
struct ABuff_VRBattle_Player_C_ExecuteUbergraph_Buff_VRBattle_Player_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
