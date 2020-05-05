// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EelMinion_Character_BP_Easy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EelMinion_Character_BP_Easy.EelMinion_Character_BP_Easy_C.UserConstructionScript
// ()

void AEelMinion_Character_BP_Easy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelMinion_Character_BP_Easy.EelMinion_Character_BP_Easy_C.UserConstructionScript");

	AEelMinion_Character_BP_Easy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelMinion_Character_BP_Easy.EelMinion_Character_BP_Easy_C.ExecuteUbergraph_EelMinion_Character_BP_Easy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEelMinion_Character_BP_Easy_C::ExecuteUbergraph_EelMinion_Character_BP_Easy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EelMinion_Character_BP_Easy.EelMinion_Character_BP_Easy_C.ExecuteUbergraph_EelMinion_Character_BP_Easy");

	AEelMinion_Character_BP_Easy_C_ExecuteUbergraph_EelMinion_Character_BP_Easy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
