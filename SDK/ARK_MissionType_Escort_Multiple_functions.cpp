// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Escort_Multiple_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.CalculateLeaderboardScore
// ()
// Parameters:
// float                          Score                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Multiple_C::CalculateLeaderboardScore(float* Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.CalculateLeaderboardScore");

	AMissionType_Escort_Multiple_C_CalculateLeaderboardScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Score != nullptr)
		*Score = params.Score;
}


// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.UpdateAttackingDinoTargetOnEscortDinoDied
// (NetReliable, Event, Static, NetMulticast, Public, Delegate, HasDefaults, BlueprintEvent, NetValidate)

void AMissionType_Escort_Multiple_C::STATIC_UpdateAttackingDinoTargetOnEscortDinoDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.UpdateAttackingDinoTargetOnEscortDinoDied");

	AMissionType_Escort_Multiple_C_UpdateAttackingDinoTargetOnEscortDinoDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.OnThrottledServerTick
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Multiple_C::OnThrottledServerTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.OnThrottledServerTick");

	AMissionType_Escort_Multiple_C_OnThrottledServerTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.BPGetExtraLocalMissionIndicators
// (NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, Public, Delegate, HasDefaults, BlueprintEvent, NetValidate)
// Parameters:
// class APlayerController**      Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionWorldIndicator> IndicatorsIn                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMissionWorldIndicator> IndicatorsOut                  (Parm, OutParm, ZeroConstructor)

void AMissionType_Escort_Multiple_C::STATIC_BPGetExtraLocalMissionIndicators(class APlayerController** Controller, class AShooterCharacter** PlayerPawn, TArray<struct FMissionWorldIndicator>* IndicatorsIn, TArray<struct FMissionWorldIndicator>* IndicatorsOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.BPGetExtraLocalMissionIndicators");

	AMissionType_Escort_Multiple_C_BPGetExtraLocalMissionIndicators_Params params;
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


// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.UpdatePreventMovementOnEscortDamaged
// ()
// Parameters:
// bool*                          PreventMovement                (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Multiple_C::UpdatePreventMovementOnEscortDamaged(bool* PreventMovement)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.UpdatePreventMovementOnEscortDamaged");

	AMissionType_Escort_Multiple_C_UpdatePreventMovementOnEscortDamaged_Params params;
	params.PreventMovement = PreventMovement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.GetAttackingDinosTarget
// ()
// Parameters:
// class APrimalDinoCharacter*    DinoToTarget                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Multiple_C::GetAttackingDinosTarget(class APrimalDinoCharacter** DinoToTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.GetAttackingDinosTarget");

	AMissionType_Escort_Multiple_C_GetAttackingDinosTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DinoToTarget != nullptr)
		*DinoToTarget = params.DinoToTarget;
}


// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.MakeDinoBaby
// ()
// Parameters:
// class APrimalDinoCharacter*    Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          BabyAge                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ExtraReceiveDamMult            (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Multiple_C::MakeDinoBaby(class APrimalDinoCharacter* Dino, float BabyAge, float ExtraReceiveDamMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.MakeDinoBaby");

	AMissionType_Escort_Multiple_C_MakeDinoBaby_Params params;
	params.Dino = Dino;
	params.BabyAge = BabyAge;
	params.ExtraReceiveDamMult = ExtraReceiveDamMult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.RemoveDinoFromFollowers
// ()
// Parameters:
// class AActor*                  DinoActor                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Multiple_C::RemoveDinoFromFollowers(class AActor* DinoActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.RemoveDinoFromFollowers");

	AMissionType_Escort_Multiple_C_RemoveDinoFromFollowers_Params params;
	params.DinoActor = DinoActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.GetNextLeader
// ()
// Parameters:
// class APrimalDinoCharacter*    LeaderDino                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Multiple_C::GetNextLeader(class APrimalDinoCharacter** LeaderDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.GetNextLeader");

	AMissionType_Escort_Multiple_C_GetNextLeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LeaderDino != nullptr)
		*LeaderDino = params.LeaderDino;
}


// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.GetPerPlayerWorldIndicators
// (NetRequest, Native, Event, Public, Delegate, HasDefaults, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      Character                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionWorldIndicator> WorldIndicators                (Parm, OutParm, ZeroConstructor)

void AMissionType_Escort_Multiple_C::GetPerPlayerWorldIndicators(class AShooterPlayerController** Controller, class AShooterCharacter** Character, TArray<struct FMissionWorldIndicator>* WorldIndicators)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.GetPerPlayerWorldIndicators");

	AMissionType_Escort_Multiple_C_GetPerPlayerWorldIndicators_Params params;
	params.Controller = Controller;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldIndicators != nullptr)
		*WorldIndicators = params.WorldIndicators;
}


// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.ExtraFollowerSetup
// ()
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Multiple_C::ExtraFollowerSetup(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.ExtraFollowerSetup");

	AMissionType_Escort_Multiple_C_ExtraFollowerSetup_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.GeneratePhaseRequirements
// (Native, NetResponse, Public, Delegate, HasDefaults, BlueprintEvent, NetValidate)
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionPhaseRequirement> Requirements                   (Parm, OutParm, ZeroConstructor)

void AMissionType_Escort_Multiple_C::GeneratePhaseRequirements(struct FName* PhaseName, TArray<struct FMissionPhaseRequirement>* Requirements)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.GeneratePhaseRequirements");

	AMissionType_Escort_Multiple_C_GeneratePhaseRequirements_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Requirements != nullptr)
		*Requirements = params.Requirements;
}


// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.ShouldShowHints
// ()

void AMissionType_Escort_Multiple_C::ShouldShowHints()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.ShouldShowHints");

	AMissionType_Escort_Multiple_C_ShouldShowHints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.UpdateFollowTargets
// ()

void AMissionType_Escort_Multiple_C::UpdateFollowTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.UpdateFollowTargets");

	AMissionType_Escort_Multiple_C_UpdateFollowTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.UserConstructionScript
// ()

void AMissionType_Escort_Multiple_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.UserConstructionScript");

	AMissionType_Escort_Multiple_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.EscortPhaseSetup
// ()
// Parameters:
// struct FName*                  OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Multiple_C::EscortPhaseSetup(struct FName* OldPhaseName, struct FName* NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.EscortPhaseSetup");

	AMissionType_Escort_Multiple_C_EscortPhaseSetup_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.Event_EscortDinoDied
// ()
// Parameters:
// class APrimalCharacter**       DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Multiple_C::Event_EscortDinoDied(class APrimalCharacter** DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.Event_EscortDinoDied");

	AMissionType_Escort_Multiple_C_Event_EscortDinoDied_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.MultiAdjustFollowerEscortSpeed
// ()

void AMissionType_Escort_Multiple_C::MultiAdjustFollowerEscortSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.MultiAdjustFollowerEscortSpeed");

	AMissionType_Escort_Multiple_C_MultiAdjustFollowerEscortSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.BindFollowersDamage
// ()

void AMissionType_Escort_Multiple_C::BindFollowersDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.BindFollowersDamage");

	AMissionType_Escort_Multiple_C_BindFollowersDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.BindFollowerDied
// ()

void AMissionType_Escort_Multiple_C::BindFollowerDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.BindFollowerDied");

	AMissionType_Escort_Multiple_C_BindFollowerDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.Event_EscortDinoTakeDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Multiple_C::Event_EscortDinoTakeDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.Event_EscortDinoTakeDamage");

	AMissionType_Escort_Multiple_C_Event_EscortDinoTakeDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.BPOnMissionComplete
// ()
// Parameters:
// class AShooterCharacter**      ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForController                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLastPhaseSuccess              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPRewarded                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UPrimalItem*>     ItemsRewarded                  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMissionType_Escort_Multiple_C::BPOnMissionComplete(class AShooterCharacter** ForPlayer, class AShooterPlayerController** ForController, bool* bLastPhaseSuccess, float* XPRewarded, TArray<class UPrimalItem*>* ItemsRewarded)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.BPOnMissionComplete");

	AMissionType_Escort_Multiple_C_BPOnMissionComplete_Params params;
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


// Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.ExecuteUbergraph_MissionType_Escort_Multiple
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Multiple_C::ExecuteUbergraph_MissionType_Escort_Multiple(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Multiple.MissionType_Escort_Multiple_C.ExecuteUbergraph_MissionType_Escort_Multiple");

	AMissionType_Escort_Multiple_C_ExecuteUbergraph_MissionType_Escort_Multiple_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
