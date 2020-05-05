// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Leedsichthys_AIController_BP_Retrieve_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Leedsichthys_AIController_BP_Retrieve.Leedsichthys_AIController_BP_Retrieve_C.UserConstructionScript
// ()

void ALeedsichthys_AIController_BP_Retrieve_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Leedsichthys_AIController_BP_Retrieve.Leedsichthys_AIController_BP_Retrieve_C.UserConstructionScript");

	ALeedsichthys_AIController_BP_Retrieve_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Leedsichthys_AIController_BP_Retrieve.Leedsichthys_AIController_BP_Retrieve_C.ExecuteUbergraph_Leedsichthys_AIController_BP_Retrieve
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALeedsichthys_AIController_BP_Retrieve_C::ExecuteUbergraph_Leedsichthys_AIController_BP_Retrieve(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Leedsichthys_AIController_BP_Retrieve.Leedsichthys_AIController_BP_Retrieve_C.ExecuteUbergraph_Leedsichthys_AIController_BP_Retrieve");

	ALeedsichthys_AIController_BP_Retrieve_C_ExecuteUbergraph_Leedsichthys_AIController_BP_Retrieve_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
