// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Task_VRMainBossChooseAttack_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_VRMainBossChooseAttack.Task_VRMainBossChooseAttack_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_VRMainBossChooseAttack_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_VRMainBossChooseAttack.Task_VRMainBossChooseAttack_C.ReceiveExecute");

	UTask_VRMainBossChooseAttack_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_VRMainBossChooseAttack.Task_VRMainBossChooseAttack_C.ExecuteUbergraph_Task_VRMainBossChooseAttack
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_VRMainBossChooseAttack_C::ExecuteUbergraph_Task_VRMainBossChooseAttack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_VRMainBossChooseAttack.Task_VRMainBossChooseAttack_C.ExecuteUbergraph_Task_VRMainBossChooseAttack");

	UTask_VRMainBossChooseAttack_C_ExecuteUbergraph_Task_VRMainBossChooseAttack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
