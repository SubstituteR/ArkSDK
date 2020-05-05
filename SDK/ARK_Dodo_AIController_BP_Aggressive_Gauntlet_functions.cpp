// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Dodo_AIController_BP_Aggressive_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dodo_AIController_BP_Aggressive_Gauntlet.Dodo_AIController_BP_Aggressive_Gauntlet_C.UserConstructionScript
// ()

void ADodo_AIController_BP_Aggressive_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dodo_AIController_BP_Aggressive_Gauntlet.Dodo_AIController_BP_Aggressive_Gauntlet_C.UserConstructionScript");

	ADodo_AIController_BP_Aggressive_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dodo_AIController_BP_Aggressive_Gauntlet.Dodo_AIController_BP_Aggressive_Gauntlet_C.ExecuteUbergraph_Dodo_AIController_BP_Aggressive_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADodo_AIController_BP_Aggressive_Gauntlet_C::ExecuteUbergraph_Dodo_AIController_BP_Aggressive_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dodo_AIController_BP_Aggressive_Gauntlet.Dodo_AIController_BP_Aggressive_Gauntlet_C.ExecuteUbergraph_Dodo_AIController_BP_Aggressive_Gauntlet");

	ADodo_AIController_BP_Aggressive_Gauntlet_C_ExecuteUbergraph_Dodo_AIController_BP_Aggressive_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
