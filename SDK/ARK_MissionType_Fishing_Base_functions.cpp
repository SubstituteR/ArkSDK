// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Fishing_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Play Player Is In Top 10 on Leaderboard Reaction
// ()
// Parameters:
// class AShooterCharacter*       shooter_character              (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Fishing_Base_C::Play_Player_Is_In_Top_10_on_Leaderboard_Reaction(class AShooterCharacter* shooter_character)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Play Player Is In Top 10 on Leaderboard Reaction");

	AMissionType_Fishing_Base_C_Play_Player_Is_In_Top_10_on_Leaderboard_Reaction_Params params;
	params.shooter_character = shooter_character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Play Player Is First On Leaderboard Reaction
// ()
// Parameters:
// class AShooterCharacter*       shooter_character              (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Fishing_Base_C::Play_Player_Is_First_On_Leaderboard_Reaction(class AShooterCharacter* shooter_character)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Play Player Is First On Leaderboard Reaction");

	AMissionType_Fishing_Base_C_Play_Player_Is_First_On_Leaderboard_Reaction_Params params;
	params.shooter_character = shooter_character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Play Leaderboard Reaction
// (NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Leaderboard_Value              (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Fishing_Base_C::STATIC_Play_Leaderboard_Reaction(class AShooterCharacter* Player, float Leaderboard_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Play Leaderboard Reaction");

	AMissionType_Fishing_Base_C_Play_Leaderboard_Reaction_Params params;
	params.Player = Player;
	params.Leaderboard_Value = Leaderboard_Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Add Player To Leaderboard
// ()
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Leaderboard_Value              (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Fishing_Base_C::Add_Player_To_Leaderboard(class AShooterCharacter* Player, float Leaderboard_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Add Player To Leaderboard");

	AMissionType_Fishing_Base_C_Add_Player_To_Leaderboard_Params params;
	params.Player = Player;
	params.Leaderboard_Value = Leaderboard_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Create player requirement string
// (Native, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, BlueprintEvent, NetValidate)
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  fish_or_weight                 (Parm, ZeroConstructor)
// struct FTaggedString           constructed_string             (Parm, OutParm)

void AMissionType_Fishing_Base_C::STATIC_Create_player_requirement_string(const class FString& Name, int index, const class FString& fish_or_weight, struct FTaggedString* constructed_string)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Create player requirement string");

	AMissionType_Fishing_Base_C_Create_player_requirement_string_Params params;
	params.Name = Name;
	params.index = index;
	params.fish_or_weight = fish_or_weight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (constructed_string != nullptr)
		*constructed_string = params.constructed_string;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.OnThrottledClientTick
// (Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, BlueprintEvent, NetValidate)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Fishing_Base_C::STATIC_OnThrottledClientTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.OnThrottledClientTick");

	AMissionType_Fishing_Base_C_OnThrottledClientTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Can Fish Class Be Caught
// ()
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_Fishing_Base_C::Can_Fish_Class_Be_Caught(class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Can Fish Class Be Caught");

	AMissionType_Fishing_Base_C_Can_Fish_Class_Be_Caught_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Is Rare Fish by Class
// ()
// Parameters:
// class UClass*                  Object                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_Fishing_Base_C::Is_Rare_Fish_by_Class(class UClass* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Is Rare Fish by Class");

	AMissionType_Fishing_Base_C_Is_Rare_Fish_by_Class_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Refresh Dead Dino Known Killed By Net or Rod
// ()
// Parameters:
// class UClass*                  Dino_Died                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 fish_ref                       (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Fishing_Base_C::Refresh_Dead_Dino_Known_Killed_By_Net_or_Rod(class UClass* Dino_Died, class UObject* fish_ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Refresh Dead Dino Known Killed By Net or Rod");

	AMissionType_Fishing_Base_C_Refresh_Dead_Dino_Known_Killed_By_Net_or_Rod_Params params;
	params.Dino_Died = Dino_Died;
	params.fish_ref = fish_ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.BPOnMissionPlayerLeftBounds
// ()

void AMissionType_Fishing_Base_C::BPOnMissionPlayerLeftBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.BPOnMissionPlayerLeftBounds");

	AMissionType_Fishing_Base_C_BPOnMissionPlayerLeftBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.BPOnMissionPlayerRespawned
// ()
// Parameters:
// class AShooterCharacter**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Fishing_Base_C::BPOnMissionPlayerRespawned(class AShooterCharacter** Player, class AShooterPlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.BPOnMissionPlayerRespawned");

	AMissionType_Fishing_Base_C_BPOnMissionPlayerRespawned_Params params;
	params.Player = Player;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.respawn rare fish after timer
// ()

void AMissionType_Fishing_Base_C::respawn_rare_fish_after_timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.respawn rare fish after timer");

	AMissionType_Fishing_Base_C_respawn_rare_fish_after_timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.add caught fish and play reactions
// (Event, NetResponse, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, BlueprintEvent, NetValidate)
// Parameters:
// class UObject*                 Player                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          caught_fish_weight             (Parm, ZeroConstructor, IsPlainOldData)
// int                            caught_fish_count              (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Fishing_Base_C::add_caught_fish_and_play_reactions(class UObject* Player, float caught_fish_weight, int caught_fish_count)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.add caught fish and play reactions");

	AMissionType_Fishing_Base_C_add_caught_fish_and_play_reactions_Params params;
	params.Player = Player;
	params.caught_fish_weight = caught_fish_weight;
	params.caught_fish_count = caught_fish_count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.interval to check for proper fish count
// ()

void AMissionType_Fishing_Base_C::interval_to_check_for_proper_fish_count()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.interval to check for proper fish count");

	AMissionType_Fishing_Base_C_interval_to_check_for_proper_fish_count_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.ReceiveBeginPlay
// ()

void AMissionType_Fishing_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.ReceiveBeginPlay");

	AMissionType_Fishing_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.is rare fish
// ()
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_Fishing_Base_C::is_rare_fish(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.is rare fish");

	AMissionType_Fishing_Base_C_is_rare_fish_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.BPOnPlayerAddedToMission
// ()
// Parameters:
// class AShooterCharacter**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Fishing_Base_C::BPOnPlayerAddedToMission(class AShooterCharacter** Player, class AShooterPlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.BPOnPlayerAddedToMission");

	AMissionType_Fishing_Base_C_BPOnPlayerAddedToMission_Params params;
	params.Player = Player;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Update Total Caught Fish Count
// ()
// Parameters:
// int                            total_caught_fish              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Fishing_Base_C::Update_Total_Caught_Fish_Count(int* total_caught_fish)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Update Total Caught Fish Count");

	AMissionType_Fishing_Base_C_Update_Total_Caught_Fish_Count_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (total_caught_fish != nullptr)
		*total_caught_fish = params.total_caught_fish;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.is mission complete at all
// ()
// Parameters:
// bool                           is_complete                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Fishing_Base_C::is_mission_complete_at_all(bool* is_complete)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.is mission complete at all");

	AMissionType_Fishing_Base_C_is_mission_complete_at_all_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (is_complete != nullptr)
		*is_complete = params.is_complete;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.is valid player on mission
// ()
// Parameters:
// class UObject*                 Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_Fishing_Base_C::is_valid_player_on_mission(class UObject* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.is valid player on mission");

	AMissionType_Fishing_Base_C_is_valid_player_on_mission_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Get Number Of Each Alive Type Of Fish
// ()
// Parameters:
// class UObject*                 fish_to_ignore                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            Alive_Normal_Fish              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Alive_Rare_Fish                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Fishing_Base_C::Get_Number_Of_Each_Alive_Type_Of_Fish(class UObject* fish_to_ignore, int* Alive_Normal_Fish, int* Alive_Rare_Fish)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Get Number Of Each Alive Type Of Fish");

	AMissionType_Fishing_Base_C_Get_Number_Of_Each_Alive_Type_Of_Fish_Params params;
	params.fish_to_ignore = fish_to_ignore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Alive_Normal_Fish != nullptr)
		*Alive_Normal_Fish = params.Alive_Normal_Fish;
	if (Alive_Rare_Fish != nullptr)
		*Alive_Rare_Fish = params.Alive_Rare_Fish;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.set spawn interval normal
// ()

void AMissionType_Fishing_Base_C::set_spawn_interval_normal()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.set spawn interval normal");

	AMissionType_Fishing_Base_C_set_spawn_interval_normal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Set Spawn Interval Rare
// ()

void AMissionType_Fishing_Base_C::Set_Spawn_Interval_Rare()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Set Spawn Interval Rare");

	AMissionType_Fishing_Base_C_Set_Spawn_Interval_Rare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Start Fish Spawn Interval timers
// ()

void AMissionType_Fishing_Base_C::Start_Fish_Spawn_Interval_timers()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Start Fish Spawn Interval timers");

	AMissionType_Fishing_Base_C_Start_Fish_Spawn_Interval_timers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Spawn Rare Fish
// ()
// Parameters:
// int                            number_of_fish_to_spawn        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class APrimalDinoCharacter*> spawned_fish                   (Parm, OutParm, ZeroConstructor)

void AMissionType_Fishing_Base_C::Spawn_Rare_Fish(int number_of_fish_to_spawn, TArray<class APrimalDinoCharacter*>* spawned_fish)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Spawn Rare Fish");

	AMissionType_Fishing_Base_C_Spawn_Rare_Fish_Params params;
	params.number_of_fish_to_spawn = number_of_fish_to_spawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (spawned_fish != nullptr)
		*spawned_fish = params.spawned_fish;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Update Total Caught Fish Wild Scale
// ()
// Parameters:
// float                          total_wild_scale               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Fishing_Base_C::Update_Total_Caught_Fish_Wild_Scale(float* total_wild_scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Update Total Caught Fish Wild Scale");

	AMissionType_Fishing_Base_C_Update_Total_Caught_Fish_Wild_Scale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (total_wild_scale != nullptr)
		*total_wild_scale = params.total_wild_scale;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.update ranks
// ()

void AMissionType_Fishing_Base_C::update_ranks()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.update ranks");

	AMissionType_Fishing_Base_C_update_ranks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Get Player Index Who Has Current Given Rank
// ()
// Parameters:
// int                            current_rank                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AMissionType_Fishing_Base_C::Get_Player_Index_Who_Has_Current_Given_Rank(int current_rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Get Player Index Who Has Current Given Rank");

	AMissionType_Fishing_Base_C_Get_Player_Index_Who_Has_Current_Given_Rank_Params params;
	params.current_rank = current_rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Get Player Index
// (NetReliable, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterPlayerController* Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            playerr_index                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Fishing_Base_C::Get_Player_Index(class AShooterPlayerController* Controller, int* playerr_index)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Get Player Index");

	AMissionType_Fishing_Base_C_Get_Player_Index_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (playerr_index != nullptr)
		*playerr_index = params.playerr_index;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.spawn additional fish
// ()

void AMissionType_Fishing_Base_C::spawn_additional_fish()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.spawn additional fish");

	AMissionType_Fishing_Base_C_spawn_additional_fish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Spawn Normal Fish
// (NetReliable, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, BlueprintEvent, NetValidate)
// Parameters:
// int                            number_of_fish_to_spawn        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class APrimalDinoCharacter*> spawned_fish                   (Parm, OutParm, ZeroConstructor)

void AMissionType_Fishing_Base_C::STATIC_Spawn_Normal_Fish(int number_of_fish_to_spawn, TArray<class APrimalDinoCharacter*>* spawned_fish)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Spawn Normal Fish");

	AMissionType_Fishing_Base_C_Spawn_Normal_Fish_Params params;
	params.number_of_fish_to_spawn = number_of_fish_to_spawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (spawned_fish != nullptr)
		*spawned_fish = params.spawned_fish;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.BPOnMissionComplete
// (NetRequest, Exec, Native, Event, Static, Protected, Delegate, NetServer, HasDefaults, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterCharacter**      ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForController                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLastPhaseSuccess              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPRewarded                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UPrimalItem*>     ItemsRewarded                  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMissionType_Fishing_Base_C::STATIC_BPOnMissionComplete(class AShooterCharacter** ForPlayer, class AShooterPlayerController** ForController, bool* bLastPhaseSuccess, float* XPRewarded, TArray<class UPrimalItem*>* ItemsRewarded)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.BPOnMissionComplete");

	AMissionType_Fishing_Base_C_BPOnMissionComplete_Params params;
	params.ForPlayer = ForPlayer;
	params.ForController = ForController;
	params.bLastPhaseSuccess = bLastPhaseSuccess;
	params.XPRewarded = XPRewarded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemsRewarded != nullptr)
		*ItemsRewarded = params.ItemsRewarded;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Spawn Additional Rare Fish
// ()

void AMissionType_Fishing_Base_C::Spawn_Additional_Rare_Fish()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Spawn Additional Rare Fish");

	AMissionType_Fishing_Base_C_Spawn_Additional_Rare_Fish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.BPIsPhaseComplete
// ()
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_Fishing_Base_C::BPIsPhaseComplete(struct FName* PhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.BPIsPhaseComplete");

	AMissionType_Fishing_Base_C_BPIsPhaseComplete_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.BPOnMissionDinoDied
// (NetReliable, Exec, Event, NetResponse, Delegate, NetServer, HasDefaults, BlueprintEvent, NetValidate)
// Parameters:
// class APrimalDinoCharacter**   Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class AController**            Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Fishing_Base_C::BPOnMissionDinoDied(class APrimalDinoCharacter** Dino, float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.BPOnMissionDinoDied");

	AMissionType_Fishing_Base_C_BPOnMissionDinoDied_Params params;
	params.Dino = Dino;
	params.KillingDamage = KillingDamage;
	params.Killer = Killer;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.BPOnMissionDeactivated
// ()

void AMissionType_Fishing_Base_C::BPOnMissionDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.BPOnMissionDeactivated");

	AMissionType_Fishing_Base_C_BPOnMissionDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.IsMissionComplete
// ()
// Parameters:
// class AShooterCharacter**      forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForController                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_Fishing_Base_C::IsMissionComplete(class AShooterCharacter** forCharacter, class AShooterPlayerController** ForController)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.IsMissionComplete");

	AMissionType_Fishing_Base_C_IsMissionComplete_Params params;
	params.forCharacter = forCharacter;
	params.ForController = ForController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.GetCurrentWorldIndicators
// ()
// Parameters:
// TArray<struct FMissionWorldIndicator> WorldIndicators                (Parm, OutParm, ZeroConstructor)

void AMissionType_Fishing_Base_C::GetCurrentWorldIndicators(TArray<struct FMissionWorldIndicator>* WorldIndicators)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.GetCurrentWorldIndicators");

	AMissionType_Fishing_Base_C_GetCurrentWorldIndicators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldIndicators != nullptr)
		*WorldIndicators = params.WorldIndicators;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.GeneratePhaseRequirements
// (NetReliable, NetRequest, Native, NetResponse, Static, Delegate, NetServer, HasDefaults, BlueprintEvent, NetValidate)
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionPhaseRequirement> Requirements                   (Parm, OutParm, ZeroConstructor)

void AMissionType_Fishing_Base_C::STATIC_GeneratePhaseRequirements(struct FName* PhaseName, TArray<struct FMissionPhaseRequirement>* Requirements)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.GeneratePhaseRequirements");

	AMissionType_Fishing_Base_C_GeneratePhaseRequirements_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Requirements != nullptr)
		*Requirements = params.Requirements;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.UserConstructionScript
// ()

void AMissionType_Fishing_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.UserConstructionScript");

	AMissionType_Fishing_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.BPOnMissionServerSetup
// ()

void AMissionType_Fishing_Base_C::BPOnMissionServerSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.BPOnMissionServerSetup");

	AMissionType_Fishing_Base_C_BPOnMissionServerSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.PhaseStart
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Fishing_Base_C::PhaseStart(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.PhaseStart");

	AMissionType_Fishing_Base_C_PhaseStart_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.OnThrottledServerTick
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Fishing_Base_C::OnThrottledServerTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.OnThrottledServerTick");

	AMissionType_Fishing_Base_C_OnThrottledServerTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Get Water Locations Beneath Fish Spawn Point
// ()

void AMissionType_Fishing_Base_C::Get_Water_Locations_Beneath_Fish_Spawn_Point()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.Get Water Locations Beneath Fish Spawn Point");

	AMissionType_Fishing_Base_C_Get_Water_Locations_Beneath_Fish_Spawn_Point_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.FishCaughtDispatcher_Net
// ()
// Parameters:
// float                          caught_fish_wild_random_scale  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Net_Owner                      (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Fish_Class                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 fish_ref                       (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Fishing_Base_C::FishCaughtDispatcher_Net(float caught_fish_wild_random_scale, class AActor* Net_Owner, class UClass* Fish_Class, class UObject* fish_ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.FishCaughtDispatcher_Net");

	AMissionType_Fishing_Base_C_FishCaughtDispatcher_Net_Params params;
	params.caught_fish_wild_random_scale = caught_fish_wild_random_scale;
	params.Net_Owner = Net_Owner;
	params.Fish_Class = Fish_Class;
	params.fish_ref = fish_ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.FishCaughtDispatcher_Rod
// ()
// Parameters:
// float                          Caught_Fish_Wild_Scale         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Net_Owner                      (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Fish_Class                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Fish_Reference                 (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Fishing_Base_C::FishCaughtDispatcher_Rod(float Caught_Fish_Wild_Scale, class AActor* Net_Owner, class UClass* Fish_Class, class UObject* Fish_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.FishCaughtDispatcher_Rod");

	AMissionType_Fishing_Base_C_FishCaughtDispatcher_Rod_Params params;
	params.Caught_Fish_Wild_Scale = Caught_Fish_Wild_Scale;
	params.Net_Owner = Net_Owner;
	params.Fish_Class = Fish_Class;
	params.Fish_Reference = Fish_Reference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.caught fish multicast
// ()
// Parameters:
// class APrimalCharacter*        Player                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Fishing_Base_C::caught_fish_multicast(class APrimalCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.caught fish multicast");

	AMissionType_Fishing_Base_C_caught_fish_multicast_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.ExecuteUbergraph_MissionType_Fishing_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Fishing_Base_C::ExecuteUbergraph_MissionType_Fishing_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_Base.MissionType_Fishing_Base_C.ExecuteUbergraph_MissionType_Fishing_Base");

	AMissionType_Fishing_Base_C_ExecuteUbergraph_MissionType_Fishing_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
