// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Bog_Raptor_Character_BP_Hunt_Secondary_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bog_Raptor_Character_BP_Hunt_Secondary.Bog_Raptor_Character_BP_Hunt_Secondary_C.UserConstructionScript
// ()

void ABog_Raptor_Character_BP_Hunt_Secondary_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bog_Raptor_Character_BP_Hunt_Secondary.Bog_Raptor_Character_BP_Hunt_Secondary_C.UserConstructionScript");

	ABog_Raptor_Character_BP_Hunt_Secondary_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bog_Raptor_Character_BP_Hunt_Secondary.Bog_Raptor_Character_BP_Hunt_Secondary_C.ExecuteUbergraph_Bog_Raptor_Character_BP_Hunt_Secondary
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABog_Raptor_Character_BP_Hunt_Secondary_C::ExecuteUbergraph_Bog_Raptor_Character_BP_Hunt_Secondary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bog_Raptor_Character_BP_Hunt_Secondary.Bog_Raptor_Character_BP_Hunt_Secondary_C.ExecuteUbergraph_Bog_Raptor_Character_BP_Hunt_Secondary");

	ABog_Raptor_Character_BP_Hunt_Secondary_C_ExecuteUbergraph_Bog_Raptor_Character_BP_Hunt_Secondary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
