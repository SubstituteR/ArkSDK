// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_WeaponMachinedPistol_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponMachinedPistol.PrimalItem_WeaponMachinedPistol_C.ExecuteUbergraph_PrimalItem_WeaponMachinedPistol
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponMachinedPistol_C::ExecuteUbergraph_PrimalItem_WeaponMachinedPistol(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponMachinedPistol.PrimalItem_WeaponMachinedPistol_C.ExecuteUbergraph_PrimalItem_WeaponMachinedPistol");

	UPrimalItem_WeaponMachinedPistol_C_ExecuteUbergraph_PrimalItem_WeaponMachinedPistol_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
