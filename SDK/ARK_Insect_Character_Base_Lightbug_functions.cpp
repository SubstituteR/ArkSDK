// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Insect_Character_Base_Lightbug_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Insect_Character_Base_Lightbug.Insect_Character_Base_Lightbug_C.OnChargeHarvested
// ()

void AInsect_Character_Base_Lightbug_C::OnChargeHarvested()
{
	static auto fn = UObject::FindObject<UFunction>("Function Insect_Character_Base_Lightbug.Insect_Character_Base_Lightbug_C.OnChargeHarvested");

	AInsect_Character_Base_Lightbug_C_OnChargeHarvested_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Insect_Character_Base_Lightbug.Insect_Character_Base_Lightbug_C.UserConstructionScript
// ()

void AInsect_Character_Base_Lightbug_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Insect_Character_Base_Lightbug.Insect_Character_Base_Lightbug_C.UserConstructionScript");

	AInsect_Character_Base_Lightbug_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Insect_Character_Base_Lightbug.Insect_Character_Base_Lightbug_C.ExecuteUbergraph_Insect_Character_Base_Lightbug
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AInsect_Character_Base_Lightbug_C::ExecuteUbergraph_Insect_Character_Base_Lightbug(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Insect_Character_Base_Lightbug.Insect_Character_Base_Lightbug_C.ExecuteUbergraph_Insect_Character_Base_Lightbug");

	AInsect_Character_Base_Lightbug_C_ExecuteUbergraph_Insect_Character_Base_Lightbug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
