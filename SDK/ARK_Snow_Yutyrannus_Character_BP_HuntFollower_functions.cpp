// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Snow_Yutyrannus_Character_BP_HuntFollower_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Snow_Yutyrannus_Character_BP_HuntFollower.Snow_Yutyrannus_Character_BP_HuntFollower_C.UserConstructionScript
// ()

void ASnow_Yutyrannus_Character_BP_HuntFollower_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Snow_Yutyrannus_Character_BP_HuntFollower.Snow_Yutyrannus_Character_BP_HuntFollower_C.UserConstructionScript");

	ASnow_Yutyrannus_Character_BP_HuntFollower_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Snow_Yutyrannus_Character_BP_HuntFollower.Snow_Yutyrannus_Character_BP_HuntFollower_C.ExecuteUbergraph_Snow_Yutyrannus_Character_BP_HuntFollower
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASnow_Yutyrannus_Character_BP_HuntFollower_C::ExecuteUbergraph_Snow_Yutyrannus_Character_BP_HuntFollower(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Snow_Yutyrannus_Character_BP_HuntFollower.Snow_Yutyrannus_Character_BP_HuntFollower_C.ExecuteUbergraph_Snow_Yutyrannus_Character_BP_HuntFollower");

	ASnow_Yutyrannus_Character_BP_HuntFollower_C_ExecuteUbergraph_Snow_Yutyrannus_Character_BP_HuntFollower_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
