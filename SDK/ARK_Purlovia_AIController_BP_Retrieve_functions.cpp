// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Purlovia_AIController_BP_Retrieve_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Purlovia_AIController_BP_Retrieve.Purlovia_AIController_BP_Retrieve_C.BPGetTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APurlovia_AIController_BP_Retrieve_C::BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_AIController_BP_Retrieve.Purlovia_AIController_BP_Retrieve_C.BPGetTargetingDesire");

	APurlovia_AIController_BP_Retrieve_C_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Purlovia_AIController_BP_Retrieve.Purlovia_AIController_BP_Retrieve_C.UserConstructionScript
// ()

void APurlovia_AIController_BP_Retrieve_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_AIController_BP_Retrieve.Purlovia_AIController_BP_Retrieve_C.UserConstructionScript");

	APurlovia_AIController_BP_Retrieve_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_AIController_BP_Retrieve.Purlovia_AIController_BP_Retrieve_C.ExecuteUbergraph_Purlovia_AIController_BP_Retrieve
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APurlovia_AIController_BP_Retrieve_C::ExecuteUbergraph_Purlovia_AIController_BP_Retrieve(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_AIController_BP_Retrieve.Purlovia_AIController_BP_Retrieve_C.ExecuteUbergraph_Purlovia_AIController_BP_Retrieve");

	APurlovia_AIController_BP_Retrieve_C_ExecuteUbergraph_Purlovia_AIController_BP_Retrieve_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
