// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Task_MissionIdle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_MissionIdle.Task_MissionIdle_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_MissionIdle_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_MissionIdle.Task_MissionIdle_C.ReceiveExecute");

	UTask_MissionIdle_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_MissionIdle.Task_MissionIdle_C.ExecuteUbergraph_Task_MissionIdle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_MissionIdle_C::ExecuteUbergraph_Task_MissionIdle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_MissionIdle.Task_MissionIdle_C.ExecuteUbergraph_Task_MissionIdle");

	UTask_MissionIdle_C_ExecuteUbergraph_Task_MissionIdle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
