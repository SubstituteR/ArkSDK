// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoColorSet_Bionic_Malfunctioned_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Bionic_Malfunctioned.DinoColorSet_Bionic_Malfunctioned_C.ExecuteUbergraph_DinoColorSet_Bionic_Malfunctioned
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Bionic_Malfunctioned_C::ExecuteUbergraph_DinoColorSet_Bionic_Malfunctioned(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Bionic_Malfunctioned.DinoColorSet_Bionic_Malfunctioned_C.ExecuteUbergraph_DinoColorSet_Bionic_Malfunctioned");

	UDinoColorSet_Bionic_Malfunctioned_C_ExecuteUbergraph_DinoColorSet_Bionic_Malfunctioned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
