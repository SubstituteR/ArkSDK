// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemResource_RetrieveReaperGland_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_RetrieveReaperGland.PrimalItemResource_RetrieveReaperGland_C.ExecuteUbergraph_PrimalItemResource_RetrieveReaperGland
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_RetrieveReaperGland_C::ExecuteUbergraph_PrimalItemResource_RetrieveReaperGland(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_RetrieveReaperGland.PrimalItemResource_RetrieveReaperGland_C.ExecuteUbergraph_PrimalItemResource_RetrieveReaperGland");

	UPrimalItemResource_RetrieveReaperGland_C_ExecuteUbergraph_PrimalItemResource_RetrieveReaperGland_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
