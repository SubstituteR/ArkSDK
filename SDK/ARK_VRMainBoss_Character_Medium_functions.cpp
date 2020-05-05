// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRMainBoss_Character_Medium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VRMainBoss_Character_Medium.VRMainBoss_Character_Medium_C.UserConstructionScript
// ()

void AVRMainBoss_Character_Medium_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character_Medium.VRMainBoss_Character_Medium_C.UserConstructionScript");

	AVRMainBoss_Character_Medium_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character_Medium.VRMainBoss_Character_Medium_C.ExecuteUbergraph_VRMainBoss_Character_Medium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_Character_Medium_C::ExecuteUbergraph_VRMainBoss_Character_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character_Medium.VRMainBoss_Character_Medium_C.ExecuteUbergraph_VRMainBoss_Character_Medium");

	AVRMainBoss_Character_Medium_C_ExecuteUbergraph_VRMainBoss_Character_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
