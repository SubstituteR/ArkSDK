// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_Seed_Tintoberry_SpeedHack_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Seed_Tintoberry_SpeedHack.PrimalItemConsumable_Seed_Tintoberry_SpeedHack_C.ExecuteUbergraph_PrimalItemConsumable_Seed_Tintoberry_SpeedHack
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Seed_Tintoberry_SpeedHack_C::ExecuteUbergraph_PrimalItemConsumable_Seed_Tintoberry_SpeedHack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Seed_Tintoberry_SpeedHack.PrimalItemConsumable_Seed_Tintoberry_SpeedHack_C.ExecuteUbergraph_PrimalItemConsumable_Seed_Tintoberry_SpeedHack");

	UPrimalItemConsumable_Seed_Tintoberry_SpeedHack_C_ExecuteUbergraph_PrimalItemConsumable_Seed_Tintoberry_SpeedHack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
