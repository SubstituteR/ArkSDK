// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_Ramp_Wood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Ramp_Wood.PrimalItemStructure_Ramp_Wood_C.ExecuteUbergraph_PrimalItemStructure_Ramp_Wood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Ramp_Wood_C::ExecuteUbergraph_PrimalItemStructure_Ramp_Wood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Ramp_Wood.PrimalItemStructure_Ramp_Wood_C.ExecuteUbergraph_PrimalItemStructure_Ramp_Wood");

	UPrimalItemStructure_Ramp_Wood_C_ExecuteUbergraph_PrimalItemStructure_Ramp_Wood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
