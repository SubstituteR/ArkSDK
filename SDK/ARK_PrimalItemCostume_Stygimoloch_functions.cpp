// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemCostume_Stygimoloch_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostume_Stygimoloch.PrimalItemCostume_Stygimoloch_C.ExecuteUbergraph_PrimalItemCostume_Stygimoloch
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_Stygimoloch_C::ExecuteUbergraph_PrimalItemCostume_Stygimoloch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_Stygimoloch.PrimalItemCostume_Stygimoloch_C.ExecuteUbergraph_PrimalItemCostume_Stygimoloch");

	UPrimalItemCostume_Stygimoloch_C_ExecuteUbergraph_PrimalItemCostume_Stygimoloch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
