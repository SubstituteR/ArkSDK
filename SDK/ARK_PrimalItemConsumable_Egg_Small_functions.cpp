// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_Egg_Small_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_Small.PrimalItemConsumable_Egg_Small_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Small
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_Small_C::ExecuteUbergraph_PrimalItemConsumable_Egg_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_Small.PrimalItemConsumable_Egg_Small_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Small");

	UPrimalItemConsumable_Egg_Small_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
