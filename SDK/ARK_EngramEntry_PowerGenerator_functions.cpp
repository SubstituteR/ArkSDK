// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_PowerGenerator_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_PowerGenerator.EngramEntry_PowerGenerator_C.ExecuteUbergraph_EngramEntry_PowerGenerator
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_PowerGenerator_C::ExecuteUbergraph_EngramEntry_PowerGenerator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_PowerGenerator.EngramEntry_PowerGenerator_C.ExecuteUbergraph_EngramEntry_PowerGenerator");

	UEngramEntry_PowerGenerator_C_ExecuteUbergraph_EngramEntry_PowerGenerator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
