// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_TekClaws_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekClaws.EngramEntry_TekClaws_C.ExecuteUbergraph_EngramEntry_TekClaws
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekClaws_C::ExecuteUbergraph_EngramEntry_TekClaws(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekClaws.EngramEntry_TekClaws_C.ExecuteUbergraph_EngramEntry_TekClaws");

	UEngramEntry_TekClaws_C_ExecuteUbergraph_EngramEntry_TekClaws_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
