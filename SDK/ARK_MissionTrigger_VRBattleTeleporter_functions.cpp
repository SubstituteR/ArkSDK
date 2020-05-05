// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionTrigger_VRBattleTeleporter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionTrigger_VRBattleTeleporter.MissionTrigger_VRBattleTeleporter_C.UserConstructionScript
// ()

void AMissionTrigger_VRBattleTeleporter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_VRBattleTeleporter.MissionTrigger_VRBattleTeleporter_C.UserConstructionScript");

	AMissionTrigger_VRBattleTeleporter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_VRBattleTeleporter.MissionTrigger_VRBattleTeleporter_C.Multicast_Activate
// ()
// Parameters:
// float                          ActivationTime                 (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTrigger_VRBattleTeleporter_C::Multicast_Activate(float ActivationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_VRBattleTeleporter.MissionTrigger_VRBattleTeleporter_C.Multicast_Activate");

	AMissionTrigger_VRBattleTeleporter_C_Multicast_Activate_Params params;
	params.ActivationTime = ActivationTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_VRBattleTeleporter.MissionTrigger_VRBattleTeleporter_C.Multicast_Deactivate
// ()

void AMissionTrigger_VRBattleTeleporter_C::Multicast_Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_VRBattleTeleporter.MissionTrigger_VRBattleTeleporter_C.Multicast_Deactivate");

	AMissionTrigger_VRBattleTeleporter_C_Multicast_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_VRBattleTeleporter.MissionTrigger_VRBattleTeleporter_C.ActivateFX
// ()

void AMissionTrigger_VRBattleTeleporter_C::ActivateFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_VRBattleTeleporter.MissionTrigger_VRBattleTeleporter_C.ActivateFX");

	AMissionTrigger_VRBattleTeleporter_C_ActivateFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_VRBattleTeleporter.MissionTrigger_VRBattleTeleporter_C.DeactivateFX
// ()

void AMissionTrigger_VRBattleTeleporter_C::DeactivateFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_VRBattleTeleporter.MissionTrigger_VRBattleTeleporter_C.DeactivateFX");

	AMissionTrigger_VRBattleTeleporter_C_DeactivateFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_VRBattleTeleporter.MissionTrigger_VRBattleTeleporter_C.ExecuteUbergraph_MissionTrigger_VRBattleTeleporter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTrigger_VRBattleTeleporter_C::ExecuteUbergraph_MissionTrigger_VRBattleTeleporter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_VRBattleTeleporter.MissionTrigger_VRBattleTeleporter_C.ExecuteUbergraph_MissionTrigger_VRBattleTeleporter");

	AMissionTrigger_VRBattleTeleporter_C_ExecuteUbergraph_MissionTrigger_VRBattleTeleporter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
