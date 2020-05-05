#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Persistent_Ocean_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Persistent_Ocean.Persistent_Ocean_C.ReceiveBeginPlay
struct APersistent_Ocean_C_ReceiveBeginPlay_Params
{
};

// Function Persistent_Ocean.Persistent_Ocean_C.BndEvt__Matinee_OceanDayCycle_2_K2Node_ActorBoundEvent_259_ActorMatineeUpdated__DelegateSignature
struct APersistent_Ocean_C_BndEvt__Matinee_OceanDayCycle_2_K2Node_ActorBoundEvent_259_ActorMatineeUpdated__DelegateSignature_Params
{
};

// Function Persistent_Ocean.Persistent_Ocean_C.ReceiveTick
struct APersistent_Ocean_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Persistent_Ocean.Persistent_Ocean_C.BndEvt__PostProcessVolume_31_K2Node_ActorBoundEvent_16_PostprocessVolumeEnteredSignature__DelegateSignature
struct APersistent_Ocean_C_BndEvt__PostProcessVolume_31_K2Node_ActorBoundEvent_16_PostprocessVolumeEnteredSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Persistent_Ocean.Persistent_Ocean_C.BndEvt__PostProcessVolume_31_K2Node_ActorBoundEvent_37_PostprocessVolumeLeftSignature__DelegateSignature
struct APersistent_Ocean_C_BndEvt__PostProcessVolume_31_K2Node_ActorBoundEvent_37_PostprocessVolumeLeftSignature__DelegateSignature_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimaryPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Persistent_Ocean.Persistent_Ocean_C.ExecuteUbergraph_Persistent_Ocean
struct APersistent_Ocean_C_ExecuteUbergraph_Persistent_Ocean_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
