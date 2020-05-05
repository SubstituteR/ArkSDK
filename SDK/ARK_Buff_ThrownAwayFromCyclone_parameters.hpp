#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_ThrownAwayFromCyclone_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ThrownAwayFromCyclone.Buff_ThrownAwayFromCyclone_C.StopBySomething
struct ABuff_ThrownAwayFromCyclone_C_StopBySomething_Params
{
};

// Function Buff_ThrownAwayFromCyclone.Buff_ThrownAwayFromCyclone_C.BP_OverrideCharacterSwimmingVelocity
struct ABuff_ThrownAwayFromCyclone_C_BP_OverrideCharacterSwimmingVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              FluidFriction;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              NetBuoyancy;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_ThrownAwayFromCyclone.Buff_ThrownAwayFromCyclone_C.BP_OverrideCharacterFlyingVelocity
struct ABuff_ThrownAwayFromCyclone_C_BP_OverrideCharacterFlyingVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_ThrownAwayFromCyclone.Buff_ThrownAwayFromCyclone_C.BP_OverrideMoveForwardInput
struct ABuff_ThrownAwayFromCyclone_C_BP_OverrideMoveForwardInput_Params
{
	float*                                             CurrentInput;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_ThrownAwayFromCyclone.Buff_ThrownAwayFromCyclone_C.BuffTickServer
struct ABuff_ThrownAwayFromCyclone_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ThrownAwayFromCyclone.Buff_ThrownAwayFromCyclone_C.UserConstructionScript
struct ABuff_ThrownAwayFromCyclone_C_UserConstructionScript_Params
{
};

// Function Buff_ThrownAwayFromCyclone.Buff_ThrownAwayFromCyclone_C.ExecuteUbergraph_Buff_ThrownAwayFromCyclone
struct ABuff_ThrownAwayFromCyclone_C_ExecuteUbergraph_Buff_ThrownAwayFromCyclone_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
