#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_GravityWell_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_GravityWell.Buff_GravityWell_C.BuffTickServer
struct ABuff_GravityWell_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_GravityWell.Buff_GravityWell_C.SetupGravityForce
struct ABuff_GravityWell_C_SetupGravityForce_Params
{
	struct FVector                                     GravityCenter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StrengthMultiplier;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_GravityWell.Buff_GravityWell_C.UserConstructionScript
struct ABuff_GravityWell_C_UserConstructionScript_Params
{
};

// Function Buff_GravityWell.Buff_GravityWell_C.ExecuteUbergraph_Buff_GravityWell
struct ABuff_GravityWell_C_ExecuteUbergraph_Buff_GravityWell_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
