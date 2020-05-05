// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_RacePowerUp_Speed_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C.InitRacePowerUp
// ()
// Parameters:
// class AMissionType_Race_C**    FromRaceMission                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RacePowerUp_Speed_C::InitRacePowerUp(class AMissionType_Race_C** FromRaceMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C.InitRacePowerUp");

	ABuff_RacePowerUp_Speed_C_InitRacePowerUp_Params params;
	params.FromRaceMission = FromRaceMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RacePowerUp_Speed_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C.BPSetupForInstigator");

	ABuff_RacePowerUp_Speed_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RacePowerUp_Speed_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C.BuffTickClient");

	ABuff_RacePowerUp_Speed_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C.RotateOwnerVelocityWithRaceSpline
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RacePowerUp_Speed_C::RotateOwnerVelocityWithRaceSpline(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C.RotateOwnerVelocityWithRaceSpline");

	ABuff_RacePowerUp_Speed_C_RotateOwnerVelocityWithRaceSpline_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C.BP_ModifyCharacterFOV
// ()
// Parameters:
// float*                         inFOV                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_RacePowerUp_Speed_C::BP_ModifyCharacterFOV(float* inFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C.BP_ModifyCharacterFOV");

	ABuff_RacePowerUp_Speed_C_BP_ModifyCharacterFOV_Params params;
	params.inFOV = inFOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RacePowerUp_Speed_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C.BuffTickServer");

	ABuff_RacePowerUp_Speed_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C.DoSpeedBoostVelocityUpdate
// ()

void ABuff_RacePowerUp_Speed_C::DoSpeedBoostVelocityUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C.DoSpeedBoostVelocityUpdate");

	ABuff_RacePowerUp_Speed_C_DoSpeedBoostVelocityUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C.SpawnBoostStartFX
// ()

void ABuff_RacePowerUp_Speed_C::SpawnBoostStartFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C.SpawnBoostStartFX");

	ABuff_RacePowerUp_Speed_C_SpawnBoostStartFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C.UserConstructionScript
// ()

void ABuff_RacePowerUp_Speed_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C.UserConstructionScript");

	ABuff_RacePowerUp_Speed_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C.ExecuteUbergraph_Buff_RacePowerUp_Speed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RacePowerUp_Speed_C::ExecuteUbergraph_Buff_RacePowerUp_Speed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C.ExecuteUbergraph_Buff_RacePowerUp_Speed");

	ABuff_RacePowerUp_Speed_C_ExecuteUbergraph_Buff_RacePowerUp_Speed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
