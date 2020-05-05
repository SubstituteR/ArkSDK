// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Pteroteuthis_AIController_BP_Escort_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Pteroteuthis_AIController_BP_Escort.Pteroteuthis_AIController_BP_Escort_C.BPGetTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APteroteuthis_AIController_BP_Escort_C::BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_AIController_BP_Escort.Pteroteuthis_AIController_BP_Escort_C.BPGetTargetingDesire");

	APteroteuthis_AIController_BP_Escort_C_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pteroteuthis_AIController_BP_Escort.Pteroteuthis_AIController_BP_Escort_C.UserConstructionScript
// ()

void APteroteuthis_AIController_BP_Escort_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_AIController_BP_Escort.Pteroteuthis_AIController_BP_Escort_C.UserConstructionScript");

	APteroteuthis_AIController_BP_Escort_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_AIController_BP_Escort.Pteroteuthis_AIController_BP_Escort_C.ExecuteUbergraph_Pteroteuthis_AIController_BP_Escort
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APteroteuthis_AIController_BP_Escort_C::ExecuteUbergraph_Pteroteuthis_AIController_BP_Escort(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_AIController_BP_Escort.Pteroteuthis_AIController_BP_Escort_C.ExecuteUbergraph_Pteroteuthis_AIController_BP_Escort");

	APteroteuthis_AIController_BP_Escort_C_ExecuteUbergraph_Pteroteuthis_AIController_BP_Escort_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
