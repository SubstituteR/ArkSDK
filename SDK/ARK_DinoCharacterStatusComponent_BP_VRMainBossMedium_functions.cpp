// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoCharacterStatusComponent_BP_VRMainBossMedium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_VRMainBossMedium.DinoCharacterStatusComponent_BP_VRMainBossMedium_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_VRMainBossMedium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_VRMainBossMedium_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_VRMainBossMedium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_VRMainBossMedium.DinoCharacterStatusComponent_BP_VRMainBossMedium_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_VRMainBossMedium");

	UDinoCharacterStatusComponent_BP_VRMainBossMedium_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_VRMainBossMedium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
