// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoCharacterStatusComponent_BP_EelMinion_Medium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_EelMinion_Medium.DinoCharacterStatusComponent_BP_EelMinion_Medium_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_EelMinion_Medium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_EelMinion_Medium_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_EelMinion_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_EelMinion_Medium.DinoCharacterStatusComponent_BP_EelMinion_Medium_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_EelMinion_Medium");

	UDinoCharacterStatusComponent_BP_EelMinion_Medium_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_EelMinion_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
