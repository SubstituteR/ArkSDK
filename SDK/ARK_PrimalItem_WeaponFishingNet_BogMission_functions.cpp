// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_WeaponFishingNet_BogMission_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponFishingNet_BogMission.PrimalItem_WeaponFishingNet_BogMission_C.ExecuteUbergraph_PrimalItem_WeaponFishingNet_BogMission
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponFishingNet_BogMission_C::ExecuteUbergraph_PrimalItem_WeaponFishingNet_BogMission(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponFishingNet_BogMission.PrimalItem_WeaponFishingNet_BogMission_C.ExecuteUbergraph_PrimalItem_WeaponFishingNet_BogMission");

	UPrimalItem_WeaponFishingNet_BogMission_C_ExecuteUbergraph_PrimalItem_WeaponFishingNet_BogMission_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
