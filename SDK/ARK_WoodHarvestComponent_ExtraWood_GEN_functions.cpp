// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WoodHarvestComponent_ExtraWood_GEN_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WoodHarvestComponent_ExtraWood_GEN.WoodHarvestComponent_ExtraWood_GEN_C.ExecuteUbergraph_WoodHarvestComponent_ExtraWood_GEN
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWoodHarvestComponent_ExtraWood_GEN_C::ExecuteUbergraph_WoodHarvestComponent_ExtraWood_GEN(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodHarvestComponent_ExtraWood_GEN.WoodHarvestComponent_ExtraWood_GEN_C.ExecuteUbergraph_WoodHarvestComponent_ExtraWood_GEN");

	UWoodHarvestComponent_ExtraWood_GEN_C_ExecuteUbergraph_WoodHarvestComponent_ExtraWood_GEN_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
