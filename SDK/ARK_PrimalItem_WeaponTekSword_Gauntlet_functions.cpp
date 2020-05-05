// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_WeaponTekSword_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponTekSword_Gauntlet.PrimalItem_WeaponTekSword_Gauntlet_C.ExecuteUbergraph_PrimalItem_WeaponTekSword_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponTekSword_Gauntlet_C::ExecuteUbergraph_PrimalItem_WeaponTekSword_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekSword_Gauntlet.PrimalItem_WeaponTekSword_Gauntlet_C.ExecuteUbergraph_PrimalItem_WeaponTekSword_Gauntlet");

	UPrimalItem_WeaponTekSword_Gauntlet_C_ExecuteUbergraph_PrimalItem_WeaponTekSword_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
