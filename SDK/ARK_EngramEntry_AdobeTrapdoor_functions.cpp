// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_AdobeTrapdoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_AdobeTrapdoor.EngramEntry_AdobeTrapdoor_C.ExecuteUbergraph_EngramEntry_AdobeTrapdoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_AdobeTrapdoor_C::ExecuteUbergraph_EngramEntry_AdobeTrapdoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_AdobeTrapdoor.EngramEntry_AdobeTrapdoor_C.ExecuteUbergraph_EngramEntry_AdobeTrapdoor");

	UEngramEntry_AdobeTrapdoor_C_ExecuteUbergraph_EngramEntry_AdobeTrapdoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
