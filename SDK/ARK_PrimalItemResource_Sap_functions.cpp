// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemResource_Sap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_Sap.PrimalItemResource_Sap_C.ExecuteUbergraph_PrimalItemResource_Sap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Sap_C::ExecuteUbergraph_PrimalItemResource_Sap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Sap.PrimalItemResource_Sap_C.ExecuteUbergraph_PrimalItemResource_Sap");

	UPrimalItemResource_Sap_C_ExecuteUbergraph_PrimalItemResource_Sap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
