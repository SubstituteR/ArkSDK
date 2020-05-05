// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemSkin_TrikeSkullHelmet_Retrieve_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_TrikeSkullHelmet_Retrieve.PrimalItemSkin_TrikeSkullHelmet_Retrieve_C.ExecuteUbergraph_PrimalItemSkin_TrikeSkullHelmet_Retrieve
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_TrikeSkullHelmet_Retrieve_C::ExecuteUbergraph_PrimalItemSkin_TrikeSkullHelmet_Retrieve(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TrikeSkullHelmet_Retrieve.PrimalItemSkin_TrikeSkullHelmet_Retrieve_C.ExecuteUbergraph_PrimalItemSkin_TrikeSkullHelmet_Retrieve");

	UPrimalItemSkin_TrikeSkullHelmet_Retrieve_C_ExecuteUbergraph_PrimalItemSkin_TrikeSkullHelmet_Retrieve_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
