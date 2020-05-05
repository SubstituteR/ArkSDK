// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EelBoss_Character_BP_Hard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EelBoss_Character_BP_Hard.EelBoss_Character_BP_Hard_C.UserConstructionScript
// ()

void AEelBoss_Character_BP_Hard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBoss_Character_BP_Hard.EelBoss_Character_BP_Hard_C.UserConstructionScript");

	AEelBoss_Character_BP_Hard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelBoss_Character_BP_Hard.EelBoss_Character_BP_Hard_C.ExecuteUbergraph_EelBoss_Character_BP_Hard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEelBoss_Character_BP_Hard_C::ExecuteUbergraph_EelBoss_Character_BP_Hard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBoss_Character_BP_Hard.EelBoss_Character_BP_Hard_C.ExecuteUbergraph_EelBoss_Character_BP_Hard");

	AEelBoss_Character_BP_Hard_C_ExecuteUbergraph_EelBoss_Character_BP_Hard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
