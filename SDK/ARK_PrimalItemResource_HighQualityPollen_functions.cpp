// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemResource_HighQualityPollen_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_HighQualityPollen.PrimalItemResource_HighQualityPollen_C.ExecuteUbergraph_PrimalItemResource_HighQualityPollen
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_HighQualityPollen_C::ExecuteUbergraph_PrimalItemResource_HighQualityPollen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_HighQualityPollen.PrimalItemResource_HighQualityPollen_C.ExecuteUbergraph_PrimalItemResource_HighQualityPollen");

	UPrimalItemResource_HighQualityPollen_C_ExecuteUbergraph_PrimalItemResource_HighQualityPollen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
