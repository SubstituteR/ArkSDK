// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Task_VRMainBossVulnerableState_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_VRMainBossVulnerableState.Task_VRMainBossVulnerableState_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UTask_VRMainBossVulnerableState_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_VRMainBossVulnerableState.Task_VRMainBossVulnerableState_C.ReceiveTick");

	UTask_VRMainBossVulnerableState_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_VRMainBossVulnerableState.Task_VRMainBossVulnerableState_C.ExecuteUbergraph_Task_VRMainBossVulnerableState
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_VRMainBossVulnerableState_C::ExecuteUbergraph_Task_VRMainBossVulnerableState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_VRMainBossVulnerableState.Task_VRMainBossVulnerableState_C.ExecuteUbergraph_Task_VRMainBossVulnerableState");

	UTask_VRMainBossVulnerableState_C_ExecuteUbergraph_Task_VRMainBossVulnerableState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
