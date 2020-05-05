// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Bigfoot_AIController_BP_Aggressive_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bigfoot_AIController_BP_Aggressive_Gauntlet.Bigfoot_AIController_BP_Aggressive_Gauntlet_C.UserConstructionScript
// ()

void ABigfoot_AIController_BP_Aggressive_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_AIController_BP_Aggressive_Gauntlet.Bigfoot_AIController_BP_Aggressive_Gauntlet_C.UserConstructionScript");

	ABigfoot_AIController_BP_Aggressive_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bigfoot_AIController_BP_Aggressive_Gauntlet.Bigfoot_AIController_BP_Aggressive_Gauntlet_C.ExecuteUbergraph_Bigfoot_AIController_BP_Aggressive_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABigfoot_AIController_BP_Aggressive_Gauntlet_C::ExecuteUbergraph_Bigfoot_AIController_BP_Aggressive_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_AIController_BP_Aggressive_Gauntlet.Bigfoot_AIController_BP_Aggressive_Gauntlet_C.ExecuteUbergraph_Bigfoot_AIController_BP_Aggressive_Gauntlet");

	ABigfoot_AIController_BP_Aggressive_Gauntlet_C_ExecuteUbergraph_Bigfoot_AIController_BP_Aggressive_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
