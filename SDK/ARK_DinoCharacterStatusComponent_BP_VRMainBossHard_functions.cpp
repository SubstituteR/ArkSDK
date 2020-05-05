// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoCharacterStatusComponent_BP_VRMainBossHard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_VRMainBossHard.DinoCharacterStatusComponent_BP_VRMainBossHard_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_VRMainBossHard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_VRMainBossHard_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_VRMainBossHard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_VRMainBossHard.DinoCharacterStatusComponent_BP_VRMainBossHard_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_VRMainBossHard");

	UDinoCharacterStatusComponent_BP_VRMainBossHard_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_VRMainBossHard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
