// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Sport_BasketBall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.OnThrottledClientTick
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::OnThrottledClientTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.OnThrottledClientTick");

	AMissionType_Sport_BasketBall_C_OnThrottledClientTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPOnMissionPlayerRespawned
// ()
// Parameters:
// class AShooterCharacter**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::BPOnMissionPlayerRespawned(class AShooterCharacter** Player, class AShooterPlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPOnMissionPlayerRespawned");

	AMissionType_Sport_BasketBall_C_BPOnMissionPlayerRespawned_Params params;
	params.Player = Player;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.clean up team controllers
// ()

void AMissionType_Sport_BasketBall_C::clean_up_team_controllers()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.clean up team controllers");

	AMissionType_Sport_BasketBall_C_clean_up_team_controllers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPOnPlayerRemovedFromMission
// ()
// Parameters:
// class AShooterCharacter**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromMissionCompleteEvent      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLastPhaseSuccess              (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::BPOnPlayerRemovedFromMission(class AShooterCharacter** Player, class AShooterPlayerController** Controller, bool* bFromMissionCompleteEvent, bool* bLastPhaseSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPOnPlayerRemovedFromMission");

	AMissionType_Sport_BasketBall_C_BPOnPlayerRemovedFromMission_Params params;
	params.Player = Player;
	params.Controller = Controller;
	params.bFromMissionCompleteEvent = bFromMissionCompleteEvent;
	params.bLastPhaseSuccess = bLastPhaseSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.correct the court teams
// ()

void AMissionType_Sport_BasketBall_C::correct_the_court_teams()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.correct the court teams");

	AMissionType_Sport_BasketBall_C_correct_the_court_teams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.try add player to game and team
// ()
// Parameters:
// class AActor*                  InputPin                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           red_team                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           first_time_join                (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::try_add_player_to_game_and_team(class AActor* InputPin, bool red_team, bool first_time_join)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.try add player to game and team");

	AMissionType_Sport_BasketBall_C_try_add_player_to_game_and_team_Params params;
	params.InputPin = InputPin;
	params.red_team = red_team;
	params.first_time_join = first_time_join;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.add player to mission on overlap
// ()
// Parameters:
// class AShooterCharacter*       InputPin                       (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::add_player_to_mission_on_overlap(class AShooterCharacter* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.add player to mission on overlap");

	AMissionType_Sport_BasketBall_C_add_player_to_mission_on_overlap_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.get court center
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AMissionType_Sport_BasketBall_C::get_court_center()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.get court center");

	AMissionType_Sport_BasketBall_C_get_court_center_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPOnMissionDinoDied
// ()
// Parameters:
// class APrimalDinoCharacter**   Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class AController**            Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::BPOnMissionDinoDied(class APrimalDinoCharacter** Dino, float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPOnMissionDinoDied");

	AMissionType_Sport_BasketBall_C_BPOnMissionDinoDied_Params params;
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


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.create spline lines
// (NetRequest, Exec, NetResponse, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// struct FVector                 end_loc                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 start_loc                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::create_spline_lines(const struct FVector& end_loc, const struct FVector& start_loc, int Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.create spline lines");

	AMissionType_Sport_BasketBall_C_create_spline_lines_Params params;
	params.end_loc = end_loc;
	params.start_loc = start_loc;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.On End Overlap
// ()
// Parameters:
// class AMissionTrigger*         Mission_Trigger                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Overlapping_Actor              (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::On_End_Overlap(class AMissionTrigger* Mission_Trigger, class AActor* Overlapping_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.On End Overlap");

	AMissionType_Sport_BasketBall_C_On_End_Overlap_Params params;
	params.Mission_Trigger = Mission_Trigger;
	params.Overlapping_Actor = Overlapping_Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.On Overlap
// ()
// Parameters:
// class AMissionTrigger*         Mission_Trigger                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Overlapping_Actor              (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::On_Overlap(class AMissionTrigger* Mission_Trigger, class AActor* Overlapping_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.On Overlap");

	AMissionType_Sport_BasketBall_C_On_Overlap_Params params;
	params.Mission_Trigger = Mission_Trigger;
	params.Overlapping_Actor = Overlapping_Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPOnPlayerAddedToMission
// ()
// Parameters:
// class AShooterCharacter**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::BPOnPlayerAddedToMission(class AShooterCharacter** Player, class AShooterPlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPOnPlayerAddedToMission");

	AMissionType_Sport_BasketBall_C_BPOnPlayerAddedToMission_Params params;
	params.Player = Player;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Set Up Court Environmental Protection Buff
// ()
// Parameters:
// class APrimalCharacter*        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Inside_Court_Bounds            (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::Set_Up_Court_Environmental_Protection_Buff(class APrimalCharacter* Player, bool Inside_Court_Bounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Set Up Court Environmental Protection Buff");

	AMissionType_Sport_BasketBall_C_Set_Up_Court_Environmental_Protection_Buff_Params params;
	params.Player = Player;
	params.Inside_Court_Bounds = Inside_Court_Bounds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPOnMissionPlayerLeftBounds
// ()

void AMissionType_Sport_BasketBall_C::BPOnMissionPlayerLeftBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPOnMissionPlayerLeftBounds");

	AMissionType_Sport_BasketBall_C_BPOnMissionPlayerLeftBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPOnMissionDeactivated
// ()

void AMissionType_Sport_BasketBall_C::BPOnMissionDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPOnMissionDeactivated");

	AMissionType_Sport_BasketBall_C_BPOnMissionDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Timer Restriction for Determining Blue Shot
// ()

void AMissionType_Sport_BasketBall_C::Timer_Restriction_for_Determining_Blue_Shot()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Timer Restriction for Determining Blue Shot");

	AMissionType_Sport_BasketBall_C_Timer_Restriction_for_Determining_Blue_Shot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Timer Restriction for Determining Red Shot
// ()

void AMissionType_Sport_BasketBall_C::Timer_Restriction_for_Determining_Red_Shot()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Timer Restriction for Determining Red Shot");

	AMissionType_Sport_BasketBall_C_Timer_Restriction_for_Determining_Red_Shot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Disable Shot Invalid Check
// ()

void AMissionType_Sport_BasketBall_C::Disable_Shot_Invalid_Check()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Disable Shot Invalid Check");

	AMissionType_Sport_BasketBall_C_Disable_Shot_Invalid_Check_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.TimerToPreventUnderNetShots
// ()

void AMissionType_Sport_BasketBall_C::TimerToPreventUnderNetShots()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.TimerToPreventUnderNetShots");

	AMissionType_Sport_BasketBall_C_TimerToPreventUnderNetShots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Add Player To Team
// ()
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AShooterPlayerController*> team_to_add_to_controllers     (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AShooterPlayerController*> opponent_team_controllers      (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMissionType_Sport_BasketBall_C::Add_Player_To_Team(class AShooterCharacter* Player, TArray<class AShooterPlayerController*>* team_to_add_to_controllers, TArray<class AShooterPlayerController*>* opponent_team_controllers)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Add Player To Team");

	AMissionType_Sport_BasketBall_C_Add_Player_To_Team_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (team_to_add_to_controllers != nullptr)
		*team_to_add_to_controllers = params.team_to_add_to_controllers;
	if (opponent_team_controllers != nullptr)
		*opponent_team_controllers = params.opponent_team_controllers;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Spawn Jump Pad
// (NetReliable, Exec, Native, Static, NetMulticast, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// class AMissionServerSidePoint* InputPin                       (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::STATIC_Spawn_Jump_Pad(class AMissionServerSidePoint* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Spawn Jump Pad");

	AMissionType_Sport_BasketBall_C_Spawn_Jump_Pad_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPOnMissionComplete
// (Exec, Event, NetResponse, Static, NetMulticast, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterCharacter**      ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForController                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLastPhaseSuccess              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPRewarded                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UPrimalItem*>     ItemsRewarded                  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMissionType_Sport_BasketBall_C::STATIC_BPOnMissionComplete(class AShooterCharacter** ForPlayer, class AShooterPlayerController** ForController, bool* bLastPhaseSuccess, float* XPRewarded, TArray<class UPrimalItem*>* ItemsRewarded)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPOnMissionComplete");

	AMissionType_Sport_BasketBall_C_BPOnMissionComplete_Params params;
	params.ForPlayer = ForPlayer;
	params.ForController = ForController;
	params.bLastPhaseSuccess = bLastPhaseSuccess;
	params.XPRewarded = XPRewarded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemsRewarded != nullptr)
		*ItemsRewarded = params.ItemsRewarded;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Stop Showing Net Indicator Blue
// ()

void AMissionType_Sport_BasketBall_C::Stop_Showing_Net_Indicator_Blue()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Stop Showing Net Indicator Blue");

	AMissionType_Sport_BasketBall_C_Stop_Showing_Net_Indicator_Blue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Stop Showing Net Indicator Red
// ()

void AMissionType_Sport_BasketBall_C::Stop_Showing_Net_Indicator_Red()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Stop Showing Net Indicator Red");

	AMissionType_Sport_BasketBall_C_Stop_Showing_Net_Indicator_Red_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Update Indicators
// ()

void AMissionType_Sport_BasketBall_C::Update_Indicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Update Indicators");

	AMissionType_Sport_BasketBall_C_Update_Indicators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.OnThrottledServerTick
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::OnThrottledServerTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.OnThrottledServerTick");

	AMissionType_Sport_BasketBall_C_OnThrottledServerTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.IsMissionComplete
// ()
// Parameters:
// class AShooterCharacter**      forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForController                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_Sport_BasketBall_C::IsMissionComplete(class AShooterCharacter** forCharacter, class AShooterPlayerController** ForController)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.IsMissionComplete");

	AMissionType_Sport_BasketBall_C_IsMissionComplete_Params params;
	params.forCharacter = forCharacter;
	params.ForController = ForController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPGetMissionTimerText
// ()
// Parameters:
// class AShooterPlayerController** ShootCont                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AMissionType_Sport_BasketBall_C::BPGetMissionTimerText(class AShooterPlayerController** ShootCont)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPGetMissionTimerText");

	AMissionType_Sport_BasketBall_C_BPGetMissionTimerText_Params params;
	params.ShootCont = ShootCont;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Stop Showing Ball Indicator Blue
// ()

void AMissionType_Sport_BasketBall_C::Stop_Showing_Ball_Indicator_Blue()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Stop Showing Ball Indicator Blue");

	AMissionType_Sport_BasketBall_C_Stop_Showing_Ball_Indicator_Blue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Stop Showing Ball Indicator Red
// ()

void AMissionType_Sport_BasketBall_C::Stop_Showing_Ball_Indicator_Red()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Stop Showing Ball Indicator Red");

	AMissionType_Sport_BasketBall_C_Stop_Showing_Ball_Indicator_Red_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.GetPerPlayerWorldIndicators
// (Native, Static, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      Character                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionWorldIndicator> WorldIndicators                (Parm, OutParm, ZeroConstructor)

void AMissionType_Sport_BasketBall_C::STATIC_GetPerPlayerWorldIndicators(class AShooterPlayerController** Controller, class AShooterCharacter** Character, TArray<struct FMissionWorldIndicator>* WorldIndicators)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.GetPerPlayerWorldIndicators");

	AMissionType_Sport_BasketBall_C_GetPerPlayerWorldIndicators_Params params;
	params.Controller = Controller;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldIndicators != nullptr)
		*WorldIndicators = params.WorldIndicators;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Score Goal
// (NetReliable, NetRequest, Native, NetResponse, Static, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// class APrimalDinoCharacter*    Ball                           (Parm, ZeroConstructor, IsPlainOldData)
// class AMissionTrigger*         Trigger                        (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::STATIC_Score_Goal(class APrimalDinoCharacter* Ball, class AMissionTrigger* Trigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Score Goal");

	AMissionType_Sport_BasketBall_C_Score_Goal_Params params;
	params.Ball = Ball;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.check if valid upper basket entry
// ()
// Parameters:
// class ACharacter*              Ball                           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Trigger                        (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::check_if_valid_upper_basket_entry(class ACharacter* Ball, class AActor* Trigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.check if valid upper basket entry");

	AMissionType_Sport_BasketBall_C_check_if_valid_upper_basket_entry_Params params;
	params.Ball = Ball;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.AddBoxVisuals
// (Exec, Event, NetMulticast, BlueprintCallable, BlueprintEvent, NetValidate)

void AMissionType_Sport_BasketBall_C::AddBoxVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.AddBoxVisuals");

	AMissionType_Sport_BasketBall_C_AddBoxVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.CalculateShotValue
// ()
// Parameters:
// class AMissionTrigger*         GoalRef                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ShotValue                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::CalculateShotValue(class AMissionTrigger* GoalRef, int* ShotValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.CalculateShotValue");

	AMissionType_Sport_BasketBall_C_CalculateShotValue_Params params;
	params.GoalRef = GoalRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShotValue != nullptr)
		*ShotValue = params.ShotValue;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.ForceTickReqUpdate
// ()

void AMissionType_Sport_BasketBall_C::ForceTickReqUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.ForceTickReqUpdate");

	AMissionType_Sport_BasketBall_C_ForceTickReqUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.GeneratePhaseRequirements
// (NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionPhaseRequirement> Requirements                   (Parm, OutParm, ZeroConstructor)

void AMissionType_Sport_BasketBall_C::GeneratePhaseRequirements(struct FName* PhaseName, TArray<struct FMissionPhaseRequirement>* Requirements)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.GeneratePhaseRequirements");

	AMissionType_Sport_BasketBall_C_GeneratePhaseRequirements_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Requirements != nullptr)
		*Requirements = params.Requirements;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPIsPhaseComplete
// ()
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_Sport_BasketBall_C::BPIsPhaseComplete(struct FName* PhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPIsPhaseComplete");

	AMissionType_Sport_BasketBall_C_BPIsPhaseComplete_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.UserConstructionScript
// ()

void AMissionType_Sport_BasketBall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.UserConstructionScript");

	AMissionType_Sport_BasketBall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Timeline_0__FinishedFunc
// ()

void AMissionType_Sport_BasketBall_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Timeline_0__FinishedFunc");

	AMissionType_Sport_BasketBall_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Timeline_0__UpdateFunc
// ()

void AMissionType_Sport_BasketBall_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Timeline_0__UpdateFunc");

	AMissionType_Sport_BasketBall_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPOnMissionServerSetup
// ()

void AMissionType_Sport_BasketBall_C::BPOnMissionServerSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPOnMissionServerSetup");

	AMissionType_Sport_BasketBall_C_BPOnMissionServerSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.SetupPhaseStarted
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::SetupPhaseStarted(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.SetupPhaseStarted");

	AMissionType_Sport_BasketBall_C_SetupPhaseStarted_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.SetupPhaseEnded
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::SetupPhaseEnded(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.SetupPhaseEnded");

	AMissionType_Sport_BasketBall_C_SetupPhaseEnded_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.TossPhaseStarted
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::TossPhaseStarted(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.TossPhaseStarted");

	AMissionType_Sport_BasketBall_C_TossPhaseStarted_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.TossPhaseEnded
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::TossPhaseEnded(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.TossPhaseEnded");

	AMissionType_Sport_BasketBall_C_TossPhaseEnded_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.InMatchPhaseStarted
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::InMatchPhaseStarted(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.InMatchPhaseStarted");

	AMissionType_Sport_BasketBall_C_InMatchPhaseStarted_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.InMatchPhaseEnded
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::InMatchPhaseEnded(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.InMatchPhaseEnded");

	AMissionType_Sport_BasketBall_C_InMatchPhaseEnded_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.MatchFinishedPhaseStarted
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::MatchFinishedPhaseStarted(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.MatchFinishedPhaseStarted");

	AMissionType_Sport_BasketBall_C_MatchFinishedPhaseStarted_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.MatchFinishedPhaseEnded
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::MatchFinishedPhaseEnded(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.MatchFinishedPhaseEnded");

	AMissionType_Sport_BasketBall_C_MatchFinishedPhaseEnded_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPOnMissionTriggerBeginOverlap
// ()
// Parameters:
// class AMissionTrigger**        Trigger                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::BPOnMissionTriggerBeginOverlap(class AMissionTrigger** Trigger, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPOnMissionTriggerBeginOverlap");

	AMissionType_Sport_BasketBall_C_BPOnMissionTriggerBeginOverlap_Params params;
	params.Trigger = Trigger;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPOnMissionTriggerEndOverlap
// ()
// Parameters:
// class AMissionTrigger**        Trigger                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::BPOnMissionTriggerEndOverlap(class AMissionTrigger** Trigger, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.BPOnMissionTriggerEndOverlap");

	AMissionType_Sport_BasketBall_C_BPOnMissionTriggerEndOverlap_Params params;
	params.Trigger = Trigger;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.SpawnGoalVFX
// ()
// Parameters:
// struct UObject_FTransform      Transform                      (Parm, IsPlainOldData)
// class FString                  Text                           (Parm, ZeroConstructor)

void AMissionType_Sport_BasketBall_C::SpawnGoalVFX(const struct UObject_FTransform& Transform, const class FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.SpawnGoalVFX");

	AMissionType_Sport_BasketBall_C_SpawnGoalVFX_Params params;
	params.Transform = Transform;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.RepDebugSpheres
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::RepDebugSpheres(const struct FVector& Location, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.RepDebugSpheres");

	AMissionType_Sport_BasketBall_C_RepDebugSpheres_Params params;
	params.Location = Location;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.RepAddTeamSelectBounds
// ()

void AMissionType_Sport_BasketBall_C::RepAddTeamSelectBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.RepAddTeamSelectBounds");

	AMissionType_Sport_BasketBall_C_RepAddTeamSelectBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.RepRemoveTeamSelectBounds
// ()

void AMissionType_Sport_BasketBall_C::RepRemoveTeamSelectBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.RepRemoveTeamSelectBounds");

	AMissionType_Sport_BasketBall_C_RepRemoveTeamSelectBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Respawn Ball
// ()
// Parameters:
// bool                           red_team                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Blue_Team                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::Respawn_Ball(bool red_team, bool Blue_Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Respawn Ball");

	AMissionType_Sport_BasketBall_C_Respawn_Ball_Params params;
	params.red_team = red_team;
	params.Blue_Team = Blue_Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Initially add player to red team
// ()
// Parameters:
// class AActor*                  Player                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::Initially_add_player_to_red_team(class AActor* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Initially add player to red team");

	AMissionType_Sport_BasketBall_C_Initially_add_player_to_red_team_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Initially add player to blue team
// ()
// Parameters:
// class AActor*                  Player                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::Initially_add_player_to_blue_team(class AActor* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Initially add player to blue team");

	AMissionType_Sport_BasketBall_C_Initially_add_player_to_blue_team_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Send Notification has joined red team
// ()
// Parameters:
// class AActor*                  Player                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::Send_Notification_has_joined_red_team(class AActor* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Send Notification has joined red team");

	AMissionType_Sport_BasketBall_C_Send_Notification_has_joined_red_team_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Send Notification has joined blue team
// ()
// Parameters:
// class AActor*                  Player                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::Send_Notification_has_joined_blue_team(class AActor* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.Send Notification has joined blue team");

	AMissionType_Sport_BasketBall_C_Send_Notification_has_joined_blue_team_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.spawn black holes
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::spawn_black_holes(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.spawn black holes");

	AMissionType_Sport_BasketBall_C_spawn_black_holes_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.client spawn 3point lines
// ()
// Parameters:
// struct FVector                 Under_Net_Ground_Loc           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Court_Center                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           red_team                       (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::client_spawn_3point_lines(const struct FVector& Under_Net_Ground_Loc, const struct FVector& Court_Center, bool red_team)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.client spawn 3point lines");

	AMissionType_Sport_BasketBall_C_client_spawn_3point_lines_Params params;
	params.Under_Net_Ground_Loc = Under_Net_Ground_Loc;
	params.Court_Center = Court_Center;
	params.red_team = red_team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.client hide 3point lines
// ()
// Parameters:
// TArray<class AActor*>          _3point_lines                  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMissionType_Sport_BasketBall_C::client_hide_3point_lines(TArray<class AActor*>* _3point_lines)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.client hide 3point lines");

	AMissionType_Sport_BasketBall_C_client_hide_3point_lines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_3point_lines != nullptr)
		*_3point_lines = params._3point_lines;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.client spawn circle at court center
// ()
// Parameters:
// struct FVector                 Court_Center                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::client_spawn_circle_at_court_center(const struct FVector& Court_Center)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.client spawn circle at court center");

	AMissionType_Sport_BasketBall_C_client_spawn_circle_at_court_center_Params params;
	params.Court_Center = Court_Center;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.create spline across midpoint of court
// ()
// Parameters:
// struct FVector                 Court_Center                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          court_width                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Net_Location                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::create_spline_across_midpoint_of_court(const struct FVector& Court_Center, float court_width, const struct FVector& Net_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.create spline across midpoint of court");

	AMissionType_Sport_BasketBall_C_create_spline_across_midpoint_of_court_Params params;
	params.Court_Center = Court_Center;
	params.court_width = court_width;
	params.Net_Location = Net_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.create spline along court bounds
// ()
// Parameters:
// struct FVector                 Court_Center                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          court_width                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 court_forward_vector           (Parm, ZeroConstructor, IsPlainOldData)
// float                          court_length                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::create_spline_along_court_bounds(const struct FVector& Court_Center, float court_width, const struct FVector& court_forward_vector, float court_length)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.create spline along court bounds");

	AMissionType_Sport_BasketBall_C_create_spline_along_court_bounds_Params params;
	params.Court_Center = Court_Center;
	params.court_width = court_width;
	params.court_forward_vector = court_forward_vector;
	params.court_length = court_length;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.client show 3point lines
// ()
// Parameters:
// TArray<class AActor*>          _3_point_lines                 (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMissionType_Sport_BasketBall_C::client_show_3point_lines(TArray<class AActor*>* _3_point_lines)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.client show 3point lines");

	AMissionType_Sport_BasketBall_C_client_show_3point_lines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_3_point_lines != nullptr)
		*_3_point_lines = params._3_point_lines;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.fix UI for player
// ()
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::fix_UI_for_player(class AShooterCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.fix UI for player");

	AMissionType_Sport_BasketBall_C_fix_UI_for_player_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.SpawnFinalGoalVFX
// ()
// Parameters:
// struct UObject_FTransform      Transform                      (Parm, IsPlainOldData)
// class FString                  Text                           (Parm, ZeroConstructor)

void AMissionType_Sport_BasketBall_C::SpawnFinalGoalVFX(const struct UObject_FTransform& Transform, const class FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.SpawnFinalGoalVFX");

	AMissionType_Sport_BasketBall_C_SpawnFinalGoalVFX_Params params;
	params.Transform = Transform;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.ExecuteUbergraph_MissionType_Sport_BasketBall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::ExecuteUbergraph_MissionType_Sport_BasketBall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.ExecuteUbergraph_MissionType_Sport_BasketBall");

	AMissionType_Sport_BasketBall_C_ExecuteUbergraph_MissionType_Sport_BasketBall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.MissionPlayerRemoved__DelegateSignature
// ()
// Parameters:
// class AShooterCharacter*       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::MissionPlayerRemoved__DelegateSignature(class AShooterCharacter* forCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.MissionPlayerRemoved__DelegateSignature");

	AMissionType_Sport_BasketBall_C_MissionPlayerRemoved__DelegateSignature_Params params;
	params.forCharacter = forCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.MissionPlayerAdded__DelegateSignature
// ()
// Parameters:
// class AShooterCharacter*       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_C::MissionPlayerAdded__DelegateSignature(class AShooterCharacter* forCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall.MissionType_Sport_BasketBall_C.MissionPlayerAdded__DelegateSignature");

	AMissionType_Sport_BasketBall_C_MissionPlayerAdded__DelegateSignature_Params params;
	params.forCharacter = forCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
