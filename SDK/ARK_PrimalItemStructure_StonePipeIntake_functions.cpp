// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_StonePipeIntake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_StonePipeIntake.PrimalItemStructure_StonePipeIntake_C.ExecuteUbergraph_PrimalItemStructure_StonePipeIntake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_StonePipeIntake_C::ExecuteUbergraph_PrimalItemStructure_StonePipeIntake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_StonePipeIntake.PrimalItemStructure_StonePipeIntake_C.ExecuteUbergraph_PrimalItemStructure_StonePipeIntake");

	UPrimalItemStructure_StonePipeIntake_C_ExecuteUbergraph_PrimalItemStructure_StonePipeIntake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
