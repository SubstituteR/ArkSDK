// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_Torch_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Torch.EngramEntry_Torch_C.ExecuteUbergraph_EngramEntry_Torch
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Torch_C::ExecuteUbergraph_EngramEntry_Torch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Torch.EngramEntry_Torch_C.ExecuteUbergraph_EngramEntry_Torch");

	UEngramEntry_Torch_C_ExecuteUbergraph_EngramEntry_Torch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
