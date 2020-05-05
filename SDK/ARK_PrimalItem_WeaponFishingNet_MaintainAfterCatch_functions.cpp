// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_WeaponFishingNet_MaintainAfterCatch_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponFishingNet_MaintainAfterCatch.PrimalItem_WeaponFishingNet_MaintainAfterCatch_C.ExecuteUbergraph_PrimalItem_WeaponFishingNet_MaintainAfterCatch
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponFishingNet_MaintainAfterCatch_C::ExecuteUbergraph_PrimalItem_WeaponFishingNet_MaintainAfterCatch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponFishingNet_MaintainAfterCatch.PrimalItem_WeaponFishingNet_MaintainAfterCatch_C.ExecuteUbergraph_PrimalItem_WeaponFishingNet_MaintainAfterCatch");

	UPrimalItem_WeaponFishingNet_MaintainAfterCatch_C_ExecuteUbergraph_PrimalItem_WeaponFishingNet_MaintainAfterCatch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
