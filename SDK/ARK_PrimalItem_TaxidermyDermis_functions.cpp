// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_TaxidermyDermis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_TaxidermyDermis.PrimalItem_TaxidermyDermis_C.BPInitIconMaterial
// (NetRequest, Exec, Static, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UPrimalItem_TaxidermyDermis_C::STATIC_BPInitIconMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_TaxidermyDermis.PrimalItem_TaxidermyDermis_C.BPInitIconMaterial");

	UPrimalItem_TaxidermyDermis_C_BPInitIconMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_TaxidermyDermis.PrimalItem_TaxidermyDermis_C.ExecuteUbergraph_PrimalItem_TaxidermyDermis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_TaxidermyDermis_C::ExecuteUbergraph_PrimalItem_TaxidermyDermis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_TaxidermyDermis.PrimalItem_TaxidermyDermis_C.ExecuteUbergraph_PrimalItem_TaxidermyDermis");

	UPrimalItem_TaxidermyDermis_C_ExecuteUbergraph_PrimalItem_TaxidermyDermis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
