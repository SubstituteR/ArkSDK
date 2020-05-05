// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoCharacterStatusComponent_BP_EelBoss_Easy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_EelBoss_Easy.DinoCharacterStatusComponent_BP_EelBoss_Easy_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_EelBoss_Easy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_EelBoss_Easy_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_EelBoss_Easy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_EelBoss_Easy.DinoCharacterStatusComponent_BP_EelBoss_Easy_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_EelBoss_Easy");

	UDinoCharacterStatusComponent_BP_EelBoss_Easy_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_EelBoss_Easy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
