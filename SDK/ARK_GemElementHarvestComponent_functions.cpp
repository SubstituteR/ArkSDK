// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_GemElementHarvestComponent_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GemElementHarvestComponent.GemElementHarvestComponent_C.ExecuteUbergraph_GemElementHarvestComponent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGemElementHarvestComponent_C::ExecuteUbergraph_GemElementHarvestComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GemElementHarvestComponent.GemElementHarvestComponent_C.ExecuteUbergraph_GemElementHarvestComponent");

	UGemElementHarvestComponent_C_ExecuteUbergraph_GemElementHarvestComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
