// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_Egg_Pela_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_Pela.PrimalItemConsumable_Egg_Pela_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Pela
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_Pela_C::ExecuteUbergraph_PrimalItemConsumable_Egg_Pela(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_Pela.PrimalItemConsumable_Egg_Pela_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Pela");

	UPrimalItemConsumable_Egg_Pela_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Pela_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif