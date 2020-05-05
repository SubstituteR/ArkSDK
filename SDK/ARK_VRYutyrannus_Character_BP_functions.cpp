// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRYutyrannus_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VRYutyrannus_Character_BP.VRYutyrannus_Character_BP_C.UserConstructionScript
// ()

void AVRYutyrannus_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRYutyrannus_Character_BP.VRYutyrannus_Character_BP_C.UserConstructionScript");

	AVRYutyrannus_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRYutyrannus_Character_BP.VRYutyrannus_Character_BP_C.ExecuteUbergraph_VRYutyrannus_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVRYutyrannus_Character_BP_C::ExecuteUbergraph_VRYutyrannus_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRYutyrannus_Character_BP.VRYutyrannus_Character_BP_C.ExecuteUbergraph_VRYutyrannus_Character_BP");

	AVRYutyrannus_Character_BP_C_ExecuteUbergraph_VRYutyrannus_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
