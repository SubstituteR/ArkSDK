// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoColorSet_Lunar_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Lunar.DinoColorSet_Lunar_C.ExecuteUbergraph_DinoColorSet_Lunar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Lunar_C::ExecuteUbergraph_DinoColorSet_Lunar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Lunar.DinoColorSet_Lunar_C.ExecuteUbergraph_DinoColorSet_Lunar");

	UDinoColorSet_Lunar_C_ExecuteUbergraph_DinoColorSet_Lunar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
