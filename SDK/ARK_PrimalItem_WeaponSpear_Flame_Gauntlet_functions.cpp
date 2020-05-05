// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_WeaponSpear_Flame_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponSpear_Flame_Gauntlet.PrimalItem_WeaponSpear_Flame_Gauntlet_C.ExecuteUbergraph_PrimalItem_WeaponSpear_Flame_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponSpear_Flame_Gauntlet_C::ExecuteUbergraph_PrimalItem_WeaponSpear_Flame_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponSpear_Flame_Gauntlet.PrimalItem_WeaponSpear_Flame_Gauntlet_C.ExecuteUbergraph_PrimalItem_WeaponSpear_Flame_Gauntlet");

	UPrimalItem_WeaponSpear_Flame_Gauntlet_C_ExecuteUbergraph_PrimalItem_WeaponSpear_Flame_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
