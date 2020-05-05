// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoCharacterStatusComponent_BP_Xenomorph_Chupa_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Xenomorph_Chupa.DinoCharacterStatusComponent_BP_Xenomorph_Chupa_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Xenomorph_Chupa
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Xenomorph_Chupa_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Xenomorph_Chupa(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Xenomorph_Chupa.DinoCharacterStatusComponent_BP_Xenomorph_Chupa_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Xenomorph_Chupa");

	UDinoCharacterStatusComponent_BP_Xenomorph_Chupa_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Xenomorph_Chupa_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
