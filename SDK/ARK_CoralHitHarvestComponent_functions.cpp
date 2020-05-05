// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_CoralHitHarvestComponent_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CoralHitHarvestComponent.CoralHitHarvestComponent_C.ExecuteUbergraph_CoralHitHarvestComponent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCoralHitHarvestComponent_C::ExecuteUbergraph_CoralHitHarvestComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoralHitHarvestComponent.CoralHitHarvestComponent_C.ExecuteUbergraph_CoralHitHarvestComponent");

	UCoralHitHarvestComponent_C_ExecuteUbergraph_CoralHitHarvestComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
