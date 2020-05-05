// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Liopleurodon_AIController_BP_Aggressive_Retrieve_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Liopleurodon_AIController_BP_Aggressive_Retrieve.Liopleurodon_AIController_BP_Aggressive_Retrieve_C.UserConstructionScript
// ()

void ALiopleurodon_AIController_BP_Aggressive_Retrieve_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Liopleurodon_AIController_BP_Aggressive_Retrieve.Liopleurodon_AIController_BP_Aggressive_Retrieve_C.UserConstructionScript");

	ALiopleurodon_AIController_BP_Aggressive_Retrieve_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Liopleurodon_AIController_BP_Aggressive_Retrieve.Liopleurodon_AIController_BP_Aggressive_Retrieve_C.ExecuteUbergraph_Liopleurodon_AIController_BP_Aggressive_Retrieve
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALiopleurodon_AIController_BP_Aggressive_Retrieve_C::ExecuteUbergraph_Liopleurodon_AIController_BP_Aggressive_Retrieve(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Liopleurodon_AIController_BP_Aggressive_Retrieve.Liopleurodon_AIController_BP_Aggressive_Retrieve_C.ExecuteUbergraph_Liopleurodon_AIController_BP_Aggressive_Retrieve");

	ALiopleurodon_AIController_BP_Aggressive_Retrieve_C_ExecuteUbergraph_Liopleurodon_AIController_BP_Aggressive_Retrieve_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
