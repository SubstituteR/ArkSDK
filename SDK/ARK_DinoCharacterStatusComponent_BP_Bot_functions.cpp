// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoCharacterStatusComponent_BP_Bot_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Bot.DinoCharacterStatusComponent_BP_Bot_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Bot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Bot_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Bot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Bot.DinoCharacterStatusComponent_BP_Bot_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Bot");

	UDinoCharacterStatusComponent_BP_Bot_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Bot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
