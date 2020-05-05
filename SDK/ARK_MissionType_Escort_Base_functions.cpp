// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Escort_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Escort_Base.MissionType_Escort_Base_C.InitMeshCheckpoints
// ()

void AMissionType_Escort_Base_C::InitMeshCheckpoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.InitMeshCheckpoints");

	AMissionType_Escort_Base_C_InitMeshCheckpoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.BPGetExtraLocalMissionIndicators
// (NetRequest, Exec, Native, Static, NetMulticast, Private, Protected, HasDefaults, BlueprintEvent, NetValidate)
// Parameters:
// class APlayerController**      Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionWorldIndicator> IndicatorsIn                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMissionWorldIndicator> IndicatorsOut                  (Parm, OutParm, ZeroConstructor)

void AMissionType_Escort_Base_C::STATIC_BPGetExtraLocalMissionIndicators(class APlayerController** Controller, class AShooterCharacter** PlayerPawn, TArray<struct FMissionWorldIndicator>* IndicatorsIn, TArray<struct FMissionWorldIndicator>* IndicatorsOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.BPGetExtraLocalMissionIndicators");

	AMissionType_Escort_Base_C_BPGetExtraLocalMissionIndicators_Params params;
	params.Controller = Controller;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IndicatorsIn != nullptr)
		*IndicatorsIn = params.IndicatorsIn;
	if (IndicatorsOut != nullptr)
		*IndicatorsOut = params.IndicatorsOut;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.UpdatePreventMovementOnEscortDamaged
// ()
// Parameters:
// bool                           PreventMovement                (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Base_C::UpdatePreventMovementOnEscortDamaged(bool PreventMovement)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.UpdatePreventMovementOnEscortDamaged");

	AMissionType_Escort_Base_C_UpdatePreventMovementOnEscortDamaged_Params params;
	params.PreventMovement = PreventMovement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.GetAttackingDinosTarget
// ()
// Parameters:
// class APrimalDinoCharacter*    DinoToTarget                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Base_C::GetAttackingDinosTarget(class APrimalDinoCharacter** DinoToTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.GetAttackingDinosTarget");

	AMissionType_Escort_Base_C_GetAttackingDinosTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DinoToTarget != nullptr)
		*DinoToTarget = params.DinoToTarget;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.UpdateBuffLaunchMagnitude
// ()

void AMissionType_Escort_Base_C::UpdateBuffLaunchMagnitude()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.UpdateBuffLaunchMagnitude");

	AMissionType_Escort_Base_C_UpdateBuffLaunchMagnitude_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.ExtraEscortDinoSetup
// ()

void AMissionType_Escort_Base_C::ExtraEscortDinoSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.ExtraEscortDinoSetup");

	AMissionType_Escort_Base_C_ExtraEscortDinoSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.BPGetMissionTimerText
// ()
// Parameters:
// class AShooterPlayerController** ShootCont                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AMissionType_Escort_Base_C::BPGetMissionTimerText(class AShooterPlayerController** ShootCont)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.BPGetMissionTimerText");

	AMissionType_Escort_Base_C_BPGetMissionTimerText_Params params;
	params.ShootCont = ShootCont;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.ReceiveDestroyed
// ()

void AMissionType_Escort_Base_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.ReceiveDestroyed");

	AMissionType_Escort_Base_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.GetPerPlayerWorldIndicators
// (NetRequest, Native, NetResponse, Static, NetMulticast, Private, Protected, HasDefaults, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      Character                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionWorldIndicator> WorldIndicators                (Parm, OutParm, ZeroConstructor)

void AMissionType_Escort_Base_C::STATIC_GetPerPlayerWorldIndicators(class AShooterPlayerController** Controller, class AShooterCharacter** Character, TArray<struct FMissionWorldIndicator>* WorldIndicators)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.GetPerPlayerWorldIndicators");

	AMissionType_Escort_Base_C_GetPerPlayerWorldIndicators_Params params;
	params.Controller = Controller;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldIndicators != nullptr)
		*WorldIndicators = params.WorldIndicators;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.BPOnMissionPlayerLeftBounds
// ()

void AMissionType_Escort_Base_C::BPOnMissionPlayerLeftBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.BPOnMissionPlayerLeftBounds");

	AMissionType_Escort_Base_C_BPOnMissionPlayerLeftBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.OnThrottledServerTick
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Base_C::OnThrottledServerTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.OnThrottledServerTick");

	AMissionType_Escort_Base_C_OnThrottledServerTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.BPOnMissionPlayerRespawned
// ()
// Parameters:
// class AShooterCharacter**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Base_C::BPOnMissionPlayerRespawned(class AShooterCharacter** Player, class AShooterPlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.BPOnMissionPlayerRespawned");

	AMissionType_Escort_Base_C_BPOnMissionPlayerRespawned_Params params;
	params.Player = Player;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.ExtraSpecificDinoSetup
// ()
// Parameters:
// class APrimalDinoCharacter*    Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// class AMissionServerSidePoint* Spawner                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAttackerDino                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Base_C::ExtraSpecificDinoSetup(class APrimalDinoCharacter* Dino, class AMissionServerSidePoint* Spawner, bool* IsAttackerDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.ExtraSpecificDinoSetup");

	AMissionType_Escort_Base_C_ExtraSpecificDinoSetup_Params params;
	params.Dino = Dino;
	params.Spawner = Spawner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAttackerDino != nullptr)
		*IsAttackerDino = params.IsAttackerDino;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.TestingString
// ()
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Base_C::TestingString(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.TestingString");

	AMissionType_Escort_Base_C_TestingString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.ShouldShowHints
// (NetReliable, Exec, Private, Protected, HasDefaults, BlueprintEvent, NetValidate)

void AMissionType_Escort_Base_C::ShouldShowHints()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.ShouldShowHints");

	AMissionType_Escort_Base_C_ShouldShowHints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.GeneratePhaseRequirements
// (Exec, Event, Private, Protected, HasDefaults, BlueprintEvent, NetValidate)
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionPhaseRequirement> Requirements                   (Parm, OutParm, ZeroConstructor)

void AMissionType_Escort_Base_C::GeneratePhaseRequirements(struct FName* PhaseName, TArray<struct FMissionPhaseRequirement>* Requirements)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.GeneratePhaseRequirements");

	AMissionType_Escort_Base_C_GeneratePhaseRequirements_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Requirements != nullptr)
		*Requirements = params.Requirements;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.SpawnTriggerDinos
// (NetReliable, NetRequest, Native, NetResponse, Private, Protected, HasDefaults, BlueprintEvent, NetValidate)
// Parameters:
// class AMissionTrigger*         Trigger                        (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Base_C::SpawnTriggerDinos(class AMissionTrigger* Trigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.SpawnTriggerDinos");

	AMissionType_Escort_Base_C_SpawnTriggerDinos_Params params;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.UpdateCheckpointVFX
// ()

void AMissionType_Escort_Base_C::UpdateCheckpointVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.UpdateCheckpointVFX");

	AMissionType_Escort_Base_C_UpdateCheckpointVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.SetupPhaseComplete
// ()
// Parameters:
// bool                           Complete                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Base_C::SetupPhaseComplete(bool* Complete)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.SetupPhaseComplete");

	AMissionType_Escort_Base_C_SetupPhaseComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Complete != nullptr)
		*Complete = params.Complete;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.BPIsPhaseComplete
// ()
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_Escort_Base_C::BPIsPhaseComplete(struct FName* PhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.BPIsPhaseComplete");

	AMissionType_Escort_Base_C_BPIsPhaseComplete_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.GetCurrentWorldIndicators
// (NetReliable, Event, NetResponse, Static, Private, Protected, HasDefaults, BlueprintEvent, NetValidate)
// Parameters:
// TArray<struct FMissionWorldIndicator> WorldIndicators                (Parm, OutParm, ZeroConstructor)

void AMissionType_Escort_Base_C::STATIC_GetCurrentWorldIndicators(TArray<struct FMissionWorldIndicator>* WorldIndicators)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.GetCurrentWorldIndicators");

	AMissionType_Escort_Base_C_GetCurrentWorldIndicators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldIndicators != nullptr)
		*WorldIndicators = params.WorldIndicators;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.TryIncrementCheckpoint
// ()
// Parameters:
// class AMissionTrigger*         HitTrigger                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Succes                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           AtEnd                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Base_C::TryIncrementCheckpoint(class AMissionTrigger* HitTrigger, bool* Succes, bool* AtEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.TryIncrementCheckpoint");

	AMissionType_Escort_Base_C_TryIncrementCheckpoint_Params params;
	params.HitTrigger = HitTrigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Succes != nullptr)
		*Succes = params.Succes;
	if (AtEnd != nullptr)
		*AtEnd = params.AtEnd;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.UserConstructionScript
// ()

void AMissionType_Escort_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.UserConstructionScript");

	AMissionType_Escort_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.BPOnMissionServerSetup
// ()

void AMissionType_Escort_Base_C::BPOnMissionServerSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.BPOnMissionServerSetup");

	AMissionType_Escort_Base_C_BPOnMissionServerSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.EscortPhaseSetup
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Base_C::EscortPhaseSetup(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.EscortPhaseSetup");

	AMissionType_Escort_Base_C_EscortPhaseSetup_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.BPOnMissionTriggerBeginOverlap
// ()
// Parameters:
// class AMissionTrigger**        Trigger                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Base_C::BPOnMissionTriggerBeginOverlap(class AMissionTrigger** Trigger, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.BPOnMissionTriggerBeginOverlap");

	AMissionType_Escort_Base_C_BPOnMissionTriggerBeginOverlap_Params params;
	params.Trigger = Trigger;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.EscortPhaseStarted
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Base_C::EscortPhaseStarted(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.EscortPhaseStarted");

	AMissionType_Escort_Base_C_EscortPhaseStarted_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.MultiActivateCheckpoint
// ()
// Parameters:
// class AMissionTrigger*         checkpoint                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Base_C::MultiActivateCheckpoint(class AMissionTrigger* checkpoint, bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.MultiActivateCheckpoint");

	AMissionType_Escort_Base_C_MultiActivateCheckpoint_Params params;
	params.checkpoint = checkpoint;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.Event_EscortDinoTakeDamage
// ()
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Base_C::Event_EscortDinoTakeDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.Event_EscortDinoTakeDamage");

	AMissionType_Escort_Base_C_Event_EscortDinoTakeDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.HideProtectEscortHint
// ()

void AMissionType_Escort_Base_C::HideProtectEscortHint()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.HideProtectEscortHint");

	AMissionType_Escort_Base_C_HideProtectEscortHint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.Event_EscortDinoDied
// ()
// Parameters:
// class APrimalCharacter*        DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Base_C::Event_EscortDinoDied(class APrimalCharacter* DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.Event_EscortDinoDied");

	AMissionType_Escort_Base_C_Event_EscortDinoDied_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.BPOnMissionDeactivated
// ()

void AMissionType_Escort_Base_C::BPOnMissionDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.BPOnMissionDeactivated");

	AMissionType_Escort_Base_C_BPOnMissionDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.BPOnMissionComplete
// ()
// Parameters:
// class AShooterCharacter**      ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForController                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLastPhaseSuccess              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPRewarded                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UPrimalItem*>     ItemsRewarded                  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMissionType_Escort_Base_C::BPOnMissionComplete(class AShooterCharacter** ForPlayer, class AShooterPlayerController** ForController, bool* bLastPhaseSuccess, float* XPRewarded, TArray<class UPrimalItem*>* ItemsRewarded)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.BPOnMissionComplete");

	AMissionType_Escort_Base_C_BPOnMissionComplete_Params params;
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


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.MultiAdjustEscortDinoSpeed
// ()

void AMissionType_Escort_Base_C::MultiAdjustEscortDinoSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.MultiAdjustEscortDinoSpeed");

	AMissionType_Escort_Base_C_MultiAdjustEscortDinoSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.MultiUpdateHiddenMeshCheckpoints
// ()
// Parameters:
// TArray<class AMissionTrigger*> Checkpoints                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Hidden                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Base_C::MultiUpdateHiddenMeshCheckpoints(bool Hidden, bool Active, TArray<class AMissionTrigger*>* Checkpoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.MultiUpdateHiddenMeshCheckpoints");

	AMissionType_Escort_Base_C_MultiUpdateHiddenMeshCheckpoints_Params params;
	params.Hidden = Hidden;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Checkpoints != nullptr)
		*Checkpoints = params.Checkpoints;
}


// Function MissionType_Escort_Base.MissionType_Escort_Base_C.ExecuteUbergraph_MissionType_Escort_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Base_C::ExecuteUbergraph_MissionType_Escort_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Base.MissionType_Escort_Base_C.ExecuteUbergraph_MissionType_Escort_Base");

	AMissionType_Escort_Base_C_ExecuteUbergraph_MissionType_Escort_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
