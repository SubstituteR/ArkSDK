// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemResource_ApexDrop_Yuty_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_ApexDrop_Yuty.PrimalItemResource_ApexDrop_Yuty_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_Yuty
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ApexDrop_Yuty_C::ExecuteUbergraph_PrimalItemResource_ApexDrop_Yuty(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ApexDrop_Yuty.PrimalItemResource_ApexDrop_Yuty_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_Yuty");

	UPrimalItemResource_ApexDrop_Yuty_C_ExecuteUbergraph_PrimalItemResource_ApexDrop_Yuty_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif