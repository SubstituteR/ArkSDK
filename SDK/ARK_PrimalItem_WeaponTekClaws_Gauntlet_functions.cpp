// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_WeaponTekClaws_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponTekClaws_Gauntlet.PrimalItem_WeaponTekClaws_Gauntlet_C.BlueprintUnequipped
// ()

void UPrimalItem_WeaponTekClaws_Gauntlet_C::BlueprintUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekClaws_Gauntlet.PrimalItem_WeaponTekClaws_Gauntlet_C.BlueprintUnequipped");

	UPrimalItem_WeaponTekClaws_Gauntlet_C_BlueprintUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_WeaponTekClaws_Gauntlet.PrimalItem_WeaponTekClaws_Gauntlet_C.ExecuteUbergraph_PrimalItem_WeaponTekClaws_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponTekClaws_Gauntlet_C::ExecuteUbergraph_PrimalItem_WeaponTekClaws_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekClaws_Gauntlet.PrimalItem_WeaponTekClaws_Gauntlet_C.ExecuteUbergraph_PrimalItem_WeaponTekClaws_Gauntlet");

	UPrimalItem_WeaponTekClaws_Gauntlet_C_ExecuteUbergraph_PrimalItem_WeaponTekClaws_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
