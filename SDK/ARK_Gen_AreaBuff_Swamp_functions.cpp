// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Gen_AreaBuff_Swamp_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.BuffTickServer
// (Event, NetMulticast, Protected, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Swamp_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.BuffTickServer");

	AGen_AreaBuff_Swamp_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Swamp_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.BuffTickClient");

	AGen_AreaBuff_Swamp_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.LocalEffects
// ()

void AGen_AreaBuff_Swamp_C::LocalEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.LocalEffects");

	AGen_AreaBuff_Swamp_C_LocalEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.Get Swamp Storm Intensity from DCM
// ()
// Parameters:
// float                          LocalIntensity                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Swamp_C::Get_Swamp_Storm_Intensity_from_DCM(float* LocalIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.Get Swamp Storm Intensity from DCM");

	AGen_AreaBuff_Swamp_C_Get_Swamp_Storm_Intensity_from_DCM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocalIntensity != nullptr)
		*LocalIntensity = params.LocalIntensity;
}


// Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.UserConstructionScript
// ()

void AGen_AreaBuff_Swamp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.UserConstructionScript");

	AGen_AreaBuff_Swamp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.Timeline_0__FinishedFunc
// ()

void AGen_AreaBuff_Swamp_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.Timeline_0__FinishedFunc");

	AGen_AreaBuff_Swamp_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.Timeline_0__UpdateFunc
// ()

void AGen_AreaBuff_Swamp_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.Timeline_0__UpdateFunc");

	AGen_AreaBuff_Swamp_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.Timeline_1__FinishedFunc
// ()

void AGen_AreaBuff_Swamp_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.Timeline_1__FinishedFunc");

	AGen_AreaBuff_Swamp_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.Timeline_1__UpdateFunc
// ()

void AGen_AreaBuff_Swamp_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.Timeline_1__UpdateFunc");

	AGen_AreaBuff_Swamp_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.LerpVisuals
// ()

void AGen_AreaBuff_Swamp_C::LerpVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.LerpVisuals");

	AGen_AreaBuff_Swamp_C_LerpVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.fade out rain audio
// ()

void AGen_AreaBuff_Swamp_C::fade_out_rain_audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.fade out rain audio");

	AGen_AreaBuff_Swamp_C_fade_out_rain_audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.fade in rain audio
// ()

void AGen_AreaBuff_Swamp_C::fade_in_rain_audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.fade in rain audio");

	AGen_AreaBuff_Swamp_C_fade_in_rain_audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.ExecuteUbergraph_Gen_AreaBuff_Swamp
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Swamp_C::ExecuteUbergraph_Gen_AreaBuff_Swamp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.ExecuteUbergraph_Gen_AreaBuff_Swamp");

	AGen_AreaBuff_Swamp_C_ExecuteUbergraph_Gen_AreaBuff_Swamp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
