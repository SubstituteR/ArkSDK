#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Sport_BasketBall_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.OnThrottledClientTick
struct AMissionType_Sport_BasketBall_C_OnThrottledClientTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPOnMissionPlayerRespawned
struct AMissionType_Sport_BasketBall_C_BPOnMissionPlayerRespawned_Params
{
	class AShooterCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.clean up team controllers
struct AMissionType_Sport_BasketBall_C_clean_up_team_controllers_Params
{
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPOnPlayerRemovedFromMission
struct AMissionType_Sport_BasketBall_C_BPOnPlayerRemovedFromMission_Params
{
	class AShooterCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromMissionCompleteEvent;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLastPhaseSuccess;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.correct the court teams
struct AMissionType_Sport_BasketBall_C_correct_the_court_teams_Params
{
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.try add player to game and team
struct AMissionType_Sport_BasketBall_C_try_add_player_to_game_and_team_Params
{
	class AActor*                                      InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               red_team;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               first_time_join;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.add player to mission on overlap
struct AMissionType_Sport_BasketBall_C_add_player_to_mission_on_overlap_Params
{
	class AShooterCharacter*                           InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.get court center
struct AMissionType_Sport_BasketBall_C_get_court_center_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPOnMissionDinoDied
struct AMissionType_Sport_BasketBall_C_BPOnMissionDinoDied_Params
{
	class APrimalDinoCharacter**                       Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class AController**                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.create spline lines
struct AMissionType_Sport_BasketBall_C_create_spline_lines_Params
{
	struct FVector                                     end_loc;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     start_loc;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.On End Overlap
struct AMissionType_Sport_BasketBall_C_On_End_Overlap_Params
{
	class AMissionTrigger*                             Mission_Trigger;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Overlapping_Actor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.On Overlap
struct AMissionType_Sport_BasketBall_C_On_Overlap_Params
{
	class AMissionTrigger*                             Mission_Trigger;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Overlapping_Actor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPOnPlayerAddedToMission
struct AMissionType_Sport_BasketBall_C_BPOnPlayerAddedToMission_Params
{
	class AShooterCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Set Up Court Environmental Protection Buff
struct AMissionType_Sport_BasketBall_C_Set_Up_Court_Environmental_Protection_Buff_Params
{
	class APrimalCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Inside_Court_Bounds;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPOnMissionPlayerLeftBounds
struct AMissionType_Sport_BasketBall_C_BPOnMissionPlayerLeftBounds_Params
{
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPOnMissionDeactivated
struct AMissionType_Sport_BasketBall_C_BPOnMissionDeactivated_Params
{
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Timer Restriction for Determining Blue Shot
struct AMissionType_Sport_BasketBall_C_Timer_Restriction_for_Determining_Blue_Shot_Params
{
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Timer Restriction for Determining Red Shot
struct AMissionType_Sport_BasketBall_C_Timer_Restriction_for_Determining_Red_Shot_Params
{
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Disable Shot Invalid Check
struct AMissionType_Sport_BasketBall_C_Disable_Shot_Invalid_Check_Params
{
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.TimerToPreventUnderNetShots
struct AMissionType_Sport_BasketBall_C_TimerToPreventUnderNetShots_Params
{
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Add Player To Team
struct AMissionType_Sport_BasketBall_C_Add_Player_To_Team_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AShooterPlayerController*>            team_to_add_to_controllers;                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AShooterPlayerController*>            opponent_team_controllers;                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Spawn Jump Pad
struct AMissionType_Sport_BasketBall_C_Spawn_Jump_Pad_Params
{
	class AMissionServerSidePoint*                     InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPOnMissionComplete
struct AMissionType_Sport_BasketBall_C_BPOnMissionComplete_Params
{
	class AShooterCharacter**                          ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLastPhaseSuccess;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPRewarded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UPrimalItem*>                         ItemsRewarded;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Stop Showing Net Indicator Blue
struct AMissionType_Sport_BasketBall_C_Stop_Showing_Net_Indicator_Blue_Params
{
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Stop Showing Net Indicator Red
struct AMissionType_Sport_BasketBall_C_Stop_Showing_Net_Indicator_Red_Params
{
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Update Indicators
struct AMissionType_Sport_BasketBall_C_Update_Indicators_Params
{
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.OnThrottledServerTick
struct AMissionType_Sport_BasketBall_C_OnThrottledServerTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.IsMissionComplete
struct AMissionType_Sport_BasketBall_C_IsMissionComplete_Params
{
	class AShooterCharacter**                          forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPGetMissionTimerText
struct AMissionType_Sport_BasketBall_C_BPGetMissionTimerText_Params
{
	class AShooterPlayerController**                   ShootCont;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Stop Showing Ball Indicator Blue
struct AMissionType_Sport_BasketBall_C_Stop_Showing_Ball_Indicator_Blue_Params
{
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Stop Showing Ball Indicator Red
struct AMissionType_Sport_BasketBall_C_Stop_Showing_Ball_Indicator_Red_Params
{
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.GetPerPlayerWorldIndicators
struct AMissionType_Sport_BasketBall_C_GetPerPlayerWorldIndicators_Params
{
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionWorldIndicator>              WorldIndicators;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Score Goal
struct AMissionType_Sport_BasketBall_C_Score_Goal_Params
{
	class APrimalDinoCharacter*                        Ball;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionTrigger*                             Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.check if valid upper basket entry
struct AMissionType_Sport_BasketBall_C_check_if_valid_upper_basket_entry_Params
{
	class ACharacter*                                  Ball;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.AddBoxVisuals
struct AMissionType_Sport_BasketBall_C_AddBoxVisuals_Params
{
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.CalculateShotValue
struct AMissionType_Sport_BasketBall_C_CalculateShotValue_Params
{
	class AMissionTrigger*                             GoalRef;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ShotValue;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.ForceTickReqUpdate
struct AMissionType_Sport_BasketBall_C_ForceTickReqUpdate_Params
{
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.GeneratePhaseRequirements
struct AMissionType_Sport_BasketBall_C_GeneratePhaseRequirements_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionPhaseRequirement>            Requirements;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPIsPhaseComplete
struct AMissionType_Sport_BasketBall_C_BPIsPhaseComplete_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.UserConstructionScript
struct AMissionType_Sport_BasketBall_C_UserConstructionScript_Params
{
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Timeline_0__FinishedFunc
struct AMissionType_Sport_BasketBall_C_Timeline_0__FinishedFunc_Params
{
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Timeline_0__UpdateFunc
struct AMissionType_Sport_BasketBall_C_Timeline_0__UpdateFunc_Params
{
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPOnMissionServerSetup
struct AMissionType_Sport_BasketBall_C_BPOnMissionServerSetup_Params
{
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.SetupPhaseStarted
struct AMissionType_Sport_BasketBall_C_SetupPhaseStarted_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.SetupPhaseEnded
struct AMissionType_Sport_BasketBall_C_SetupPhaseEnded_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.TossPhaseStarted
struct AMissionType_Sport_BasketBall_C_TossPhaseStarted_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.TossPhaseEnded
struct AMissionType_Sport_BasketBall_C_TossPhaseEnded_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.InMatchPhaseStarted
struct AMissionType_Sport_BasketBall_C_InMatchPhaseStarted_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.InMatchPhaseEnded
struct AMissionType_Sport_BasketBall_C_InMatchPhaseEnded_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.MatchFinishedPhaseStarted
struct AMissionType_Sport_BasketBall_C_MatchFinishedPhaseStarted_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.MatchFinishedPhaseEnded
struct AMissionType_Sport_BasketBall_C_MatchFinishedPhaseEnded_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPOnMissionTriggerBeginOverlap
struct AMissionType_Sport_BasketBall_C_BPOnMissionTriggerBeginOverlap_Params
{
	class AMissionTrigger**                            Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPOnMissionTriggerEndOverlap
struct AMissionType_Sport_BasketBall_C_BPOnMissionTriggerEndOverlap_Params
{
	class AMissionTrigger**                            Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.SpawnGoalVFX
struct AMissionType_Sport_BasketBall_C_SpawnGoalVFX_Params
{
	struct UObject_FTransform                          Transform;                                                // (Parm, IsPlainOldData)
	class FString                                      Text;                                                     // (Parm, ZeroConstructor)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.RepDebugSpheres
struct AMissionType_Sport_BasketBall_C_RepDebugSpheres_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.RepAddTeamSelectBounds
struct AMissionType_Sport_BasketBall_C_RepAddTeamSelectBounds_Params
{
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.RepRemoveTeamSelectBounds
struct AMissionType_Sport_BasketBall_C_RepRemoveTeamSelectBounds_Params
{
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Respawn Ball
struct AMissionType_Sport_BasketBall_C_Respawn_Ball_Params
{
	bool                                               red_team;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Blue_Team;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Initially add player to red team
struct AMissionType_Sport_BasketBall_C_Initially_add_player_to_red_team_Params
{
	class AActor*                                      Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Initially add player to blue team
struct AMissionType_Sport_BasketBall_C_Initially_add_player_to_blue_team_Params
{
	class AActor*                                      Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Send Notification has joined red team
struct AMissionType_Sport_BasketBall_C_Send_Notification_has_joined_red_team_Params
{
	class AActor*                                      Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Send Notification has joined blue team
struct AMissionType_Sport_BasketBall_C_Send_Notification_has_joined_blue_team_Params
{
	class AActor*                                      Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.spawn black holes
struct AMissionType_Sport_BasketBall_C_spawn_black_holes_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.client spawn 3point lines
struct AMissionType_Sport_BasketBall_C_client_spawn_3point_lines_Params
{
	struct FVector                                     Under_Net_Ground_Loc;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Court_Center;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               red_team;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.client hide 3point lines
struct AMissionType_Sport_BasketBall_C_client_hide_3point_lines_Params
{
	TArray<class AActor*>                              _3point_lines;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.client spawn circle at court center
struct AMissionType_Sport_BasketBall_C_client_spawn_circle_at_court_center_Params
{
	struct FVector                                     Court_Center;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.create spline across midpoint of court
struct AMissionType_Sport_BasketBall_C_create_spline_across_midpoint_of_court_Params
{
	struct FVector                                     Court_Center;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              court_width;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Net_Location;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.create spline along court bounds
struct AMissionType_Sport_BasketBall_C_create_spline_along_court_bounds_Params
{
	struct FVector                                     Court_Center;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              court_width;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     court_forward_vector;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              court_length;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.client show 3point lines
struct AMissionType_Sport_BasketBall_C_client_show_3point_lines_Params
{
	TArray<class AActor*>                              _3_point_lines;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.fix UI for player
struct AMissionType_Sport_BasketBall_C_fix_UI_for_player_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.SpawnFinalGoalVFX
struct AMissionType_Sport_BasketBall_C_SpawnFinalGoalVFX_Params
{
	struct UObject_FTransform                          Transform;                                                // (Parm, IsPlainOldData)
	class FString                                      Text;                                                     // (Parm, ZeroConstructor)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.ExecuteUbergraph_MissionType_Sport_BasketBall
struct AMissionType_Sport_BasketBall_C_ExecuteUbergraph_MissionType_Sport_BasketBall_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.MissionPlayerRemoved__DelegateSignature
struct AMissionType_Sport_BasketBall_C_MissionPlayerRemoved__DelegateSignature_Params
{
	class AShooterCharacter*                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.MissionPlayerAdded__DelegateSignature
struct AMissionType_Sport_BasketBall_C_MissionPlayerAdded__DelegateSignature_Params
{
	class AShooterCharacter*                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
