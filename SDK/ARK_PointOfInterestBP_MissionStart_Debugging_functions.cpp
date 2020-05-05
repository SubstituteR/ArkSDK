// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PointOfInterestBP_MissionStart_Debugging_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.client finish glitch fix multiuse
// (Native, NetMulticast, MulticastDelegate, Protected, DLLImport, Const, NetValidate)
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void APointOfInterestBP_MissionStart_Debugging_C::client_finish_glitch_fix_multiuse(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.client finish glitch fix multiuse");

	APointOfInterestBP_MissionStart_Debugging_C_client_finish_glitch_fix_multiuse_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.GetUsablePriority
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APointOfInterestBP_MissionStart_Debugging_C::GetUsablePriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.GetUsablePriority");

	APointOfInterestBP_MissionStart_Debugging_C_GetUsablePriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.GetGlitchMissionTag
// ()
// Parameters:
// class APrimalBuff_MissionData* missionData                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   GlitchMissionTag               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APointOfInterestBP_MissionStart_Debugging_C::GetGlitchMissionTag(class APrimalBuff_MissionData* missionData, struct FName* GlitchMissionTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.GetGlitchMissionTag");

	APointOfInterestBP_MissionStart_Debugging_C_GetGlitchMissionTag_Params params;
	params.missionData = missionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlitchMissionTag != nullptr)
		*GlitchMissionTag = params.GlitchMissionTag;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.OnNearbyPlayerStateChange
// ()
// Parameters:
// bool                           NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void APointOfInterestBP_MissionStart_Debugging_C::OnNearbyPlayerStateChange(bool NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.OnNearbyPlayerStateChange");

	APointOfInterestBP_MissionStart_Debugging_C_OnNearbyPlayerStateChange_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.RefreshPointData
// ()

void APointOfInterestBP_MissionStart_Debugging_C::RefreshPointData()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.RefreshPointData");

	APointOfInterestBP_MissionStart_Debugging_C_RefreshPointData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Is The Glitch Fixed
// ()
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APointOfInterestBP_MissionStart_Debugging_C::Is_The_Glitch_Fixed(class AShooterCharacter* Player, bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Is The Glitch Fixed");

	APointOfInterestBP_MissionStart_Debugging_C_Is_The_Glitch_Fixed_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Can Player Hold To Fix
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APointOfInterestBP_MissionStart_Debugging_C::Can_Player_Hold_To_Fix(class APlayerController* PC, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Can Player Hold To Fix");

	APointOfInterestBP_MissionStart_Debugging_C_Can_Player_Hold_To_Fix_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Timer_Until_Fallback_Able_to_be_Activated_Again
// ()

void APointOfInterestBP_MissionStart_Debugging_C::Timer_Until_Fallback_Able_to_be_Activated_Again()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Timer_Until_Fallback_Able_to_be_Activated_Again");

	APointOfInterestBP_MissionStart_Debugging_C_Timer_Until_Fallback_Able_to_be_Activated_Again_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.fully give explorer note and play companion reaction
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, DLLImport, Const, NetValidate)
// Parameters:
// int                            ExplorerNoteIndex              (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController* Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void APointOfInterestBP_MissionStart_Debugging_C::fully_give_explorer_note_and_play_companion_reaction(int ExplorerNoteIndex, class AShooterPlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.fully give explorer note and play companion reaction");

	APointOfInterestBP_MissionStart_Debugging_C_fully_give_explorer_note_and_play_companion_reaction_Params params;
	params.ExplorerNoteIndex = ExplorerNoteIndex;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Give Player Explorer Note
// ()

void APointOfInterestBP_MissionStart_Debugging_C::Give_Player_Explorer_Note()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Give Player Explorer Note");

	APointOfInterestBP_MissionStart_Debugging_C_Give_Player_Explorer_Note_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Fully Charge
// ()

void APointOfInterestBP_MissionStart_Debugging_C::Fully_Charge()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Fully Charge");

	APointOfInterestBP_MissionStart_Debugging_C_Fully_Charge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.start lower charge
// ()

void APointOfInterestBP_MissionStart_Debugging_C::start_lower_charge()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.start lower charge");

	APointOfInterestBP_MissionStart_Debugging_C_start_lower_charge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void APointOfInterestBP_MissionStart_Debugging_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.BPClientDoMultiUse");

	APointOfInterestBP_MissionStart_Debugging_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.BPGetMultiUseEntries
// (NetRequest, Event, Static, NetMulticast, MulticastDelegate, Protected, DLLImport, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> APointOfInterestBP_MissionStart_Debugging_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.BPGetMultiUseEntries");

	APointOfInterestBP_MissionStart_Debugging_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.OnGlitchFixStart
// ()

void APointOfInterestBP_MissionStart_Debugging_C::OnGlitchFixStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.OnGlitchFixStart");

	APointOfInterestBP_MissionStart_Debugging_C_OnGlitchFixStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.OnGlitchFixEnd
// ()

void APointOfInterestBP_MissionStart_Debugging_C::OnGlitchFixEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.OnGlitchFixEnd");

	APointOfInterestBP_MissionStart_Debugging_C_OnGlitchFixEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.UpdateFixState
// ()
// Parameters:
// class AShooterCharacter*       ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNewFixedState                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsInitialSync                 (Parm, ZeroConstructor, IsPlainOldData)

void APointOfInterestBP_MissionStart_Debugging_C::UpdateFixState(class AShooterCharacter* ForPlayer, bool bNewFixedState, bool bIsInitialSync)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.UpdateFixState");

	APointOfInterestBP_MissionStart_Debugging_C_UpdateFixState_Params params;
	params.ForPlayer = ForPlayer;
	params.bNewFixedState = bNewFixedState;
	params.bIsInitialSync = bIsInitialSync;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APointOfInterestBP_MissionStart_Debugging_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.BPServerHandleNetExecCommand");

	APointOfInterestBP_MissionStart_Debugging_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.CanPlayerStartMyMission
// ()
// Parameters:
// class APlayerController**      PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APointOfInterestBP_MissionStart_Debugging_C::CanPlayerStartMyMission(class APlayerController** PC, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.CanPlayerStartMyMission");

	APointOfInterestBP_MissionStart_Debugging_C_CanPlayerStartMyMission_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.FixGlitchForPC
// ()
// Parameters:
// class APlayerController*       ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void APointOfInterestBP_MissionStart_Debugging_C::FixGlitchForPC(class APlayerController* ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.FixGlitchForPC");

	APointOfInterestBP_MissionStart_Debugging_C_FixGlitchForPC_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.SendFixStateToPC
// (NetRequest, NetResponse, Public, Private, Protected, Delegate, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// class APlayerController*       ToPC                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsInitialSync                 (Parm, ZeroConstructor, IsPlainOldData)

void APointOfInterestBP_MissionStart_Debugging_C::SendFixStateToPC(class APlayerController* ToPC, bool bIsInitialSync)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.SendFixStateToPC");

	APointOfInterestBP_MissionStart_Debugging_C_SendFixStateToPC_Params params;
	params.ToPC = ToPC;
	params.bIsInitialSync = bIsInitialSync;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Has Completed This Glitch
// ()
// Parameters:
// class AShooterCharacter*       ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APointOfInterestBP_MissionStart_Debugging_C::Has_Completed_This_Glitch(class AShooterCharacter* ForPlayer, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Has Completed This Glitch");

	APointOfInterestBP_MissionStart_Debugging_C_Has_Completed_This_Glitch_Params params;
	params.ForPlayer = ForPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.BPClientHandleNetExecCommand
// ()
// Parameters:
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APointOfInterestBP_MissionStart_Debugging_C::BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.BPClientHandleNetExecCommand");

	APointOfInterestBP_MissionStart_Debugging_C_BPClientHandleNetExecCommand_Params params;
	params.CommandName = CommandName;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.StartMyMission
// (NetReliable, Native, Event, NetResponse, Public, Private, Protected, Delegate, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// class APlayerController**      WithPC                         (Parm, ZeroConstructor, IsPlainOldData)

void APointOfInterestBP_MissionStart_Debugging_C::StartMyMission(class APlayerController** WithPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.StartMyMission");

	APointOfInterestBP_MissionStart_Debugging_C_StartMyMission_Params params;
	params.WithPC = WithPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.CanBeViewed
// ()
// Parameters:
// class AActor**                 ByActor                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APointOfInterestBP_MissionStart_Debugging_C::CanBeViewed(class AActor** ByActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.CanBeViewed");

	APointOfInterestBP_MissionStart_Debugging_C_CanBeViewed_Params params;
	params.ByActor = ByActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.UserConstructionScript
// ()

void APointOfInterestBP_MissionStart_Debugging_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.UserConstructionScript");

	APointOfInterestBP_MissionStart_Debugging_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Timeline_GlitchExpand__FinishedFunc
// ()

void APointOfInterestBP_MissionStart_Debugging_C::Timeline_GlitchExpand__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Timeline_GlitchExpand__FinishedFunc");

	APointOfInterestBP_MissionStart_Debugging_C_Timeline_GlitchExpand__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Timeline_GlitchExpand__UpdateFunc
// ()

void APointOfInterestBP_MissionStart_Debugging_C::Timeline_GlitchExpand__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Timeline_GlitchExpand__UpdateFunc");

	APointOfInterestBP_MissionStart_Debugging_C_Timeline_GlitchExpand__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Timeline_SpawnGlitch__FinishedFunc
// ()

void APointOfInterestBP_MissionStart_Debugging_C::Timeline_SpawnGlitch__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Timeline_SpawnGlitch__FinishedFunc");

	APointOfInterestBP_MissionStart_Debugging_C_Timeline_SpawnGlitch__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Timeline_SpawnGlitch__UpdateFunc
// ()

void APointOfInterestBP_MissionStart_Debugging_C::Timeline_SpawnGlitch__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Timeline_SpawnGlitch__UpdateFunc");

	APointOfInterestBP_MissionStart_Debugging_C_Timeline_SpawnGlitch__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.increase fixing pitch__FinishedFunc
// ()

void APointOfInterestBP_MissionStart_Debugging_C::increase_fixing_pitch__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.increase fixing pitch__FinishedFunc");

	APointOfInterestBP_MissionStart_Debugging_C_increase_fixing_pitch__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.increase fixing pitch__UpdateFunc
// ()

void APointOfInterestBP_MissionStart_Debugging_C::increase_fixing_pitch__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.increase fixing pitch__UpdateFunc");

	APointOfInterestBP_MissionStart_Debugging_C_increase_fixing_pitch__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.BndEvt__DetectNearbyPlayersSphere_K2Node_ComponentBoundEvent_162_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void APointOfInterestBP_MissionStart_Debugging_C::BndEvt__DetectNearbyPlayersSphere_K2Node_ComponentBoundEvent_162_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.BndEvt__DetectNearbyPlayersSphere_K2Node_ComponentBoundEvent_162_ComponentBeginOverlapSignature__DelegateSignature");

	APointOfInterestBP_MissionStart_Debugging_C_BndEvt__DetectNearbyPlayersSphere_K2Node_ComponentBoundEvent_162_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepResult != nullptr)
		*SweepResult = params.SweepResult;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Timer_Client_CheckForNoPlayers
// ()

void APointOfInterestBP_MissionStart_Debugging_C::Timer_Client_CheckForNoPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Timer_Client_CheckForNoPlayers");

	APointOfInterestBP_MissionStart_Debugging_C_Timer_Client_CheckForNoPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Timer_Server_TickFixing
// ()

void APointOfInterestBP_MissionStart_Debugging_C::Timer_Server_TickFixing()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Timer_Server_TickFixing");

	APointOfInterestBP_MissionStart_Debugging_C_Timer_Server_TickFixing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Timer_CheckUntilLocalPlayers
// ()

void APointOfInterestBP_MissionStart_Debugging_C::Timer_CheckUntilLocalPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Timer_CheckUntilLocalPlayers");

	APointOfInterestBP_MissionStart_Debugging_C_Timer_CheckUntilLocalPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.BindEventForReactionVFX
// ()

void APointOfInterestBP_MissionStart_Debugging_C::BindEventForReactionVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.BindEventForReactionVFX");

	APointOfInterestBP_MissionStart_Debugging_C_BindEventForReactionVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Delegate_OnCompanionReactionVfxSpawned__DelegateSignature_Event
// ()
// Parameters:
// class APrimalBuff_Companion*   SpawnedByCompanion             (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* SpawnedComp_VFX                (Parm, ZeroConstructor, IsPlainOldData)

void APointOfInterestBP_MissionStart_Debugging_C::Delegate_OnCompanionReactionVfxSpawned__DelegateSignature_Event(class APrimalBuff_Companion* SpawnedByCompanion, class UParticleSystemComponent* SpawnedComp_VFX)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Delegate_OnCompanionReactionVfxSpawned__DelegateSignature_Event");

	APointOfInterestBP_MissionStart_Debugging_C_Delegate_OnCompanionReactionVfxSpawned__DelegateSignature_Event_Params params;
	params.SpawnedByCompanion = SpawnedByCompanion;
	params.SpawnedComp_VFX = SpawnedComp_VFX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.request try fix glitch
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void APointOfInterestBP_MissionStart_Debugging_C::request_try_fix_glitch(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.request try fix glitch");

	APointOfInterestBP_MissionStart_Debugging_C_request_try_fix_glitch_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.increase fixing pitch event
// ()

void APointOfInterestBP_MissionStart_Debugging_C::increase_fixing_pitch_event()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.increase fixing pitch event");

	APointOfInterestBP_MissionStart_Debugging_C_increase_fixing_pitch_event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.ReceiveBeginPlay
// ()

void APointOfInterestBP_MissionStart_Debugging_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.ReceiveBeginPlay");

	APointOfInterestBP_MissionStart_Debugging_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Set glitch visible
// ()

void APointOfInterestBP_MissionStart_Debugging_C::Set_glitch_visible()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.Set glitch visible");

	APointOfInterestBP_MissionStart_Debugging_C_Set_glitch_visible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.force begin play events
// ()

void APointOfInterestBP_MissionStart_Debugging_C::force_begin_play_events()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.force begin play events");

	APointOfInterestBP_MissionStart_Debugging_C_force_begin_play_events_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.delay play reaction
// ()
// Parameters:
// struct FCompanionReactionData  reaction                       (Parm)
// class APrimalBuff_Companion*   HLNA                           (Parm, ZeroConstructor, IsPlainOldData)

void APointOfInterestBP_MissionStart_Debugging_C::delay_play_reaction(const struct FCompanionReactionData& reaction, class APrimalBuff_Companion* HLNA)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.delay play reaction");

	APointOfInterestBP_MissionStart_Debugging_C_delay_play_reaction_Params params;
	params.reaction = reaction;
	params.HLNA = HLNA;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.retry overlap events
// ()

void APointOfInterestBP_MissionStart_Debugging_C::retry_overlap_events()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.retry overlap events");

	APointOfInterestBP_MissionStart_Debugging_C_retry_overlap_events_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.ExecuteUbergraph_PointOfInterestBP_MissionStart_Debugging
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APointOfInterestBP_MissionStart_Debugging_C::ExecuteUbergraph_PointOfInterestBP_MissionStart_Debugging(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestBP_MissionStart_Debugging.PointOfInterestBP_MissionStart_Debugging_C.ExecuteUbergraph_PointOfInterestBP_MissionStart_Debugging");

	APointOfInterestBP_MissionStart_Debugging_C_ExecuteUbergraph_PointOfInterestBP_MissionStart_Debugging_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
