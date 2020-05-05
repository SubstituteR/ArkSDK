// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_WeaponFishingRod_Mission_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponFishingRod_Mission.PrimalItem_WeaponFishingRod_Mission_C.ExecuteUbergraph_PrimalItem_WeaponFishingRod_Mission
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponFishingRod_Mission_C::ExecuteUbergraph_PrimalItem_WeaponFishingRod_Mission(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponFishingRod_Mission.PrimalItem_WeaponFishingRod_Mission_C.ExecuteUbergraph_PrimalItem_WeaponFishingRod_Mission");

	UPrimalItem_WeaponFishingRod_Mission_C_ExecuteUbergraph_PrimalItem_WeaponFishingRod_Mission_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
