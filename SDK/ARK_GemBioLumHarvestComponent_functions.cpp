// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_GemBioLumHarvestComponent_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GemBioLumHarvestComponent.GemBioLumHarvestComponent_C.ExecuteUbergraph_GemBioLumHarvestComponent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGemBioLumHarvestComponent_C::ExecuteUbergraph_GemBioLumHarvestComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GemBioLumHarvestComponent.GemBioLumHarvestComponent_C.ExecuteUbergraph_GemBioLumHarvestComponent");

	UGemBioLumHarvestComponent_C_ExecuteUbergraph_GemBioLumHarvestComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
