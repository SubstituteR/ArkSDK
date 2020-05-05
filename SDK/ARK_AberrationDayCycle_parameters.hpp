#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_AberrationDayCycle_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AberrationDayCycle.AberrationDayCycle_C.BPOverrideGameStateMatineePlayRate
struct AAberrationDayCycle_C_BPOverrideGameStateMatineePlayRate_Params
{
	class AActor**                                     forMatinee;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AberrationDayCycle.AberrationDayCycle_C.GetDayNumberString
struct AAberrationDayCycle_C_GetDayNumberString_Params
{
	bool*                                              bIncludeDayString;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AberrationDayCycle.AberrationDayCycle_C.GetWeatherEventWarning
struct AAberrationDayCycle_C_GetWeatherEventWarning_Params
{
	int                                                WeatherEventWarningType;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AberrationDayCycle.AberrationDayCycle_C.CalcMiniMapCoord
struct AAberrationDayCycle_C_CalcMiniMapCoord_Params
{
	struct FVector                                     inVec;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutLattitude;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutLongitude;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AberrationDayCycle.AberrationDayCycle_C.HandleGrappleHookImpacted
struct AAberrationDayCycle_C_HandleGrappleHookImpacted_Params
{
	class APrimalProjectileGrapplingHook**             GrapHookProj;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
};

// Function AberrationDayCycle.AberrationDayCycle_C.ShooterCharacterSpawned
struct AAberrationDayCycle_C_ShooterCharacterSpawned_Params
{
	class AShooterCharacter**                          TheShooterCharacter;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AberrationDayCycle.AberrationDayCycle_C.StopEarthQuake
struct AAberrationDayCycle_C_StopEarthQuake_Params
{
};

// Function AberrationDayCycle.AberrationDayCycle_C.StartEarthQuake
struct AAberrationDayCycle_C_StartEarthQuake_Params
{
};

// Function AberrationDayCycle.AberrationDayCycle_C.EarthQuake_DropItemAtLocation
struct AAberrationDayCycle_C_EarthQuake_DropItemAtLocation_Params
{
	struct FVector                                     AtLoc;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BiomeArea;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AtRot;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AberrationDayCycle.AberrationDayCycle_C.ShooterCharacterPossessed
struct AAberrationDayCycle_C_ShooterCharacterPossessed_Params
{
	class AShooterCharacter**                          TheShooterCharacter;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AberrationDayCycle.AberrationDayCycle_C.GetCurrentDaySpeeds
struct AAberrationDayCycle_C_GetCurrentDaySpeeds_Params
{
	float                                              DaySpeed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              NightSpeed;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AberrationDayCycle.AberrationDayCycle_C.UserConstructionScript
struct AAberrationDayCycle_C_UserConstructionScript_Params
{
};

// Function AberrationDayCycle.AberrationDayCycle_C.ReceiveBeginPlay
struct AAberrationDayCycle_C_ReceiveBeginPlay_Params
{
};

// Function AberrationDayCycle.AberrationDayCycle_C.ExecuteUbergraph_AberrationDayCycle
struct AAberrationDayCycle_C_ExecuteUbergraph_AberrationDayCycle_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
