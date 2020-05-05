// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VolcanoGolem_AIController_BP_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VolcanoGolem_AIController_BP_Gauntlet.VolcanoGolem_AIController_BP_Gauntlet_C.UserConstructionScript
// ()

void AVolcanoGolem_AIController_BP_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VolcanoGolem_AIController_BP_Gauntlet.VolcanoGolem_AIController_BP_Gauntlet_C.UserConstructionScript");

	AVolcanoGolem_AIController_BP_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VolcanoGolem_AIController_BP_Gauntlet.VolcanoGolem_AIController_BP_Gauntlet_C.ExecuteUbergraph_VolcanoGolem_AIController_BP_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVolcanoGolem_AIController_BP_Gauntlet_C::ExecuteUbergraph_VolcanoGolem_AIController_BP_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VolcanoGolem_AIController_BP_Gauntlet.VolcanoGolem_AIController_BP_Gauntlet_C.ExecuteUbergraph_VolcanoGolem_AIController_BP_Gauntlet");

	AVolcanoGolem_AIController_BP_Gauntlet_C_ExecuteUbergraph_VolcanoGolem_AIController_BP_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
