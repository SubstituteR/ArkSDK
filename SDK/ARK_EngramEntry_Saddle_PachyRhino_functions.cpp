// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_Saddle_PachyRhino_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_PachyRhino.EngramEntry_Saddle_PachyRhino_C.ExecuteUbergraph_EngramEntry_Saddle_PachyRhino
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_PachyRhino_C::ExecuteUbergraph_EngramEntry_Saddle_PachyRhino(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_PachyRhino.EngramEntry_Saddle_PachyRhino_C.ExecuteUbergraph_EngramEntry_Saddle_PachyRhino");

	UEngramEntry_Saddle_PachyRhino_C_ExecuteUbergraph_EngramEntry_Saddle_PachyRhino_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
