// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_AberrationDayCycle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AberrationDayCycle.AberrationDayCycle_C.BPOverrideGameStateMatineePlayRate
// ()
// Parameters:
// class AActor**                 forMatinee                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InPlayRate                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAberrationDayCycle_C::BPOverrideGameStateMatineePlayRate(class AActor** forMatinee, float* InPlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function AberrationDayCycle.AberrationDayCycle_C.BPOverrideGameStateMatineePlayRate");

	AAberrationDayCycle_C_BPOverrideGameStateMatineePlayRate_Params params;
	params.forMatinee = forMatinee;
	params.InPlayRate = InPlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AberrationDayCycle.AberrationDayCycle_C.GetDayNumberString
// (NetRequest, Event, NetResponse, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bIncludeDayString              (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AAberrationDayCycle_C::GetDayNumberString(bool* bIncludeDayString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AberrationDayCycle.AberrationDayCycle_C.GetDayNumberString");

	AAberrationDayCycle_C_GetDayNumberString_Params params;
	params.bIncludeDayString = bIncludeDayString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AberrationDayCycle.AberrationDayCycle_C.GetWeatherEventWarning
// ()
// Parameters:
// int                            WeatherEventWarningType        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAberrationDayCycle_C::GetWeatherEventWarning(int* WeatherEventWarningType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AberrationDayCycle.AberrationDayCycle_C.GetWeatherEventWarning");

	AAberrationDayCycle_C_GetWeatherEventWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeatherEventWarningType != nullptr)
		*WeatherEventWarningType = params.WeatherEventWarningType;
}


// Function AberrationDayCycle.AberrationDayCycle_C.CalcMiniMapCoord
// ()
// Parameters:
// struct FVector                 inVec                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutLattitude                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutLongitude                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAberrationDayCycle_C::CalcMiniMapCoord(const struct FVector& inVec, float* OutLattitude, float* OutLongitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function AberrationDayCycle.AberrationDayCycle_C.CalcMiniMapCoord");

	AAberrationDayCycle_C_CalcMiniMapCoord_Params params;
	params.inVec = inVec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLattitude != nullptr)
		*OutLattitude = params.OutLattitude;
	if (OutLongitude != nullptr)
		*OutLongitude = params.OutLongitude;
}


// Function AberrationDayCycle.AberrationDayCycle_C.HandleGrappleHookImpacted
// ()
// Parameters:
// class APrimalProjectileGrapplingHook** GrapHookProj                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)

void AAberrationDayCycle_C::HandleGrappleHookImpacted(class APrimalProjectileGrapplingHook** GrapHookProj, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AberrationDayCycle.AberrationDayCycle_C.HandleGrappleHookImpacted");

	AAberrationDayCycle_C_HandleGrappleHookImpacted_Params params;
	params.GrapHookProj = GrapHookProj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;
}


// Function AberrationDayCycle.AberrationDayCycle_C.ShooterCharacterSpawned
// ()
// Parameters:
// class AShooterCharacter**      TheShooterCharacter            (Parm, ZeroConstructor, IsPlainOldData)

void AAberrationDayCycle_C::ShooterCharacterSpawned(class AShooterCharacter** TheShooterCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function AberrationDayCycle.AberrationDayCycle_C.ShooterCharacterSpawned");

	AAberrationDayCycle_C_ShooterCharacterSpawned_Params params;
	params.TheShooterCharacter = TheShooterCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AberrationDayCycle.AberrationDayCycle_C.StopEarthQuake
// ()

void AAberrationDayCycle_C::StopEarthQuake()
{
	static auto fn = UObject::FindObject<UFunction>("Function AberrationDayCycle.AberrationDayCycle_C.StopEarthQuake");

	AAberrationDayCycle_C_StopEarthQuake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AberrationDayCycle.AberrationDayCycle_C.StartEarthQuake
// ()

void AAberrationDayCycle_C::StartEarthQuake()
{
	static auto fn = UObject::FindObject<UFunction>("Function AberrationDayCycle.AberrationDayCycle_C.StartEarthQuake");

	AAberrationDayCycle_C_StartEarthQuake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AberrationDayCycle.AberrationDayCycle_C.EarthQuake_DropItemAtLocation
// (NetReliable, Exec, Native, Event, Static, NetMulticast, Public, Private, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 AtLoc                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            BiomeArea                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                AtRot                          (Parm, ZeroConstructor, IsPlainOldData)

void AAberrationDayCycle_C::STATIC_EarthQuake_DropItemAtLocation(const struct FVector& AtLoc, int BiomeArea, const struct FRotator& AtRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function AberrationDayCycle.AberrationDayCycle_C.EarthQuake_DropItemAtLocation");

	AAberrationDayCycle_C_EarthQuake_DropItemAtLocation_Params params;
	params.AtLoc = AtLoc;
	params.BiomeArea = BiomeArea;
	params.AtRot = AtRot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AberrationDayCycle.AberrationDayCycle_C.ShooterCharacterPossessed
// ()
// Parameters:
// class AShooterCharacter**      TheShooterCharacter            (Parm, ZeroConstructor, IsPlainOldData)

void AAberrationDayCycle_C::ShooterCharacterPossessed(class AShooterCharacter** TheShooterCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function AberrationDayCycle.AberrationDayCycle_C.ShooterCharacterPossessed");

	AAberrationDayCycle_C_ShooterCharacterPossessed_Params params;
	params.TheShooterCharacter = TheShooterCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AberrationDayCycle.AberrationDayCycle_C.GetCurrentDaySpeeds
// (NetRequest, Event, Static, NetMulticast, Public, Private, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DaySpeed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          NightSpeed                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAberrationDayCycle_C::STATIC_GetCurrentDaySpeeds(float* DaySpeed, float* NightSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function AberrationDayCycle.AberrationDayCycle_C.GetCurrentDaySpeeds");

	AAberrationDayCycle_C_GetCurrentDaySpeeds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DaySpeed != nullptr)
		*DaySpeed = params.DaySpeed;
	if (NightSpeed != nullptr)
		*NightSpeed = params.NightSpeed;
}


// Function AberrationDayCycle.AberrationDayCycle_C.UserConstructionScript
// ()

void AAberrationDayCycle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AberrationDayCycle.AberrationDayCycle_C.UserConstructionScript");

	AAberrationDayCycle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AberrationDayCycle.AberrationDayCycle_C.ReceiveBeginPlay
// ()

void AAberrationDayCycle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AberrationDayCycle.AberrationDayCycle_C.ReceiveBeginPlay");

	AAberrationDayCycle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AberrationDayCycle.AberrationDayCycle_C.ExecuteUbergraph_AberrationDayCycle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAberrationDayCycle_C::ExecuteUbergraph_AberrationDayCycle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AberrationDayCycle.AberrationDayCycle_C.ExecuteUbergraph_AberrationDayCycle");

	AAberrationDayCycle_C_ExecuteUbergraph_AberrationDayCycle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
