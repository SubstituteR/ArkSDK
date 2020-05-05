// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Stag_Character_BP_Hunt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Stag_Character_BP_Hunt.Stag_Character_BP_Hunt_C.UserConstructionScript
// ()

void AStag_Character_BP_Hunt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Stag_Character_BP_Hunt.Stag_Character_BP_Hunt_C.UserConstructionScript");

	AStag_Character_BP_Hunt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Stag_Character_BP_Hunt.Stag_Character_BP_Hunt_C.ExecuteUbergraph_Stag_Character_BP_Hunt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStag_Character_BP_Hunt_C::ExecuteUbergraph_Stag_Character_BP_Hunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stag_Character_BP_Hunt.Stag_Character_BP_Hunt_C.ExecuteUbergraph_Stag_Character_BP_Hunt");

	AStag_Character_BP_Hunt_C_ExecuteUbergraph_Stag_Character_BP_Hunt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
