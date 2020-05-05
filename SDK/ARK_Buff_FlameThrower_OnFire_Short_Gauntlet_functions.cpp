// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_FlameThrower_OnFire_Short_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_FlameThrower_OnFire_Short_Gauntlet.Buff_FlameThrower_OnFire_Short_Gauntlet_C.UserConstructionScript
// ()

void ABuff_FlameThrower_OnFire_Short_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FlameThrower_OnFire_Short_Gauntlet.Buff_FlameThrower_OnFire_Short_Gauntlet_C.UserConstructionScript");

	ABuff_FlameThrower_OnFire_Short_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FlameThrower_OnFire_Short_Gauntlet.Buff_FlameThrower_OnFire_Short_Gauntlet_C.ExecuteUbergraph_Buff_FlameThrower_OnFire_Short_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FlameThrower_OnFire_Short_Gauntlet_C::ExecuteUbergraph_Buff_FlameThrower_OnFire_Short_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FlameThrower_OnFire_Short_Gauntlet.Buff_FlameThrower_OnFire_Short_Gauntlet_C.ExecuteUbergraph_Buff_FlameThrower_OnFire_Short_Gauntlet");

	ABuff_FlameThrower_OnFire_Short_Gauntlet_C_ExecuteUbergraph_Buff_FlameThrower_OnFire_Short_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
