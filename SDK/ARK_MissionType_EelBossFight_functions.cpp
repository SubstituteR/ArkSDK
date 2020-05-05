// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_EelBossFight_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPAllowPlayerToLeaveMission
// ()
// Parameters:
// class AShooterCharacter**      PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_EelBossFight_C::BPAllowPlayerToLeaveMission(class AShooterCharacter** PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPAllowPlayerToLeaveMission");

	AMissionType_EelBossFight_C_BPAllowPlayerToLeaveMission_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPOnMissionCheat
// ()
// Parameters:
// struct FName*                  CheatName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSetValue                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_EelBossFight_C::BPOnMissionCheat(struct FName* CheatName, bool* bSetValue, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPOnMissionCheat");

	AMissionType_EelBossFight_C_BPOnMissionCheat_Params params;
	params.CheatName = CheatName;
	params.bSetValue = bSetValue;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.Teleport Back CharactersInArena
// (NetReliable, NetRequest, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent, NetValidate)

void AMissionType_EelBossFight_C::STATIC_Teleport_Back_CharactersInArena()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.Teleport Back CharactersInArena");

	AMissionType_EelBossFight_C_Teleport_Back_CharactersInArena_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPOnPlayerRemovedFromMission
// (NetReliable, Exec, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterCharacter**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromMissionCompleteEvent      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLastPhaseSuccess              (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_EelBossFight_C::BPOnPlayerRemovedFromMission(class AShooterCharacter** Player, class AShooterPlayerController** Controller, bool* bFromMissionCompleteEvent, bool* bLastPhaseSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPOnPlayerRemovedFromMission");

	AMissionType_EelBossFight_C_BPOnPlayerRemovedFromMission_Params params;
	params.Player = Player;
	params.Controller = Controller;
	params.bFromMissionCompleteEvent = bFromMissionCompleteEvent;
	params.bLastPhaseSuccess = bLastPhaseSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.Teleport CharactersToArena
// (NetReliable, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent, NetValidate)
// Parameters:
// TArray<class APrimalCharacter*> Characters                     (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMissionType_EelBossFight_C::Teleport_CharactersToArena(TArray<class APrimalCharacter*>* Characters)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.Teleport CharactersToArena");

	AMissionType_EelBossFight_C_Teleport_CharactersToArena_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Characters != nullptr)
		*Characters = params.Characters;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.DebugSplinePaths
// (NetReliable, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent, NetValidate)

void AMissionType_EelBossFight_C::STATIC_DebugSplinePaths()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.DebugSplinePaths");

	AMissionType_EelBossFight_C_DebugSplinePaths_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPClientHandleNetExecCommand
// (Event, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, BlueprintEvent, NetValidate)
// Parameters:
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_EelBossFight_C::STATIC_BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPClientHandleNetExecCommand");

	AMissionType_EelBossFight_C_BPClientHandleNetExecCommand_Params params;
	params.CommandName = CommandName;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.Issue Return Timer
// (NetReliable, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent, NetValidate)

void AMissionType_EelBossFight_C::STATIC_Issue_Return_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.Issue Return Timer");

	AMissionType_EelBossFight_C_Issue_Return_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.Get Spawn Dino Number multiplier by Player Number
// ()
// Parameters:
// int                            SpawnDinoNumber                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_EelBossFight_C::Get_Spawn_Dino_Number_multiplier_by_Player_Number(int* SpawnDinoNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.Get Spawn Dino Number multiplier by Player Number");

	AMissionType_EelBossFight_C_Get_Spawn_Dino_Number_multiplier_by_Player_Number_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnDinoNumber != nullptr)
		*SpawnDinoNumber = params.SpawnDinoNumber;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.CheckOverlapAndAddImpulse
// ()

void AMissionType_EelBossFight_C::CheckOverlapAndAddImpulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.CheckOverlapAndAddImpulse");

	AMissionType_EelBossFight_C_CheckOverlapAndAddImpulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.CheckBiteAttackOnSpline
// ()

void AMissionType_EelBossFight_C::CheckBiteAttackOnSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.CheckBiteAttackOnSpline");

	AMissionType_EelBossFight_C_CheckBiteAttackOnSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPOnMissionDinoDied
// ()
// Parameters:
// class APrimalDinoCharacter**   Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class AController**            Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_EelBossFight_C::BPOnMissionDinoDied(class APrimalDinoCharacter** Dino, float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPOnMissionDinoDied");

	AMissionType_EelBossFight_C_BPOnMissionDinoDied_Params params;
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


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPOnMissionPlayerRespawned
// ()
// Parameters:
// class AShooterCharacter**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_EelBossFight_C::BPOnMissionPlayerRespawned(class AShooterCharacter** Player, class AShooterPlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPOnMissionPlayerRespawned");

	AMissionType_EelBossFight_C_BPOnMissionPlayerRespawned_Params params;
	params.Player = Player;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPOnMissionPlayerLeftBounds
// ()

void AMissionType_EelBossFight_C::BPOnMissionPlayerLeftBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPOnMissionPlayerLeftBounds");

	AMissionType_EelBossFight_C_BPOnMissionPlayerLeftBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPOnPlayerAddedToMission
// ()
// Parameters:
// class AShooterCharacter**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_EelBossFight_C::BPOnPlayerAddedToMission(class AShooterCharacter** Player, class AShooterPlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPOnPlayerAddedToMission");

	AMissionType_EelBossFight_C_BPOnPlayerAddedToMission_Params params;
	params.Player = Player;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.Clear Aggro
// ()

void AMissionType_EelBossFight_C::Clear_Aggro()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.Clear Aggro");

	AMissionType_EelBossFight_C_Clear_Aggro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.StarttoUseAggroForMama
// ()

void AMissionType_EelBossFight_C::StarttoUseAggroForMama()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.StarttoUseAggroForMama");

	AMissionType_EelBossFight_C_StarttoUseAggroForMama_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.GetPerPlayerWorldIndicators
// (NetReliable, NetRequest, Native, Public, Private, HasOutParms, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      Character                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionWorldIndicator> WorldIndicators                (Parm, OutParm, ZeroConstructor)

void AMissionType_EelBossFight_C::GetPerPlayerWorldIndicators(class AShooterPlayerController** Controller, class AShooterCharacter** Character, TArray<struct FMissionWorldIndicator>* WorldIndicators)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.GetPerPlayerWorldIndicators");

	AMissionType_EelBossFight_C_GetPerPlayerWorldIndicators_Params params;
	params.Controller = Controller;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldIndicators != nullptr)
		*WorldIndicators = params.WorldIndicators;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.DeactivateCyclone
// ()

void AMissionType_EelBossFight_C::DeactivateCyclone()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.DeactivateCyclone");

	AMissionType_EelBossFight_C_DeactivateCyclone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPGetMissionTimerText
// ()
// Parameters:
// class AShooterPlayerController** ShootCont                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AMissionType_EelBossFight_C::BPGetMissionTimerText(class AShooterPlayerController** ShootCont)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPGetMissionTimerText");

	AMissionType_EelBossFight_C_BPGetMissionTimerText_Params params;
	params.ShootCont = ShootCont;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.GeneratePhaseRequirements
// ()
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionPhaseRequirement> Requirements                   (Parm, OutParm, ZeroConstructor)

void AMissionType_EelBossFight_C::GeneratePhaseRequirements(struct FName* PhaseName, TArray<struct FMissionPhaseRequirement>* Requirements)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.GeneratePhaseRequirements");

	AMissionType_EelBossFight_C_GeneratePhaseRequirements_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Requirements != nullptr)
		*Requirements = params.Requirements;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.MinionsSetTarget
// ()

void AMissionType_EelBossFight_C::MinionsSetTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.MinionsSetTarget");

	AMissionType_EelBossFight_C_MinionsSetTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.DebugDrawMinionsLocation
// ()

void AMissionType_EelBossFight_C::DebugDrawMinionsLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.DebugDrawMinionsLocation");

	AMissionType_EelBossFight_C_DebugDrawMinionsLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.SpawnEelMinionsForWave
// ()
// Parameters:
// int                            WaveIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_EelBossFight_C::SpawnEelMinionsForWave(int WaveIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.SpawnEelMinionsForWave");

	AMissionType_EelBossFight_C_SpawnEelMinionsForWave_Params params;
	params.WaveIndex = WaveIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.SpawnOneEelMinion
// ()

void AMissionType_EelBossFight_C::SpawnOneEelMinion()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.SpawnOneEelMinion");

	AMissionType_EelBossFight_C_SpawnOneEelMinion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPStaticCanStartMission
// ()
// Parameters:
// class APlayerController**      Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalBuff_MissionData** PlayerMissionData              (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ClientFailureReason            (Parm, OutParm, ZeroConstructor)
// class AActor*                  OutSelectedMissionDispatcher   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_EelBossFight_C::BPStaticCanStartMission(class APlayerController** Controller, class AShooterCharacter** PlayerPawn, class APrimalBuff_MissionData** PlayerMissionData, class FString* ClientFailureReason, class AActor** OutSelectedMissionDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPStaticCanStartMission");

	AMissionType_EelBossFight_C_BPStaticCanStartMission_Params params;
	params.Controller = Controller;
	params.PlayerPawn = PlayerPawn;
	params.PlayerMissionData = PlayerMissionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientFailureReason != nullptr)
		*ClientFailureReason = params.ClientFailureReason;
	if (OutSelectedMissionDispatcher != nullptr)
		*OutSelectedMissionDispatcher = params.OutSelectedMissionDispatcher;

	return params.ReturnValue;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPIsPhaseComplete
// ()
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_EelBossFight_C::BPIsPhaseComplete(struct FName* PhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPIsPhaseComplete");

	AMissionType_EelBossFight_C_BPIsPhaseComplete_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.UserConstructionScript
// ()

void AMissionType_EelBossFight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.UserConstructionScript");

	AMissionType_EelBossFight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPOnMissionServerSetup
// ()

void AMissionType_EelBossFight_C::BPOnMissionServerSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPOnMissionServerSetup");

	AMissionType_EelBossFight_C_BPOnMissionServerSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.PrepareTeleport
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_EelBossFight_C::PrepareTeleport(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.PrepareTeleport");

	AMissionType_EelBossFight_C_PrepareTeleport_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.OnThrottledClientTick
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_EelBossFight_C::OnThrottledClientTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.OnThrottledClientTick");

	AMissionType_EelBossFight_C_OnThrottledClientTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.TeleportAndSpawnEels
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_EelBossFight_C::TeleportAndSpawnEels(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.TeleportAndSpawnEels");

	AMissionType_EelBossFight_C_TeleportAndSpawnEels_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.OnThrottledServerTick
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_EelBossFight_C::OnThrottledServerTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.OnThrottledServerTick");

	AMissionType_EelBossFight_C_OnThrottledServerTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.MamaOutAndSetup
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_EelBossFight_C::MamaOutAndSetup(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.MamaOutAndSetup");

	AMissionType_EelBossFight_C_MamaOutAndSetup_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.CleanUpAndTeleportBack
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_EelBossFight_C::CleanUpAndTeleportBack(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.CleanUpAndTeleportBack");

	AMissionType_EelBossFight_C_CleanUpAndTeleportBack_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPOnMissionComplete
// ()
// Parameters:
// class AShooterCharacter**      ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForController                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLastPhaseSuccess              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPRewarded                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UPrimalItem*>     ItemsRewarded                  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMissionType_EelBossFight_C::BPOnMissionComplete(class AShooterCharacter** ForPlayer, class AShooterPlayerController** ForController, bool* bLastPhaseSuccess, float* XPRewarded, TArray<class UPrimalItem*>* ItemsRewarded)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPOnMissionComplete");

	AMissionType_EelBossFight_C_BPOnMissionComplete_Params params;
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


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPOnMissionPlayerDied
// ()
// Parameters:
// class AShooterCharacter**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class AController**            Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_EelBossFight_C::BPOnMissionPlayerDied(class AShooterCharacter** Player, class AShooterPlayerController** Controller, float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPOnMissionPlayerDied");

	AMissionType_EelBossFight_C_BPOnMissionPlayerDied_Params params;
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


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPOnMissionDeactivated
// ()

void AMissionType_EelBossFight_C::BPOnMissionDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.BPOnMissionDeactivated");

	AMissionType_EelBossFight_C_BPOnMissionDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.On Current Mama Phase Complete
// ()

void AMissionType_EelBossFight_C::On_Current_Mama_Phase_Complete()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.On Current Mama Phase Complete");

	AMissionType_EelBossFight_C_On_Current_Mama_Phase_Complete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_EelBossFight.MissionType_EelBossFight_C.ExecuteUbergraph_MissionType_EelBossFight
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_EelBossFight_C::ExecuteUbergraph_MissionType_EelBossFight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_EelBossFight.MissionType_EelBossFight_C.ExecuteUbergraph_MissionType_EelBossFight");

	AMissionType_EelBossFight_C_ExecuteUbergraph_MissionType_EelBossFight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
