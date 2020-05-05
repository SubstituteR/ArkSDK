// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Hunt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Hunt.MissionType_Hunt_C.StartFadeOut
// ()

void AMissionType_Hunt_C::StartFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.StartFadeOut");

	AMissionType_Hunt_C_StartFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt.MissionType_Hunt_C.GetDinosToSpawnForStage
// (NetReliable, NetResponse, Static, NetMulticast, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// int                            ForStage                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FDinoSetup>      DinosSetups                    (Parm, OutParm, ZeroConstructor)
// TArray<bool>                   IsMainTarget                   (Parm, OutParm, ZeroConstructor)

void AMissionType_Hunt_C::STATIC_GetDinosToSpawnForStage(int ForStage, TArray<struct FDinoSetup>* DinosSetups, TArray<bool>* IsMainTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.GetDinosToSpawnForStage");

	AMissionType_Hunt_C_GetDinosToSpawnForStage_Params params;
	params.ForStage = ForStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DinosSetups != nullptr)
		*DinosSetups = params.DinosSetups;
	if (IsMainTarget != nullptr)
		*IsMainTarget = params.IsMainTarget;
}


// Function MissionType_Hunt.MissionType_Hunt_C.GetClosestTrackLocation
// (NetReliable, Exec, Native, NetResponse, Static, NetMulticast, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ClosestTrack                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_C::STATIC_GetClosestTrackLocation(const struct FVector& Location, struct FVector* ClosestTrack)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.GetClosestTrackLocation");

	AMissionType_Hunt_C_GetClosestTrackLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClosestTrack != nullptr)
		*ClosestTrack = params.ClosestTrack;
}


// Function MissionType_Hunt.MissionType_Hunt_C.GetClosestSplinePoint
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            PointIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_C::GetClosestSplinePoint(const struct FVector& Location, int* PointIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.GetClosestSplinePoint");

	AMissionType_Hunt_C_GetClosestSplinePoint_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PointIndex != nullptr)
		*PointIndex = params.PointIndex;
}


// Function MissionType_Hunt.MissionType_Hunt_C.StartFleeing
// ()

void AMissionType_Hunt_C::StartFleeing()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.StartFleeing");

	AMissionType_Hunt_C_StartFleeing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt.MissionType_Hunt_C.GetHealthPercentForStage
// ()
// Parameters:
// int                            Stage                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinHealthPercent               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          InitialHealthPercent           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_C::GetHealthPercentForStage(int Stage, float* MinHealthPercent, float* InitialHealthPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.GetHealthPercentForStage");

	AMissionType_Hunt_C_GetHealthPercentForStage_Params params;
	params.Stage = Stage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinHealthPercent != nullptr)
		*MinHealthPercent = params.MinHealthPercent;
	if (InitialHealthPercent != nullptr)
		*InitialHealthPercent = params.InitialHealthPercent;
}


// Function MissionType_Hunt.MissionType_Hunt_C.GetCurrentTargetPoint
// ()
// Parameters:
// class AMissionServerSidePoint* TargetPoint                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_C::GetCurrentTargetPoint(class AMissionServerSidePoint** TargetPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.GetCurrentTargetPoint");

	AMissionType_Hunt_C_GetCurrentTargetPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetPoint != nullptr)
		*TargetPoint = params.TargetPoint;
}


// Function MissionType_Hunt.MissionType_Hunt_C.GetTrackIndexForStage
// ()
// Parameters:
// int                            Stage                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Start                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            End                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_C::GetTrackIndexForStage(int Stage, int* Start, int* End)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.GetTrackIndexForStage");

	AMissionType_Hunt_C_GetTrackIndexForStage_Params params;
	params.Stage = Stage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Start != nullptr)
		*Start = params.Start;
	if (End != nullptr)
		*End = params.End;
}


// Function MissionType_Hunt.MissionType_Hunt_C.GetLastStagePercentage
// ()

void AMissionType_Hunt_C::GetLastStagePercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.GetLastStagePercentage");

	AMissionType_Hunt_C_GetLastStagePercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt.MissionType_Hunt_C.SetHuntStageFinished
// ()
// Parameters:
// int                            Stage                          (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_C::SetHuntStageFinished(int Stage)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.SetHuntStageFinished");

	AMissionType_Hunt_C_SetHuntStageFinished_Params params;
	params.Stage = Stage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt.MissionType_Hunt_C.GetCurrentHuntStage
// ()
// Parameters:
// int                            CurrentStage                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_C::GetCurrentHuntStage(int* CurrentStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.GetCurrentHuntStage");

	AMissionType_Hunt_C_GetCurrentHuntStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentStage != nullptr)
		*CurrentStage = params.CurrentStage;
}


// Function MissionType_Hunt.MissionType_Hunt_C.GetTotalDamageDonePercent
// ()
// Parameters:
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_C::GetTotalDamageDonePercent(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.GetTotalDamageDonePercent");

	AMissionType_Hunt_C_GetTotalDamageDonePercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Percent != nullptr)
		*Percent = params.Percent;
}


// Function MissionType_Hunt.MissionType_Hunt_C.React to Found Dinos
// ()

void AMissionType_Hunt_C::React_to_Found_Dinos()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.React to Found Dinos");

	AMissionType_Hunt_C_React_to_Found_Dinos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt.MissionType_Hunt_C.BPServerHandleNetExecCommand
// (NetReliable, Exec, Event, NetResponse, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_Hunt_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.BPServerHandleNetExecCommand");

	AMissionType_Hunt_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function MissionType_Hunt.MissionType_Hunt_C.GetNumberOfFoundTracks
// ()
// Parameters:
// int                            NrOfTracks                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_C::GetNumberOfFoundTracks(int* NrOfTracks)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.GetNumberOfFoundTracks");

	AMissionType_Hunt_C_GetNumberOfFoundTracks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NrOfTracks != nullptr)
		*NrOfTracks = params.NrOfTracks;
}


// Function MissionType_Hunt.MissionType_Hunt_C.BPOnMissionPlayerLeftBounds
// ()

void AMissionType_Hunt_C::BPOnMissionPlayerLeftBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.BPOnMissionPlayerLeftBounds");

	AMissionType_Hunt_C_BPOnMissionPlayerLeftBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt.MissionType_Hunt_C.ReceiveBeginPlay
// ()

void AMissionType_Hunt_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.ReceiveBeginPlay");

	AMissionType_Hunt_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt.MissionType_Hunt_C.IsAnyTargetVisible
// ()
// Parameters:
// class AShooterCharacter*       ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CheckAllPlayers                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnTargets                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldReveal                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class APrimalDinoCharacter*> VisibleTargets                 (Parm, OutParm, ZeroConstructor)

void AMissionType_Hunt_C::IsAnyTargetVisible(class AShooterCharacter* ForPlayer, bool CheckAllPlayers, bool ReturnTargets, bool* ShouldReveal, TArray<class APrimalDinoCharacter*>* VisibleTargets)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.IsAnyTargetVisible");

	AMissionType_Hunt_C_IsAnyTargetVisible_Params params;
	params.ForPlayer = ForPlayer;
	params.CheckAllPlayers = CheckAllPlayers;
	params.ReturnTargets = ReturnTargets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldReveal != nullptr)
		*ShouldReveal = params.ShouldReveal;
	if (VisibleTargets != nullptr)
		*VisibleTargets = params.VisibleTargets;
}


// Function MissionType_Hunt.MissionType_Hunt_C.SetInitialHintLocation
// ()

void AMissionType_Hunt_C::SetInitialHintLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.SetInitialHintLocation");

	AMissionType_Hunt_C_SetInitialHintLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt.MissionType_Hunt_C.BPOnMissionComplete
// ()
// Parameters:
// class AShooterCharacter**      ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForController                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLastPhaseSuccess              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPRewarded                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UPrimalItem*>     ItemsRewarded                  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMissionType_Hunt_C::BPOnMissionComplete(class AShooterCharacter** ForPlayer, class AShooterPlayerController** ForController, bool* bLastPhaseSuccess, float* XPRewarded, TArray<class UPrimalItem*>* ItemsRewarded)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.BPOnMissionComplete");

	AMissionType_Hunt_C_BPOnMissionComplete_Params params;
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


// Function MissionType_Hunt.MissionType_Hunt_C.CreateLeaderboardEntry
// ()
// Parameters:
// class AShooterPlayerController* ForPlayerController            (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_C::CreateLeaderboardEntry(class AShooterPlayerController* ForPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.CreateLeaderboardEntry");

	AMissionType_Hunt_C_CreateLeaderboardEntry_Params params;
	params.ForPlayerController = ForPlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt.MissionType_Hunt_C.OnMissionPhaseEnded
// (NetRequest, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// struct FName*                  OldPhase                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NewPhase                       (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_C::OnMissionPhaseEnded(struct FName* OldPhase, struct FName* NewPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.OnMissionPhaseEnded");

	AMissionType_Hunt_C_OnMissionPhaseEnded_Params params;
	params.OldPhase = OldPhase;
	params.NewPhase = NewPhase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt.MissionType_Hunt_C.IsTargetVisible
// ()
// Parameters:
// class AShooterCharacter*       ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalDinoCharacter*    Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldReveal                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_C::IsTargetVisible(class AShooterCharacter* ForPlayer, class APrimalDinoCharacter* Target, bool* ShouldReveal)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.IsTargetVisible");

	AMissionType_Hunt_C_IsTargetVisible_Params params;
	params.ForPlayer = ForPlayer;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldReveal != nullptr)
		*ShouldReveal = params.ShouldReveal;
}


// Function MissionType_Hunt.MissionType_Hunt_C.BPGenerateMissionRewards
// ()
// Parameters:
// struct FCharacterAndControllerPair* Player                         (Parm)
// bool*                          bCompletedSuccessfully         (Parm, ZeroConstructor, IsPlainOldData)
// float                          XPReward                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class UPrimalItem*>     GeneratedItems                 (Parm, OutParm, ZeroConstructor)

void AMissionType_Hunt_C::BPGenerateMissionRewards(struct FCharacterAndControllerPair* Player, bool* bCompletedSuccessfully, float* XPReward, TArray<class UPrimalItem*>* GeneratedItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.BPGenerateMissionRewards");

	AMissionType_Hunt_C_BPGenerateMissionRewards_Params params;
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


// Function MissionType_Hunt.MissionType_Hunt_C.BPOnMissionDinoDamage
// (NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class APrimalDinoCharacter**   Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_C::BPOnMissionDinoDamage(class APrimalDinoCharacter** Dino, float* Damage, class AController** EventInstigator, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.BPOnMissionDinoDamage");

	AMissionType_Hunt_C_BPOnMissionDinoDamage_Params params;
	params.Dino = Dino;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function MissionType_Hunt.MissionType_Hunt_C.BPOnMissionDinoDied
// ()
// Parameters:
// class APrimalDinoCharacter**   Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class AController**            Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_C::BPOnMissionDinoDied(class APrimalDinoCharacter** Dino, float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.BPOnMissionDinoDied");

	AMissionType_Hunt_C_BPOnMissionDinoDied_Params params;
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


// Function MissionType_Hunt.MissionType_Hunt_C.IsMissionComplete
// (NetReliable, NetRequest, Event, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterCharacter**      forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForController                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_Hunt_C::STATIC_IsMissionComplete(class AShooterCharacter** forCharacter, class AShooterPlayerController** ForController)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.IsMissionComplete");

	AMissionType_Hunt_C_IsMissionComplete_Params params;
	params.forCharacter = forCharacter;
	params.ForController = ForController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Hunt.MissionType_Hunt_C.SelectSpawnpoint
// ()

void AMissionType_Hunt_C::SelectSpawnpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.SelectSpawnpoint");

	AMissionType_Hunt_C_SelectSpawnpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt.MissionType_Hunt_C.GeneratePerPlayerPhaseRequirements
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      Character                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionPhaseRequirement> Requirements                   (Parm, OutParm, ZeroConstructor)

void AMissionType_Hunt_C::STATIC_GeneratePerPlayerPhaseRequirements(class AShooterPlayerController** Controller, class AShooterCharacter** Character, struct FName* PhaseName, TArray<struct FMissionPhaseRequirement>* Requirements)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.GeneratePerPlayerPhaseRequirements");

	AMissionType_Hunt_C_GeneratePerPlayerPhaseRequirements_Params params;
	params.Controller = Controller;
	params.Character = Character;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Requirements != nullptr)
		*Requirements = params.Requirements;
}


// Function MissionType_Hunt.MissionType_Hunt_C.Set Hunt Per Player Data
// (NetReliable, Native, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            UpdateParamNr                  (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       Player_1                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FStruct_BiometricTrackingItem> BiometricTracking_2            (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            CurrentIndicatorState_3        (Parm, ZeroConstructor, IsPlainOldData)
// double                         LastSeenTargetTime_4           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsScanning_5                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         LastRevealedTrackingTime_6     (Parm, ZeroConstructor, IsPlainOldData)
// double                         LastDamagedTargetTime_7        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LastClosestSplineLocation_8    (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_C::Set_Hunt_Per_Player_Data(int PlayerIndex, int UpdateParamNr, class AShooterCharacter* Player_1, int CurrentIndicatorState_3, double LastSeenTargetTime_4, bool IsScanning_5, double LastRevealedTrackingTime_6, double LastDamagedTargetTime_7, const struct FVector& LastClosestSplineLocation_8, TArray<struct FStruct_BiometricTrackingItem>* BiometricTracking_2)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.Set Hunt Per Player Data");

	AMissionType_Hunt_C_Set_Hunt_Per_Player_Data_Params params;
	params.PlayerIndex = PlayerIndex;
	params.UpdateParamNr = UpdateParamNr;
	params.Player_1 = Player_1;
	params.CurrentIndicatorState_3 = CurrentIndicatorState_3;
	params.LastSeenTargetTime_4 = LastSeenTargetTime_4;
	params.IsScanning_5 = IsScanning_5;
	params.LastRevealedTrackingTime_6 = LastRevealedTrackingTime_6;
	params.LastDamagedTargetTime_7 = LastDamagedTargetTime_7;
	params.LastClosestSplineLocation_8 = LastClosestSplineLocation_8;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BiometricTracking_2 != nullptr)
		*BiometricTracking_2 = params.BiometricTracking_2;
}


// Function MissionType_Hunt.MissionType_Hunt_C.GetHuntPerPlayerData
// (NetReliable, Native, Event, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterCharacter*       ShooterChar                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController* Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FStruct_HuntPerPlayerData Data                           (Parm, OutParm)
// int                            index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_C::GetHuntPerPlayerData(class AShooterCharacter* ShooterChar, int PlayerIndex, class AShooterPlayerController* Controller, struct FStruct_HuntPerPlayerData* Data, int* index, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.GetHuntPerPlayerData");

	AMissionType_Hunt_C_GetHuntPerPlayerData_Params params;
	params.ShooterChar = ShooterChar;
	params.PlayerIndex = PlayerIndex;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
	if (index != nullptr)
		*index = params.index;
	if (Found != nullptr)
		*Found = params.Found;
}


// Function MissionType_Hunt.MissionType_Hunt_C.FinishedScanCompetitive
// (NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterCharacter*       ShooterChar                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AMissionType_Hunt_C::FinishedScanCompetitive(class AShooterCharacter** ShooterChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.FinishedScanCompetitive");

	AMissionType_Hunt_C_FinishedScanCompetitive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShooterChar != nullptr)
		*ShooterChar = params.ShooterChar;
}


// Function MissionType_Hunt.MissionType_Hunt_C.UpdateHintLocationCompetitive
// (NetReliable, Exec, Event, NetResponse, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterCharacter*       ShooterChar                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AMissionType_Hunt_C::UpdateHintLocationCompetitive(class AShooterCharacter** ShooterChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.UpdateHintLocationCompetitive");

	AMissionType_Hunt_C_UpdateHintLocationCompetitive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShooterChar != nullptr)
		*ShooterChar = params.ShooterChar;
}


// Function MissionType_Hunt.MissionType_Hunt_C.BPOnPlayerRemovedFromMission
// (NetReliable, Exec, Native, Event, NetResponse, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterCharacter**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromMissionCompleteEvent      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLastPhaseSuccess              (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_C::BPOnPlayerRemovedFromMission(class AShooterCharacter** Player, class AShooterPlayerController** Controller, bool* bFromMissionCompleteEvent, bool* bLastPhaseSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.BPOnPlayerRemovedFromMission");

	AMissionType_Hunt_C_BPOnPlayerRemovedFromMission_Params params;
	params.Player = Player;
	params.Controller = Controller;
	params.bFromMissionCompleteEvent = bFromMissionCompleteEvent;
	params.bLastPhaseSuccess = bLastPhaseSuccess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt.MissionType_Hunt_C.BPOnPlayerAddedToMission
// (NetReliable, Exec, Static, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterCharacter**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_C::STATIC_BPOnPlayerAddedToMission(class AShooterCharacter** Player, class AShooterPlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.BPOnPlayerAddedToMission");

	AMissionType_Hunt_C_BPOnPlayerAddedToMission_Params params;
	params.Player = Player;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt.MissionType_Hunt_C.AddBiometricTrackingIndicators
// (Exec, Native, Static, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// TArray<struct FMissionWorldIndicator> IndicatorArray                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AShooterCharacter*       ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_C::STATIC_AddBiometricTrackingIndicators(class AShooterCharacter* ForPlayer, TArray<struct FMissionWorldIndicator>* IndicatorArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.AddBiometricTrackingIndicators");

	AMissionType_Hunt_C_AddBiometricTrackingIndicators_Params params;
	params.ForPlayer = ForPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IndicatorArray != nullptr)
		*IndicatorArray = params.IndicatorArray;
}


// Function MissionType_Hunt.MissionType_Hunt_C.ChangedIndicatorState
// ()
// Parameters:
// int                            From                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            To                             (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_C::ChangedIndicatorState(int From, int To, class AShooterCharacter* ForPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.ChangedIndicatorState");

	AMissionType_Hunt_C_ChangedIndicatorState_Params params;
	params.From = From;
	params.To = To;
	params.ForPlayer = ForPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt.MissionType_Hunt_C.UpdateCurrentIndicatorState
// (Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterCharacter*       ShooterChar                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentState                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsScanning                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            PlayerIndex                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_C::STATIC_UpdateCurrentIndicatorState(class AShooterCharacter* ShooterChar, int* CurrentState, bool* IsScanning, int* PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.UpdateCurrentIndicatorState");

	AMissionType_Hunt_C_UpdateCurrentIndicatorState_Params params;
	params.ShooterChar = ShooterChar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentState != nullptr)
		*CurrentState = params.CurrentState;
	if (IsScanning != nullptr)
		*IsScanning = params.IsScanning;
	if (PlayerIndex != nullptr)
		*PlayerIndex = params.PlayerIndex;
}


// Function MissionType_Hunt.MissionType_Hunt_C.Reveal Biometric Tracking
// (NetReliable, Event, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// TArray<struct FStruct_BiometricTrackingItem> RevealedArray                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AShooterCharacter*       ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_C::Reveal_Biometric_Tracking(class AShooterCharacter* ForPlayer, TArray<struct FStruct_BiometricTrackingItem>* RevealedArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.Reveal Biometric Tracking");

	AMissionType_Hunt_C_Reveal_Biometric_Tracking_Params params;
	params.ForPlayer = ForPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RevealedArray != nullptr)
		*RevealedArray = params.RevealedArray;
}


// Function MissionType_Hunt.MissionType_Hunt_C.UpdateBiometricTrackingItems
// (Exec, Native, Event, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)

void AMissionType_Hunt_C::UpdateBiometricTrackingItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.UpdateBiometricTrackingItems");

	AMissionType_Hunt_C_UpdateBiometricTrackingItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt.MissionType_Hunt_C.CanInvitePlayerToMission
// ()
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DontCheckFriendly              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanInvite                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_C::CanInvitePlayerToMission(class AShooterCharacter* Player, bool DontCheckFriendly, bool* CanInvite)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.CanInvitePlayerToMission");

	AMissionType_Hunt_C_CanInvitePlayerToMission_Params params;
	params.Player = Player;
	params.DontCheckFriendly = DontCheckFriendly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanInvite != nullptr)
		*CanInvite = params.CanInvite;
}


// Function MissionType_Hunt.MissionType_Hunt_C.AddMissionWeapon
// ()

void AMissionType_Hunt_C::AddMissionWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.AddMissionWeapon");

	AMissionType_Hunt_C_AddMissionWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt.MissionType_Hunt_C.SpawnHuntDinos
// (Native, Event, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)

void AMissionType_Hunt_C::STATIC_SpawnHuntDinos()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.SpawnHuntDinos");

	AMissionType_Hunt_C_SpawnHuntDinos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt.MissionType_Hunt_C.StartHunt
// ()

void AMissionType_Hunt_C::StartHunt()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.StartHunt");

	AMissionType_Hunt_C_StartHunt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt.MissionType_Hunt_C.OnMissionPhaseStarted
// ()
// Parameters:
// struct FName*                  OldPhase                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NewPhase                       (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_C::OnMissionPhaseStarted(struct FName* OldPhase, struct FName* NewPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.OnMissionPhaseStarted");

	AMissionType_Hunt_C_OnMissionPhaseStarted_Params params;
	params.OldPhase = OldPhase;
	params.NewPhase = NewPhase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt.MissionType_Hunt_C.GatherPlayers
// ()

void AMissionType_Hunt_C::GatherPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.GatherPlayers");

	AMissionType_Hunt_C_GatherPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt.MissionType_Hunt_C.BPStaticCanStartMission
// ()
// Parameters:
// class APlayerController**      Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalBuff_MissionData** PlayerMissionData              (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ClientFailureReason            (Parm, OutParm, ZeroConstructor)
// class AActor*                  OutSelectedMissionDispatcher   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_Hunt_C::BPStaticCanStartMission(class APlayerController** Controller, class AShooterCharacter** PlayerPawn, class APrimalBuff_MissionData** PlayerMissionData, class FString* ClientFailureReason, class AActor** OutSelectedMissionDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.BPStaticCanStartMission");

	AMissionType_Hunt_C_BPStaticCanStartMission_Params params;
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


// Function MissionType_Hunt.MissionType_Hunt_C.GetPerPlayerWorldIndicators
// (NetRequest, Native, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      Character                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionWorldIndicator> WorldIndicators                (Parm, OutParm, ZeroConstructor)

void AMissionType_Hunt_C::GetPerPlayerWorldIndicators(class AShooterPlayerController** Controller, class AShooterCharacter** Character, TArray<struct FMissionWorldIndicator>* WorldIndicators)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.GetPerPlayerWorldIndicators");

	AMissionType_Hunt_C_GetPerPlayerWorldIndicators_Params params;
	params.Controller = Controller;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldIndicators != nullptr)
		*WorldIndicators = params.WorldIndicators;
}


// Function MissionType_Hunt.MissionType_Hunt_C.GeneratePhaseRequirements
// (Exec, Native, NetResponse, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionPhaseRequirement> Requirements                   (Parm, OutParm, ZeroConstructor)

void AMissionType_Hunt_C::GeneratePhaseRequirements(struct FName* PhaseName, TArray<struct FMissionPhaseRequirement>* Requirements)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.GeneratePhaseRequirements");

	AMissionType_Hunt_C_GeneratePhaseRequirements_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Requirements != nullptr)
		*Requirements = params.Requirements;
}


// Function MissionType_Hunt.MissionType_Hunt_C.BPIsPhaseComplete
// ()
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_Hunt_C::BPIsPhaseComplete(struct FName* PhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.BPIsPhaseComplete");

	AMissionType_Hunt_C_BPIsPhaseComplete_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Hunt.MissionType_Hunt_C.UserConstructionScript
// ()

void AMissionType_Hunt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.UserConstructionScript");

	AMissionType_Hunt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt.MissionType_Hunt_C.OnThrottledServerTick
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_C::OnThrottledServerTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.OnThrottledServerTick");

	AMissionType_Hunt_C_OnThrottledServerTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt.MissionType_Hunt_C.UpdateHintLocation
// ()
// Parameters:
// class AShooterCharacter*       ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_C::UpdateHintLocation(class AShooterCharacter* ForPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.UpdateHintLocation");

	AMissionType_Hunt_C_UpdateHintLocation_Params params;
	params.ForPlayer = ForPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt.MissionType_Hunt_C.ScanAreaAndBindOnFinish
// ()
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_C::ScanAreaAndBindOnFinish(class AShooterCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.ScanAreaAndBindOnFinish");

	AMissionType_Hunt_C_ScanAreaAndBindOnFinish_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt.MissionType_Hunt_C.FinishedScan
// ()
// Parameters:
// class AShooterCharacter*       ShooterChar                    (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_C::FinishedScan(class AShooterCharacter* ShooterChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.FinishedScan");

	AMissionType_Hunt_C_FinishedScan_Params params;
	params.ShooterChar = ShooterChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt.MissionType_Hunt_C.ScanAreaReactionOnly
// ()
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_C::ScanAreaReactionOnly(class AShooterCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.ScanAreaReactionOnly");

	AMissionType_Hunt_C_ScanAreaReactionOnly_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt.MissionType_Hunt_C.First Hint
// ()

void AMissionType_Hunt_C::First_Hint()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.First Hint");

	AMissionType_Hunt_C_First_Hint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt.MissionType_Hunt_C.BPOnMissionDeactivated
// ()

void AMissionType_Hunt_C::BPOnMissionDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.BPOnMissionDeactivated");

	AMissionType_Hunt_C_BPOnMissionDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt.MissionType_Hunt_C.ExecuteUbergraph_MissionType_Hunt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_C::ExecuteUbergraph_MissionType_Hunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt.MissionType_Hunt_C.ExecuteUbergraph_MissionType_Hunt");

	AMissionType_Hunt_C_ExecuteUbergraph_MissionType_Hunt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
