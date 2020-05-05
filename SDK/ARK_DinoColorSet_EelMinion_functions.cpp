// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoColorSet_EelMinion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_EelMinion.DinoColorSet_EelMinion_C.ExecuteUbergraph_DinoColorSet_EelMinion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_EelMinion_C::ExecuteUbergraph_DinoColorSet_EelMinion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_EelMinion.DinoColorSet_EelMinion_C.ExecuteUbergraph_DinoColorSet_EelMinion");

	UDinoColorSet_EelMinion_C_ExecuteUbergraph_DinoColorSet_EelMinion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
