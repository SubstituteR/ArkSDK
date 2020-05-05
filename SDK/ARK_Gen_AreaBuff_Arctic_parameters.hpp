#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Gen_AreaBuff_Arctic_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.BuffTickClient
struct AGen_AreaBuff_Arctic_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.BP_OverrideCharacterWalkingVelocity
struct AGen_AreaBuff_Arctic_C_BP_OverrideCharacterWalkingVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Friction;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.BPOverrideCharacterNewFallVelocity
struct AGen_AreaBuff_Arctic_C_BPOverrideCharacterNewFallVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.PlayWindImpact
struct AGen_AreaBuff_Arctic_C_PlayWindImpact_Params
{
	struct FVector                                     Dir;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.PlayHailImpact
struct AGen_AreaBuff_Arctic_C_PlayHailImpact_Params
{
};

// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.CheckSnowGear
struct AGen_AreaBuff_Arctic_C_CheckSnowGear_Params
{
	bool                                               Has_Snow_Gear;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.BuffTickServer
struct AGen_AreaBuff_Arctic_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.GetWorldTempAtLocation
struct AGen_AreaBuff_Arctic_C_GetWorldTempAtLocation_Params
{
	float                                              WorldTemp;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.ShouldApplyFrozen
struct AGen_AreaBuff_Arctic_C_ShouldApplyFrozen_Params
{
	bool                                               ShouldFreeze;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.SetProperEmitter
struct AGen_AreaBuff_Arctic_C_SetProperEmitter_Params
{
	bool                                               Should_Hail;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.ShouldHail
struct AGen_AreaBuff_Arctic_C_ShouldHail_Params
{
	bool                                               ShouldHail;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.LocalEffects
struct AGen_AreaBuff_Arctic_C_LocalEffects_Params
{
};

// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.CalculateLocalStormIntensityFromDCM
struct AGen_AreaBuff_Arctic_C_CalculateLocalStormIntensityFromDCM_Params
{
	float                                              LocalIntensity;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocalDirection;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.UserConstructionScript
struct AGen_AreaBuff_Arctic_C_UserConstructionScript_Params
{
};

// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.Timeline_0__FinishedFunc
struct AGen_AreaBuff_Arctic_C_Timeline_0__FinishedFunc_Params
{
};

// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.Timeline_0__UpdateFunc
struct AGen_AreaBuff_Arctic_C_Timeline_0__UpdateFunc_Params
{
};

// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.Timeline_1__FinishedFunc
struct AGen_AreaBuff_Arctic_C_Timeline_1__FinishedFunc_Params
{
};

// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.Timeline_1__UpdateFunc
struct AGen_AreaBuff_Arctic_C_Timeline_1__UpdateFunc_Params
{
};

// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.LerpVisuals
struct AGen_AreaBuff_Arctic_C_LerpVisuals_Params
{
};

// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.ClientPlayHailImpact
struct AGen_AreaBuff_Arctic_C_ClientPlayHailImpact_Params
{
};

// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.ClientPlayWindImpact
struct AGen_AreaBuff_Arctic_C_ClientPlayWindImpact_Params
{
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.fade out snow audio
struct AGen_AreaBuff_Arctic_C_fade_out_snow_audio_Params
{
};

// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.fade in snow audio
struct AGen_AreaBuff_Arctic_C_fade_in_snow_audio_Params
{
};

// Function Gen_AreaBuff_Arctic.Gen_AreaBuff_Arctic_C.ExecuteUbergraph_Gen_AreaBuff_Arctic
struct AGen_AreaBuff_Arctic_C_ExecuteUbergraph_Gen_AreaBuff_Arctic_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
