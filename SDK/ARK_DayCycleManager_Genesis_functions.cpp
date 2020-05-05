// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DayCycleManager_Genesis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.Get Teleport Transfer World PP
// ()
// Parameters:
// class APostProcessVolume*      PP                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADayCycleManager_Genesis_C::Get_Teleport_Transfer_World_PP(class APostProcessVolume** PP)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.Get Teleport Transfer World PP");

	ADayCycleManager_Genesis_C_Get_Teleport_Transfer_World_PP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PP != nullptr)
		*PP = params.PP;
}


// Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.Get VR World PP
// ()
// Parameters:
// class APostProcessVolume*      PP                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADayCycleManager_Genesis_C::Get_VR_World_PP(class APostProcessVolume** PP)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.Get VR World PP");

	ADayCycleManager_Genesis_C_Get_VR_World_PP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PP != nullptr)
		*PP = params.PP;
}


// Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.BPAdjustTemperature
// ()
// Parameters:
// float*                         TemperatureIn                  (Parm, ZeroConstructor, IsPlainOldData)
// class ABiomeZoneVolume**       BiomeZoneVolume                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AtLocation                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class APrimalCharacter**       ForPrimalCharacter             (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADayCycleManager_Genesis_C::BPAdjustTemperature(float* TemperatureIn, class ABiomeZoneVolume** BiomeZoneVolume, class APrimalCharacter** ForPrimalCharacter, struct FVector* AtLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.BPAdjustTemperature");

	ADayCycleManager_Genesis_C_BPAdjustTemperature_Params params;
	params.TemperatureIn = TemperatureIn;
	params.BiomeZoneVolume = BiomeZoneVolume;
	params.ForPrimalCharacter = ForPrimalCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AtLocation != nullptr)
		*AtLocation = params.AtLocation;

	return params.ReturnValue;
}


// Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.CompareWeatherLocation
// ()
// Parameters:
// struct FVector                 StormLocaiton                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LocationToCompare              (Parm, ZeroConstructor, IsPlainOldData)
// float                          StormBaseRadius                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InStormRadius                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADayCycleManager_Genesis_C::CompareWeatherLocation(const struct FVector& StormLocaiton, const struct FVector& LocationToCompare, float StormBaseRadius, bool* InStormRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.CompareWeatherLocation");

	ADayCycleManager_Genesis_C_CompareWeatherLocation_Params params;
	params.StormLocaiton = StormLocaiton;
	params.LocationToCompare = LocationToCompare;
	params.StormBaseRadius = StormBaseRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InStormRadius != nullptr)
		*InStormRadius = params.InStormRadius;
}


// Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.IsLocationInWeatherEvent
// ()
// Parameters:
// bool                           Location                       (Parm, ZeroConstructor, IsPlainOldData)

void ADayCycleManager_Genesis_C::IsLocationInWeatherEvent(bool Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.IsLocationInWeatherEvent");

	ADayCycleManager_Genesis_C_IsLocationInWeatherEvent_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.IsRainingAtLocation
// ()
// Parameters:
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADayCycleManager_Genesis_C::IsRainingAtLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.IsRainingAtLocation");

	ADayCycleManager_Genesis_C_IsRainingAtLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.Earth Quake Drop Item at Location
// (NetReliable, NetRequest, Event, Public, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 AtLoc                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            BiomeArea                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                AtRot                          (Parm, ZeroConstructor, IsPlainOldData)

void ADayCycleManager_Genesis_C::Earth_Quake_Drop_Item_at_Location(const struct FVector& AtLoc, int BiomeArea, const struct FRotator& AtRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.Earth Quake Drop Item at Location");

	ADayCycleManager_Genesis_C_Earth_Quake_Drop_Item_at_Location_Params params;
	params.AtLoc = AtLoc;
	params.BiomeArea = BiomeArea;
	params.AtRot = AtRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.ManageStormVectors
// ()
// Parameters:
// TArray<struct FVector>         BiomeVectorArray               (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          ChanceToAddStorm               (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxNumStorms                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          BiomeXMin                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          BiomeXMax                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          BiomeYMin                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          BiomeYMax                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          StormRateOfTravel              (Parm, ZeroConstructor, IsPlainOldData)
// TArray<double>                 StormTimeArray                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          StormLifetime                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    SwampInfectedSwarms            (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ProcessSwampStorms             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           BiomeHasActiveStorm            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADayCycleManager_Genesis_C::ManageStormVectors(float ChanceToAddStorm, int MaxNumStorms, float BiomeXMin, float BiomeXMax, float BiomeYMin, float BiomeYMax, float StormRateOfTravel, float StormLifetime, bool ProcessSwampStorms, TArray<struct FVector>* BiomeVectorArray, TArray<double>* StormTimeArray, TArray<int>* SwampInfectedSwarms, bool* BiomeHasActiveStorm)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.ManageStormVectors");

	ADayCycleManager_Genesis_C_ManageStormVectors_Params params;
	params.ChanceToAddStorm = ChanceToAddStorm;
	params.MaxNumStorms = MaxNumStorms;
	params.BiomeXMin = BiomeXMin;
	params.BiomeXMax = BiomeXMax;
	params.BiomeYMin = BiomeYMin;
	params.BiomeYMax = BiomeYMax;
	params.StormRateOfTravel = StormRateOfTravel;
	params.StormLifetime = StormLifetime;
	params.ProcessSwampStorms = ProcessSwampStorms;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BiomeVectorArray != nullptr)
		*BiomeVectorArray = params.BiomeVectorArray;
	if (StormTimeArray != nullptr)
		*StormTimeArray = params.StormTimeArray;
	if (SwampInfectedSwarms != nullptr)
		*SwampInfectedSwarms = params.SwampInfectedSwarms;
	if (BiomeHasActiveStorm != nullptr)
		*BiomeHasActiveStorm = params.BiomeHasActiveStorm;
}


// Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.UserConstructionScript
// ()

void ADayCycleManager_Genesis_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.UserConstructionScript");

	ADayCycleManager_Genesis_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.UpdateAreaBuff
// ()

void ADayCycleManager_Genesis_C::UpdateAreaBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.UpdateAreaBuff");

	ADayCycleManager_Genesis_C_UpdateAreaBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.ReceiveBeginPlay
// ()

void ADayCycleManager_Genesis_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.ReceiveBeginPlay");

	ADayCycleManager_Genesis_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.ExecuteUbergraph_DayCycleManager_Genesis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADayCycleManager_Genesis_C::ExecuteUbergraph_DayCycleManager_Genesis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.ExecuteUbergraph_DayCycleManager_Genesis");

	ADayCycleManager_Genesis_C_ExecuteUbergraph_DayCycleManager_Genesis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.UpdateAreaBuffPlayerStatus__DelegateSignature
// ()
// Parameters:
// bool                           IsInCave                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsUnderwater                   (Parm, ZeroConstructor, IsPlainOldData)

void ADayCycleManager_Genesis_C::UpdateAreaBuffPlayerStatus__DelegateSignature(bool IsInCave, bool IsUnderwater)
{
	static auto fn = UObject::FindObject<UFunction>("Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.UpdateAreaBuffPlayerStatus__DelegateSignature");

	ADayCycleManager_Genesis_C_UpdateAreaBuffPlayerStatus__DelegateSignature_Params params;
	params.IsInCave = IsInCave;
	params.IsUnderwater = IsUnderwater;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
