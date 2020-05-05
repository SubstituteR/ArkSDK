#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_AberrationPlayerEarthQuake_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.BPActivated
struct ABuff_AberrationPlayerEarthQuake_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.Actor Matches Class
struct ABuff_AberrationPlayerEarthQuake_C_Actor_Matches_Class_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              Classes;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Got_Match;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.Find Vertical Midpoint
struct ABuff_AberrationPlayerEarthQuake_C_Find_Vertical_Midpoint_Params
{
	struct FVector                                     BaseLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max_Distance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MidPoint;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.BuffTickClient
struct ABuff_AberrationPlayerEarthQuake_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.Get Nearby World Geometry Hits
struct ABuff_AberrationPlayerEarthQuake_C_Get_Nearby_World_Geometry_Hits_Params
{
	struct FVector                                     fromLoc;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              traceDist;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FoundPoint;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          Hits;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.CheckForItemDrop
struct ABuff_AberrationPlayerEarthQuake_C_CheckForItemDrop_Params
{
};

// Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.BuffTickServer
struct ABuff_AberrationPlayerEarthQuake_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.UserConstructionScript
struct ABuff_AberrationPlayerEarthQuake_C_UserConstructionScript_Params
{
};

// Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.NetSpawnedItemAtLoc
struct ABuff_AberrationPlayerEarthQuake_C_NetSpawnedItemAtLoc_Params
{
	struct FVector                                     AtLoc;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AtRot;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.CharacterEarthquakeImpulse_SendToServer
struct ABuff_AberrationPlayerEarthQuake_C_CharacterEarthquakeImpulse_SendToServer_Params
{
	struct FVector                                     Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FlinchAnimOnly;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.CharacterEarthquakeImpulse_ClientStart
struct ABuff_AberrationPlayerEarthQuake_C_CharacterEarthquakeImpulse_ClientStart_Params
{
	struct FVector                                     Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FlinchAnimOnly;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.PlayFlinchAnims
struct ABuff_AberrationPlayerEarthQuake_C_PlayFlinchAnims_Params
{
};

// Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.OnEarthquakeStarted
struct ABuff_AberrationPlayerEarthQuake_C_OnEarthquakeStarted_Params
{
};

// Function Buff_AberrationPlayerEarthQuake.Buff_AberrationPlayerEarthQuake_C.ExecuteUbergraph_Buff_AberrationPlayerEarthQuake
struct ABuff_AberrationPlayerEarthQuake_C_ExecuteUbergraph_Buff_AberrationPlayerEarthQuake_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
