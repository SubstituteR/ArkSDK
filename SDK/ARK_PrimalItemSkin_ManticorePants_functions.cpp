// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemSkin_ManticorePants_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ManticorePants.PrimalItemSkin_ManticorePants_C.ExecuteUbergraph_PrimalItemSkin_ManticorePants
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ManticorePants_C::ExecuteUbergraph_PrimalItemSkin_ManticorePants(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ManticorePants.PrimalItemSkin_ManticorePants_C.ExecuteUbergraph_PrimalItemSkin_ManticorePants");

	UPrimalItemSkin_ManticorePants_C_ExecuteUbergraph_PrimalItemSkin_ManticorePants_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
