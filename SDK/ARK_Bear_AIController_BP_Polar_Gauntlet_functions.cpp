// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Bear_AIController_BP_Polar_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bear_AIController_BP_Polar_Gauntlet.Bear_AIController_BP_Polar_Gauntlet_C.UserConstructionScript
// ()

void ABear_AIController_BP_Polar_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bear_AIController_BP_Polar_Gauntlet.Bear_AIController_BP_Polar_Gauntlet_C.UserConstructionScript");

	ABear_AIController_BP_Polar_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bear_AIController_BP_Polar_Gauntlet.Bear_AIController_BP_Polar_Gauntlet_C.ExecuteUbergraph_Bear_AIController_BP_Polar_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABear_AIController_BP_Polar_Gauntlet_C::ExecuteUbergraph_Bear_AIController_BP_Polar_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bear_AIController_BP_Polar_Gauntlet.Bear_AIController_BP_Polar_Gauntlet_C.ExecuteUbergraph_Bear_AIController_BP_Polar_Gauntlet");

	ABear_AIController_BP_Polar_Gauntlet_C_ExecuteUbergraph_Bear_AIController_BP_Polar_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
