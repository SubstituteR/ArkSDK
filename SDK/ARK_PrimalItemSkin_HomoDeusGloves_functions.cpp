// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemSkin_HomoDeusGloves_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_HomoDeusGloves.PrimalItemSkin_HomoDeusGloves_C.ExecuteUbergraph_PrimalItemSkin_HomoDeusGloves
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_HomoDeusGloves_C::ExecuteUbergraph_PrimalItemSkin_HomoDeusGloves(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_HomoDeusGloves.PrimalItemSkin_HomoDeusGloves_C.ExecuteUbergraph_PrimalItemSkin_HomoDeusGloves");

	UPrimalItemSkin_HomoDeusGloves_C_ExecuteUbergraph_PrimalItemSkin_HomoDeusGloves_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
