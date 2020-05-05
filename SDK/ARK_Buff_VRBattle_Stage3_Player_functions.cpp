// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_VRBattle_Stage3_Player_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_VRBattle_Stage3_Player.Buff_VRBattle_Stage3_Player_C.UserConstructionScript
// ()

void ABuff_VRBattle_Stage3_Player_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Stage3_Player.Buff_VRBattle_Stage3_Player_C.UserConstructionScript");

	ABuff_VRBattle_Stage3_Player_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_Stage3_Player.Buff_VRBattle_Stage3_Player_C.ExecuteUbergraph_Buff_VRBattle_Stage3_Player
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_Stage3_Player_C::ExecuteUbergraph_Buff_VRBattle_Stage3_Player(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Stage3_Player.Buff_VRBattle_Stage3_Player_C.ExecuteUbergraph_Buff_VRBattle_Stage3_Player");

	ABuff_VRBattle_Stage3_Player_C_ExecuteUbergraph_Buff_VRBattle_Stage3_Player_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
