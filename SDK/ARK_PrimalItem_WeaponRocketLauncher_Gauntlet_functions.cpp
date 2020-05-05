// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_WeaponRocketLauncher_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponRocketLauncher_Gauntlet.PrimalItem_WeaponRocketLauncher_Gauntlet_C.ExecuteUbergraph_PrimalItem_WeaponRocketLauncher_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponRocketLauncher_Gauntlet_C::ExecuteUbergraph_PrimalItem_WeaponRocketLauncher_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponRocketLauncher_Gauntlet.PrimalItem_WeaponRocketLauncher_Gauntlet_C.ExecuteUbergraph_PrimalItem_WeaponRocketLauncher_Gauntlet");

	UPrimalItem_WeaponRocketLauncher_Gauntlet_C_ExecuteUbergraph_PrimalItem_WeaponRocketLauncher_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
