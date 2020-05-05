// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionDispatcher_MultiUsePylon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.BPDeactivateMissionActors
// ()

void AMissionDispatcher_MultiUsePylon_C::BPDeactivateMissionActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.BPDeactivateMissionActors");

	AMissionDispatcher_MultiUsePylon_C_BPDeactivateMissionActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.BPActivateMissionActors
// ()

void AMissionDispatcher_MultiUsePylon_C::BPActivateMissionActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.BPActivateMissionActors");

	AMissionDispatcher_MultiUsePylon_C_BPActivateMissionActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.SetColorParams
// ()
// Parameters:
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionDispatcher_MultiUsePylon_C::SetColorParams(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.SetColorParams");

	AMissionDispatcher_MultiUsePylon_C_SetColorParams_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AMissionDispatcher_MultiUsePylon_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.BPClientDoMultiUse");

	AMissionDispatcher_MultiUsePylon_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.ReceiveBeginPlay
// ()

void AMissionDispatcher_MultiUsePylon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.ReceiveBeginPlay");

	AMissionDispatcher_MultiUsePylon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.BPOnMissionStarted
// ()
// Parameters:
// class AMissionType**           NewMission                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      StartingCharacter              (Parm, ZeroConstructor, IsPlainOldData)

void AMissionDispatcher_MultiUsePylon_C::BPOnMissionStarted(class AMissionType** NewMission, class AShooterCharacter** StartingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.BPOnMissionStarted");

	AMissionDispatcher_MultiUsePylon_C_BPOnMissionStarted_Params params;
	params.NewMission = NewMission;
	params.StartingCharacter = StartingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.BPOnRunningMissionDeactivated
// ()
// Parameters:
// class AMissionType**           Mission                        (Parm, ZeroConstructor, IsPlainOldData)

void AMissionDispatcher_MultiUsePylon_C::BPOnRunningMissionDeactivated(class AMissionType** Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.BPOnRunningMissionDeactivated");

	AMissionDispatcher_MultiUsePylon_C_BPOnRunningMissionDeactivated_Params params;
	params.Mission = Mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.UserConstructionScript
// ()

void AMissionDispatcher_MultiUsePylon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.UserConstructionScript");

	AMissionDispatcher_MultiUsePylon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.Initialize
// ()

void AMissionDispatcher_MultiUsePylon_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.Initialize");

	AMissionDispatcher_MultiUsePylon_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.MultiSetColorParams
// ()
// Parameters:
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionDispatcher_MultiUsePylon_C::MultiSetColorParams(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.MultiSetColorParams");

	AMissionDispatcher_MultiUsePylon_C_MultiSetColorParams_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.ExecuteUbergraph_MissionDispatcher_MultiUsePylon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionDispatcher_MultiUsePylon_C::ExecuteUbergraph_MissionDispatcher_MultiUsePylon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDispatcher_MultiUsePylon.MissionDispatcher_MultiUsePylon_C.ExecuteUbergraph_MissionDispatcher_MultiUsePylon");

	AMissionDispatcher_MultiUsePylon_C_ExecuteUbergraph_MissionDispatcher_MultiUsePylon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
