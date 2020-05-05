// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRRex_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VRRex_Character_BP.VRRex_Character_BP_C.UserConstructionScript
// ()

void AVRRex_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRRex_Character_BP.VRRex_Character_BP_C.UserConstructionScript");

	AVRRex_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRRex_Character_BP.VRRex_Character_BP_C.ExecuteUbergraph_VRRex_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVRRex_Character_BP_C::ExecuteUbergraph_VRRex_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRRex_Character_BP.VRRex_Character_BP_C.ExecuteUbergraph_VRRex_Character_BP");

	AVRRex_Character_BP_C_ExecuteUbergraph_VRRex_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
