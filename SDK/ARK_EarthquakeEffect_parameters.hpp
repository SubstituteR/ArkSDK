#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EarthquakeEffect_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EarthquakeEffect.EarthquakeEffect_C.Get Particle System
struct AEarthquakeEffect_C_Get_Particle_System_Params
{
	TEnumAsByte<EarthquakeEffectSurfaceType>           Surface;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBiomeZone>                            Biome;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Earthquake_Strength;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Particles;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EarthquakeEffect.EarthquakeEffect_C.NormalToSurfaceType
struct AEarthquakeEffect_C_NormalToSurfaceType_Params
{
	struct FVector                                     Normal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EarthquakeEffectSurfaceType>           Surface_Type;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EarthquakeEffect.EarthquakeEffect_C.UserConstructionScript
struct AEarthquakeEffect_C_UserConstructionScript_Params
{
};

// Function EarthquakeEffect.EarthquakeEffect_C.ReceiveBeginPlay
struct AEarthquakeEffect_C_ReceiveBeginPlay_Params
{
};

// Function EarthquakeEffect.EarthquakeEffect_C.BndEvt__EffectOverlapCheck_K2Node_ComponentBoundEvent_180_ComponentBeginOverlapSignature__DelegateSignature
struct AEarthquakeEffect_C_BndEvt__EffectOverlapCheck_K2Node_ComponentBoundEvent_180_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function EarthquakeEffect.EarthquakeEffect_C.InitSpawning
struct AEarthquakeEffect_C_InitSpawning_Params
{
	float                                              MinDelay;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxDelay;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EarthquakeEffect.EarthquakeEffect_C.ExecuteUbergraph_EarthquakeEffect
struct AEarthquakeEffect_C_ExecuteUbergraph_EarthquakeEffect_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
