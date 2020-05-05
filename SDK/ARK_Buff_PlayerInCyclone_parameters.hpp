#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_PlayerInCyclone_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.BPSetupForInstigator
struct ABuff_PlayerInCyclone_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.GetTangentDirection
struct ABuff_PlayerInCyclone_C_GetTangentDirection_Params
{
	struct FVector                                     TangentDirection;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.UpdateInstigatorState
struct ABuff_PlayerInCyclone_C_UpdateInstigatorState_Params
{
};

// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.BP_OverrideMoveForwardInput
struct ABuff_PlayerInCyclone_C_BP_OverrideMoveForwardInput_Params
{
	float*                                             CurrentInput;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.BP_OverrideMoveRightInput
struct ABuff_PlayerInCyclone_C_BP_OverrideMoveRightInput_Params
{
	float*                                             CurrentInput;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.OnMovement Input
struct ABuff_PlayerInCyclone_C_OnMovement_Input_Params
{
	bool                                               MoveForward;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.OnRep_InputCount
struct ABuff_PlayerInCyclone_C_OnRep_InputCount_Params
{
};

// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.BP_OverrideCharacterFlyingVelocity
struct ABuff_PlayerInCyclone_C_BP_OverrideCharacterFlyingVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.OverrideVelocity
struct ABuff_PlayerInCyclone_C_OverrideVelocity_Params
{
	struct FVector                                     InVelocity;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutVelocity;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.BPDeactivated
struct ABuff_PlayerInCyclone_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.BPBPGetCameraShakeScalar
struct ABuff_PlayerInCyclone_C_BPBPGetCameraShakeScalar_Params
{
	class UClass**                                     currentShake;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             currentScale;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.BPCheckPreventInput
struct ABuff_PlayerInCyclone_C_BPCheckPreventInput_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.BuffTickServer
struct ABuff_PlayerInCyclone_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.BP_OverrideCharacterSwimmingVelocity
struct ABuff_PlayerInCyclone_C_BP_OverrideCharacterSwimmingVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              FluidFriction;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              NetBuoyancy;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.BuffTickClient
struct ABuff_PlayerInCyclone_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.UserConstructionScript
struct ABuff_PlayerInCyclone_C_UserConstructionScript_Params
{
};

// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.Multi on Input
struct ABuff_PlayerInCyclone_C_Multi_on_Input_Params
{
	int                                                Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PlayerInCyclone.Buff_PlayerInCyclone_C.ExecuteUbergraph_Buff_PlayerInCyclone
struct ABuff_PlayerInCyclone_C_ExecuteUbergraph_Buff_PlayerInCyclone_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
