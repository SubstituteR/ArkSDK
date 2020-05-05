// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionServerSidePoint_VRBattleSpawnPortal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionServerSidePoint_VRBattleSpawnPortal.MissionServerSidePoint_VRBattleSpawnPortal_C.UserConstructionScript
// ()

void AMissionServerSidePoint_VRBattleSpawnPortal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionServerSidePoint_VRBattleSpawnPortal.MissionServerSidePoint_VRBattleSpawnPortal_C.UserConstructionScript");

	AMissionServerSidePoint_VRBattleSpawnPortal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionServerSidePoint_VRBattleSpawnPortal.MissionServerSidePoint_VRBattleSpawnPortal_C.Server_Activate
// ()
// Parameters:
// int                            WaveIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            groupIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumToSpawn                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionServerSidePoint_VRBattleSpawnPortal_C::Server_Activate(int WaveIndex, int groupIndex, int NumToSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionServerSidePoint_VRBattleSpawnPortal.MissionServerSidePoint_VRBattleSpawnPortal_C.Server_Activate");

	AMissionServerSidePoint_VRBattleSpawnPortal_C_Server_Activate_Params params;
	params.WaveIndex = WaveIndex;
	params.groupIndex = groupIndex;
	params.NumToSpawn = NumToSpawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionServerSidePoint_VRBattleSpawnPortal.MissionServerSidePoint_VRBattleSpawnPortal_C.ExecuteUbergraph_MissionServerSidePoint_VRBattleSpawnPortal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionServerSidePoint_VRBattleSpawnPortal_C::ExecuteUbergraph_MissionServerSidePoint_VRBattleSpawnPortal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionServerSidePoint_VRBattleSpawnPortal.MissionServerSidePoint_VRBattleSpawnPortal_C.ExecuteUbergraph_MissionServerSidePoint_VRBattleSpawnPortal");

	AMissionServerSidePoint_VRBattleSpawnPortal_C_ExecuteUbergraph_MissionServerSidePoint_VRBattleSpawnPortal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionServerSidePoint_VRBattleSpawnPortal.MissionServerSidePoint_VRBattleSpawnPortal_C.OnReadyToSpawn__DelegateSignature
// ()
// Parameters:
// class AMissionServerSidePoint_VRBattleSpawnPortal_C* Portal                         (Parm, ZeroConstructor, IsPlainOldData)

void AMissionServerSidePoint_VRBattleSpawnPortal_C::OnReadyToSpawn__DelegateSignature(class AMissionServerSidePoint_VRBattleSpawnPortal_C* Portal)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionServerSidePoint_VRBattleSpawnPortal.MissionServerSidePoint_VRBattleSpawnPortal_C.OnReadyToSpawn__DelegateSignature");

	AMissionServerSidePoint_VRBattleSpawnPortal_C_OnReadyToSpawn__DelegateSignature_Params params;
	params.Portal = Portal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
