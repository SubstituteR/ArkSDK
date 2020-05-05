#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DayCycleManager_Genesis_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.Get Teleport Transfer World PP
struct ADayCycleManager_Genesis_C_Get_Teleport_Transfer_World_PP_Params
{
	class APostProcessVolume*                          PP;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.Get VR World PP
struct ADayCycleManager_Genesis_C_Get_VR_World_PP_Params
{
	class APostProcessVolume*                          PP;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.BPAdjustTemperature
struct ADayCycleManager_Genesis_C_BPAdjustTemperature_Params
{
	float*                                             TemperatureIn;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class ABiomeZoneVolume**                           BiomeZoneVolume;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AtLocation;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class APrimalCharacter**                           ForPrimalCharacter;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.CompareWeatherLocation
struct ADayCycleManager_Genesis_C_CompareWeatherLocation_Params
{
	struct FVector                                     StormLocaiton;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationToCompare;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StormBaseRadius;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InStormRadius;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.IsLocationInWeatherEvent
struct ADayCycleManager_Genesis_C_IsLocationInWeatherEvent_Params
{
	bool                                               Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.IsRainingAtLocation
struct ADayCycleManager_Genesis_C_IsRainingAtLocation_Params
{
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.Earth Quake Drop Item at Location
struct ADayCycleManager_Genesis_C_Earth_Quake_Drop_Item_at_Location_Params
{
	struct FVector                                     AtLoc;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BiomeArea;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AtRot;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.ManageStormVectors
struct ADayCycleManager_Genesis_C_ManageStormVectors_Params
{
	TArray<struct FVector>                             BiomeVectorArray;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              ChanceToAddStorm;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumStorms;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BiomeXMin;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BiomeXMax;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BiomeYMin;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BiomeYMax;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StormRateOfTravel;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<double>                                     StormTimeArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              StormLifetime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        SwampInfectedSwarms;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ProcessSwampStorms;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BiomeHasActiveStorm;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.UserConstructionScript
struct ADayCycleManager_Genesis_C_UserConstructionScript_Params
{
};

// Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.UpdateAreaBuff
struct ADayCycleManager_Genesis_C_UpdateAreaBuff_Params
{
};

// Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.ReceiveBeginPlay
struct ADayCycleManager_Genesis_C_ReceiveBeginPlay_Params
{
};

// Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.ExecuteUbergraph_DayCycleManager_Genesis
struct ADayCycleManager_Genesis_C_ExecuteUbergraph_DayCycleManager_Genesis_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DayCycleManager_Genesis.DayCycleManager_Genesis_C.UpdateAreaBuffPlayerStatus__DelegateSignature
struct ADayCycleManager_Genesis_C_UpdateAreaBuffPlayerStatus__DelegateSignature_Params
{
	bool                                               IsInCave;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUnderwater;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
