// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Cnidaria_AIController_BP_Retrieve_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cnidaria_AIController_BP_Retrieve.Cnidaria_AIController_BP_Retrieve_C.UserConstructionScript
// ()

void ACnidaria_AIController_BP_Retrieve_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cnidaria_AIController_BP_Retrieve.Cnidaria_AIController_BP_Retrieve_C.UserConstructionScript");

	ACnidaria_AIController_BP_Retrieve_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cnidaria_AIController_BP_Retrieve.Cnidaria_AIController_BP_Retrieve_C.ExecuteUbergraph_Cnidaria_AIController_BP_Retrieve
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACnidaria_AIController_BP_Retrieve_C::ExecuteUbergraph_Cnidaria_AIController_BP_Retrieve(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cnidaria_AIController_BP_Retrieve.Cnidaria_AIController_BP_Retrieve_C.ExecuteUbergraph_Cnidaria_AIController_BP_Retrieve");

	ACnidaria_AIController_BP_Retrieve_C_ExecuteUbergraph_Cnidaria_AIController_BP_Retrieve_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
