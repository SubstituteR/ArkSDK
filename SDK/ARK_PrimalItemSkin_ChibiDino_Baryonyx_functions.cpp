// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemSkin_ChibiDino_Baryonyx_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_ChibiDino_Baryonyx.PrimalItemSkin_ChibiDino_Baryonyx_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Baryonyx
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_ChibiDino_Baryonyx_C::ExecuteUbergraph_PrimalItemSkin_ChibiDino_Baryonyx(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_ChibiDino_Baryonyx.PrimalItemSkin_ChibiDino_Baryonyx_C.ExecuteUbergraph_PrimalItemSkin_ChibiDino_Baryonyx");

	UPrimalItemSkin_ChibiDino_Baryonyx_C_ExecuteUbergraph_PrimalItemSkin_ChibiDino_Baryonyx_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
