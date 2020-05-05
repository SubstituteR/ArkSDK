// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Gen_AreaBuff_Arctic_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Arctic_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.BuffTickClient");

	AGen_AreaBuff_Arctic_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.BP_OverrideCharacterWalkingVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Friction                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AGen_AreaBuff_Arctic_C::BP_OverrideCharacterWalkingVelocity(float* DeltaTime, struct FVector* InitialVelocity, float* Friction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.BP_OverrideCharacterWalkingVelocity");

	AGen_AreaBuff_Arctic_C_BP_OverrideCharacterWalkingVelocity_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InitialVelocity != nullptr)
		*InitialVelocity = params.InitialVelocity;
	if (Friction != nullptr)
		*Friction = params.Friction;

	return params.ReturnValue;
}


// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.BPOverrideCharacterNewFallVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AGen_AreaBuff_Arctic_C::BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.BPOverrideCharacterNewFallVelocity");

	AGen_AreaBuff_Arctic_C_BPOverrideCharacterNewFallVelocity_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InitialVelocity != nullptr)
		*InitialVelocity = params.InitialVelocity;
	if (Gravity != nullptr)
		*Gravity = params.Gravity;

	return params.ReturnValue;
}


// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.PlayWindImpact
// ()
// Parameters:
// struct FVector                 Dir                            (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Arctic_C::PlayWindImpact(const struct FVector& Dir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.PlayWindImpact");

	AGen_AreaBuff_Arctic_C_PlayWindImpact_Params params;
	params.Dir = Dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.PlayHailImpact
// ()

void AGen_AreaBuff_Arctic_C::PlayHailImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.PlayHailImpact");

	AGen_AreaBuff_Arctic_C_PlayHailImpact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.CheckSnowGear
// ()
// Parameters:
// bool                           Has_Snow_Gear                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Arctic_C::CheckSnowGear(bool* Has_Snow_Gear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.CheckSnowGear");

	AGen_AreaBuff_Arctic_C_CheckSnowGear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Has_Snow_Gear != nullptr)
		*Has_Snow_Gear = params.Has_Snow_Gear;
}


// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.BuffTickServer
// (Net, Exec, Event, Static, NetMulticast, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Arctic_C::STATIC_BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.BuffTickServer");

	AGen_AreaBuff_Arctic_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.GetWorldTempAtLocation
// ()
// Parameters:
// float                          WorldTemp                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Arctic_C::GetWorldTempAtLocation(float* WorldTemp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.GetWorldTempAtLocation");

	AGen_AreaBuff_Arctic_C_GetWorldTempAtLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldTemp != nullptr)
		*WorldTemp = params.WorldTemp;
}


// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.ShouldApplyFrozen
// ()
// Parameters:
// bool                           ShouldFreeze                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Arctic_C::ShouldApplyFrozen(bool* ShouldFreeze)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.ShouldApplyFrozen");

	AGen_AreaBuff_Arctic_C_ShouldApplyFrozen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldFreeze != nullptr)
		*ShouldFreeze = params.ShouldFreeze;
}


// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.SetProperEmitter
// ()
// Parameters:
// bool                           Should_Hail                    (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Arctic_C::SetProperEmitter(bool Should_Hail)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.SetProperEmitter");

	AGen_AreaBuff_Arctic_C_SetProperEmitter_Params params;
	params.Should_Hail = Should_Hail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.ShouldHail
// ()
// Parameters:
// bool                           ShouldHail                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Arctic_C::ShouldHail(bool* ShouldHail)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.ShouldHail");

	AGen_AreaBuff_Arctic_C_ShouldHail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldHail != nullptr)
		*ShouldHail = params.ShouldHail;
}


// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.LocalEffects
// ()

void AGen_AreaBuff_Arctic_C::LocalEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.LocalEffects");

	AGen_AreaBuff_Arctic_C_LocalEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.CalculateLocalStormIntensityFromDCM
// ()
// Parameters:
// float                          LocalIntensity                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LocalDirection                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Arctic_C::CalculateLocalStormIntensityFromDCM(float* LocalIntensity, struct FVector* LocalDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.CalculateLocalStormIntensityFromDCM");

	AGen_AreaBuff_Arctic_C_CalculateLocalStormIntensityFromDCM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocalIntensity != nullptr)
		*LocalIntensity = params.LocalIntensity;
	if (LocalDirection != nullptr)
		*LocalDirection = params.LocalDirection;
}


// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.UserConstructionScript
// ()

void AGen_AreaBuff_Arctic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.UserConstructionScript");

	AGen_AreaBuff_Arctic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.Timeline_0__FinishedFunc
// ()

void AGen_AreaBuff_Arctic_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.Timeline_0__FinishedFunc");

	AGen_AreaBuff_Arctic_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.Timeline_0__UpdateFunc
// ()

void AGen_AreaBuff_Arctic_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.Timeline_0__UpdateFunc");

	AGen_AreaBuff_Arctic_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.Timeline_1__FinishedFunc
// ()

void AGen_AreaBuff_Arctic_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.Timeline_1__FinishedFunc");

	AGen_AreaBuff_Arctic_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.Timeline_1__UpdateFunc
// ()

void AGen_AreaBuff_Arctic_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.Timeline_1__UpdateFunc");

	AGen_AreaBuff_Arctic_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.LerpVisuals
// ()

void AGen_AreaBuff_Arctic_C::LerpVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.LerpVisuals");

	AGen_AreaBuff_Arctic_C_LerpVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.ClientPlayHailImpact
// ()

void AGen_AreaBuff_Arctic_C::ClientPlayHailImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.ClientPlayHailImpact");

	AGen_AreaBuff_Arctic_C_ClientPlayHailImpact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.ClientPlayWindImpact
// ()
// Parameters:
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Arctic_C::ClientPlayWindImpact(const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.ClientPlayWindImpact");

	AGen_AreaBuff_Arctic_C_ClientPlayWindImpact_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.fade out snow audio
// ()

void AGen_AreaBuff_Arctic_C::fade_out_snow_audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.fade out snow audio");

	AGen_AreaBuff_Arctic_C_fade_out_snow_audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.fade in snow audio
// ()

void AGen_AreaBuff_Arctic_C::fade_in_snow_audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.fade in snow audio");

	AGen_AreaBuff_Arctic_C_fade_in_snow_audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.ExecuteUbergraph_Gen_AreaBuff_Arctic
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Arctic_C::ExecuteUbergraph_Gen_AreaBuff_Arctic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.ExecuteUbergraph_Gen_AreaBuff_Arctic");

	AGen_AreaBuff_Arctic_C_ExecuteUbergraph_Gen_AreaBuff_Arctic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
