// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemSkin_ManticoreShirt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ManticoreShirt.PrimalItemSkin_ManticoreShirt_C.ExecuteUbergraph_PrimalItemSkin_ManticoreShirt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ManticoreShirt_C::ExecuteUbergraph_PrimalItemSkin_ManticoreShirt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ManticoreShirt.PrimalItemSkin_ManticoreShirt_C.ExecuteUbergraph_PrimalItemSkin_ManticoreShirt");

	UPrimalItemSkin_ManticoreShirt_C_ExecuteUbergraph_PrimalItemSkin_ManticoreShirt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
