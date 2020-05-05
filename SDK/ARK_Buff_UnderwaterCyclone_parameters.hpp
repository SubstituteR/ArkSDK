#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_UnderwaterCyclone_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.GetPullingRadiusAtLocation
struct ABuff_UnderwaterCyclone_C_GetPullingRadiusAtLocation_Params
{
	struct FVector                                     Loactaion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.GetPullingSpeedAtLocation
struct ABuff_UnderwaterCyclone_C_GetPullingSpeedAtLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.GetStateAtLocation
struct ABuff_UnderwaterCyclone_C_GetStateAtLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InsideCyclone;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               PullingPlayer;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.Get Affect Radius at Location
struct ABuff_UnderwaterCyclone_C_Get_Affect_Radius_at_Location_Params
{
	struct FVector                                     InLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.GetCycloneCenterLocation
struct ABuff_UnderwaterCyclone_C_GetCycloneCenterLocation_Params
{
	struct FVector                                     CenterLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.BPDeactivated
struct ABuff_UnderwaterCyclone_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.OnRep_CycloneForceRadius
struct ABuff_UnderwaterCyclone_C_OnRep_CycloneForceRadius_Params
{
};

// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.OnRep_CycloneHeight
struct ABuff_UnderwaterCyclone_C_OnRep_CycloneHeight_Params
{
};

// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.InitializeCyclone
struct ABuff_UnderwaterCyclone_C_InitializeCyclone_Params
{
	float                                              Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxExtend;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RadiusTop;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideRadius;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ABuff_CycloneBox_C*                          CycloneBox;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.Get Sea ZAt Location
struct ABuff_UnderwaterCyclone_C_Get_Sea_ZAt_Location_Params
{
	struct FVector2D                                   AtLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ZAtLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.Apply Force
struct ABuff_UnderwaterCyclone_C_Apply_Force_Params
{
};

// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.BuffTickClient
struct ABuff_UnderwaterCyclone_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.BuffTickServer
struct ABuff_UnderwaterCyclone_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.ReceiveBeginPlay
struct ABuff_UnderwaterCyclone_C_ReceiveBeginPlay_Params
{
};

// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.UserConstructionScript
struct ABuff_UnderwaterCyclone_C_UserConstructionScript_Params
{
};

// Function Buff_UnderwaterCyclone.Buff_UnderwaterCyclone_C.ExecuteUbergraph_Buff_UnderwaterCyclone
struct ABuff_UnderwaterCyclone_C_ExecuteUbergraph_Buff_UnderwaterCyclone_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
