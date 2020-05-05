// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Volcano_Allo_Character_BP_Escort_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Volcano_Allo_Character_BP_Escort.Volcano_Allo_Character_BP_Escort_C.UserConstructionScript
// ()

void AVolcano_Allo_Character_BP_Escort_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Volcano_Allo_Character_BP_Escort.Volcano_Allo_Character_BP_Escort_C.UserConstructionScript");

	AVolcano_Allo_Character_BP_Escort_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Volcano_Allo_Character_BP_Escort.Volcano_Allo_Character_BP_Escort_C.ExecuteUbergraph_Volcano_Allo_Character_BP_Escort
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVolcano_Allo_Character_BP_Escort_C::ExecuteUbergraph_Volcano_Allo_Character_BP_Escort(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Volcano_Allo_Character_BP_Escort.Volcano_Allo_Character_BP_Escort_C.ExecuteUbergraph_Volcano_Allo_Character_BP_Escort");

	AVolcano_Allo_Character_BP_Escort_C_ExecuteUbergraph_Volcano_Allo_Character_BP_Escort_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
