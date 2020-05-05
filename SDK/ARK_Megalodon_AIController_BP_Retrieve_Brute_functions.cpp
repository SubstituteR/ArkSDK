// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Megalodon_AIController_BP_Retrieve_Brute_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Megalodon_AIController_BP_Retrieve_Brute.Megalodon_AIController_BP_Retrieve_Brute_C.UserConstructionScript
// ()

void AMegalodon_AIController_BP_Retrieve_Brute_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalodon_AIController_BP_Retrieve_Brute.Megalodon_AIController_BP_Retrieve_Brute_C.UserConstructionScript");

	AMegalodon_AIController_BP_Retrieve_Brute_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalodon_AIController_BP_Retrieve_Brute.Megalodon_AIController_BP_Retrieve_Brute_C.ExecuteUbergraph_Megalodon_AIController_BP_Retrieve_Brute
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMegalodon_AIController_BP_Retrieve_Brute_C::ExecuteUbergraph_Megalodon_AIController_BP_Retrieve_Brute(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalodon_AIController_BP_Retrieve_Brute.Megalodon_AIController_BP_Retrieve_Brute_C.ExecuteUbergraph_Megalodon_AIController_BP_Retrieve_Brute");

	AMegalodon_AIController_BP_Retrieve_Brute_C_ExecuteUbergraph_Megalodon_AIController_BP_Retrieve_Brute_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
