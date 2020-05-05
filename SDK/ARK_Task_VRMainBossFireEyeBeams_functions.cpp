// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Task_VRMainBossFireEyeBeams_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_VRMainBossFireEyeBeams.Task_VRMainBossFireEyeBeams_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UTask_VRMainBossFireEyeBeams_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_VRMainBossFireEyeBeams.Task_VRMainBossFireEyeBeams_C.ReceiveTick");

	UTask_VRMainBossFireEyeBeams_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_VRMainBossFireEyeBeams.Task_VRMainBossFireEyeBeams_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_VRMainBossFireEyeBeams_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_VRMainBossFireEyeBeams.Task_VRMainBossFireEyeBeams_C.ReceiveExecute");

	UTask_VRMainBossFireEyeBeams_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_VRMainBossFireEyeBeams.Task_VRMainBossFireEyeBeams_C.ExecuteUbergraph_Task_VRMainBossFireEyeBeams
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_VRMainBossFireEyeBeams_C::ExecuteUbergraph_Task_VRMainBossFireEyeBeams(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_VRMainBossFireEyeBeams.Task_VRMainBossFireEyeBeams_C.ExecuteUbergraph_Task_VRMainBossFireEyeBeams");

	UTask_VRMainBossFireEyeBeams_C_ExecuteUbergraph_Task_VRMainBossFireEyeBeams_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
