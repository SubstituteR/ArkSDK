// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Baryonyx_Character_BP_Hunt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Baryonyx_Character_BP_Hunt.Baryonyx_Character_BP_Hunt_C.UserConstructionScript
// ()

void ABaryonyx_Character_BP_Hunt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Baryonyx_Character_BP_Hunt.Baryonyx_Character_BP_Hunt_C.UserConstructionScript");

	ABaryonyx_Character_BP_Hunt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Baryonyx_Character_BP_Hunt.Baryonyx_Character_BP_Hunt_C.ExecuteUbergraph_Baryonyx_Character_BP_Hunt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABaryonyx_Character_BP_Hunt_C::ExecuteUbergraph_Baryonyx_Character_BP_Hunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Baryonyx_Character_BP_Hunt.Baryonyx_Character_BP_Hunt_C.ExecuteUbergraph_Baryonyx_Character_BP_Hunt");

	ABaryonyx_Character_BP_Hunt_C_ExecuteUbergraph_Baryonyx_Character_BP_Hunt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
