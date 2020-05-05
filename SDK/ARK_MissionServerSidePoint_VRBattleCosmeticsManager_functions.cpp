// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionServerSidePoint_VRBattleCosmeticsManager_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionServerSidePoint_VRBattleCosmeticsManager.MissionServerSidePoint_VRBattleCosmeticsManager_C.UserConstructionScript
// ()

void AMissionServerSidePoint_VRBattleCosmeticsManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionServerSidePoint_VRBattleCosmeticsManager.MissionServerSidePoint_VRBattleCosmeticsManager_C.UserConstructionScript");

	AMissionServerSidePoint_VRBattleCosmeticsManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionServerSidePoint_VRBattleCosmeticsManager.MissionServerSidePoint_VRBattleCosmeticsManager_C.StartVRBattle
// ()

void AMissionServerSidePoint_VRBattleCosmeticsManager_C::StartVRBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionServerSidePoint_VRBattleCosmeticsManager.MissionServerSidePoint_VRBattleCosmeticsManager_C.StartVRBattle");

	AMissionServerSidePoint_VRBattleCosmeticsManager_C_StartVRBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionServerSidePoint_VRBattleCosmeticsManager.MissionServerSidePoint_VRBattleCosmeticsManager_C.EnsureBossIsVisible
// ()

void AMissionServerSidePoint_VRBattleCosmeticsManager_C::EnsureBossIsVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionServerSidePoint_VRBattleCosmeticsManager.MissionServerSidePoint_VRBattleCosmeticsManager_C.EnsureBossIsVisible");

	AMissionServerSidePoint_VRBattleCosmeticsManager_C_EnsureBossIsVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionServerSidePoint_VRBattleCosmeticsManager.MissionServerSidePoint_VRBattleCosmeticsManager_C.ExecuteUbergraph_MissionServerSidePoint_VRBattleCosmeticsManager
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionServerSidePoint_VRBattleCosmeticsManager_C::ExecuteUbergraph_MissionServerSidePoint_VRBattleCosmeticsManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionServerSidePoint_VRBattleCosmeticsManager.MissionServerSidePoint_VRBattleCosmeticsManager_C.ExecuteUbergraph_MissionServerSidePoint_VRBattleCosmeticsManager");

	AMissionServerSidePoint_VRBattleCosmeticsManager_C_ExecuteUbergraph_MissionServerSidePoint_VRBattleCosmeticsManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
