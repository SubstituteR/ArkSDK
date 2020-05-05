// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapRocketLauncher_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapRocketLauncher_Gauntlet.WeapRocketLauncher_Gauntlet_C.UserConstructionScript
// ()

void AWeapRocketLauncher_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapRocketLauncher_Gauntlet.WeapRocketLauncher_Gauntlet_C.UserConstructionScript");

	AWeapRocketLauncher_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapRocketLauncher_Gauntlet.WeapRocketLauncher_Gauntlet_C.ExecuteUbergraph_WeapRocketLauncher_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapRocketLauncher_Gauntlet_C::ExecuteUbergraph_WeapRocketLauncher_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapRocketLauncher_Gauntlet.WeapRocketLauncher_Gauntlet_C.ExecuteUbergraph_WeapRocketLauncher_Gauntlet");

	AWeapRocketLauncher_Gauntlet_C_ExecuteUbergraph_WeapRocketLauncher_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
