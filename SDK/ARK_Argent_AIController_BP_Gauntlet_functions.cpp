// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Argent_AIController_BP_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Argent_AIController_BP_Gauntlet.Argent_AIController_BP_Gauntlet_C.UserConstructionScript
// ()

void AArgent_AIController_BP_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Argent_AIController_BP_Gauntlet.Argent_AIController_BP_Gauntlet_C.UserConstructionScript");

	AArgent_AIController_BP_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Argent_AIController_BP_Gauntlet.Argent_AIController_BP_Gauntlet_C.ExecuteUbergraph_Argent_AIController_BP_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AArgent_AIController_BP_Gauntlet_C::ExecuteUbergraph_Argent_AIController_BP_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Argent_AIController_BP_Gauntlet.Argent_AIController_BP_Gauntlet_C.ExecuteUbergraph_Argent_AIController_BP_Gauntlet");

	AArgent_AIController_BP_Gauntlet_C_ExecuteUbergraph_Argent_AIController_BP_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
