// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_AberrationPlayerEarthQuake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AberrationPlayerEarthQuake_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.BPActivated");

	ABuff_AberrationPlayerEarthQuake_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.Actor Matches Class
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          Classes                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Got_Match                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_AberrationPlayerEarthQuake_C::Actor_Matches_Class(class AActor* Actor, TArray<class UClass*>* Classes, bool* Got_Match)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.Actor Matches Class");

	ABuff_AberrationPlayerEarthQuake_C_Actor_Matches_Class_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Classes != nullptr)
		*Classes = params.Classes;
	if (Got_Match != nullptr)
		*Got_Match = params.Got_Match;
}


// Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.Find Vertical Midpoint
// (NetRequest, Exec, Event, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// struct FVector                 BaseLocation                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Max_Distance                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 MidPoint                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_AberrationPlayerEarthQuake_C::Find_Vertical_Midpoint(const struct FVector& BaseLocation, float Max_Distance, struct FVector* MidPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.Find Vertical Midpoint");

	ABuff_AberrationPlayerEarthQuake_C_Find_Vertical_Midpoint_Params params;
	params.BaseLocation = BaseLocation;
	params.Max_Distance = Max_Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MidPoint != nullptr)
		*MidPoint = params.MidPoint;
}


// Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.BuffTickClient
// (Native, Protected, Delegate, NetServer, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AberrationPlayerEarthQuake_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.BuffTickClient");

	ABuff_AberrationPlayerEarthQuake_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.Get Nearby World Geometry Hits
// ()
// Parameters:
// struct FVector                 fromLoc                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          traceDist                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FoundPoint                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>      Hits                           (Parm, OutParm, ZeroConstructor)

void ABuff_AberrationPlayerEarthQuake_C::Get_Nearby_World_Geometry_Hits(const struct FVector& fromLoc, float traceDist, bool* FoundPoint, TArray<struct FHitResult>* Hits)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.Get Nearby World Geometry Hits");

	ABuff_AberrationPlayerEarthQuake_C_Get_Nearby_World_Geometry_Hits_Params params;
	params.fromLoc = fromLoc;
	params.traceDist = traceDist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundPoint != nullptr)
		*FoundPoint = params.FoundPoint;
	if (Hits != nullptr)
		*Hits = params.Hits;
}


// Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.CheckForItemDrop
// (NetRequest, Event, NetResponse, Protected, Delegate, NetServer, BlueprintCallable, BlueprintEvent, NetValidate)

void ABuff_AberrationPlayerEarthQuake_C::CheckForItemDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.CheckForItemDrop");

	ABuff_AberrationPlayerEarthQuake_C_CheckForItemDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AberrationPlayerEarthQuake_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.BuffTickServer");

	ABuff_AberrationPlayerEarthQuake_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.UserConstructionScript
// ()

void ABuff_AberrationPlayerEarthQuake_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.UserConstructionScript");

	ABuff_AberrationPlayerEarthQuake_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.NetSpawnedItemAtLoc
// ()
// Parameters:
// struct FVector                 AtLoc                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                AtRot                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AberrationPlayerEarthQuake_C::NetSpawnedItemAtLoc(const struct FVector& AtLoc, const struct FRotator& AtRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.NetSpawnedItemAtLoc");

	ABuff_AberrationPlayerEarthQuake_C_NetSpawnedItemAtLoc_Params params;
	params.AtLoc = AtLoc;
	params.AtRot = AtRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.CharacterEarthquakeImpulse_SendToServer
// ()
// Parameters:
// struct FVector                 Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FlinchAnimOnly                 (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AberrationPlayerEarthQuake_C::CharacterEarthquakeImpulse_SendToServer(const struct FVector& Impulse, bool FlinchAnimOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.CharacterEarthquakeImpulse_SendToServer");

	ABuff_AberrationPlayerEarthQuake_C_CharacterEarthquakeImpulse_SendToServer_Params params;
	params.Impulse = Impulse;
	params.FlinchAnimOnly = FlinchAnimOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.CharacterEarthquakeImpulse_ClientStart
// ()
// Parameters:
// struct FVector                 Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FlinchAnimOnly                 (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AberrationPlayerEarthQuake_C::CharacterEarthquakeImpulse_ClientStart(const struct FVector& Impulse, bool FlinchAnimOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.CharacterEarthquakeImpulse_ClientStart");

	ABuff_AberrationPlayerEarthQuake_C_CharacterEarthquakeImpulse_ClientStart_Params params;
	params.Impulse = Impulse;
	params.FlinchAnimOnly = FlinchAnimOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.PlayFlinchAnims
// ()

void ABuff_AberrationPlayerEarthQuake_C::PlayFlinchAnims()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.PlayFlinchAnims");

	ABuff_AberrationPlayerEarthQuake_C_PlayFlinchAnims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.OnEarthquakeStarted
// ()

void ABuff_AberrationPlayerEarthQuake_C::OnEarthquakeStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.OnEarthquakeStarted");

	ABuff_AberrationPlayerEarthQuake_C_OnEarthquakeStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.ExecuteUbergraph_Buff_AberrationPlayerEarthQuake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AberrationPlayerEarthQuake_C::ExecuteUbergraph_Buff_AberrationPlayerEarthQuake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.ExecuteUbergraph_Buff_AberrationPlayerEarthQuake");

	ABuff_AberrationPlayerEarthQuake_C_ExecuteUbergraph_Buff_AberrationPlayerEarthQuake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
