// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoColorSet_Quetz_Bionic_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Quetz_Bionic.DinoColorSet_Quetz_Bionic_C.ExecuteUbergraph_DinoColorSet_Quetz_Bionic
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Quetz_Bionic_C::ExecuteUbergraph_DinoColorSet_Quetz_Bionic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Quetz_Bionic.DinoColorSet_Quetz_Bionic_C.ExecuteUbergraph_DinoColorSet_Quetz_Bionic");

	UDinoColorSet_Quetz_Bionic_C_ExecuteUbergraph_DinoColorSet_Quetz_Bionic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
