// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Stag_Character_BP_Hunt_Mega_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Stag_Character_BP_Hunt_Mega.Stag_Character_BP_Hunt_Mega_C.UserConstructionScript
// ()

void AStag_Character_BP_Hunt_Mega_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Stag_Character_BP_Hunt_Mega.Stag_Character_BP_Hunt_Mega_C.UserConstructionScript");

	AStag_Character_BP_Hunt_Mega_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Stag_Character_BP_Hunt_Mega.Stag_Character_BP_Hunt_Mega_C.ExecuteUbergraph_Stag_Character_BP_Hunt_Mega
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStag_Character_BP_Hunt_Mega_C::ExecuteUbergraph_Stag_Character_BP_Hunt_Mega(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stag_Character_BP_Hunt_Mega.Stag_Character_BP_Hunt_Mega_C.ExecuteUbergraph_Stag_Character_BP_Hunt_Mega");

	AStag_Character_BP_Hunt_Mega_C_ExecuteUbergraph_Stag_Character_BP_Hunt_Mega_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
