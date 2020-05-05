// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated.Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C.BPGetHUDElements
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated.Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C.BPGetHUDElements");

	ABuff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated.Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C.BPServerHandleNetExecCommand
// (NetReliable, NetRequest, NetMulticast, Delegate, NetServer, HasDefaults, BlueprintEvent, NetValidate)
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated.Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C.BPServerHandleNetExecCommand");

	ABuff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated.Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C.BuffTickClient
// (Exec, Native, NetMulticast, Delegate, NetServer, HasDefaults, BlueprintEvent, NetValidate)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated.Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C.BuffTickClient");

	ABuff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated.Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C.UserConstructionScript
// ()

void ABuff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated.Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C.UserConstructionScript");

	ABuff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated.Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C.ExecuteUbergraph_Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C::ExecuteUbergraph_Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated.Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C.ExecuteUbergraph_Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated");

	ABuff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C_ExecuteUbergraph_Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
