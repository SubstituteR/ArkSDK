// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemResource_ScrapMetal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_ScrapMetal.PrimalItemResource_ScrapMetal_C.ExecuteUbergraph_PrimalItemResource_ScrapMetal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ScrapMetal_C::ExecuteUbergraph_PrimalItemResource_ScrapMetal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ScrapMetal.PrimalItemResource_ScrapMetal_C.ExecuteUbergraph_PrimalItemResource_ScrapMetal");

	UPrimalItemResource_ScrapMetal_C_ExecuteUbergraph_PrimalItemResource_ScrapMetal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
