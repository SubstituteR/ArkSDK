// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemCustomDrinkRecipe_Type2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCustomDrinkRecipe_Type2.PrimalItemCustomDrinkRecipe_Type2_C.ExecuteUbergraph_PrimalItemCustomDrinkRecipe_Type2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCustomDrinkRecipe_Type2_C::ExecuteUbergraph_PrimalItemCustomDrinkRecipe_Type2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCustomDrinkRecipe_Type2.PrimalItemCustomDrinkRecipe_Type2_C.ExecuteUbergraph_PrimalItemCustomDrinkRecipe_Type2");

	UPrimalItemCustomDrinkRecipe_Type2_C_ExecuteUbergraph_PrimalItemCustomDrinkRecipe_Type2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
