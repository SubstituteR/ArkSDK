// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Rex_AIController_BP_Adolescent_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Rex_AIController_BP_Adolescent.Rex_AIController_BP_Adolescent_C.UserConstructionScript
// ()

void ARex_AIController_BP_Adolescent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rex_AIController_BP_Adolescent.Rex_AIController_BP_Adolescent_C.UserConstructionScript");

	ARex_AIController_BP_Adolescent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rex_AIController_BP_Adolescent.Rex_AIController_BP_Adolescent_C.ExecuteUbergraph_Rex_AIController_BP_Adolescent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARex_AIController_BP_Adolescent_C::ExecuteUbergraph_Rex_AIController_BP_Adolescent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rex_AIController_BP_Adolescent.Rex_AIController_BP_Adolescent_C.ExecuteUbergraph_Rex_AIController_BP_Adolescent");

	ARex_AIController_BP_Adolescent_C_ExecuteUbergraph_Rex_AIController_BP_Adolescent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
