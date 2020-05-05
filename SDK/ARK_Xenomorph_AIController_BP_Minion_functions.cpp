// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Xenomorph_AIController_BP_Minion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Xenomorph_AIController_BP_Minion.Xenomorph_AIController_BP_Minion_C.UserConstructionScript
// ()

void AXenomorph_AIController_BP_Minion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_AIController_BP_Minion.Xenomorph_AIController_BP_Minion_C.UserConstructionScript");

	AXenomorph_AIController_BP_Minion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_AIController_BP_Minion.Xenomorph_AIController_BP_Minion_C.ExecuteUbergraph_Xenomorph_AIController_BP_Minion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_AIController_BP_Minion_C::ExecuteUbergraph_Xenomorph_AIController_BP_Minion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_AIController_BP_Minion.Xenomorph_AIController_BP_Minion_C.ExecuteUbergraph_Xenomorph_AIController_BP_Minion");

	AXenomorph_AIController_BP_Minion_C_ExecuteUbergraph_Xenomorph_AIController_BP_Minion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
