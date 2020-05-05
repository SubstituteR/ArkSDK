// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_VRBattle_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.RemoveInvalidVRBuff
// ()
// Parameters:
// class APrimalCharacter*        self2                          (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::RemoveInvalidVRBuff(class APrimalCharacter* self2)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.RemoveInvalidVRBuff");

	AMissionType_VRBattle_Base_C_RemoveInvalidVRBuff_Params params;
	params.self2 = self2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.GetTeleporter
// ()
// Parameters:
// class AMissionTrigger_VRBattleTeleporter_C* AsMissionTrigger_VRBattleTeleporter_C (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::GetTeleporter(class AMissionTrigger_VRBattleTeleporter_C** AsMissionTrigger_VRBattleTeleporter_C)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.GetTeleporter");

	AMissionType_VRBattle_Base_C_GetTeleporter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsMissionTrigger_VRBattleTeleporter_C != nullptr)
		*AsMissionTrigger_VRBattleTeleporter_C = params.AsMissionTrigger_VRBattleTeleporter_C;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.ForceSucceedMission
// (Native, NetResponse, Private, Protected, NetServer, BlueprintCallable, BlueprintEvent, NetValidate)

void AMissionType_VRBattle_Base_C::ForceSucceedMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.ForceSucceedMission");

	AMissionType_VRBattle_Base_C_ForceSucceedMission_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.FindNonCollidingRandomPoint
// ()
// Parameters:
// class AActor*                  Portal                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          DinoCapsuleRadius              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AMissionType_VRBattle_Base_C::FindNonCollidingRandomPoint(class AActor* Portal, float DinoCapsuleRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.FindNonCollidingRandomPoint");

	AMissionType_VRBattle_Base_C_FindNonCollidingRandomPoint_Params params;
	params.Portal = Portal;
	params.DinoCapsuleRadius = DinoCapsuleRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.AdjustDesiredValue
// ()
// Parameters:
// int                            BaseValue                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            AdjustedValue                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::AdjustDesiredValue(int BaseValue, int* AdjustedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.AdjustDesiredValue");

	AMissionType_VRBattle_Base_C_AdjustDesiredValue_Params params;
	params.BaseValue = BaseValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AdjustedValue != nullptr)
		*AdjustedValue = params.AdjustedValue;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnRep_MainBossCharacter
// ()

void AMissionType_VRBattle_Base_C::OnRep_MainBossCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnRep_MainBossCharacter");

	AMissionType_VRBattle_Base_C_OnRep_MainBossCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.DropCodeKey
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::DropCodeKey(const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.DropCodeKey");

	AMissionType_VRBattle_Base_C_DropCodeKey_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionCheat
// (Native, Static, Private, Protected, NetServer, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// struct FName*                  CheatName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSetValue                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::STATIC_BPOnMissionCheat(struct FName* CheatName, bool* bSetValue, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionCheat");

	AMissionType_VRBattle_Base_C_BPOnMissionCheat_Params params;
	params.CheatName = CheatName;
	params.bSetValue = bSetValue;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Validate Characters Are Within Bounds
// ()

void AMissionType_VRBattle_Base_C::Validate_Characters_Are_Within_Bounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Validate Characters Are Within Bounds");

	AMissionType_VRBattle_Base_C_Validate_Characters_Are_Within_Bounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.GetLandingLocation
// ()
// Parameters:
// class AVRBattle_StageLandingLocation_C* Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::GetLandingLocation(class AVRBattle_StageLandingLocation_C** Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.GetLandingLocation");

	AMissionType_VRBattle_Base_C_GetLandingLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.ForceTeleportAnyLeftoverCharacters
// ()

void AMissionType_VRBattle_Base_C::ForceTeleportAnyLeftoverCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.ForceTeleportAnyLeftoverCharacters");

	AMissionType_VRBattle_Base_C_ForceTeleportAnyLeftoverCharacters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.MissionCompleted
// (NetRequest, Event, NetMulticast, Private, Protected, NetServer, BlueprintCallable, BlueprintEvent, NetValidate)

void AMissionType_VRBattle_Base_C::MissionCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.MissionCompleted");

	AMissionType_VRBattle_Base_C_MissionCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionTimedOut
// ()

void AMissionType_VRBattle_Base_C::BPOnMissionTimedOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionTimedOut");

	AMissionType_VRBattle_Base_C_BPOnMissionTimedOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnPlayerRemovedFromMission
// ()
// Parameters:
// class AShooterCharacter**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromMissionCompleteEvent      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLastPhaseSuccess              (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::BPOnPlayerRemovedFromMission(class AShooterCharacter** Player, class AShooterPlayerController** Controller, bool* bFromMissionCompleteEvent, bool* bLastPhaseSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnPlayerRemovedFromMission");

	AMissionType_VRBattle_Base_C_BPOnPlayerRemovedFromMission_Params params;
	params.Player = Player;
	params.Controller = Controller;
	params.bFromMissionCompleteEvent = bFromMissionCompleteEvent;
	params.bLastPhaseSuccess = bLastPhaseSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.AllowMissionCreation
// ()
// Parameters:
// class AShooterCharacter**      forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor**                 MissionDispatcherActor         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_VRBattle_Base_C::AllowMissionCreation(class AShooterCharacter** forCharacter, class AActor** MissionDispatcherActor, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.AllowMissionCreation");

	AMissionType_VRBattle_Base_C_AllowMissionCreation_Params params;
	params.forCharacter = forCharacter;
	params.MissionDispatcherActor = MissionDispatcherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;

	return params.ReturnValue;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPStaticCanStartMission
// ()
// Parameters:
// class APlayerController**      Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalBuff_MissionData** PlayerMissionData              (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ClientFailureReason            (Parm, OutParm, ZeroConstructor)
// class AActor*                  OutSelectedMissionDispatcher   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_VRBattle_Base_C::BPStaticCanStartMission(class APlayerController** Controller, class AShooterCharacter** PlayerPawn, class APrimalBuff_MissionData** PlayerMissionData, class FString* ClientFailureReason, class AActor** OutSelectedMissionDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPStaticCanStartMission");

	AMissionType_VRBattle_Base_C_BPStaticCanStartMission_Params params;
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


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPAllowTimeout
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_VRBattle_Base_C::BPAllowTimeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPAllowTimeout");

	AMissionType_VRBattle_Base_C_BPAllowTimeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Stop Companion Hacking
// ()

void AMissionType_VRBattle_Base_C::Stop_Companion_Hacking()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Stop Companion Hacking");

	AMissionType_VRBattle_Base_C_Stop_Companion_Hacking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Start Companion Hacking
// ()
// Parameters:
// class AActor*                  Kiosk                          (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::Start_Companion_Hacking(class AActor* Kiosk)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Start Companion Hacking");

	AMissionType_VRBattle_Base_C_Start_Companion_Hacking_Params params;
	params.Kiosk = Kiosk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.VRBattleCosmeticsManager
// ()
// Parameters:
// class AMissionServerSidePoint_VRBattleCosmeticsManager_C* CosmeticsManager               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::VRBattleCosmeticsManager(class AMissionServerSidePoint_VRBattleCosmeticsManager_C** CosmeticsManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.VRBattleCosmeticsManager");

	AMissionType_VRBattle_Base_C_VRBattleCosmeticsManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CosmeticsManager != nullptr)
		*CosmeticsManager = params.CosmeticsManager;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Num Code Keys Required to Activate Kiosk
// (Exec, Native, NetResponse, Static, NetMulticast, Private, Protected, NetServer, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// int                            NumKeys                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::STATIC_Num_Code_Keys_Required_to_Activate_Kiosk(int* NumKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Num Code Keys Required to Activate Kiosk");

	AMissionType_VRBattle_Base_C_Num_Code_Keys_Required_to_Activate_Kiosk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumKeys != nullptr)
		*NumKeys = params.NumKeys;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.AddDebugRequirements
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Private, Protected, NetServer, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// TArray<struct FMissionPhaseRequirement> Requirements                   (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMissionType_VRBattle_Base_C::STATIC_AddDebugRequirements(TArray<struct FMissionPhaseRequirement>* Requirements)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.AddDebugRequirements");

	AMissionType_VRBattle_Base_C_AddDebugRequirements_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Requirements != nullptr)
		*Requirements = params.Requirements;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.RemoveCodeKeysFromPlayerInventory
// ()
// Parameters:
// class AShooterCharacter*       ShooterChar                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            NumToRemove                    (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::RemoveCodeKeysFromPlayerInventory(int NumToRemove, class AShooterCharacter** ShooterChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.RemoveCodeKeysFromPlayerInventory");

	AMissionType_VRBattle_Base_C_RemoveCodeKeysFromPlayerInventory_Params params;
	params.NumToRemove = NumToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShooterChar != nullptr)
		*ShooterChar = params.ShooterChar;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.ResetCodeKiosks
// ()

void AMissionType_VRBattle_Base_C::ResetCodeKiosks()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.ResetCodeKiosks");

	AMissionType_VRBattle_Base_C_ResetCodeKiosks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPStaticIsPlayerEligibleForMission
// ()
// Parameters:
// class APlayerController**      Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalBuff_MissionData** PlayerMissionData              (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  OutReason                      (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_VRBattle_Base_C::BPStaticIsPlayerEligibleForMission(class APlayerController** Controller, class AShooterCharacter** PlayerPawn, class APrimalBuff_MissionData** PlayerMissionData, class FString* OutReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPStaticIsPlayerEligibleForMission");

	AMissionType_VRBattle_Base_C_BPStaticIsPlayerEligibleForMission_Params params;
	params.Controller = Controller;
	params.PlayerPawn = PlayerPawn;
	params.PlayerMissionData = PlayerMissionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutReason != nullptr)
		*OutReason = params.OutReason;

	return params.ReturnValue;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.GetSingleServerSidePoint
// ()
// Parameters:
// struct FName                   TriggerKey                     (Parm, ZeroConstructor, IsPlainOldData)
// class AMissionServerSidePoint* Point                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::GetSingleServerSidePoint(const struct FName& TriggerKey, class AMissionServerSidePoint** Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.GetSingleServerSidePoint");

	AMissionType_VRBattle_Base_C_GetSingleServerSidePoint_Params params;
	params.TriggerKey = TriggerKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Point != nullptr)
		*Point = params.Point;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Spawn Boss Character
// (NetRequest, Exec, Event, Public, Private, NetServer, BlueprintCallable, BlueprintEvent, NetValidate)

void AMissionType_VRBattle_Base_C::Spawn_Boss_Character()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Spawn Boss Character");

	AMissionType_VRBattle_Base_C_Spawn_Boss_Character_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionActivated
// ()

void AMissionType_VRBattle_Base_C::BPOnMissionActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionActivated");

	AMissionType_VRBattle_Base_C_BPOnMissionActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionDeactivated
// ()

void AMissionType_VRBattle_Base_C::BPOnMissionDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionDeactivated");

	AMissionType_VRBattle_Base_C_BPOnMissionDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Create Next Mission
// ()
// Parameters:
// class AMissionType_VRBattle_Base_C* MissionCreated                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::Create_Next_Mission(class AMissionType_VRBattle_Base_C** MissionCreated)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Create Next Mission");

	AMissionType_VRBattle_Base_C_Create_Next_Mission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MissionCreated != nullptr)
		*MissionCreated = params.MissionCreated;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.StartTeleporting Everybody
// ()
// Parameters:
// int                            PlayersTeleported              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::StartTeleporting_Everybody(int* PlayersTeleported)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.StartTeleporting Everybody");

	AMissionType_VRBattle_Base_C_StartTeleporting_Everybody_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayersTeleported != nullptr)
		*PlayersTeleported = params.PlayersTeleported;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.StartTeleportingTamed Dinos
// (Exec, NetResponse, Static, Public, Private, NetServer, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// class AMissionTrigger_VRBattleTeleporter_C* Teleporter                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::STATIC_StartTeleportingTamed_Dinos(class AMissionTrigger_VRBattleTeleporter_C* Teleporter)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.StartTeleportingTamed Dinos");

	AMissionType_VRBattle_Base_C_StartTeleportingTamed_Dinos_Params params;
	params.Teleporter = Teleporter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.StartTeleportingPlayer
// ()
// Parameters:
// class APrimalCharacter*        PlayerCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// class AMissionTrigger_VRBattleTeleporter_C* Teleporter                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::StartTeleportingPlayer(class APrimalCharacter* PlayerCharacter, class AMissionTrigger_VRBattleTeleporter_C* Teleporter)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.StartTeleportingPlayer");

	AMissionType_VRBattle_Base_C_StartTeleportingPlayer_Params params;
	params.PlayerCharacter = PlayerCharacter;
	params.Teleporter = Teleporter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.SetupPhaseCallbacks
// ()

void AMissionType_VRBattle_Base_C::SetupPhaseCallbacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.SetupPhaseCallbacks");

	AMissionType_VRBattle_Base_C_SetupPhaseCallbacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionPlayerRespawned
// ()
// Parameters:
// class AShooterCharacter**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::BPOnMissionPlayerRespawned(class AShooterCharacter** Player, class AShooterPlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionPlayerRespawned");

	AMissionType_VRBattle_Base_C_BPOnMissionPlayerRespawned_Params params;
	params.Player = Player;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionPlayerLeftBounds
// ()

void AMissionType_VRBattle_Base_C::BPOnMissionPlayerLeftBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionPlayerLeftBounds");

	AMissionType_VRBattle_Base_C_BPOnMissionPlayerLeftBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionComplete
// ()
// Parameters:
// class AShooterCharacter**      ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForController                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLastPhaseSuccess              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPRewarded                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UPrimalItem*>     ItemsRewarded                  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMissionType_VRBattle_Base_C::BPOnMissionComplete(class AShooterCharacter** ForPlayer, class AShooterPlayerController** ForController, bool* bLastPhaseSuccess, float* XPRewarded, TArray<class UPrimalItem*>* ItemsRewarded)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionComplete");

	AMissionType_VRBattle_Base_C_BPOnMissionComplete_Params params;
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


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.KillLeftoverCharacters
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, BlueprintCallable, BlueprintEvent, NetValidate)

void AMissionType_VRBattle_Base_C::STATIC_KillLeftoverCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.KillLeftoverCharacters");

	AMissionType_VRBattle_Base_C_KillLeftoverCharacters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.On Player Begin Overlap Code Key Kiosk
// ()
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AMissionTrigger_VRBattleCodeKeyKiosk_C* CodeKeyKiosk                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::On_Player_Begin_Overlap_Code_Key_Kiosk(class AShooterCharacter* Player, class AMissionTrigger_VRBattleCodeKeyKiosk_C* CodeKeyKiosk)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.On Player Begin Overlap Code Key Kiosk");

	AMissionType_VRBattle_Base_C_On_Player_Begin_Overlap_Code_Key_Kiosk_Params params;
	params.Player = Player;
	params.CodeKeyKiosk = CodeKeyKiosk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnPlayerAddedToMission
// ()
// Parameters:
// class AShooterCharacter**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::BPOnPlayerAddedToMission(class AShooterCharacter** Player, class AShooterPlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnPlayerAddedToMission");

	AMissionType_VRBattle_Base_C_BPOnPlayerAddedToMission_Params params;
	params.Player = Player;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Init Main Boss
// ()

void AMissionType_VRBattle_Base_C::Init_Main_Boss()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Init Main Boss");

	AMissionType_VRBattle_Base_C_Init_Main_Boss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Get Number Of Units
// ()
// Parameters:
// struct FVRBattleWeightedBurst  Groups                         (Parm)
// int                            NumUnits                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::Get_Number_Of_Units(const struct FVRBattleWeightedBurst& Groups, int* NumUnits)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Get Number Of Units");

	AMissionType_VRBattle_Base_C_Get_Number_Of_Units_Params params;
	params.Groups = Groups;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumUnits != nullptr)
		*NumUnits = params.NumUnits;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.ActivatePortals
// (NetReliable, NetRequest, Exec, Native, NetResponse, Public, Private, NetServer, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// int                            WaveIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxAIToSpawn                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::ActivatePortals(int WaveIndex, int MaxAIToSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.ActivatePortals");

	AMissionType_VRBattle_Base_C_ActivatePortals_Params params;
	params.WaveIndex = WaveIndex;
	params.MaxAIToSpawn = MaxAIToSpawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Get Number Of Current Wave AIAlive
// ()
// Parameters:
// int                            NumAlive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::Get_Number_Of_Current_Wave_AIAlive(int* NumAlive)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Get Number Of Current Wave AIAlive");

	AMissionType_VRBattle_Base_C_Get_Number_Of_Current_Wave_AIAlive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumAlive != nullptr)
		*NumAlive = params.NumAlive;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.GetNumberOfAIAlive
// ()
// Parameters:
// TArray<class APrimalCharacter*> Characters                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::GetNumberOfAIAlive(TArray<class APrimalCharacter*>* Characters, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.GetNumberOfAIAlive");

	AMissionType_VRBattle_Base_C_GetNumberOfAIAlive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Characters != nullptr)
		*Characters = params.Characters;
	if (Count != nullptr)
		*Count = params.Count;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.AdjustSpawnInterval
// ()

void AMissionType_VRBattle_Base_C::AdjustSpawnInterval()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.AdjustSpawnInterval");

	AMissionType_VRBattle_Base_C_AdjustSpawnInterval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.GetViableTargets
// ()
// Parameters:
// TArray<class APrimalCharacter*> Targets                        (Parm, OutParm, ZeroConstructor)
// TArray<int>                    NumAttackers                   (Parm, OutParm, ZeroConstructor)
// TArray<int>                    TargetsSortedByAttacker        (Parm, OutParm, ZeroConstructor)

void AMissionType_VRBattle_Base_C::GetViableTargets(TArray<class APrimalCharacter*>* Targets, TArray<int>* NumAttackers, TArray<int>* TargetsSortedByAttacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.GetViableTargets");

	AMissionType_VRBattle_Base_C_GetViableTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Targets != nullptr)
		*Targets = params.Targets;
	if (NumAttackers != nullptr)
		*NumAttackers = params.NumAttackers;
	if (TargetsSortedByAttacker != nullptr)
		*TargetsSortedByAttacker = params.TargetsSortedByAttacker;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Get Number Of Attackers for Target
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            AttackerCount                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::Get_Number_Of_Attackers_for_Target(class APrimalCharacter* Target, int* AttackerCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Get Number Of Attackers for Target");

	AMissionType_VRBattle_Base_C_Get_Number_Of_Attackers_for_Target_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttackerCount != nullptr)
		*AttackerCount = params.AttackerCount;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Advance Wave Index
// ()

void AMissionType_VRBattle_Base_C::Advance_Wave_Index()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Advance Wave Index");

	AMissionType_VRBattle_Base_C_Advance_Wave_Index_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Get Number Of Mission AIAlive
// ()
// Parameters:
// int                            NumAlive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::Get_Number_Of_Mission_AIAlive(int* NumAlive)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Get Number Of Mission AIAlive");

	AMissionType_VRBattle_Base_C_Get_Number_Of_Mission_AIAlive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumAlive != nullptr)
		*NumAlive = params.NumAlive;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.GetPerPlayerWorldIndicators
// (NetRequest, Exec, Event, NetResponse, Static, Public, Private, NetServer, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      Character                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionWorldIndicator> WorldIndicators                (Parm, OutParm, ZeroConstructor)

void AMissionType_VRBattle_Base_C::STATIC_GetPerPlayerWorldIndicators(class AShooterPlayerController** Controller, class AShooterCharacter** Character, TArray<struct FMissionWorldIndicator>* WorldIndicators)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.GetPerPlayerWorldIndicators");

	AMissionType_VRBattle_Base_C_GetPerPlayerWorldIndicators_Params params;
	params.Controller = Controller;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldIndicators != nullptr)
		*WorldIndicators = params.WorldIndicators;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.PlayCompanionReactionForAllPlayers
// ()
// Parameters:
// struct FCompanionReactionData  ReactionData                   (Parm, OutParm, ReferenceParm)
// bool                           ForcePlayNow                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::PlayCompanionReactionForAllPlayers(bool ForcePlayNow, struct FCompanionReactionData* ReactionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.PlayCompanionReactionForAllPlayers");

	AMissionType_VRBattle_Base_C_PlayCompanionReactionForAllPlayers_Params params;
	params.ForcePlayNow = ForcePlayNow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReactionData != nullptr)
		*ReactionData = params.ReactionData;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.GeneratePerPlayerPhaseRequirements
// (NetRequest, Native, Event, NetMulticast, Public, Private, NetServer, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      Character                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionPhaseRequirement> Requirements                   (Parm, OutParm, ZeroConstructor)

void AMissionType_VRBattle_Base_C::GeneratePerPlayerPhaseRequirements(class AShooterPlayerController** Controller, class AShooterCharacter** Character, struct FName* PhaseName, TArray<struct FMissionPhaseRequirement>* Requirements)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.GeneratePerPlayerPhaseRequirements");

	AMissionType_VRBattle_Base_C_GeneratePerPlayerPhaseRequirements_Params params;
	params.Controller = Controller;
	params.Character = Character;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Requirements != nullptr)
		*Requirements = params.Requirements;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Init AIAttack Coordinator
// (NetReliable, Exec, NetResponse, NetMulticast, Public, Private, NetServer, BlueprintCallable, BlueprintEvent, NetValidate)

void AMissionType_VRBattle_Base_C::Init_AIAttack_Coordinator()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Init AIAttack Coordinator");

	AMissionType_VRBattle_Base_C_Init_AIAttack_Coordinator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionTriggerBeginOverlap
// ()
// Parameters:
// class AMissionTrigger**        Trigger                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::BPOnMissionTriggerBeginOverlap(class AMissionTrigger** Trigger, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionTriggerBeginOverlap");

	AMissionType_VRBattle_Base_C_BPOnMissionTriggerBeginOverlap_Params params;
	params.Trigger = Trigger;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPIsPhaseComplete
// ()
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_VRBattle_Base_C::BPIsPhaseComplete(struct FName* PhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPIsPhaseComplete");

	AMissionType_VRBattle_Base_C_BPIsPhaseComplete_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.On CodeKey Dropped in World
// ()

void AMissionType_VRBattle_Base_C::On_CodeKey_Dropped_in_World()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.On CodeKey Dropped in World");

	AMissionType_VRBattle_Base_C_On_CodeKey_Dropped_in_World_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Score Spawn Portal
// ()
// Parameters:
// TArray<class APrimalCharacter*> PlayersAndTamesWithinRange     (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Score                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::Score_Spawn_Portal(TArray<class APrimalCharacter*>* PlayersAndTamesWithinRange, float* Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Score Spawn Portal");

	AMissionType_VRBattle_Base_C_Score_Spawn_Portal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayersAndTamesWithinRange != nullptr)
		*PlayersAndTamesWithinRange = params.PlayersAndTamesWithinRange;
	if (Score != nullptr)
		*Score = params.Score;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Set Current Wave Data
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, Public, Private, NetServer, BlueprintCallable, BlueprintEvent, NetValidate)

void AMissionType_VRBattle_Base_C::STATIC_Set_Current_Wave_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Set Current Wave Data");

	AMissionType_VRBattle_Base_C_Set_Current_Wave_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Choose Portals to Spawn BurstsAt
// ()
// Parameters:
// TArray<class AMissionServerSidePoint_VRBattleSpawnPortal_C*> PossiblePortals                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            NumberOfPortalsToChoose        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AMissionServerSidePoint_VRBattleSpawnPortal_C*> ChosenPortals                  (Parm, OutParm, ZeroConstructor)

void AMissionType_VRBattle_Base_C::Choose_Portals_to_Spawn_BurstsAt(int NumberOfPortalsToChoose, TArray<class AMissionServerSidePoint_VRBattleSpawnPortal_C*>* PossiblePortals, TArray<class AMissionServerSidePoint_VRBattleSpawnPortal_C*>* ChosenPortals)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Choose Portals to Spawn BurstsAt");

	AMissionType_VRBattle_Base_C_Choose_Portals_to_Spawn_BurstsAt_Params params;
	params.NumberOfPortalsToChoose = NumberOfPortalsToChoose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PossiblePortals != nullptr)
		*PossiblePortals = params.PossiblePortals;
	if (ChosenPortals != nullptr)
		*ChosenPortals = params.ChosenPortals;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Spawn Burst At Portal
// (NetRequest, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// class AMissionServerSidePoint_VRBattleSpawnPortal_C* Portal                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AMissionType_VRBattle_Base_C::Spawn_Burst_At_Portal(class AMissionServerSidePoint_VRBattleSpawnPortal_C** Portal)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Spawn Burst At Portal");

	AMissionType_VRBattle_Base_C_Spawn_Burst_At_Portal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Portal != nullptr)
		*Portal = params.Portal;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPGetMissionTimerText
// ()
// Parameters:
// class AShooterPlayerController** ShootCont                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AMissionType_VRBattle_Base_C::BPGetMissionTimerText(class AShooterPlayerController** ShootCont)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPGetMissionTimerText");

	AMissionType_VRBattle_Base_C_BPGetMissionTimerText_Params params;
	params.ShootCont = ShootCont;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Get Dino Group for Burst
// (NetReliable, Exec, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// TArray<struct FVRBattleWeightedBurst> WeightedGroups                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ValidSetup                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::STATIC_Get_Dino_Group_for_Burst(TArray<struct FVRBattleWeightedBurst>* WeightedGroups, bool* ValidSetup, int* index)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.Get Dino Group for Burst");

	AMissionType_VRBattle_Base_C_Get_Dino_Group_for_Burst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeightedGroups != nullptr)
		*WeightedGroups = params.WeightedGroups;
	if (ValidSetup != nullptr)
		*ValidSetup = params.ValidSetup;
	if (index != nullptr)
		*index = params.index;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.GeneratePhaseRequirements
// (NetReliable, NetRequest, Native, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionPhaseRequirement> Requirements                   (Parm, OutParm, ZeroConstructor)

void AMissionType_VRBattle_Base_C::STATIC_GeneratePhaseRequirements(struct FName* PhaseName, TArray<struct FMissionPhaseRequirement>* Requirements)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.GeneratePhaseRequirements");

	AMissionType_VRBattle_Base_C_GeneratePhaseRequirements_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Requirements != nullptr)
		*Requirements = params.Requirements;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.UserConstructionScript
// ()

void AMissionType_VRBattle_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.UserConstructionScript");

	AMissionType_VRBattle_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionServerSetup
// ()

void AMissionType_VRBattle_Base_C::BPOnMissionServerSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionServerSetup");

	AMissionType_VRBattle_Base_C_BPOnMissionServerSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnPrepPhaseStarted
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::OnPrepPhaseStarted(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnPrepPhaseStarted");

	AMissionType_VRBattle_Base_C_OnPrepPhaseStarted_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnCollectCodeKeysPhaseStarted
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::OnCollectCodeKeysPhaseStarted(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnCollectCodeKeysPhaseStarted");

	AMissionType_VRBattle_Base_C_OnCollectCodeKeysPhaseStarted_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnThrottledServerTick
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::OnThrottledServerTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnThrottledServerTick");

	AMissionType_VRBattle_Base_C_OnThrottledServerTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionDroppedItemPickedUp
// ()
// Parameters:
// class ADroppedItemMission**    DroppedItem                    (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      ByPC                           (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            InventoryItem                  (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::BPOnMissionDroppedItemPickedUp(class ADroppedItemMission** DroppedItem, class APlayerController** ByPC, class UPrimalItem** InventoryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionDroppedItemPickedUp");

	AMissionType_VRBattle_Base_C_BPOnMissionDroppedItemPickedUp_Params params;
	params.DroppedItem = DroppedItem;
	params.ByPC = ByPC;
	params.InventoryItem = InventoryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionDinoDied
// ()
// Parameters:
// class APrimalDinoCharacter**   Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class AController**            Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::BPOnMissionDinoDied(class APrimalDinoCharacter** Dino, float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionDinoDied");

	AMissionType_VRBattle_Base_C_BPOnMissionDinoDied_Params params;
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


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnCollectCodeKeysPhaseEnded
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::OnCollectCodeKeysPhaseEnded(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnCollectCodeKeysPhaseEnded");

	AMissionType_VRBattle_Base_C_OnCollectCodeKeysPhaseEnded_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionPlayerDied
// ()
// Parameters:
// class AShooterCharacter**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class AController**            Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::BPOnMissionPlayerDied(class AShooterCharacter** Player, class AShooterPlayerController** Controller, float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BPOnMissionPlayerDied");

	AMissionType_VRBattle_Base_C_BPOnMissionPlayerDied_Params params;
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


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnReadyToSpawn_Event
// ()
// Parameters:
// class AMissionServerSidePoint_VRBattleSpawnPortal_C* Portal                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::OnReadyToSpawn_Event(class AMissionServerSidePoint_VRBattleSpawnPortal_C* Portal)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnReadyToSpawn_Event");

	AMissionType_VRBattle_Base_C_OnReadyToSpawn_Event_Params params;
	params.Portal = Portal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.DoSpawnFX
// ()
// Parameters:
// class AMissionServerSidePoint_VRBattleSpawnPortal_C* Portal                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AMissionType_VRBattle_Base_C::DoSpawnFX(class AMissionServerSidePoint_VRBattleSpawnPortal_C** Portal)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.DoSpawnFX");

	AMissionType_VRBattle_Base_C_DoSpawnFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Portal != nullptr)
		*Portal = params.Portal;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.PlayerFinishedTeleporting
// ()
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::PlayerFinishedTeleporting(class APlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.PlayerFinishedTeleporting");

	AMissionType_VRBattle_Base_C_PlayerFinishedTeleporting_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.AttemptToSpawnAI
// ()

void AMissionType_VRBattle_Base_C::AttemptToSpawnAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.AttemptToSpawnAI");

	AMissionType_VRBattle_Base_C_AttemptToSpawnAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnCrackCodePhaseStarted
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::OnCrackCodePhaseStarted(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnCrackCodePhaseStarted");

	AMissionType_VRBattle_Base_C_OnCrackCodePhaseStarted_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnTeleportAndLevelDestroyPhaseStarted
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::OnTeleportAndLevelDestroyPhaseStarted(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnTeleportAndLevelDestroyPhaseStarted");

	AMissionType_VRBattle_Base_C_OnTeleportAndLevelDestroyPhaseStarted_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnCrackCodePhaseEnded
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::OnCrackCodePhaseEnded(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnCrackCodePhaseEnded");

	AMissionType_VRBattle_Base_C_OnCrackCodePhaseEnded_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnTeleportAndLevelDestroyPhaseEnded
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::OnTeleportAndLevelDestroyPhaseEnded(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnTeleportAndLevelDestroyPhaseEnded");

	AMissionType_VRBattle_Base_C_OnTeleportAndLevelDestroyPhaseEnded_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.ServerTick_TeleportingPhase
// ()

void AMissionType_VRBattle_Base_C::ServerTick_TeleportingPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.ServerTick_TeleportingPhase");

	AMissionType_VRBattle_Base_C_ServerTick_TeleportingPhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.ServerTick_CrackCodePhase
// ()

void AMissionType_VRBattle_Base_C::ServerTick_CrackCodePhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.ServerTick_CrackCodePhase");

	AMissionType_VRBattle_Base_C_ServerTick_CrackCodePhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BroadcastPhaseEvent
// ()
// Parameters:
// TEnumAsByte<EVRBattlePhaseEvent> PhaseEvent                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::BroadcastPhaseEvent(TEnumAsByte<EVRBattlePhaseEvent> PhaseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.BroadcastPhaseEvent");

	AMissionType_VRBattle_Base_C_BroadcastPhaseEvent_Params params;
	params.PhaseEvent = PhaseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.AttemptMidBossBanter
// ()

void AMissionType_VRBattle_Base_C::AttemptMidBossBanter()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.AttemptMidBossBanter");

	AMissionType_VRBattle_Base_C_AttemptMidBossBanter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.ServerTick_CollectCodeKeyPhase
// ()

void AMissionType_VRBattle_Base_C::ServerTick_CollectCodeKeyPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.ServerTick_CollectCodeKeyPhase");

	AMissionType_VRBattle_Base_C_ServerTick_CollectCodeKeyPhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnLoadingLevelPhaseStarted
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::OnLoadingLevelPhaseStarted(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnLoadingLevelPhaseStarted");

	AMissionType_VRBattle_Base_C_OnLoadingLevelPhaseStarted_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnLoadingLevelPhaseEnded
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::OnLoadingLevelPhaseEnded(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnLoadingLevelPhaseEnded");

	AMissionType_VRBattle_Base_C_OnLoadingLevelPhaseEnded_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.CallBossArenaManagerShutdown
// ()

void AMissionType_VRBattle_Base_C::CallBossArenaManagerShutdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.CallBossArenaManagerShutdown");

	AMissionType_VRBattle_Base_C_CallBossArenaManagerShutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.ExecuteUbergraph_MissionType_VRBattle_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::ExecuteUbergraph_MissionType_VRBattle_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.ExecuteUbergraph_MissionType_VRBattle_Base");

	AMissionType_VRBattle_Base_C_ExecuteUbergraph_MissionType_VRBattle_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnPhaseEvent__DelegateSignature
// ()
// Parameters:
// TEnumAsByte<EVRBattlePhaseEvent> Event                          (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Base_C::OnPhaseEvent__DelegateSignature(TEnumAsByte<EVRBattlePhaseEvent> Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Base.MissionType_VRBattle_Base_C.OnPhaseEvent__DelegateSignature");

	AMissionType_VRBattle_Base_C_OnPhaseEvent__DelegateSignature_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
