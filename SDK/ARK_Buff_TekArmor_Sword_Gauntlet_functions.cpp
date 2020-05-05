// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_TekArmor_Sword_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekArmor_Sword_Gauntlet.Buff_TekArmor_Sword_Gauntlet_C.UserConstructionScript
// ()

void ABuff_TekArmor_Sword_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword_Gauntlet.Buff_TekArmor_Sword_Gauntlet_C.UserConstructionScript");

	ABuff_TekArmor_Sword_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Sword_Gauntlet.Buff_TekArmor_Sword_Gauntlet_C.ExecuteUbergraph_Buff_TekArmor_Sword_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Sword_Gauntlet_C::ExecuteUbergraph_Buff_TekArmor_Sword_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword_Gauntlet.Buff_TekArmor_Sword_Gauntlet_C.ExecuteUbergraph_Buff_TekArmor_Sword_Gauntlet");

	ABuff_TekArmor_Sword_Gauntlet_C_ExecuteUbergraph_Buff_TekArmor_Sword_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
