// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EelMinion_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EelMinion_Character_BP.EelMinion_Character_BP_C.BPPostInitializeComponents
// ()

void AEelMinion_Character_BP_C::BPPostInitializeComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelMinion_Character_BP.EelMinion_Character_BP_C.BPPostInitializeComponents");

	AEelMinion_Character_BP_C_BPPostInitializeComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelMinion_Character_BP.EelMinion_Character_BP_C.BPTimerServer
// ()

void AEelMinion_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelMinion_Character_BP.EelMinion_Character_BP_C.BPTimerServer");

	AEelMinion_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelMinion_Character_BP.EelMinion_Character_BP_C.BP_OnSetDeath
// ()

void AEelMinion_Character_BP_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelMinion_Character_BP.EelMinion_Character_BP_C.BP_OnSetDeath");

	AEelMinion_Character_BP_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelMinion_Character_BP.EelMinion_Character_BP_C.TickSounds
// ()

void AEelMinion_Character_BP_C::TickSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelMinion_Character_BP.EelMinion_Character_BP_C.TickSounds");

	AEelMinion_Character_BP_C_TickSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelMinion_Character_BP.EelMinion_Character_BP_C.StartTailProjectiles
// (NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Public, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void AEelMinion_Character_BP_C::StartTailProjectiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelMinion_Character_BP.EelMinion_Character_BP_C.StartTailProjectiles");

	AEelMinion_Character_BP_C_StartTailProjectiles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelMinion_Character_BP.EelMinion_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** meshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AEelMinion_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** meshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function EelMinion_Character_BP.EelMinion_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	AEelMinion_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.meshComp = meshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelMinion_Character_BP.EelMinion_Character_BP_C.TurnOffAoe
// ()

void AEelMinion_Character_BP_C::TurnOffAoe()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelMinion_Character_BP.EelMinion_Character_BP_C.TurnOffAoe");

	AEelMinion_Character_BP_C_TurnOffAoe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelMinion_Character_BP.EelMinion_Character_BP_C.OnRep_IsDoingAoe
// ()

void AEelMinion_Character_BP_C::OnRep_IsDoingAoe()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelMinion_Character_BP.EelMinion_Character_BP_C.OnRep_IsDoingAoe");

	AEelMinion_Character_BP_C_OnRep_IsDoingAoe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelMinion_Character_BP.EelMinion_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEelMinion_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function EelMinion_Character_BP.EelMinion_Character_BP_C.BlueprintCanAttack");

	AEelMinion_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EelMinion_Character_BP.EelMinion_Character_BP_C.UserConstructionScript
// ()

void AEelMinion_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelMinion_Character_BP.EelMinion_Character_BP_C.UserConstructionScript");

	AEelMinion_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelMinion_Character_BP.EelMinion_Character_BP_C.Timeline_AOEAttack__FinishedFunc
// ()

void AEelMinion_Character_BP_C::Timeline_AOEAttack__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelMinion_Character_BP.EelMinion_Character_BP_C.Timeline_AOEAttack__FinishedFunc");

	AEelMinion_Character_BP_C_Timeline_AOEAttack__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelMinion_Character_BP.EelMinion_Character_BP_C.Timeline_AOEAttack__UpdateFunc
// ()

void AEelMinion_Character_BP_C::Timeline_AOEAttack__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelMinion_Character_BP.EelMinion_Character_BP_C.Timeline_AOEAttack__UpdateFunc");

	AEelMinion_Character_BP_C_Timeline_AOEAttack__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelMinion_Character_BP.EelMinion_Character_BP_C.Start_AOEAttack
// ()

void AEelMinion_Character_BP_C::Start_AOEAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelMinion_Character_BP.EelMinion_Character_BP_C.Start_AOEAttack");

	AEelMinion_Character_BP_C_Start_AOEAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelMinion_Character_BP.EelMinion_Character_BP_C.ReceiveBeginPlay
// ()

void AEelMinion_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelMinion_Character_BP.EelMinion_Character_BP_C.ReceiveBeginPlay");

	AEelMinion_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelMinion_Character_BP.EelMinion_Character_BP_C.ExecuteUbergraph_EelMinion_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEelMinion_Character_BP_C::ExecuteUbergraph_EelMinion_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EelMinion_Character_BP.EelMinion_Character_BP_C.ExecuteUbergraph_EelMinion_Character_BP");

	AEelMinion_Character_BP_C_ExecuteUbergraph_EelMinion_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
