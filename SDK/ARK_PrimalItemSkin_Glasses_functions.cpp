// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemSkin_Glasses_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_Glasses.PrimalItemSkin_Glasses_C.ExecuteUbergraph_PrimalItemSkin_Glasses
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_Glasses_C::ExecuteUbergraph_PrimalItemSkin_Glasses(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Glasses.PrimalItemSkin_Glasses_C.ExecuteUbergraph_PrimalItemSkin_Glasses");

	UPrimalItemSkin_Glasses_C_ExecuteUbergraph_PrimalItemSkin_Glasses_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
