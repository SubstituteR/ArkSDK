// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Bear_AIController_BP_Polar_Retrieve_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bear_AIController_BP_Polar_Retrieve.Bear_AIController_BP_Polar_Retrieve_C.UserConstructionScript
// ()

void ABear_AIController_BP_Polar_Retrieve_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bear_AIController_BP_Polar_Retrieve.Bear_AIController_BP_Polar_Retrieve_C.UserConstructionScript");

	ABear_AIController_BP_Polar_Retrieve_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bear_AIController_BP_Polar_Retrieve.Bear_AIController_BP_Polar_Retrieve_C.ExecuteUbergraph_Bear_AIController_BP_Polar_Retrieve
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABear_AIController_BP_Polar_Retrieve_C::ExecuteUbergraph_Bear_AIController_BP_Polar_Retrieve(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bear_AIController_BP_Polar_Retrieve.Bear_AIController_BP_Polar_Retrieve_C.ExecuteUbergraph_Bear_AIController_BP_Polar_Retrieve");

	ABear_AIController_BP_Polar_Retrieve_C_ExecuteUbergraph_Bear_AIController_BP_Polar_Retrieve_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
