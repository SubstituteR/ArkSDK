// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Task_VRMainBossCooldown_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_VRMainBossCooldown.Task_VRMainBossCooldown_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UTask_VRMainBossCooldown_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_VRMainBossCooldown.Task_VRMainBossCooldown_C.ReceiveTick");

	UTask_VRMainBossCooldown_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_VRMainBossCooldown.Task_VRMainBossCooldown_C.ExecuteUbergraph_Task_VRMainBossCooldown
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_VRMainBossCooldown_C::ExecuteUbergraph_Task_VRMainBossCooldown(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_VRMainBossCooldown.Task_VRMainBossCooldown_C.ExecuteUbergraph_Task_VRMainBossCooldown");

	UTask_VRMainBossCooldown_C_ExecuteUbergraph_Task_VRMainBossCooldown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
