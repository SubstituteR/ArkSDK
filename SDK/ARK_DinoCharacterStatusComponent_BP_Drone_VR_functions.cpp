// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoCharacterStatusComponent_BP_Drone_VR_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Drone_VR.DinoCharacterStatusComponent_BP_Drone_VR_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Drone_VR
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Drone_VR_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Drone_VR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Drone_VR.DinoCharacterStatusComponent_BP_Drone_VR_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Drone_VR");

	UDinoCharacterStatusComponent_BP_Drone_VR_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Drone_VR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
