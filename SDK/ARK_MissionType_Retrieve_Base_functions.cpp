// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Retrieve_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.RefreshMissionItemsAtGoal
// ()

void AMissionType_Retrieve_Base_C::RefreshMissionItemsAtGoal()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.RefreshMissionItemsAtGoal");

	AMissionType_Retrieve_Base_C_RefreshMissionItemsAtGoal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.GetAllPlayersNotPendingRemoval
// ()
// Parameters:
// TArray<class AShooterCharacter*> OutChars                       (Parm, OutParm, ZeroConstructor)

void AMissionType_Retrieve_Base_C::GetAllPlayersNotPendingRemoval(TArray<class AShooterCharacter*>* OutChars)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.GetAllPlayersNotPendingRemoval");

	AMissionType_Retrieve_Base_C_GetAllPlayersNotPendingRemoval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutChars != nullptr)
		*OutChars = params.OutChars;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnPlayerRemovedFromMission
// ()
// Parameters:
// class AShooterCharacter**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromMissionCompleteEvent      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLastPhaseSuccess              (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::BPOnPlayerRemovedFromMission(class AShooterCharacter** Player, class AShooterPlayerController** Controller, bool* bFromMissionCompleteEvent, bool* bLastPhaseSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnPlayerRemovedFromMission");

	AMissionType_Retrieve_Base_C_BPOnPlayerRemovedFromMission_Params params;
	params.Player = Player;
	params.Controller = Controller;
	params.bFromMissionCompleteEvent = bFromMissionCompleteEvent;
	params.bLastPhaseSuccess = bLastPhaseSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.CreateLeaderboardEntry
// ()
// Parameters:
// class AShooterPlayerController* ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::CreateLeaderboardEntry(class AShooterPlayerController* ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.CreateLeaderboardEntry");

	AMissionType_Retrieve_Base_C_CreateLeaderboardEntry_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.SpawnDinoForStructure
// (NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class APrimalStructure*        Structure                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::SpawnDinoForStructure(class APrimalStructure* Structure)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.SpawnDinoForStructure");

	AMissionType_Retrieve_Base_C_SpawnDinoForStructure_Params params;
	params.Structure = Structure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.SpawnRetrieveItem
// ()
// Parameters:
// struct FVector                 WorldLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                WorldRotation                  (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::SpawnRetrieveItem(const struct FVector& WorldLocation, const struct FRotator& WorldRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.SpawnRetrieveItem");

	AMissionType_Retrieve_Base_C_SpawnRetrieveItem_Params params;
	params.WorldLocation = WorldLocation;
	params.WorldRotation = WorldRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.CheckClearProtectorDinoTether
// ()
// Parameters:
// class ADroppedItemMission*     DroppedItem                    (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::CheckClearProtectorDinoTether(class ADroppedItemMission* DroppedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.CheckClearProtectorDinoTether");

	AMissionType_Retrieve_Base_C_CheckClearProtectorDinoTether_Params params;
	params.DroppedItem = DroppedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.GetMissionItemsOnPlayer
// (NetReliable, NetRequest, Exec, Event, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterCharacter*       ShooterChar                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            TotalQuantity                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class UPrimalItem*>     Items                          (Parm, OutParm, ZeroConstructor)

void AMissionType_Retrieve_Base_C::GetMissionItemsOnPlayer(class AShooterCharacter* ShooterChar, int* TotalQuantity, TArray<class UPrimalItem*>* Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.GetMissionItemsOnPlayer");

	AMissionType_Retrieve_Base_C_GetMissionItemsOnPlayer_Params params;
	params.ShooterChar = ShooterChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TotalQuantity != nullptr)
		*TotalQuantity = params.TotalQuantity;
	if (Items != nullptr)
		*Items = params.Items;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnMissionPlayerDied
// ()
// Parameters:
// class AShooterCharacter**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class AController**            Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::BPOnMissionPlayerDied(class AShooterCharacter** Player, class AShooterPlayerController** Controller, float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnMissionPlayerDied");

	AMissionType_Retrieve_Base_C_BPOnMissionPlayerDied_Params params;
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


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.IsPlayerCloseToCheckpoint
// ()
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AMissionTrigger_Retrieve_Checkpoint_C* checkpoint                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsClose                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::IsPlayerCloseToCheckpoint(class AShooterCharacter* Player, class AMissionTrigger_Retrieve_Checkpoint_C* checkpoint, bool* IsClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.IsPlayerCloseToCheckpoint");

	AMissionType_Retrieve_Base_C_IsPlayerCloseToCheckpoint_Params params;
	params.Player = Player;
	params.checkpoint = checkpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsClose != nullptr)
		*IsClose = params.IsClose;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.SpawnLastCheckpointEmitter
// (Exec, Event, NetResponse, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::SpawnLastCheckpointEmitter(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.SpawnLastCheckpointEmitter");

	AMissionType_Retrieve_Base_C_SpawnLastCheckpointEmitter_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.begin wait event
// ()
// Parameters:
// float                          Wander_Duration                (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 checkpoint                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::begin_wait_event(float Wander_Duration, class UObject* checkpoint, class AShooterCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.begin wait event");

	AMissionType_Retrieve_Base_C_begin_wait_event_Params params;
	params.Wander_Duration = Wander_Duration;
	params.checkpoint = checkpoint;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.StartHLNARandomWandering
// (NetReliable, NetRequest, Exec, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterCharacter*       ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          TotalDuration                  (Parm, ZeroConstructor, IsPlainOldData)
// class AMissionTrigger_Retrieve_Checkpoint_C* checkpoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::STATIC_StartHLNARandomWandering(class AShooterCharacter* ForPlayer, float TotalDuration, class AMissionTrigger_Retrieve_Checkpoint_C* checkpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.StartHLNARandomWandering");

	AMissionType_Retrieve_Base_C_StartHLNARandomWandering_Params params;
	params.ForPlayer = ForPlayer;
	params.TotalDuration = TotalDuration;
	params.checkpoint = checkpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.MakeCompanionEventData
// (NetRequest, Exec, Event, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterCharacter*       ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          TotalDuration                  (Parm, ZeroConstructor, IsPlainOldData)
// class AMissionTrigger_Retrieve_Checkpoint_C* ForCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FCompanionEventData     CompanionWaitEvent             (Parm, OutParm)

void AMissionType_Retrieve_Base_C::STATIC_MakeCompanionEventData(class AShooterCharacter* ForPlayer, float TotalDuration, class AMissionTrigger_Retrieve_Checkpoint_C* ForCheckpoint, struct FCompanionEventData* CompanionWaitEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.MakeCompanionEventData");

	AMissionType_Retrieve_Base_C_MakeCompanionEventData_Params params;
	params.ForPlayer = ForPlayer;
	params.TotalDuration = TotalDuration;
	params.ForCheckpoint = ForCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CompanionWaitEvent != nullptr)
		*CompanionWaitEvent = params.CompanionWaitEvent;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPClientHandleNetExecCommand
// ()
// Parameters:
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_Retrieve_Base_C::BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPClientHandleNetExecCommand");

	AMissionType_Retrieve_Base_C_BPClientHandleNetExecCommand_Params params;
	params.CommandName = CommandName;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.ReceiveTick");

	AMissionType_Retrieve_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.OnRep_ReplicatedRemainingTime
// ()

void AMissionType_Retrieve_Base_C::OnRep_ReplicatedRemainingTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.OnRep_ReplicatedRemainingTime");

	AMissionType_Retrieve_Base_C_OnRep_ReplicatedRemainingTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOverrideMissionIndicatorString
// (NetReliable, NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterCharacter**      forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FMissionWorldIndicator* Indicator                      (Parm)
// class FString*                 String                         (Parm, ZeroConstructor)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AMissionType_Retrieve_Base_C::BPOverrideMissionIndicatorString(class AShooterCharacter** forCharacter, struct FMissionWorldIndicator* Indicator, class FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOverrideMissionIndicatorString");

	AMissionType_Retrieve_Base_C_BPOverrideMissionIndicatorString_Params params;
	params.forCharacter = forCharacter;
	params.Indicator = Indicator;
	params.String = String;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.SpawnAdditionalDinos
// ()
// Parameters:
// struct FStruct_DelayedCheckpointData DelayedCheckpointData          (Parm, OutParm, ReferenceParm)

void AMissionType_Retrieve_Base_C::SpawnAdditionalDinos(struct FStruct_DelayedCheckpointData* DelayedCheckpointData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.SpawnAdditionalDinos");

	AMissionType_Retrieve_Base_C_SpawnAdditionalDinos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DelayedCheckpointData != nullptr)
		*DelayedCheckpointData = params.DelayedCheckpointData;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.OnAddedDelayedCheckpoint
// ()
// Parameters:
// struct FStruct_DelayedCheckpointData DelayedCheckpointData          (Parm)

void AMissionType_Retrieve_Base_C::OnAddedDelayedCheckpoint(const struct FStruct_DelayedCheckpointData& DelayedCheckpointData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.OnAddedDelayedCheckpoint");

	AMissionType_Retrieve_Base_C_OnAddedDelayedCheckpoint_Params params;
	params.DelayedCheckpointData = DelayedCheckpointData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.GetDelayedCheckpointState
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterPlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFound                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RemainingTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AMissionTrigger_Retrieve_Checkpoint_C* checkpoint                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::STATIC_GetDelayedCheckpointState(class AShooterPlayerController* PlayerController, bool* bFound, int* State, float* RemainingTime, class AMissionTrigger_Retrieve_Checkpoint_C** checkpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.GetDelayedCheckpointState");

	AMissionType_Retrieve_Base_C_GetDelayedCheckpointState_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFound != nullptr)
		*bFound = params.bFound;
	if (State != nullptr)
		*State = params.State;
	if (RemainingTime != nullptr)
		*RemainingTime = params.RemainingTime;
	if (checkpoint != nullptr)
		*checkpoint = params.checkpoint;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.UpdateDelayedCheckpointQueue
// (NetRequest, Native, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::UpdateDelayedCheckpointQueue(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.UpdateDelayedCheckpointQueue");

	AMissionType_Retrieve_Base_C_UpdateDelayedCheckpointQueue_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.AddToDelayedCheckpointQueue
// (NetReliable, Native, Event, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController* Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            NextCheckpoint                 (Parm, ZeroConstructor, IsPlainOldData)
// class AMissionTrigger_Retrieve_Checkpoint_C* checkpoint                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::AddToDelayedCheckpointQueue(float Delay, class AShooterPlayerController* Controller, int NextCheckpoint, class AMissionTrigger_Retrieve_Checkpoint_C* checkpoint, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.AddToDelayedCheckpointQueue");

	AMissionType_Retrieve_Base_C_AddToDelayedCheckpointQueue_Params params;
	params.Delay = Delay;
	params.Controller = Controller;
	params.NextCheckpoint = NextCheckpoint;
	params.checkpoint = checkpoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOverrideMissionTimerColor
// ()
// Parameters:
// class AShooterPlayerController** ShooterContr                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            DefaultColor                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FLinearColor            CurrentColor                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FLinearColor            TimerOverrideColor             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_Retrieve_Base_C::BPOverrideMissionTimerColor(class AShooterPlayerController** ShooterContr, struct FLinearColor* DefaultColor, struct FLinearColor* CurrentColor, struct FLinearColor* TimerOverrideColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOverrideMissionTimerColor");

	AMissionType_Retrieve_Base_C_BPOverrideMissionTimerColor_Params params;
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


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.IsMissionComplete
// ()
// Parameters:
// class AShooterCharacter**      forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForController                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_Retrieve_Base_C::IsMissionComplete(class AShooterCharacter** forCharacter, class AShooterPlayerController** ForController)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.IsMissionComplete");

	AMissionType_Retrieve_Base_C_IsMissionComplete_Params params;
	params.forCharacter = forCharacter;
	params.ForController = ForController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPIsPhaseComplete
// ()
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_Retrieve_Base_C::BPIsPhaseComplete(struct FName* PhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPIsPhaseComplete");

	AMissionType_Retrieve_Base_C_BPIsPhaseComplete_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnMissionPlayerLeftBounds
// ()

void AMissionType_Retrieve_Base_C::BPOnMissionPlayerLeftBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnMissionPlayerLeftBounds");

	AMissionType_Retrieve_Base_C_BPOnMissionPlayerLeftBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.ExtraSpecificDinoSetup
// ()
// Parameters:
// class APrimalDinoCharacter*    Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// class AMissionServerSidePoint* Spawner                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAttackerDino                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::ExtraSpecificDinoSetup(class APrimalDinoCharacter* Dino, class AMissionServerSidePoint* Spawner, bool* IsAttackerDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.ExtraSpecificDinoSetup");

	AMissionType_Retrieve_Base_C_ExtraSpecificDinoSetup_Params params;
	params.Dino = Dino;
	params.Spawner = Spawner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAttackerDino != nullptr)
		*IsAttackerDino = params.IsAttackerDino;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnMissionPlayerRespawned
// ()
// Parameters:
// class AShooterCharacter**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::BPOnMissionPlayerRespawned(class AShooterCharacter** Player, class AShooterPlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnMissionPlayerRespawned");

	AMissionType_Retrieve_Base_C_BPOnMissionPlayerRespawned_Params params;
	params.Player = Player;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnMissionComplete
// ()
// Parameters:
// class AShooterCharacter**      ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForController                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLastPhaseSuccess              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPRewarded                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UPrimalItem*>     ItemsRewarded                  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMissionType_Retrieve_Base_C::BPOnMissionComplete(class AShooterCharacter** ForPlayer, class AShooterPlayerController** ForController, bool* bLastPhaseSuccess, float* XPRewarded, TArray<class UPrimalItem*>* ItemsRewarded)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnMissionComplete");

	AMissionType_Retrieve_Base_C_BPOnMissionComplete_Params params;
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


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.SpawnRetrieveTriggerDinos
// (NetReliable, Native, Static, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class AMissionTrigger*         Trigger                        (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::STATIC_SpawnRetrieveTriggerDinos(class AMissionTrigger* Trigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.SpawnRetrieveTriggerDinos");

	AMissionType_Retrieve_Base_C_SpawnRetrieveTriggerDinos_Params params;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.GeneratePhaseRequirements
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionPhaseRequirement> Requirements                   (Parm, OutParm, ZeroConstructor)

void AMissionType_Retrieve_Base_C::STATIC_GeneratePhaseRequirements(struct FName* PhaseName, TArray<struct FMissionPhaseRequirement>* Requirements)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.GeneratePhaseRequirements");

	AMissionType_Retrieve_Base_C_GeneratePhaseRequirements_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Requirements != nullptr)
		*Requirements = params.Requirements;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.GetNextCheckpoint
// ()
// Parameters:
// class AShooterPlayerController* Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AMissionTrigger*         NextCheckpoint                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           CompletedNav                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::GetNextCheckpoint(class AShooterPlayerController* Controller, int* index, class AMissionTrigger** NextCheckpoint, bool* CompletedNav)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.GetNextCheckpoint");

	AMissionType_Retrieve_Base_C_GetNextCheckpoint_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (index != nullptr)
		*index = params.index;
	if (NextCheckpoint != nullptr)
		*NextCheckpoint = params.NextCheckpoint;
	if (CompletedNav != nullptr)
		*CompletedNav = params.CompletedNav;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.TryIncrementCheckpoint
// ()
// Parameters:
// class AShooterPlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class AMissionTrigger*         HitTrigger                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           AtEnd                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           DelayedNext                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::TryIncrementCheckpoint(class AShooterPlayerController* PlayerController, class AMissionTrigger* HitTrigger, bool* Success, bool* AtEnd, bool* DelayedNext)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.TryIncrementCheckpoint");

	AMissionType_Retrieve_Base_C_TryIncrementCheckpoint_Params params;
	params.PlayerController = PlayerController;
	params.HitTrigger = HitTrigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (AtEnd != nullptr)
		*AtEnd = params.AtEnd;
	if (DelayedNext != nullptr)
		*DelayedNext = params.DelayedNext;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.GetPerPlayerWorldIndicators
// (Exec, Event, NetResponse, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      Character                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionWorldIndicator> WorldIndicators                (Parm, OutParm, ZeroConstructor)

void AMissionType_Retrieve_Base_C::GetPerPlayerWorldIndicators(class AShooterPlayerController** Controller, class AShooterCharacter** Character, TArray<struct FMissionWorldIndicator>* WorldIndicators)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.GetPerPlayerWorldIndicators");

	AMissionType_Retrieve_Base_C_GetPerPlayerWorldIndicators_Params params;
	params.Controller = Controller;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldIndicators != nullptr)
		*WorldIndicators = params.WorldIndicators;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.UserConstructionScript
// ()

void AMissionType_Retrieve_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.UserConstructionScript");

	AMissionType_Retrieve_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnMissionServerSetup
// ()

void AMissionType_Retrieve_Base_C::BPOnMissionServerSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnMissionServerSetup");

	AMissionType_Retrieve_Base_C_BPOnMissionServerSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnMissionTriggerBeginOverlap
// ()
// Parameters:
// class AMissionTrigger**        Trigger                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::BPOnMissionTriggerBeginOverlap(class AMissionTrigger** Trigger, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnMissionTriggerBeginOverlap");

	AMissionType_Retrieve_Base_C_BPOnMissionTriggerBeginOverlap_Params params;
	params.Trigger = Trigger;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.RetrieveSetup
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::RetrieveSetup(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.RetrieveSetup");

	AMissionType_Retrieve_Base_C_RetrieveSetup_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.ItemSetup
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::ItemSetup(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.ItemSetup");

	AMissionType_Retrieve_Base_C_ItemSetup_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnMissionDroppedItemPickedUp
// ()
// Parameters:
// class ADroppedItemMission**    DroppedItem                    (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      ByPC                           (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            InventoryItem                  (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::BPOnMissionDroppedItemPickedUp(class ADroppedItemMission** DroppedItem, class APlayerController** ByPC, class UPrimalItem** InventoryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnMissionDroppedItemPickedUp");

	AMissionType_Retrieve_Base_C_BPOnMissionDroppedItemPickedUp_Params params;
	params.DroppedItem = DroppedItem;
	params.ByPC = ByPC;
	params.InventoryItem = InventoryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.EscapeEventSetup
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::EscapeEventSetup(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.EscapeEventSetup");

	AMissionType_Retrieve_Base_C_EscapeEventSetup_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.OnThrottledServerTick
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::OnThrottledServerTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.OnThrottledServerTick");

	AMissionType_Retrieve_Base_C_OnThrottledServerTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.Begin Scan
// ()

void AMissionType_Retrieve_Base_C::Begin_Scan()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.Begin Scan");

	AMissionType_Retrieve_Base_C_Begin_Scan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.scan area and bind on finish
// ()
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::scan_area_and_bind_on_finish(class AShooterCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.scan area and bind on finish");

	AMissionType_Retrieve_Base_C_scan_area_and_bind_on_finish_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.scan area reaction only
// ()
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::scan_area_reaction_only(class AShooterCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.scan area reaction only");

	AMissionType_Retrieve_Base_C_scan_area_reaction_only_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.Finished Playing Scan
// ()
// Parameters:
// class AShooterCharacter*       ShooterChar                    (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::Finished_Playing_Scan(class AShooterCharacter* ShooterChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.Finished Playing Scan");

	AMissionType_Retrieve_Base_C_Finished_Playing_Scan_Params params;
	params.ShooterChar = ShooterChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.finished scan backup timer
// ()

void AMissionType_Retrieve_Base_C::finished_scan_backup_timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.finished scan backup timer");

	AMissionType_Retrieve_Base_C_finished_scan_backup_timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.Multi_SpawnLastCheckpointEmitter
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::Multi_SpawnLastCheckpointEmitter(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.Multi_SpawnLastCheckpointEmitter");

	AMissionType_Retrieve_Base_C_Multi_SpawnLastCheckpointEmitter_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.PrepSetup
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::PrepSetup(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.PrepSetup");

	AMissionType_Retrieve_Base_C_PrepSetup_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.PrepEnded
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::PrepEnded(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.PrepEnded");

	AMissionType_Retrieve_Base_C_PrepEnded_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.SetupRetrieveMission
// ()

void AMissionType_Retrieve_Base_C::SetupRetrieveMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.SetupRetrieveMission");

	AMissionType_Retrieve_Base_C_SetupRetrieveMission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnMissionPlayerRemovedInventoryItem
// ()
// Parameters:
// class AShooterCharacter**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalInventoryComponent** Inventory                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            Item                           (Parm, ZeroConstructor, IsPlainOldData)
// int*                           AmountRemoved                  (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::BPOnMissionPlayerRemovedInventoryItem(class AShooterCharacter** Player, class UPrimalInventoryComponent** Inventory, class UPrimalItem** Item, int* AmountRemoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnMissionPlayerRemovedInventoryItem");

	AMissionType_Retrieve_Base_C_BPOnMissionPlayerRemovedInventoryItem_Params params;
	params.Player = Player;
	params.Inventory = Inventory;
	params.Item = Item;
	params.AmountRemoved = AmountRemoved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnMissionTriggerEndOverlap
// ()
// Parameters:
// class AMissionTrigger**        Trigger                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::BPOnMissionTriggerEndOverlap(class AMissionTrigger** Trigger, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnMissionTriggerEndOverlap");

	AMissionType_Retrieve_Base_C_BPOnMissionTriggerEndOverlap_Params params;
	params.Trigger = Trigger;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.Multi_ShowMissionTime
// ()

void AMissionType_Retrieve_Base_C::Multi_ShowMissionTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.Multi_ShowMissionTime");

	AMissionType_Retrieve_Base_C_Multi_ShowMissionTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.Multi_ToggleSpline
// ()
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)
// class AMissionSpline*          Spline                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::Multi_ToggleSpline(bool Enable, class AMissionSpline* Spline)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.Multi_ToggleSpline");

	AMissionType_Retrieve_Base_C_Multi_ToggleSpline_Params params;
	params.Enable = Enable;
	params.Spline = Spline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnMissionDeactivated
// ()

void AMissionType_Retrieve_Base_C::BPOnMissionDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.BPOnMissionDeactivated");

	AMissionType_Retrieve_Base_C_BPOnMissionDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.ExecuteUbergraph_MissionType_Retrieve_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_Base_C::ExecuteUbergraph_MissionType_Retrieve_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_Base.MissionType_Retrieve_Base_C.ExecuteUbergraph_MissionType_Retrieve_Base");

	AMissionType_Retrieve_Base_C_ExecuteUbergraph_MissionType_Retrieve_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
