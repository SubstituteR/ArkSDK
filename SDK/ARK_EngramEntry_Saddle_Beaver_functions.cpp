// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_Saddle_Beaver_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Beaver.EngramEntry_Saddle_Beaver_C.ExecuteUbergraph_EngramEntry_Saddle_Beaver
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Beaver_C::ExecuteUbergraph_EngramEntry_Saddle_Beaver(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Beaver.EngramEntry_Saddle_Beaver_C.ExecuteUbergraph_EngramEntry_Saddle_Beaver");

	UEngramEntry_Saddle_Beaver_C_ExecuteUbergraph_EngramEntry_Saddle_Beaver_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
