// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRXenomorph_Character_BP_Male_Minion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VRXenomorph_Character_BP_Male_Minion.VRXenomorph_Character_BP_Male_Minion_C.UserConstructionScript
// ()

void AVRXenomorph_Character_BP_Male_Minion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRXenomorph_Character_BP_Male_Minion.VRXenomorph_Character_BP_Male_Minion_C.UserConstructionScript");

	AVRXenomorph_Character_BP_Male_Minion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRXenomorph_Character_BP_Male_Minion.VRXenomorph_Character_BP_Male_Minion_C.ExecuteUbergraph_VRXenomorph_Character_BP_Male_Minion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVRXenomorph_Character_BP_Male_Minion_C::ExecuteUbergraph_VRXenomorph_Character_BP_Male_Minion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRXenomorph_Character_BP_Male_Minion.VRXenomorph_Character_BP_Male_Minion_C.ExecuteUbergraph_VRXenomorph_Character_BP_Male_Minion");

	AVRXenomorph_Character_BP_Male_Minion_C_ExecuteUbergraph_VRXenomorph_Character_BP_Male_Minion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
