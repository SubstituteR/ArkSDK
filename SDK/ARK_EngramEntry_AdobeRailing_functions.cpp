// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_AdobeRailing_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_AdobeRailing.EngramEntry_AdobeRailing_C.ExecuteUbergraph_EngramEntry_AdobeRailing
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_AdobeRailing_C::ExecuteUbergraph_EngramEntry_AdobeRailing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_AdobeRailing.EngramEntry_AdobeRailing_C.ExecuteUbergraph_EngramEntry_AdobeRailing");

	UEngramEntry_AdobeRailing_C_ExecuteUbergraph_EngramEntry_AdobeRailing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
