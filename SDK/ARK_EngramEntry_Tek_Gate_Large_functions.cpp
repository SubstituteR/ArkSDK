// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_Tek_Gate_Large_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Tek_Gate_Large.EngramEntry_Tek_Gate_Large_C.ExecuteUbergraph_EngramEntry_Tek_Gate_Large
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Tek_Gate_Large_C::ExecuteUbergraph_EngramEntry_Tek_Gate_Large(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Tek_Gate_Large.EngramEntry_Tek_Gate_Large_C.ExecuteUbergraph_EngramEntry_Tek_Gate_Large");

	UEngramEntry_Tek_Gate_Large_C_ExecuteUbergraph_EngramEntry_Tek_Gate_Large_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
