// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BossArenaManager_VRBattle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BossArenaManager_VRBattle.BossArenaManager_VRBattle_C.IsAVRBattleMissionActive?
// ()
// Parameters:
// bool                           FoundAVRMission                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABossArenaManager_VRBattle_C::IsAVRBattleMissionActive_(bool* FoundAVRMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_VRBattle.BossArenaManager_VRBattle_C.IsAVRBattleMissionActive?");

	ABossArenaManager_VRBattle_C_IsAVRBattleMissionActive__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundAVRMission != nullptr)
		*FoundAVRMission = params.FoundAVRMission;
}


// Function BossArenaManager_VRBattle.BossArenaManager_VRBattle_C.UserConstructionScript
// ()

void ABossArenaManager_VRBattle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_VRBattle.BossArenaManager_VRBattle_C.UserConstructionScript");

	ABossArenaManager_VRBattle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_VRBattle.BossArenaManager_VRBattle_C.ReceiveBeginPlay
// ()

void ABossArenaManager_VRBattle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_VRBattle.BossArenaManager_VRBattle_C.ReceiveBeginPlay");

	ABossArenaManager_VRBattle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_VRBattle.BossArenaManager_VRBattle_C.ExecuteUbergraph_BossArenaManager_VRBattle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABossArenaManager_VRBattle_C::ExecuteUbergraph_BossArenaManager_VRBattle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_VRBattle.BossArenaManager_VRBattle_C.ExecuteUbergraph_BossArenaManager_VRBattle");

	ABossArenaManager_VRBattle_C_ExecuteUbergraph_BossArenaManager_VRBattle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
