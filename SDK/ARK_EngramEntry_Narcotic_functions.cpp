// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_Narcotic_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Narcotic.EngramEntry_Narcotic_C.ExecuteUbergraph_EngramEntry_Narcotic
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Narcotic_C::ExecuteUbergraph_EngramEntry_Narcotic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Narcotic.EngramEntry_Narcotic_C.ExecuteUbergraph_EngramEntry_Narcotic");

	UEngramEntry_Narcotic_C_ExecuteUbergraph_EngramEntry_Narcotic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
