// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemResource_CodeKey_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_CodeKey.PrimalItemResource_CodeKey_C.ExecuteUbergraph_PrimalItemResource_CodeKey
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_CodeKey_C::ExecuteUbergraph_PrimalItemResource_CodeKey(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_CodeKey.PrimalItemResource_CodeKey_C.ExecuteUbergraph_PrimalItemResource_CodeKey");

	UPrimalItemResource_CodeKey_C_ExecuteUbergraph_PrimalItemResource_CodeKey_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
