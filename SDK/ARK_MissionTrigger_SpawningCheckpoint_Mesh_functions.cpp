// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionTrigger_SpawningCheckpoint_Mesh_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionTrigger_SpawningCheckpoint_Mesh.MissionTrigger_SpawningCheckpoint_Mesh_C.SetActiveCheckpoint
// ()
// Parameters:
// bool*                          Active                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTrigger_SpawningCheckpoint_Mesh_C::SetActiveCheckpoint(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_SpawningCheckpoint_Mesh.MissionTrigger_SpawningCheckpoint_Mesh_C.SetActiveCheckpoint");

	AMissionTrigger_SpawningCheckpoint_Mesh_C_SetActiveCheckpoint_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_SpawningCheckpoint_Mesh.MissionTrigger_SpawningCheckpoint_Mesh_C.UserConstructionScript
// (NetRequest, Exec, Native, NetResponse, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)

void AMissionTrigger_SpawningCheckpoint_Mesh_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_SpawningCheckpoint_Mesh.MissionTrigger_SpawningCheckpoint_Mesh_C.UserConstructionScript");

	AMissionTrigger_SpawningCheckpoint_Mesh_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrigger_SpawningCheckpoint_Mesh.MissionTrigger_SpawningCheckpoint_Mesh_C.ExecuteUbergraph_MissionTrigger_SpawningCheckpoint_Mesh
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTrigger_SpawningCheckpoint_Mesh_C::ExecuteUbergraph_MissionTrigger_SpawningCheckpoint_Mesh(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrigger_SpawningCheckpoint_Mesh.MissionTrigger_SpawningCheckpoint_Mesh_C.ExecuteUbergraph_MissionTrigger_SpawningCheckpoint_Mesh");

	AMissionTrigger_SpawningCheckpoint_Mesh_C_ExecuteUbergraph_MissionTrigger_SpawningCheckpoint_Mesh_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
