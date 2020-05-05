// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRTrike_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VRTrike_Character_BP.VRTrike_Character_BP_C.UserConstructionScript
// ()

void AVRTrike_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRTrike_Character_BP.VRTrike_Character_BP_C.UserConstructionScript");

	AVRTrike_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRTrike_Character_BP.VRTrike_Character_BP_C.ExecuteUbergraph_VRTrike_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVRTrike_Character_BP_C::ExecuteUbergraph_VRTrike_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRTrike_Character_BP.VRTrike_Character_BP_C.ExecuteUbergraph_VRTrike_Character_BP");

	AVRTrike_Character_BP_C_ExecuteUbergraph_VRTrike_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
