// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Genesis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Genesis.Genesis_C.SortCurrentPostProcessVolumes
// ()
// Parameters:
// class APostProcessVolume*      NewPostProcess                 (Parm, ZeroConstructor, IsPlainOldData)
// class APostProcessVolume*      CurrentHighestPriorityPostProcess (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGenesis_C::SortCurrentPostProcessVolumes(class APostProcessVolume* NewPostProcess, class APostProcessVolume** CurrentHighestPriorityPostProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function Genesis.Genesis_C.SortCurrentPostProcessVolumes");

	AGenesis_C_SortCurrentPostProcessVolumes_Params params;
	params.NewPostProcess = NewPostProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentHighestPriorityPostProcess != nullptr)
		*CurrentHighestPriorityPostProcess = params.CurrentHighestPriorityPostProcess;
}


// Function Genesis.Genesis_C.OnRep_CurrentTekCaveDifficulty
// ()

void AGenesis_C::OnRep_CurrentTekCaveDifficulty()
{
	static auto fn = UObject::FindObject<UFunction>("Function Genesis.Genesis_C.OnRep_CurrentTekCaveDifficulty");

	AGenesis_C_OnRep_CurrentTekCaveDifficulty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Genesis.Genesis_C.IsReallyUnderwater
// ()
// Parameters:
// bool                           ReallyUnderwater               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGenesis_C::IsReallyUnderwater(bool* ReallyUnderwater)
{
	static auto fn = UObject::FindObject<UFunction>("Function Genesis.Genesis_C.IsReallyUnderwater");

	AGenesis_C_IsReallyUnderwater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReallyUnderwater != nullptr)
		*ReallyUnderwater = params.ReallyUnderwater;
}


// Function Genesis.Genesis_C.ReceiveBeginPlay
// ()

void AGenesis_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Genesis.Genesis_C.ReceiveBeginPlay");

	AGenesis_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Genesis.Genesis_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AGenesis_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Genesis.Genesis_C.ReceiveTick");

	AGenesis_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Genesis.Genesis_C.noweather
// ()

void AGenesis_C::noweather()
{
	static auto fn = UObject::FindObject<UFunction>("Function Genesis.Genesis_C.noweather");

	AGenesis_C_noweather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Genesis.Genesis_C.doweather
// ()

void AGenesis_C::doweather()
{
	static auto fn = UObject::FindObject<UFunction>("Function Genesis.Genesis_C.doweather");

	AGenesis_C_doweather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Genesis.Genesis_C.stoptime
// ()

void AGenesis_C::stoptime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Genesis.Genesis_C.stoptime");

	AGenesis_C_stoptime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Genesis.Genesis_C.StartTime
// ()

void AGenesis_C::StartTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Genesis.Genesis_C.StartTime");

	AGenesis_C_StartTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Genesis.Genesis_C.OnGameStateReady
// ()
// Parameters:
// class AGameState**             GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void AGenesis_C::OnGameStateReady(class AGameState** GameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Genesis.Genesis_C.OnGameStateReady");

	AGenesis_C_OnGameStateReady_Params params;
	params.GameState = GameState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Genesis.Genesis_C.OnAnyPostProcessVolumeEntered
// ()
// Parameters:
// class APostProcessVolume*      PostProcessVolume              (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void AGenesis_C::OnAnyPostProcessVolumeEntered(class APostProcessVolume* PostProcessVolume, class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Genesis.Genesis_C.OnAnyPostProcessVolumeEntered");

	AGenesis_C_OnAnyPostProcessVolumeEntered_Params params;
	params.PostProcessVolume = PostProcessVolume;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Genesis.Genesis_C.OnAnyPostProcessVolumeLeft
// ()
// Parameters:
// class APostProcessVolume*      PostProcessVolume              (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimaryPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void AGenesis_C::OnAnyPostProcessVolumeLeft(class APostProcessVolume* PostProcessVolume, class APlayerController* Controller, bool bIsPrimaryPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Genesis.Genesis_C.OnAnyPostProcessVolumeLeft");

	AGenesis_C_OnAnyPostProcessVolumeLeft_Params params;
	params.PostProcessVolume = PostProcessVolume;
	params.Controller = Controller;
	params.bIsPrimaryPlayer = bIsPrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Genesis.Genesis_C.BndEvt__MatineeValueInterpolationContainer_Gen1_4_K2Node_ActorBoundEvent_475_ActorMatineeUpdated__DelegateSignature
// ()

void AGenesis_C::BndEvt__MatineeValueInterpolationContainer_Gen1_4_K2Node_ActorBoundEvent_475_ActorMatineeUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Genesis.Genesis_C.BndEvt__MatineeValueInterpolationContainer_Gen1_4_K2Node_ActorBoundEvent_475_ActorMatineeUpdated__DelegateSignature");

	AGenesis_C_BndEvt__MatineeValueInterpolationContainer_Gen1_4_K2Node_ActorBoundEvent_475_ActorMatineeUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Genesis.Genesis_C.RenderEndCinematic
// ()

void AGenesis_C::RenderEndCinematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Genesis.Genesis_C.RenderEndCinematic");

	AGenesis_C_RenderEndCinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Genesis.Genesis_C.PlayEndCinematic
// ()

void AGenesis_C::PlayEndCinematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Genesis.Genesis_C.PlayEndCinematic");

	AGenesis_C_PlayEndCinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Genesis.Genesis_C.ExecuteUbergraph_Genesis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGenesis_C::ExecuteUbergraph_Genesis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Genesis.Genesis_C.ExecuteUbergraph_Genesis");

	AGenesis_C_ExecuteUbergraph_Genesis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
