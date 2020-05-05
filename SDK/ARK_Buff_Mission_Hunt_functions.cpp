// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Mission_Hunt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.GetMissionData
// (Exec, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// struct FClientMissionData      missionData                    (Parm, OutParm)

void ABuff_Mission_Hunt_C::GetMissionData(struct FClientMissionData* missionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.GetMissionData");

	ABuff_Mission_Hunt_C_GetMissionData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (missionData != nullptr)
		*missionData = params.missionData;
}


// Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.RemoveTracks
// (Native, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)

void ABuff_Mission_Hunt_C::RemoveTracks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.RemoveTracks");

	ABuff_Mission_Hunt_C_RemoveTracks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.BPClientHandleNetExecCommand
// ()
// Parameters:
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Mission_Hunt_C::BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.BPClientHandleNetExecCommand");

	ABuff_Mission_Hunt_C_BPClientHandleNetExecCommand_Params params;
	params.CommandName = CommandName;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.RevealTracks
// (NetReliable, Native, NetResponse, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// int                            TrackStartIndex                (Parm, ZeroConstructor, IsPlainOldData)
// int                            TrackEndIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Mission_Hunt_C::RevealTracks(int TrackStartIndex, int TrackEndIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.RevealTracks");

	ABuff_Mission_Hunt_C_RevealTracks_Params params;
	params.TrackStartIndex = TrackStartIndex;
	params.TrackEndIndex = TrackEndIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.UpdateStencilValues
// (Event, Static, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)

void ABuff_Mission_Hunt_C::STATIC_UpdateStencilValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.UpdateStencilValues");

	ABuff_Mission_Hunt_C_UpdateStencilValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.ReceiveDestroyed
// ()

void ABuff_Mission_Hunt_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.ReceiveDestroyed");

	ABuff_Mission_Hunt_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.UpdateTracks
// (NetRequest, Exec, Event, NetResponse, Static, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)

void ABuff_Mission_Hunt_C::STATIC_UpdateTracks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.UpdateTracks");

	ABuff_Mission_Hunt_C_UpdateTracks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.UserConstructionScript
// ()

void ABuff_Mission_Hunt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.UserConstructionScript");

	ABuff_Mission_Hunt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Mission_Hunt_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.BuffTickClient");

	ABuff_Mission_Hunt_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.Client_RevealTrackingItem
// ()
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Mission_Hunt_C::Client_RevealTrackingItem(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.Client_RevealTrackingItem");

	ABuff_Mission_Hunt_C_Client_RevealTrackingItem_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.PlaySoundOnOwnerChar_RoC
// ()
// Parameters:
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Mission_Hunt_C::PlaySoundOnOwnerChar_RoC(class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.PlaySoundOnOwnerChar_RoC");

	ABuff_Mission_Hunt_C_PlaySoundOnOwnerChar_RoC_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.ExecuteUbergraph_Buff_Mission_Hunt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Mission_Hunt_C::ExecuteUbergraph_Buff_Mission_Hunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.ExecuteUbergraph_Buff_Mission_Hunt");

	ABuff_Mission_Hunt_C_ExecuteUbergraph_Buff_Mission_Hunt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
