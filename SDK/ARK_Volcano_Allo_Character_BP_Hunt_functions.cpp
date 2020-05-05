// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Volcano_Allo_Character_BP_Hunt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Volcano_Allo_Character_BP_Hunt.Volcano_Allo_Character_BP_Hunt_C.UserConstructionScript
// ()

void AVolcano_Allo_Character_BP_Hunt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Volcano_Allo_Character_BP_Hunt.Volcano_Allo_Character_BP_Hunt_C.UserConstructionScript");

	AVolcano_Allo_Character_BP_Hunt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Volcano_Allo_Character_BP_Hunt.Volcano_Allo_Character_BP_Hunt_C.ExecuteUbergraph_Volcano_Allo_Character_BP_Hunt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVolcano_Allo_Character_BP_Hunt_C::ExecuteUbergraph_Volcano_Allo_Character_BP_Hunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Volcano_Allo_Character_BP_Hunt.Volcano_Allo_Character_BP_Hunt_C.ExecuteUbergraph_Volcano_Allo_Character_BP_Hunt");

	AVolcano_Allo_Character_BP_Hunt_C_ExecuteUbergraph_Volcano_Allo_Character_BP_Hunt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
