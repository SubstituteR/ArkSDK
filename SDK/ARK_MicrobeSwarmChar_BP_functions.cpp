// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MicrobeSwarmChar_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.Can Damage Victim in Radius
// ()
// Parameters:
// class AActor**                 Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanDamage                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMicrobeSwarmChar_BP_C::Can_Damage_Victim_in_Radius(class AActor** Victim, bool* CanDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.Can Damage Victim in Radius");

	AMicrobeSwarmChar_BP_C_Can_Damage_Victim_in_Radius_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanDamage != nullptr)
		*CanDamage = params.CanDamage;
}


// Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.BlueprintOverrideWantsToRun
// ()
// Parameters:
// bool*                          bInputWantsToRun               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMicrobeSwarmChar_BP_C::BlueprintOverrideWantsToRun(bool* bInputWantsToRun)
{
	static auto fn = UObject::FindObject<UFunction>("Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.BlueprintOverrideWantsToRun");

	AMicrobeSwarmChar_BP_C_BlueprintOverrideWantsToRun_Params params;
	params.bInputWantsToRun = bInputWantsToRun;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.BPOverrideFloatingHUDLocation
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AMicrobeSwarmChar_BP_C::BPOverrideFloatingHUDLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.BPOverrideFloatingHUDLocation");

	AMicrobeSwarmChar_BP_C_BPOverrideFloatingHUDLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.KillRemainingBoids
// (NetReliable, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void AMicrobeSwarmChar_BP_C::STATIC_KillRemainingBoids()
{
	static auto fn = UObject::FindObject<UFunction>("Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.KillRemainingBoids");

	AMicrobeSwarmChar_BP_C_KillRemainingBoids_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.UpdateDeadBoids
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AMicrobeSwarmChar_BP_C::STATIC_UpdateDeadBoids(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.UpdateDeadBoids");

	AMicrobeSwarmChar_BP_C_UpdateDeadBoids_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.Kill Boid
// ()
// Parameters:
// class UStaticMeshComponent**   StaticMeshComp                 (Parm, ZeroConstructor, IsPlainOldData)

void AMicrobeSwarmChar_BP_C::Kill_Boid(class UStaticMeshComponent** StaticMeshComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.Kill Boid");

	AMicrobeSwarmChar_BP_C_Kill_Boid_Params params;
	params.StaticMeshComp = StaticMeshComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.DestroyTarget
// ()

void AMicrobeSwarmChar_BP_C::DestroyTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.DestroyTarget");

	AMicrobeSwarmChar_BP_C_DestroyTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.UserConstructionScript
// ()

void AMicrobeSwarmChar_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.UserConstructionScript");

	AMicrobeSwarmChar_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AMicrobeSwarmChar_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.ReceiveTick");

	AMicrobeSwarmChar_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_234_PhysicsVolumeChanged__DelegateSignature
// ()
// Parameters:
// class APhysicsVolume*          NewVolume                      (Parm, ZeroConstructor, IsPlainOldData)

void AMicrobeSwarmChar_BP_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_234_PhysicsVolumeChanged__DelegateSignature(class APhysicsVolume* NewVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_234_PhysicsVolumeChanged__DelegateSignature");

	AMicrobeSwarmChar_BP_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_234_PhysicsVolumeChanged__DelegateSignature_Params params;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.ExecuteUbergraph_MicrobeSwarmChar_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMicrobeSwarmChar_BP_C::ExecuteUbergraph_MicrobeSwarmChar_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.ExecuteUbergraph_MicrobeSwarmChar_BP");

	AMicrobeSwarmChar_BP_C_ExecuteUbergraph_MicrobeSwarmChar_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
