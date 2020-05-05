// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Task_VRMainBossFireTargetedBeam_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_VRMainBossFireTargetedBeam.Task_VRMainBossFireTargetedBeam_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UTask_VRMainBossFireTargetedBeam_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_VRMainBossFireTargetedBeam.Task_VRMainBossFireTargetedBeam_C.ReceiveTick");

	UTask_VRMainBossFireTargetedBeam_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_VRMainBossFireTargetedBeam.Task_VRMainBossFireTargetedBeam_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_VRMainBossFireTargetedBeam_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_VRMainBossFireTargetedBeam.Task_VRMainBossFireTargetedBeam_C.ReceiveExecute");

	UTask_VRMainBossFireTargetedBeam_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_VRMainBossFireTargetedBeam.Task_VRMainBossFireTargetedBeam_C.ExecuteUbergraph_Task_VRMainBossFireTargetedBeam
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_VRMainBossFireTargetedBeam_C::ExecuteUbergraph_Task_VRMainBossFireTargetedBeam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_VRMainBossFireTargetedBeam.Task_VRMainBossFireTargetedBeam_C.ExecuteUbergraph_Task_VRMainBossFireTargetedBeam");

	UTask_VRMainBossFireTargetedBeam_C_ExecuteUbergraph_Task_VRMainBossFireTargetedBeam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
