#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Fishing_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Play Player Is In Top 10 on Leaderboard Reaction
struct AMissionType_Fishing_Base_C_Play_Player_Is_In_Top_10_on_Leaderboard_Reaction_Params
{
	class AShooterCharacter*                           shooter_character;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Play Player Is First On Leaderboard Reaction
struct AMissionType_Fishing_Base_C_Play_Player_Is_First_On_Leaderboard_Reaction_Params
{
	class AShooterCharacter*                           shooter_character;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Play Leaderboard Reaction
struct AMissionType_Fishing_Base_C_Play_Leaderboard_Reaction_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Leaderboard_Value;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Add Player To Leaderboard
struct AMissionType_Fishing_Base_C_Add_Player_To_Leaderboard_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Leaderboard_Value;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Create player requirement string
struct AMissionType_Fishing_Base_C_Create_player_requirement_string_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      fish_or_weight;                                           // (Parm, ZeroConstructor)
	struct FTaggedString                               constructed_string;                                       // (Parm, OutParm)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.OnThrottledClientTick
struct AMissionType_Fishing_Base_C_OnThrottledClientTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Can Fish Class Be Caught
struct AMissionType_Fishing_Base_C_Can_Fish_Class_Be_Caught_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Is Rare Fish by Class
struct AMissionType_Fishing_Base_C_Is_Rare_Fish_by_Class_Params
{
	class UClass*                                      Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Refresh Dead Dino Known Killed By Net or Rod
struct AMissionType_Fishing_Base_C_Refresh_Dead_Dino_Known_Killed_By_Net_or_Rod_Params
{
	class UClass*                                      Dino_Died;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     fish_ref;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.BPOnMissionPlayerLeftBounds
struct AMissionType_Fishing_Base_C_BPOnMissionPlayerLeftBounds_Params
{
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.BPOnMissionPlayerRespawned
struct AMissionType_Fishing_Base_C_BPOnMissionPlayerRespawned_Params
{
	class AShooterCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.respawn rare fish after timer
struct AMissionType_Fishing_Base_C_respawn_rare_fish_after_timer_Params
{
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.add caught fish and play reactions
struct AMissionType_Fishing_Base_C_add_caught_fish_and_play_reactions_Params
{
	class UObject*                                     Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              caught_fish_weight;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                caught_fish_count;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.interval to check for proper fish count
struct AMissionType_Fishing_Base_C_interval_to_check_for_proper_fish_count_Params
{
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.ReceiveBeginPlay
struct AMissionType_Fishing_Base_C_ReceiveBeginPlay_Params
{
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.is rare fish
struct AMissionType_Fishing_Base_C_is_rare_fish_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.BPOnPlayerAddedToMission
struct AMissionType_Fishing_Base_C_BPOnPlayerAddedToMission_Params
{
	class AShooterCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Update Total Caught Fish Count
struct AMissionType_Fishing_Base_C_Update_Total_Caught_Fish_Count_Params
{
	int                                                total_caught_fish;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.is mission complete at all
struct AMissionType_Fishing_Base_C_is_mission_complete_at_all_Params
{
	bool                                               is_complete;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.is valid player on mission
struct AMissionType_Fishing_Base_C_is_valid_player_on_mission_Params
{
	class UObject*                                     Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Get Number Of Each Alive Type Of Fish
struct AMissionType_Fishing_Base_C_Get_Number_Of_Each_Alive_Type_Of_Fish_Params
{
	class UObject*                                     fish_to_ignore;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Alive_Normal_Fish;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Alive_Rare_Fish;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.set spawn interval normal
struct AMissionType_Fishing_Base_C_set_spawn_interval_normal_Params
{
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Set Spawn Interval Rare
struct AMissionType_Fishing_Base_C_Set_Spawn_Interval_Rare_Params
{
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Start Fish Spawn Interval timers
struct AMissionType_Fishing_Base_C_Start_Fish_Spawn_Interval_timers_Params
{
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Spawn Rare Fish
struct AMissionType_Fishing_Base_C_Spawn_Rare_Fish_Params
{
	int                                                number_of_fish_to_spawn;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class APrimalDinoCharacter*>                spawned_fish;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Update Total Caught Fish Wild Scale
struct AMissionType_Fishing_Base_C_Update_Total_Caught_Fish_Wild_Scale_Params
{
	float                                              total_wild_scale;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.update ranks
struct AMissionType_Fishing_Base_C_update_ranks_Params
{
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Get Player Index Who Has Current Given Rank
struct AMissionType_Fishing_Base_C_Get_Player_Index_Who_Has_Current_Given_Rank_Params
{
	int                                                current_rank;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Get Player Index
struct AMissionType_Fishing_Base_C_Get_Player_Index_Params
{
	class AShooterPlayerController*                    Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                playerr_index;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.spawn additional fish
struct AMissionType_Fishing_Base_C_spawn_additional_fish_Params
{
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Spawn Normal Fish
struct AMissionType_Fishing_Base_C_Spawn_Normal_Fish_Params
{
	int                                                number_of_fish_to_spawn;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class APrimalDinoCharacter*>                spawned_fish;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.BPOnMissionComplete
struct AMissionType_Fishing_Base_C_BPOnMissionComplete_Params
{
	class AShooterCharacter**                          ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLastPhaseSuccess;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPRewarded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UPrimalItem*>                         ItemsRewarded;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Spawn Additional Rare Fish
struct AMissionType_Fishing_Base_C_Spawn_Additional_Rare_Fish_Params
{
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.BPIsPhaseComplete
struct AMissionType_Fishing_Base_C_BPIsPhaseComplete_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.BPOnMissionDinoDied
struct AMissionType_Fishing_Base_C_BPOnMissionDinoDied_Params
{
	class APrimalDinoCharacter**                       Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class AController**                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.BPOnMissionDeactivated
struct AMissionType_Fishing_Base_C_BPOnMissionDeactivated_Params
{
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.IsMissionComplete
struct AMissionType_Fishing_Base_C_IsMissionComplete_Params
{
	class AShooterCharacter**                          forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.GetCurrentWorldIndicators
struct AMissionType_Fishing_Base_C_GetCurrentWorldIndicators_Params
{
	TArray<struct FMissionWorldIndicator>              WorldIndicators;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.GeneratePhaseRequirements
struct AMissionType_Fishing_Base_C_GeneratePhaseRequirements_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionPhaseRequirement>            Requirements;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.UserConstructionScript
struct AMissionType_Fishing_Base_C_UserConstructionScript_Params
{
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.BPOnMissionServerSetup
struct AMissionType_Fishing_Base_C_BPOnMissionServerSetup_Params
{
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.PhaseStart
struct AMissionType_Fishing_Base_C_PhaseStart_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.OnThrottledServerTick
struct AMissionType_Fishing_Base_C_OnThrottledServerTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Get Water Locations Beneath Fish Spawn Point
struct AMissionType_Fishing_Base_C_Get_Water_Locations_Beneath_Fish_Spawn_Point_Params
{
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.FishCaughtDispatcher_Net
struct AMissionType_Fishing_Base_C_FishCaughtDispatcher_Net_Params
{
	float                                              caught_fish_wild_random_scale;                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Net_Owner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Fish_Class;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     fish_ref;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.FishCaughtDispatcher_Rod
struct AMissionType_Fishing_Base_C_FishCaughtDispatcher_Rod_Params
{
	float                                              Caught_Fish_Wild_Scale;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Net_Owner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Fish_Class;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Fish_Reference;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.caught fish multicast
struct AMissionType_Fishing_Base_C_caught_fish_multicast_Params
{
	class APrimalCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.ExecuteUbergraph_MissionType_Fishing_Base
struct AMissionType_Fishing_Base_C_ExecuteUbergraph_MissionType_Fishing_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
