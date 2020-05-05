// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Persistent_Ocean_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Persistent_Ocean.Persistent_Ocean_C.ReceiveBeginPlay
// ()

void APersistent_Ocean_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Persistent_Ocean.Persistent_Ocean_C.ReceiveBeginPlay");

	APersistent_Ocean_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Persistent_Ocean.Persistent_Ocean_C.BndEvt__Matinee_OceanDayCycle_2_K2Node_ActorBoundEvent_259_ActorMatineeUpdated__DelegateSignature
// ()

void APersistent_Ocean_C::BndEvt__Matinee_OceanDayCycle_2_K2Node_ActorBoundEvent_259_ActorMatineeUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Persistent_Ocean.Persistent_Ocean_C.BndEvt__Matinee_OceanDayCycle_2_K2Node_ActorBoundEvent_259_ActorMatineeUpdated__DelegateSignature");

	APersistent_Ocean_C_BndEvt__Matinee_OceanDayCycle_2_K2Node_ActorBoundEvent_259_ActorMatineeUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Persistent_Ocean.Persistent_Ocean_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void APersistent_Ocean_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Persistent_Ocean.Persistent_Ocean_C.ReceiveTick");

	APersistent_Ocean_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Persistent_Ocean.Persistent_Ocean_C.BndEvt__PostProcessVolume_31_K2Node_ActorBoundEvent_16_PostprocessVolumeEnteredSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void APersistent_Ocean_C::BndEvt__PostProcessVolume_31_K2Node_ActorBoundEvent_16_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Persistent_Ocean.Persistent_Ocean_C.BndEvt__PostProcessVolume_31_K2Node_ActorBoundEvent_16_PostprocessVolumeEnteredSignature__DelegateSignature");

	APersistent_Ocean_C_BndEvt__PostProcessVolume_31_K2Node_ActorBoundEvent_16_PostprocessVolumeEnteredSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Persistent_Ocean.Persistent_Ocean_C.BndEvt__PostProcessVolume_31_K2Node_ActorBoundEvent_37_PostprocessVolumeLeftSignature__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void APersistent_Ocean_C::BndEvt__PostProcessVolume_31_K2Node_ActorBoundEvent_37_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Persistent_Ocean.Persistent_Ocean_C.BndEvt__PostProcessVolume_31_K2Node_ActorBoundEvent_37_PostprocessVolumeLeftSignature__DelegateSignature");

	APersistent_Ocean_C_BndEvt__PostProcessVolume_31_K2Node_ActorBoundEvent_37_PostprocessVolumeLeftSignature__DelegateSignature_Params params;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Persistent_Ocean.Persistent_Ocean_C.ExecuteUbergraph_Persistent_Ocean
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APersistent_Ocean_C::ExecuteUbergraph_Persistent_Ocean(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Persistent_Ocean.Persistent_Ocean_C.ExecuteUbergraph_Persistent_Ocean");

	APersistent_Ocean_C_ExecuteUbergraph_Persistent_Ocean_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
