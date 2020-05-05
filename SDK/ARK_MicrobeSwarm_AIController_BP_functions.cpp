// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MicrobeSwarm_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MicrobeSwarm_AIController_BP.MicrobeSwarm_AIController_BP_C.BPGetTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMicrobeSwarm_AIController_BP_C::BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function MicrobeSwarm_AIController_BP.MicrobeSwarm_AIController_BP_C.BPGetTargetingDesire");

	AMicrobeSwarm_AIController_BP_C_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MicrobeSwarm_AIController_BP.MicrobeSwarm_AIController_BP_C.SearchForPoop
// ()

void AMicrobeSwarm_AIController_BP_C::SearchForPoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function MicrobeSwarm_AIController_BP.MicrobeSwarm_AIController_BP_C.SearchForPoop");

	AMicrobeSwarm_AIController_BP_C_SearchForPoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MicrobeSwarm_AIController_BP.MicrobeSwarm_AIController_BP_C.IsDroppedItemPoop
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMicrobeSwarm_AIController_BP_C::IsDroppedItemPoop(class AActor* Actor, bool* OutValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function MicrobeSwarm_AIController_BP.MicrobeSwarm_AIController_BP_C.IsDroppedItemPoop");

	AMicrobeSwarm_AIController_BP_C_IsDroppedItemPoop_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;
}


// Function MicrobeSwarm_AIController_BP.MicrobeSwarm_AIController_BP_C.UserConstructionScript
// ()

void AMicrobeSwarm_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MicrobeSwarm_AIController_BP.MicrobeSwarm_AIController_BP_C.UserConstructionScript");

	AMicrobeSwarm_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MicrobeSwarm_AIController_BP.MicrobeSwarm_AIController_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AMicrobeSwarm_AIController_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MicrobeSwarm_AIController_BP.MicrobeSwarm_AIController_BP_C.ReceiveTick");

	AMicrobeSwarm_AIController_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MicrobeSwarm_AIController_BP.MicrobeSwarm_AIController_BP_C.ExecuteUbergraph_MicrobeSwarm_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMicrobeSwarm_AIController_BP_C::ExecuteUbergraph_MicrobeSwarm_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MicrobeSwarm_AIController_BP.MicrobeSwarm_AIController_BP_C.ExecuteUbergraph_MicrobeSwarm_AIController_BP");

	AMicrobeSwarm_AIController_BP_C_ExecuteUbergraph_MicrobeSwarm_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
