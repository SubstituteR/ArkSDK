// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRMainBoss_Character_Hard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VRMainBoss_Character_Hard.VRMainBoss_Character_Hard_C.UserConstructionScript
// ()

void AVRMainBoss_Character_Hard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character_Hard.VRMainBoss_Character_Hard_C.UserConstructionScript");

	AVRMainBoss_Character_Hard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_Character_Hard.VRMainBoss_Character_Hard_C.ExecuteUbergraph_VRMainBoss_Character_Hard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_Character_Hard_C::ExecuteUbergraph_VRMainBoss_Character_Hard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_Character_Hard.VRMainBoss_Character_Hard_C.ExecuteUbergraph_VRMainBoss_Character_Hard");

	AVRMainBoss_Character_Hard_C_ExecuteUbergraph_VRMainBoss_Character_Hard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
