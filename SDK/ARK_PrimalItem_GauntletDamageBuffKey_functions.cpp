// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_GauntletDamageBuffKey_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_GauntletDamageBuffKey.PrimalItem_GauntletDamageBuffKey_C.ExecuteUbergraph_PrimalItem_GauntletDamageBuffKey
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_GauntletDamageBuffKey_C::ExecuteUbergraph_PrimalItem_GauntletDamageBuffKey(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_GauntletDamageBuffKey.PrimalItem_GauntletDamageBuffKey_C.ExecuteUbergraph_PrimalItem_GauntletDamageBuffKey");

	UPrimalItem_GauntletDamageBuffKey_C_ExecuteUbergraph_PrimalItem_GauntletDamageBuffKey_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
