// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_StorageBox_Small_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_StorageBox_Small.EngramEntry_StorageBox_Small_C.ExecuteUbergraph_EngramEntry_StorageBox_Small
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_StorageBox_Small_C::ExecuteUbergraph_EngramEntry_StorageBox_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_StorageBox_Small.EngramEntry_StorageBox_Small_C.ExecuteUbergraph_EngramEntry_StorageBox_Small");

	UEngramEntry_StorageBox_Small_C_ExecuteUbergraph_EngramEntry_StorageBox_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
