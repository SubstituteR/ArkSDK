// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalInventoryBP_BeerBarrel_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_BeerBarrel.PrimalInventoryBP_BeerBarrel_C.ExecuteUbergraph_PrimalInventoryBP_BeerBarrel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_BeerBarrel_C::ExecuteUbergraph_PrimalInventoryBP_BeerBarrel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_BeerBarrel.PrimalInventoryBP_BeerBarrel_C.ExecuteUbergraph_PrimalInventoryBP_BeerBarrel");

	UPrimalInventoryBP_BeerBarrel_C_ExecuteUbergraph_PrimalInventoryBP_BeerBarrel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
