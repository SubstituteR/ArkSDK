// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_Saddle_Procop_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Procop.EngramEntry_Saddle_Procop_C.ExecuteUbergraph_EngramEntry_Saddle_Procop
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Procop_C::ExecuteUbergraph_EngramEntry_Saddle_Procop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Procop.EngramEntry_Saddle_Procop_C.ExecuteUbergraph_EngramEntry_Saddle_Procop");

	UEngramEntry_Saddle_Procop_C_ExecuteUbergraph_EngramEntry_Saddle_Procop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
