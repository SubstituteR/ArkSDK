// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_TekWindow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekWindow.EngramEntry_TekWindow_C.ExecuteUbergraph_EngramEntry_TekWindow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekWindow_C::ExecuteUbergraph_EngramEntry_TekWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekWindow.EngramEntry_TekWindow_C.ExecuteUbergraph_EngramEntry_TekWindow");

	UEngramEntry_TekWindow_C_ExecuteUbergraph_EngramEntry_TekWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
