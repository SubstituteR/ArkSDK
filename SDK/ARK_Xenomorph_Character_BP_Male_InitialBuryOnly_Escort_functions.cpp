// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Xenomorph_Character_BP_Male_InitialBuryOnly_Escort_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Xenomorph_Character_BP_Male_InitialBuryOnly_Escort.Xenomorph_Character_BP_Male_InitialBuryOnly_Escort_C.UserConstructionScript
// ()

void AXenomorph_Character_BP_Male_InitialBuryOnly_Escort_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly_Escort.Xenomorph_Character_BP_Male_InitialBuryOnly_Escort_C.UserConstructionScript");

	AXenomorph_Character_BP_Male_InitialBuryOnly_Escort_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_InitialBuryOnly_Escort.Xenomorph_Character_BP_Male_InitialBuryOnly_Escort_C.ExecuteUbergraph_Xenomorph_Character_BP_Male_InitialBuryOnly_Escort
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_Male_InitialBuryOnly_Escort_C::ExecuteUbergraph_Xenomorph_Character_BP_Male_InitialBuryOnly_Escort(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly_Escort.Xenomorph_Character_BP_Male_InitialBuryOnly_Escort_C.ExecuteUbergraph_Xenomorph_Character_BP_Male_InitialBuryOnly_Escort");

	AXenomorph_Character_BP_Male_InitialBuryOnly_Escort_C_ExecuteUbergraph_Xenomorph_Character_BP_Male_InitialBuryOnly_Escort_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
