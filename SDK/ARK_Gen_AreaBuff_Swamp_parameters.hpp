#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Gen_AreaBuff_Swamp_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.BuffTickServer
struct AGen_AreaBuff_Swamp_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.BuffTickClient
struct AGen_AreaBuff_Swamp_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.LocalEffects
struct AGen_AreaBuff_Swamp_C_LocalEffects_Params
{
};

// Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.Get Swamp Storm Intensity from DCM
struct AGen_AreaBuff_Swamp_C_Get_Swamp_Storm_Intensity_from_DCM_Params
{
	float                                              LocalIntensity;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.UserConstructionScript
struct AGen_AreaBuff_Swamp_C_UserConstructionScript_Params
{
};

// Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.Timeline_0__FinishedFunc
struct AGen_AreaBuff_Swamp_C_Timeline_0__FinishedFunc_Params
{
};

// Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.Timeline_0__UpdateFunc
struct AGen_AreaBuff_Swamp_C_Timeline_0__UpdateFunc_Params
{
};

// Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.Timeline_1__FinishedFunc
struct AGen_AreaBuff_Swamp_C_Timeline_1__FinishedFunc_Params
{
};

// Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.Timeline_1__UpdateFunc
struct AGen_AreaBuff_Swamp_C_Timeline_1__UpdateFunc_Params
{
};

// Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.LerpVisuals
struct AGen_AreaBuff_Swamp_C_LerpVisuals_Params
{
};

// Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.fade out rain audio
struct AGen_AreaBuff_Swamp_C_fade_out_rain_audio_Params
{
};

// Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.fade in rain audio
struct AGen_AreaBuff_Swamp_C_fade_in_rain_audio_Params
{
};

// Function Gen_AreaBuff_Swamp.Gen_AreaBuff_Swamp_C.ExecuteUbergraph_Gen_AreaBuff_Swamp
struct AGen_AreaBuff_Swamp_C_ExecuteUbergraph_Gen_AreaBuff_Swamp_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
