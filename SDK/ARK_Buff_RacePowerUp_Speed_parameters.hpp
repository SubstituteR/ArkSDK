#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_RacePowerUp_Speed_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C.InitRacePowerUp
struct ABuff_RacePowerUp_Speed_C_InitRacePowerUp_Params
{
	class AMissionType_Race_C**                        FromRaceMission;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C.BPSetupForInstigator
struct ABuff_RacePowerUp_Speed_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C.BuffTickClient
struct ABuff_RacePowerUp_Speed_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C.RotateOwnerVelocityWithRaceSpline
struct ABuff_RacePowerUp_Speed_C_RotateOwnerVelocityWithRaceSpline_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C.BP_ModifyCharacterFOV
struct ABuff_RacePowerUp_Speed_C_BP_ModifyCharacterFOV_Params
{
	float*                                             inFOV;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C.BuffTickServer
struct ABuff_RacePowerUp_Speed_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C.DoSpeedBoostVelocityUpdate
struct ABuff_RacePowerUp_Speed_C_DoSpeedBoostVelocityUpdate_Params
{
};

// Function Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C.SpawnBoostStartFX
struct ABuff_RacePowerUp_Speed_C_SpawnBoostStartFX_Params
{
};

// Function Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C.UserConstructionScript
struct ABuff_RacePowerUp_Speed_C_UserConstructionScript_Params
{
};

// Function Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C.ExecuteUbergraph_Buff_RacePowerUp_Speed
struct ABuff_RacePowerUp_Speed_C_ExecuteUbergraph_Buff_RacePowerUp_Speed_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
