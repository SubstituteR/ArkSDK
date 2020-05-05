// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EelBoss_Character_BP_Easy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EelBoss_Character_BP_Easy.EelBoss_Character_BP_Easy_C.UserConstructionScript
// ()

void AEelBoss_Character_BP_Easy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBoss_Character_BP_Easy.EelBoss_Character_BP_Easy_C.UserConstructionScript");

	AEelBoss_Character_BP_Easy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelBoss_Character_BP_Easy.EelBoss_Character_BP_Easy_C.ExecuteUbergraph_EelBoss_Character_BP_Easy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEelBoss_Character_BP_Easy_C::ExecuteUbergraph_EelBoss_Character_BP_Easy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBoss_Character_BP_Easy.EelBoss_Character_BP_Easy_C.ExecuteUbergraph_EelBoss_Character_BP_Easy");

	AEelBoss_Character_BP_Easy_C_ExecuteUbergraph_EelBoss_Character_BP_Easy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
