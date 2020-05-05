// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Task_VRMainBossFireRotatingBeams_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_VRMainBossFireRotatingBeams.Task_VRMainBossFireRotatingBeams_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UTask_VRMainBossFireRotatingBeams_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_VRMainBossFireRotatingBeams.Task_VRMainBossFireRotatingBeams_C.ReceiveTick");

	UTask_VRMainBossFireRotatingBeams_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_VRMainBossFireRotatingBeams.Task_VRMainBossFireRotatingBeams_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_VRMainBossFireRotatingBeams_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_VRMainBossFireRotatingBeams.Task_VRMainBossFireRotatingBeams_C.ReceiveExecute");

	UTask_VRMainBossFireRotatingBeams_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_VRMainBossFireRotatingBeams.Task_VRMainBossFireRotatingBeams_C.ExecuteUbergraph_Task_VRMainBossFireRotatingBeams
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_VRMainBossFireRotatingBeams_C::ExecuteUbergraph_Task_VRMainBossFireRotatingBeams(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_VRMainBossFireRotatingBeams.Task_VRMainBossFireRotatingBeams_C.ExecuteUbergraph_Task_VRMainBossFireRotatingBeams");

	UTask_VRMainBossFireRotatingBeams_C_ExecuteUbergraph_Task_VRMainBossFireRotatingBeams_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
