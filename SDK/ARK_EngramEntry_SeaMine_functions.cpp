// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_SeaMine_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_SeaMine.EngramEntry_SeaMine_C.ExecuteUbergraph_EngramEntry_SeaMine
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_SeaMine_C::ExecuteUbergraph_EngramEntry_SeaMine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_SeaMine.EngramEntry_SeaMine_C.ExecuteUbergraph_EngramEntry_SeaMine");

	UEngramEntry_SeaMine_C_ExecuteUbergraph_EngramEntry_SeaMine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
