// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoCharacterStatusComponent_BP_EscortDino_Water_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_EscortDino_Water.DinoCharacterStatusComponent_BP_EscortDino_Water_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_EscortDino_Water
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_EscortDino_Water_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_EscortDino_Water(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_EscortDino_Water.DinoCharacterStatusComponent_BP_EscortDino_Water_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_EscortDino_Water");

	UDinoCharacterStatusComponent_BP_EscortDino_Water_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_EscortDino_Water_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
