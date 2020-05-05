// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Allo_AIController_BP_Retrieve_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Allo_AIController_BP_Retrieve.Allo_AIController_BP_Retrieve_C.UserConstructionScript
// ()

void AAllo_AIController_BP_Retrieve_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Allo_AIController_BP_Retrieve.Allo_AIController_BP_Retrieve_C.UserConstructionScript");

	AAllo_AIController_BP_Retrieve_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Allo_AIController_BP_Retrieve.Allo_AIController_BP_Retrieve_C.ExecuteUbergraph_Allo_AIController_BP_Retrieve
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAllo_AIController_BP_Retrieve_C::ExecuteUbergraph_Allo_AIController_BP_Retrieve(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Allo_AIController_BP_Retrieve.Allo_AIController_BP_Retrieve_C.ExecuteUbergraph_Allo_AIController_BP_Retrieve");

	AAllo_AIController_BP_Retrieve_C_ExecuteUbergraph_Allo_AIController_BP_Retrieve_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
