// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Beaver_AIController_BP_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Beaver_AIController_BP_Gauntlet.Beaver_AIController_BP_Gauntlet_C.UserConstructionScript
// ()

void ABeaver_AIController_BP_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Beaver_AIController_BP_Gauntlet.Beaver_AIController_BP_Gauntlet_C.UserConstructionScript");

	ABeaver_AIController_BP_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Beaver_AIController_BP_Gauntlet.Beaver_AIController_BP_Gauntlet_C.ExecuteUbergraph_Beaver_AIController_BP_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABeaver_AIController_BP_Gauntlet_C::ExecuteUbergraph_Beaver_AIController_BP_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Beaver_AIController_BP_Gauntlet.Beaver_AIController_BP_Gauntlet_C.ExecuteUbergraph_Beaver_AIController_BP_Gauntlet");

	ABeaver_AIController_BP_Gauntlet_C_ExecuteUbergraph_Beaver_AIController_BP_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
