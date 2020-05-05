// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoCharacterStatusComponent_BP_GauntletDino_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_GauntletDino.DinoCharacterStatusComponent_BP_GauntletDino_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_GauntletDino
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_GauntletDino_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_GauntletDino(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_GauntletDino.DinoCharacterStatusComponent_BP_GauntletDino_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_GauntletDino");

	UDinoCharacterStatusComponent_BP_GauntletDino_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_GauntletDino_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
