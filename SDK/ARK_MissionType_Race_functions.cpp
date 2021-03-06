// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Race_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Race.MissionType_Race_C.OnTeleportedCharInBounds
// ()
// Parameters:
// class APrimalCharacter*        forChar                        (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_C::OnTeleportedCharInBounds(class APrimalCharacter* forChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.OnTeleportedCharInBounds");

	AMissionType_Race_C_OnTeleportedCharInBounds_Params params;
	params.forChar = forChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race.MissionType_Race_C.GetNearbyWaterLocation
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Forward                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          OverrideZOffset                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 FinalLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_C::STATIC_GetNearbyWaterLocation(const struct FVector& StartLocation, const struct FVector& Forward, float OverrideZOffset, struct FVector* FinalLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.GetNearbyWaterLocation");

	AMissionType_Race_C_GetNearbyWaterLocation_Params params;
	params.StartLocation = StartLocation;
	params.Forward = Forward;
	params.OverrideZOffset = OverrideZOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FinalLocation != nullptr)
		*FinalLocation = params.FinalLocation;
}


// Function MissionType_Race.MissionType_Race_C.Is Power Up Active for Player
// ()
// Parameters:
// class AShooterPlayerController* SC                             (Parm, ZeroConstructor, IsPlainOldData)
// class AMissionTrigger*         PowerUp                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_C::Is_Power_Up_Active_for_Player(class AShooterPlayerController* SC, class AMissionTrigger* PowerUp, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.Is Power Up Active for Player");

	AMissionType_Race_C_Is_Power_Up_Active_for_Player_Params params;
	params.SC = SC;
	params.PowerUp = PowerUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function MissionType_Race.MissionType_Race_C.Handle Out Of Bounds
// (NetReliable, NetRequest, Exec, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)

void AMissionType_Race_C::Handle_Out_Of_Bounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.Handle Out Of Bounds");

	AMissionType_Race_C_Handle_Out_Of_Bounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race.MissionType_Race_C.TeleportPlayerAndDinoToCheckpoint
// ()
// Parameters:
// class APrimalDinoCharacter*    Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_C::TeleportPlayerAndDinoToCheckpoint(class APrimalDinoCharacter* Dino, class AShooterCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.TeleportPlayerAndDinoToCheckpoint");

	AMissionType_Race_C_TeleportPlayerAndDinoToCheckpoint_Params params;
	params.Dino = Dino;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race.MissionType_Race_C.SpawnDinoForPlayer
// (NetReliable, NetRequest, Native, NetResponse, Static, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalDinoCharacter*    SpawnedDino                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_C::STATIC_SpawnDinoForPlayer(class AShooterCharacter* Player, class APrimalDinoCharacter** SpawnedDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.SpawnDinoForPlayer");

	AMissionType_Race_C_SpawnDinoForPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedDino != nullptr)
		*SpawnedDino = params.SpawnedDino;
}


// Function MissionType_Race.MissionType_Race_C.Handle Player Time Outs
// (NetReliable, NetRequest, Event, NetResponse, Static, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)

void AMissionType_Race_C::STATIC_Handle_Player_Time_Outs()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.Handle Player Time Outs");

	AMissionType_Race_C_Handle_Player_Time_Outs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race.MissionType_Race_C.BPOverrideMissionTimerColor
// ()
// Parameters:
// class AShooterPlayerController** ShooterContr                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            DefaultColor                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FLinearColor            CurrentColor                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FLinearColor            TimerOverrideColor             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_Race_C::BPOverrideMissionTimerColor(class AShooterPlayerController** ShooterContr, struct FLinearColor* DefaultColor, struct FLinearColor* CurrentColor, struct FLinearColor* TimerOverrideColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.BPOverrideMissionTimerColor");

	AMissionType_Race_C_BPOverrideMissionTimerColor_Params params;
	params.ShooterContr = ShooterContr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DefaultColor != nullptr)
		*DefaultColor = params.DefaultColor;
	if (CurrentColor != nullptr)
		*CurrentColor = params.CurrentColor;
	if (TimerOverrideColor != nullptr)
		*TimerOverrideColor = params.TimerOverrideColor;

	return params.ReturnValue;
}


// Function MissionType_Race.MissionType_Race_C.GetBestTimeForPlayer
// (Event, NetMulticast, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterPlayerController* ShooterCont                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          BestValidTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_C::GetBestTimeForPlayer(class AShooterPlayerController* ShooterCont, float* BestValidTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.GetBestTimeForPlayer");

	AMissionType_Race_C_GetBestTimeForPlayer_Params params;
	params.ShooterCont = ShooterCont;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BestValidTime != nullptr)
		*BestValidTime = params.BestValidTime;
}


// Function MissionType_Race.MissionType_Race_C.BPGetExtraLocalMissionIndicators
// (NetResponse, NetMulticast, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController**      Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionWorldIndicator> IndicatorsIn                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMissionWorldIndicator> IndicatorsOut                  (Parm, OutParm, ZeroConstructor)

void AMissionType_Race_C::BPGetExtraLocalMissionIndicators(class APlayerController** Controller, class AShooterCharacter** PlayerPawn, TArray<struct FMissionWorldIndicator>* IndicatorsIn, TArray<struct FMissionWorldIndicator>* IndicatorsOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.BPGetExtraLocalMissionIndicators");

	AMissionType_Race_C_BPGetExtraLocalMissionIndicators_Params params;
	params.Controller = Controller;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IndicatorsIn != nullptr)
		*IndicatorsIn = params.IndicatorsIn;
	if (IndicatorsOut != nullptr)
		*IndicatorsOut = params.IndicatorsOut;
}


// Function MissionType_Race.MissionType_Race_C.GetBestTime
// (Event, NetResponse, NetMulticast, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BestTime                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_C::GetBestTime(float* BestTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.GetBestTime");

	AMissionType_Race_C_GetBestTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BestTime != nullptr)
		*BestTime = params.BestTime;
}


// Function MissionType_Race.MissionType_Race_C.NotifyAllTopPlayerFinish
// (Exec, Native, Event, NetResponse, NetMulticast, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Finished                       (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       Character                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_C::NotifyAllTopPlayerFinish(bool Finished, class AShooterCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.NotifyAllTopPlayerFinish");

	AMissionType_Race_C_NotifyAllTopPlayerFinish_Params params;
	params.Finished = Finished;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race.MissionType_Race_C.Play Leaderboard Reactions
// (NetRequest, Event, Static, NetMulticast, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Leaderboard_Score_Float        (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_C::STATIC_Play_Leaderboard_Reactions(float Leaderboard_Score_Float, class AShooterCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.Play Leaderboard Reactions");

	AMissionType_Race_C_Play_Leaderboard_Reactions_Params params;
	params.Leaderboard_Score_Float = Leaderboard_Score_Float;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race.MissionType_Race_C.On Player Got in Top 10 Of The Leaderboard
// ()
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_C::On_Player_Got_in_Top_10_Of_The_Leaderboard(class AShooterCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.On Player Got in Top 10 Of The Leaderboard");

	AMissionType_Race_C_On_Player_Got_in_Top_10_Of_The_Leaderboard_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race.MissionType_Race_C.On Player Got First Place on the Leaderboard
// ()
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_C::On_Player_Got_First_Place_on_the_Leaderboard(class AShooterCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.On Player Got First Place on the Leaderboard");

	AMissionType_Race_C_On_Player_Got_First_Place_on_the_Leaderboard_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race.MissionType_Race_C.Play Encouragement Reactions
// ()

void AMissionType_Race_C::Play_Encouragement_Reactions()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.Play Encouragement Reactions");

	AMissionType_Race_C_Play_Encouragement_Reactions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race.MissionType_Race_C.BPOnMissionPlayerLeftBounds
// ()

void AMissionType_Race_C::BPOnMissionPlayerLeftBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.BPOnMissionPlayerLeftBounds");

	AMissionType_Race_C_BPOnMissionPlayerLeftBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race.MissionType_Race_C.AddPowerTriggersFromLastCheckPointToIgnoreList
// ()
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_C::AddPowerTriggersFromLastCheckPointToIgnoreList(class AShooterCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.AddPowerTriggersFromLastCheckPointToIgnoreList");

	AMissionType_Race_C_AddPowerTriggersFromLastCheckPointToIgnoreList_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race.MissionType_Race_C.AddTriggerToIgnoreList
// ()
// Parameters:
// class AMissionTrigger*         Trigger                        (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_C::AddTriggerToIgnoreList(class AMissionTrigger* Trigger, class AShooterCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.AddTriggerToIgnoreList");

	AMissionType_Race_C_AddTriggerToIgnoreList_Params params;
	params.Trigger = Trigger;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race.MissionType_Race_C.HasPlayerHitTrigger
// ()
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AMissionTrigger*         Trigger                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasHitBefore                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_C::HasPlayerHitTrigger(class AShooterCharacter* Player, class AMissionTrigger* Trigger, bool* HasHitBefore)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.HasPlayerHitTrigger");

	AMissionType_Race_C_HasPlayerHitTrigger_Params params;
	params.Player = Player;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasHitBefore != nullptr)
		*HasHitBefore = params.HasHitBefore;
}


// Function MissionType_Race.MissionType_Race_C.BPOnMissionPlayerRespawned
// ()
// Parameters:
// class AShooterCharacter**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_C::BPOnMissionPlayerRespawned(class AShooterCharacter** Player, class AShooterPlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.BPOnMissionPlayerRespawned");

	AMissionType_Race_C_BPOnMissionPlayerRespawned_Params params;
	params.Player = Player;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race.MissionType_Race_C.OnThrottledClientTick
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_C::OnThrottledClientTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.OnThrottledClientTick");

	AMissionType_Race_C_OnThrottledClientTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race.MissionType_Race_C.Play Reaction When Player Has Left Dino For Too Long
// ()

void AMissionType_Race_C::Play_Reaction_When_Player_Has_Left_Dino_For_Too_Long()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.Play Reaction When Player Has Left Dino For Too Long");

	AMissionType_Race_C_Play_Reaction_When_Player_Has_Left_Dino_For_Too_Long_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race.MissionType_Race_C.GetSpawnPointsForStartingLine
// ()
// Parameters:
// class AMissionServerSidePoint* MissionServerSidePoint         (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumberOfRacers                 (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        PrimalCharacterType            (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ForwardRot                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_C::GetSpawnPointsForStartingLine(class AMissionServerSidePoint* MissionServerSidePoint, int NumberOfRacers, class APrimalCharacter* PrimalCharacterType, struct FRotator* ForwardRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.GetSpawnPointsForStartingLine");

	AMissionType_Race_C_GetSpawnPointsForStartingLine_Params params;
	params.MissionServerSidePoint = MissionServerSidePoint;
	params.NumberOfRacers = NumberOfRacers;
	params.PrimalCharacterType = PrimalCharacterType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForwardRot != nullptr)
		*ForwardRot = params.ForwardRot;
}


// Function MissionType_Race.MissionType_Race_C.Play Checkpoint Reaction
// ()
// Parameters:
// bool                           Final_Checkpoint               (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_C::Play_Checkpoint_Reaction(bool Final_Checkpoint, class AShooterCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.Play Checkpoint Reaction");

	AMissionType_Race_C_Play_Checkpoint_Reaction_Params params;
	params.Final_Checkpoint = Final_Checkpoint;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race.MissionType_Race_C.GeneratePerPlayerPhaseRequirements
// (NetRequest, NetMulticast, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      Character                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionPhaseRequirement> Requirements                   (Parm, OutParm, ZeroConstructor)

void AMissionType_Race_C::GeneratePerPlayerPhaseRequirements(class AShooterPlayerController** Controller, class AShooterCharacter** Character, struct FName* PhaseName, TArray<struct FMissionPhaseRequirement>* Requirements)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.GeneratePerPlayerPhaseRequirements");

	AMissionType_Race_C_GeneratePerPlayerPhaseRequirements_Params params;
	params.Controller = Controller;
	params.Character = Character;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Requirements != nullptr)
		*Requirements = params.Requirements;
}


// Function MissionType_Race.MissionType_Race_C.ActivateRacePowerUps
// ()
// Parameters:
// class AMissionTrigger*         Trigger                        (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        TriggeringActor                (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_C::ActivateRacePowerUps(class AMissionTrigger* Trigger, class APrimalCharacter* TriggeringActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.ActivateRacePowerUps");

	AMissionType_Race_C_ActivateRacePowerUps_Params params;
	params.Trigger = Trigger;
	params.TriggeringActor = TriggeringActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race.MissionType_Race_C.CalcRaceXPRatio
// ()
// Parameters:
// class APrimalCharacter*        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Place                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMissionType_Race_C::CalcRaceXPRatio(class APrimalCharacter* Player, int Place)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.CalcRaceXPRatio");

	AMissionType_Race_C_CalcRaceXPRatio_Params params;
	params.Player = Player;
	params.Place = Place;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Race.MissionType_Race_C.BPGenerateMissionRewards
// ()
// Parameters:
// struct FCharacterAndControllerPair* Player                         (Parm)
// bool*                          bCompletedSuccessfully         (Parm, ZeroConstructor, IsPlainOldData)
// float                          XPReward                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class UPrimalItem*>     GeneratedItems                 (Parm, OutParm, ZeroConstructor)

void AMissionType_Race_C::BPGenerateMissionRewards(struct FCharacterAndControllerPair* Player, bool* bCompletedSuccessfully, float* XPReward, TArray<class UPrimalItem*>* GeneratedItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.BPGenerateMissionRewards");

	AMissionType_Race_C_BPGenerateMissionRewards_Params params;
	params.Player = Player;
	params.bCompletedSuccessfully = bCompletedSuccessfully;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (XPReward != nullptr)
		*XPReward = params.XPReward;
	if (GeneratedItems != nullptr)
		*GeneratedItems = params.GeneratedItems;
}


// Function MissionType_Race.MissionType_Race_C.BPGetMissionTimerText
// ()
// Parameters:
// class AShooterPlayerController** ShootCont                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AMissionType_Race_C::BPGetMissionTimerText(class AShooterPlayerController** ShootCont)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.BPGetMissionTimerText");

	AMissionType_Race_C_BPGetMissionTimerText_Params params;
	params.ShootCont = ShootCont;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Race.MissionType_Race_C.GeneratePhaseRequirements
// (Exec, Static, NetMulticast, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionPhaseRequirement> Requirements                   (Parm, OutParm, ZeroConstructor)

void AMissionType_Race_C::STATIC_GeneratePhaseRequirements(struct FName* PhaseName, TArray<struct FMissionPhaseRequirement>* Requirements)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.GeneratePhaseRequirements");

	AMissionType_Race_C_GeneratePhaseRequirements_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Requirements != nullptr)
		*Requirements = params.Requirements;
}


// Function MissionType_Race.MissionType_Race_C.GetDinoNameFromArray
// ()
// Parameters:
// int                            ArrayIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Item                           (Parm, OutParm, ZeroConstructor)

void AMissionType_Race_C::GetDinoNameFromArray(int ArrayIndex, class FString* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.GetDinoNameFromArray");

	AMissionType_Race_C_GetDinoNameFromArray_Params params;
	params.ArrayIndex = ArrayIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function MissionType_Race.MissionType_Race_C.GetNamedDinoSetup
// (NetReliable, Exec, Native, Static, NetMulticast, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDinoSetup              InSetup                        (Parm)
// class FString                  Name                           (Parm, ZeroConstructor)
// struct FDinoSetup              Setup                          (Parm, OutParm)

void AMissionType_Race_C::STATIC_GetNamedDinoSetup(const struct FDinoSetup& InSetup, const class FString& Name, struct FDinoSetup* Setup)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.GetNamedDinoSetup");

	AMissionType_Race_C_GetNamedDinoSetup_Params params;
	params.InSetup = InSetup;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Setup != nullptr)
		*Setup = params.Setup;
}


// Function MissionType_Race.MissionType_Race_C.IsMissionComplete
// ()
// Parameters:
// class AShooterCharacter**      forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForController                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_Race_C::IsMissionComplete(class AShooterCharacter** forCharacter, class AShooterPlayerController** ForController)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.IsMissionComplete");

	AMissionType_Race_C_IsMissionComplete_Params params;
	params.forCharacter = forCharacter;
	params.ForController = ForController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Race.MissionType_Race_C.TryIncrementCheckpoint
// (NetReliable, NetRequest, Exec, Event, Static, NetMulticast, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterPlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class AMissionTrigger*         HitTrigger                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           AtEnd                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_C::STATIC_TryIncrementCheckpoint(class AShooterPlayerController* PlayerController, class AMissionTrigger* HitTrigger, bool* Success, bool* AtEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.TryIncrementCheckpoint");

	AMissionType_Race_C_TryIncrementCheckpoint_Params params;
	params.PlayerController = PlayerController;
	params.HitTrigger = HitTrigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (AtEnd != nullptr)
		*AtEnd = params.AtEnd;
}


// Function MissionType_Race.MissionType_Race_C.BPIsPhaseComplete
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_Race_C::STATIC_BPIsPhaseComplete(struct FName* PhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.BPIsPhaseComplete");

	AMissionType_Race_C_BPIsPhaseComplete_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Race.MissionType_Race_C.GetPerPlayerWorldIndicators
// (Native, MulticastDelegate, Private, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      Character                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionWorldIndicator> WorldIndicators                (Parm, OutParm, ZeroConstructor)

void AMissionType_Race_C::GetPerPlayerWorldIndicators(class AShooterPlayerController** Controller, class AShooterCharacter** Character, TArray<struct FMissionWorldIndicator>* WorldIndicators)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.GetPerPlayerWorldIndicators");

	AMissionType_Race_C_GetPerPlayerWorldIndicators_Params params;
	params.Controller = Controller;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldIndicators != nullptr)
		*WorldIndicators = params.WorldIndicators;
}


// Function MissionType_Race.MissionType_Race_C.GetNextCheckpoint
// ()
// Parameters:
// class AShooterPlayerController* Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AMissionTrigger*         NewParam                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AMissionTrigger*         NextCheckpoint                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           CompletedRace                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_C::GetNextCheckpoint(class AShooterPlayerController* Controller, class AMissionTrigger* NewParam, int* index, class AMissionTrigger** NextCheckpoint, bool* CompletedRace)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.GetNextCheckpoint");

	AMissionType_Race_C_GetNextCheckpoint_Params params;
	params.Controller = Controller;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (index != nullptr)
		*index = params.index;
	if (NextCheckpoint != nullptr)
		*NextCheckpoint = params.NextCheckpoint;
	if (CompletedRace != nullptr)
		*CompletedRace = params.CompletedRace;
}


// Function MissionType_Race.MissionType_Race_C.UserConstructionScript
// ()

void AMissionType_Race_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.UserConstructionScript");

	AMissionType_Race_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race.MissionType_Race_C.BPOnMissionTriggerBeginOverlap
// ()
// Parameters:
// class AMissionTrigger**        Trigger                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_C::BPOnMissionTriggerBeginOverlap(class AMissionTrigger** Trigger, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.BPOnMissionTriggerBeginOverlap");

	AMissionType_Race_C_BPOnMissionTriggerBeginOverlap_Params params;
	params.Trigger = Trigger;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race.MissionType_Race_C.BPOnMissionComplete
// ()
// Parameters:
// class AShooterCharacter**      ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForController                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLastPhaseSuccess              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPRewarded                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UPrimalItem*>     ItemsRewarded                  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMissionType_Race_C::BPOnMissionComplete(class AShooterCharacter** ForPlayer, class AShooterPlayerController** ForController, bool* bLastPhaseSuccess, float* XPRewarded, TArray<class UPrimalItem*>* ItemsRewarded)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.BPOnMissionComplete");

	AMissionType_Race_C_BPOnMissionComplete_Params params;
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


// Function MissionType_Race.MissionType_Race_C.OnThrottledServerTick
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_C::OnThrottledServerTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.OnThrottledServerTick");

	AMissionType_Race_C_OnThrottledServerTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race.MissionType_Race_C.BPOnMissionServerSetup
// ()

void AMissionType_Race_C::BPOnMissionServerSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.BPOnMissionServerSetup");

	AMissionType_Race_C_BPOnMissionServerSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race.MissionType_Race_C.RaceStarted
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_C::RaceStarted(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.RaceStarted");

	AMissionType_Race_C_RaceStarted_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race.MissionType_Race_C.RaceSetup
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_C::RaceSetup(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.RaceSetup");

	AMissionType_Race_C_RaceSetup_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race.MissionType_Race_C.ReceiveBeginPlay
// ()

void AMissionType_Race_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.ReceiveBeginPlay");

	AMissionType_Race_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race.MissionType_Race_C.TeleportToStart
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_C::TeleportToStart(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.TeleportToStart");

	AMissionType_Race_C_TeleportToStart_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race.MissionType_Race_C.BPOnMissionDinoDied
// ()
// Parameters:
// class APrimalDinoCharacter**   Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class AController**            Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_C::BPOnMissionDinoDied(class APrimalDinoCharacter** Dino, float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.BPOnMissionDinoDied");

	AMissionType_Race_C_BPOnMissionDinoDied_Params params;
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


// Function MissionType_Race.MissionType_Race_C.BPOnMissionPlayerDied
// ()
// Parameters:
// class AShooterCharacter**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class AController**            Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_C::BPOnMissionPlayerDied(class AShooterCharacter** Player, class AShooterPlayerController** Controller, float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.BPOnMissionPlayerDied");

	AMissionType_Race_C_BPOnMissionPlayerDied_Params params;
	params.Player = Player;
	params.Controller = Controller;
	params.KillingDamage = KillingDamage;
	params.Killer = Killer;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function MissionType_Race.MissionType_Race_C.PutPlayersOnMissionDino
// ()

void AMissionType_Race_C::PutPlayersOnMissionDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.PutPlayersOnMissionDino");

	AMissionType_Race_C_PutPlayersOnMissionDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race.MissionType_Race_C.BPOnPlayerRemovedFromMission
// ()
// Parameters:
// class AShooterCharacter**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromMissionCompleteEvent      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLastPhaseSuccess              (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_C::BPOnPlayerRemovedFromMission(class AShooterCharacter** Player, class AShooterPlayerController** Controller, bool* bFromMissionCompleteEvent, bool* bLastPhaseSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.BPOnPlayerRemovedFromMission");

	AMissionType_Race_C_BPOnPlayerRemovedFromMission_Params params;
	params.Player = Player;
	params.Controller = Controller;
	params.bFromMissionCompleteEvent = bFromMissionCompleteEvent;
	params.bLastPhaseSuccess = bLastPhaseSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Race.MissionType_Race_C.ExecuteUbergraph_MissionType_Race
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Race_C::ExecuteUbergraph_MissionType_Race(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Race.MissionType_Race_C.ExecuteUbergraph_MissionType_Race");

	AMissionType_Race_C_ExecuteUbergraph_MissionType_Race_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
