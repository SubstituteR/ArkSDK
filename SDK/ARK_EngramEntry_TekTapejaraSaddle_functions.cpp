// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_TekTapejaraSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekTapejaraSaddle.EngramEntry_TekTapejaraSaddle_C.ExecuteUbergraph_EngramEntry_TekTapejaraSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekTapejaraSaddle_C::ExecuteUbergraph_EngramEntry_TekTapejaraSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekTapejaraSaddle.EngramEntry_TekTapejaraSaddle_C.ExecuteUbergraph_EngramEntry_TekTapejaraSaddle");

	UEngramEntry_TekTapejaraSaddle_C_ExecuteUbergraph_EngramEntry_TekTapejaraSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
