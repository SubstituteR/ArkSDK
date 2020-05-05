// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_InsectSwarm_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InsectSwarm_AIController_BP.InsectSwarm_AIController_BP_C.Destroy Foliage In Radius
// (NetReliable, NetRequest, Exec, Event, Static, Protected, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const, NetValidate)

void AInsectSwarm_AIController_BP_C::STATIC_Destroy_Foliage_In_Radius()
{
	static auto fn = UObject::FindObject<UFunction>("Function InsectSwarm_AIController_BP.InsectSwarm_AIController_BP_C.Destroy Foliage In Radius");

	AInsectSwarm_AIController_BP_C_Destroy_Foliage_In_Radius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InsectSwarm_AIController_BP.InsectSwarm_AIController_BP_C.BPGetTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AInsectSwarm_AIController_BP_C::BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function InsectSwarm_AIController_BP.InsectSwarm_AIController_BP_C.BPGetTargetingDesire");

	AInsectSwarm_AIController_BP_C_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InsectSwarm_AIController_BP.InsectSwarm_AIController_BP_C.ChangedAITarget
// ()

void AInsectSwarm_AIController_BP_C::ChangedAITarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InsectSwarm_AIController_BP.InsectSwarm_AIController_BP_C.ChangedAITarget");

	AInsectSwarm_AIController_BP_C_ChangedAITarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InsectSwarm_AIController_BP.InsectSwarm_AIController_BP_C.UserConstructionScript
// ()

void AInsectSwarm_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function InsectSwarm_AIController_BP.InsectSwarm_AIController_BP_C.UserConstructionScript");

	AInsectSwarm_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InsectSwarm_AIController_BP.InsectSwarm_AIController_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AInsectSwarm_AIController_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function InsectSwarm_AIController_BP.InsectSwarm_AIController_BP_C.ReceiveTick");

	AInsectSwarm_AIController_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InsectSwarm_AIController_BP.InsectSwarm_AIController_BP_C.ExecuteUbergraph_InsectSwarm_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AInsectSwarm_AIController_BP_C::ExecuteUbergraph_InsectSwarm_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InsectSwarm_AIController_BP.InsectSwarm_AIController_BP_C.ExecuteUbergraph_InsectSwarm_AIController_BP");

	AInsectSwarm_AIController_BP_C_ExecuteUbergraph_InsectSwarm_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
