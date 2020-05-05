// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoCharacterStatusComponent_BP_EelMinion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_EelMinion.DinoCharacterStatusComponent_BP_EelMinion_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_EelMinion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_EelMinion_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_EelMinion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_EelMinion.DinoCharacterStatusComponent_BP_EelMinion_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_EelMinion");

	UDinoCharacterStatusComponent_BP_EelMinion_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_EelMinion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
