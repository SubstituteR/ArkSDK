// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemResource_GoldenNugget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_GoldenNugget.PrimalItemResource_GoldenNugget_C.ExecuteUbergraph_PrimalItemResource_GoldenNugget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_GoldenNugget_C::ExecuteUbergraph_PrimalItemResource_GoldenNugget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_GoldenNugget.PrimalItemResource_GoldenNugget_C.ExecuteUbergraph_PrimalItemResource_GoldenNugget");

	UPrimalItemResource_GoldenNugget_C_ExecuteUbergraph_PrimalItemResource_GoldenNugget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
