// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoCharacterStatusComponent_BP_Dimorph_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Dimorph.DinoCharacterStatusComponent_BP_Dimorph_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Dimorph
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Dimorph_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Dimorph(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Dimorph.DinoCharacterStatusComponent_BP_Dimorph_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Dimorph");

	UDinoCharacterStatusComponent_BP_Dimorph_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Dimorph_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
