// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_TriRoof_Adobe_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TriRoof_Adobe.PrimalItemStructure_TriRoof_Adobe_C.ExecuteUbergraph_PrimalItemStructure_TriRoof_Adobe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TriRoof_Adobe_C::ExecuteUbergraph_PrimalItemStructure_TriRoof_Adobe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TriRoof_Adobe.PrimalItemStructure_TriRoof_Adobe_C.ExecuteUbergraph_PrimalItemStructure_TriRoof_Adobe");

	UPrimalItemStructure_TriRoof_Adobe_C_ExecuteUbergraph_PrimalItemStructure_TriRoof_Adobe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
