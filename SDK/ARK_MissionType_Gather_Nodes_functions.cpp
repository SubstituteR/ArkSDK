// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Gather_Nodes_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.GetActualTotalMissionTime
// ()
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Gather_Nodes_C::GetActualTotalMissionTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.GetActualTotalMissionTime");

	AMissionType_Gather_Nodes_C_GetActualTotalMissionTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.BPGetMissionTimerText
// ()
// Parameters:
// class AShooterPlayerController** ShootCont                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AMissionType_Gather_Nodes_C::BPGetMissionTimerText(class AShooterPlayerController** ShootCont)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.BPGetMissionTimerText");

	AMissionType_Gather_Nodes_C_BPGetMissionTimerText_Params params;
	params.ShootCont = ShootCont;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.BPOverrideMissionTimerColor
// ()
// Parameters:
// class AShooterPlayerController** ShooterContr                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            DefaultColor                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FLinearColor            CurrentColor                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FLinearColor            TimerOverrideColor             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_Gather_Nodes_C::BPOverrideMissionTimerColor(class AShooterPlayerController** ShooterContr, struct FLinearColor* DefaultColor, struct FLinearColor* CurrentColor, struct FLinearColor* TimerOverrideColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.BPOverrideMissionTimerColor");

	AMissionType_Gather_Nodes_C_BPOverrideMissionTimerColor_Params params;
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


// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.GetTimeOfPhase
// ()
// Parameters:
// int                            PhaseDuration                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Gather_Nodes_C::GetTimeOfPhase(int* PhaseDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.GetTimeOfPhase");

	AMissionType_Gather_Nodes_C_GetTimeOfPhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PhaseDuration != nullptr)
		*PhaseDuration = params.PhaseDuration;
}


// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.FindGatherPointsCenterAndMinDistance
// ()
// Parameters:
// struct FVector                 Center                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Gather_Nodes_C::FindGatherPointsCenterAndMinDistance(struct FVector* Center, float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.FindGatherPointsCenterAndMinDistance");

	AMissionType_Gather_Nodes_C_FindGatherPointsCenterAndMinDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Center != nullptr)
		*Center = params.Center;
	if (Radius != nullptr)
		*Radius = params.Radius;
}


// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.BPGetPhaseDisplayText
// (Exec, Native, Event, Static, NetMulticast, Public, HasOutParms, NetClient, BlueprintEvent, NetValidate)
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AMissionType_Gather_Nodes_C::STATIC_BPGetPhaseDisplayText(struct FName* PhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.BPGetPhaseDisplayText");

	AMissionType_Gather_Nodes_C_BPGetPhaseDisplayText_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.Reset Target Locations
// (NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, Public, HasOutParms, NetClient, BlueprintEvent, NetValidate)

void AMissionType_Gather_Nodes_C::STATIC_Reset_Target_Locations()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.Reset Target Locations");

	AMissionType_Gather_Nodes_C_Reset_Target_Locations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.OnMissionPhaseStarted
// ()
// Parameters:
// struct FName*                  OldPhase                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NewPhase                       (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Gather_Nodes_C::OnMissionPhaseStarted(struct FName* OldPhase, struct FName* NewPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.OnMissionPhaseStarted");

	AMissionType_Gather_Nodes_C_OnMissionPhaseStarted_Params params;
	params.OldPhase = OldPhase;
	params.NewPhase = NewPhase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.UpdatePhase
// (NetReliable, Event, NetResponse, Static, NetMulticast, Public, HasOutParms, NetClient, BlueprintEvent, NetValidate)

void AMissionType_Gather_Nodes_C::STATIC_UpdatePhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.UpdatePhase");

	AMissionType_Gather_Nodes_C_UpdatePhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.BPOnMissionPlayerLeftBounds
// ()

void AMissionType_Gather_Nodes_C::BPOnMissionPlayerLeftBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.BPOnMissionPlayerLeftBounds");

	AMissionType_Gather_Nodes_C_BPOnMissionPlayerLeftBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.BPOnMissionPlayerRespawned
// (NetReliable, NetRequest, Exec, Native, Public, HasOutParms, NetClient, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterCharacter**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Gather_Nodes_C::BPOnMissionPlayerRespawned(class AShooterCharacter** Player, class AShooterPlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.BPOnMissionPlayerRespawned");

	AMissionType_Gather_Nodes_C_BPOnMissionPlayerRespawned_Params params;
	params.Player = Player;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.BPOnMissionComplete
// ()
// Parameters:
// class AShooterCharacter**      ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForController                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLastPhaseSuccess              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPRewarded                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UPrimalItem*>     ItemsRewarded                  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMissionType_Gather_Nodes_C::BPOnMissionComplete(class AShooterCharacter** ForPlayer, class AShooterPlayerController** ForController, bool* bLastPhaseSuccess, float* XPRewarded, TArray<class UPrimalItem*>* ItemsRewarded)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.BPOnMissionComplete");

	AMissionType_Gather_Nodes_C_BPOnMissionComplete_Params params;
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


// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.GetNodesToShowIndicatorsFor
// ()
// Parameters:
// bool                           shouldUpdate                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Gather_Nodes_C::GetNodesToShowIndicatorsFor(bool* shouldUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.GetNodesToShowIndicatorsFor");

	AMissionType_Gather_Nodes_C_GetNodesToShowIndicatorsFor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldUpdate != nullptr)
		*shouldUpdate = params.shouldUpdate;
}


// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.GeneratePhaseRequirements
// (NetReliable, Event, NetResponse, Public, HasOutParms, NetClient, BlueprintEvent, NetValidate)
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionPhaseRequirement> Requirements                   (Parm, OutParm, ZeroConstructor)

void AMissionType_Gather_Nodes_C::GeneratePhaseRequirements(struct FName* PhaseName, TArray<struct FMissionPhaseRequirement>* Requirements)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.GeneratePhaseRequirements");

	AMissionType_Gather_Nodes_C_GeneratePhaseRequirements_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Requirements != nullptr)
		*Requirements = params.Requirements;
}


// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.Get Closeset Node for Actor
// ()
// Parameters:
// class AActor*                  ActorToCheck                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxRangeToPass                 (Parm, ZeroConstructor, IsPlainOldData)
// class AMissionTrigger*         TriggerFound                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bIsInRange                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Gather_Nodes_C::Get_Closeset_Node_for_Actor(class AActor* ActorToCheck, float MaxRangeToPass, class AMissionTrigger** TriggerFound, bool* bIsInRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.Get Closeset Node for Actor");

	AMissionType_Gather_Nodes_C_Get_Closeset_Node_for_Actor_Params params;
	params.ActorToCheck = ActorToCheck;
	params.MaxRangeToPass = MaxRangeToPass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TriggerFound != nullptr)
		*TriggerFound = params.TriggerFound;
	if (bIsInRange != nullptr)
		*bIsInRange = params.bIsInRange;
}


// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.GetPerPlayerWorldIndicators
// (NetReliable, NetRequest, Exec, Native, Static, Public, HasOutParms, NetClient, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      Character                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionWorldIndicator> WorldIndicators                (Parm, OutParm, ZeroConstructor)

void AMissionType_Gather_Nodes_C::STATIC_GetPerPlayerWorldIndicators(class AShooterPlayerController** Controller, class AShooterCharacter** Character, TArray<struct FMissionWorldIndicator>* WorldIndicators)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.GetPerPlayerWorldIndicators");

	AMissionType_Gather_Nodes_C_GetPerPlayerWorldIndicators_Params params;
	params.Controller = Controller;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldIndicators != nullptr)
		*WorldIndicators = params.WorldIndicators;
}


// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.SetNextLocationForBuff
// ()

void AMissionType_Gather_Nodes_C::SetNextLocationForBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.SetNextLocationForBuff");

	AMissionType_Gather_Nodes_C_SetNextLocationForBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.BPIsPhaseComplete
// ()
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_Gather_Nodes_C::BPIsPhaseComplete(struct FName* PhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.BPIsPhaseComplete");

	AMissionType_Gather_Nodes_C_BPIsPhaseComplete_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.UserConstructionScript
// ()

void AMissionType_Gather_Nodes_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.UserConstructionScript");

	AMissionType_Gather_Nodes_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.BPOnMissionServerSetup
// ()

void AMissionType_Gather_Nodes_C::BPOnMissionServerSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.BPOnMissionServerSetup");

	AMissionType_Gather_Nodes_C_BPOnMissionServerSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.OnThrottledServerTick
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Gather_Nodes_C::OnThrottledServerTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.OnThrottledServerTick");

	AMissionType_Gather_Nodes_C_OnThrottledServerTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.GatherSetup
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Gather_Nodes_C::GatherSetup(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.GatherSetup");

	AMissionType_Gather_Nodes_C_GatherSetup_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.ReceiveDestroyed
// ()

void AMissionType_Gather_Nodes_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.ReceiveDestroyed");

	AMissionType_Gather_Nodes_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.PrepSetup
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Gather_Nodes_C::PrepSetup(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.PrepSetup");

	AMissionType_Gather_Nodes_C_PrepSetup_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.BPOnMissionDeactivated
// ()

void AMissionType_Gather_Nodes_C::BPOnMissionDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.BPOnMissionDeactivated");

	AMissionType_Gather_Nodes_C_BPOnMissionDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.ExecuteUbergraph_MissionType_Gather_Nodes
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Gather_Nodes_C::ExecuteUbergraph_MissionType_Gather_Nodes(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Gather_Nodes.MissionType_Gather_Nodes_C.ExecuteUbergraph_MissionType_Gather_Nodes");

	AMissionType_Gather_Nodes_C_ExecuteUbergraph_MissionType_Gather_Nodes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
