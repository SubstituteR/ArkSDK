// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemResource_XenomorphPheromoneGland_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_XenomorphPheromoneGland.PrimalItemResource_XenomorphPheromoneGland_C.ExecuteUbergraph_PrimalItemResource_XenomorphPheromoneGland
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_XenomorphPheromoneGland_C::ExecuteUbergraph_PrimalItemResource_XenomorphPheromoneGland(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_XenomorphPheromoneGland.PrimalItemResource_XenomorphPheromoneGland_C.ExecuteUbergraph_PrimalItemResource_XenomorphPheromoneGland");

	UPrimalItemResource_XenomorphPheromoneGland_C_ExecuteUbergraph_PrimalItemResource_XenomorphPheromoneGland_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
