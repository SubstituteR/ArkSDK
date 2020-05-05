// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoColorSet_Snow_Bear_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Snow_Bear.DinoColorSet_Snow_Bear_C.ExecuteUbergraph_DinoColorSet_Snow_Bear
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Snow_Bear_C::ExecuteUbergraph_DinoColorSet_Snow_Bear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Snow_Bear.DinoColorSet_Snow_Bear_C.ExecuteUbergraph_DinoColorSet_Snow_Bear");

	UDinoColorSet_Snow_Bear_C_ExecuteUbergraph_DinoColorSet_Snow_Bear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
