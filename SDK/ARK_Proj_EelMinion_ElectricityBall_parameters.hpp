#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Proj_EelMinion_ElectricityBall_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_EelMinion_ElectricityBall.Proj_EelMinion_ElectricityBall_C.BPPostInitializeComponents
struct AProj_EelMinion_ElectricityBall_C_BPPostInitializeComponents_Params
{
};

// Function Proj_EelMinion_ElectricityBall.Proj_EelMinion_ElectricityBall_C.UpdateBeam
struct AProj_EelMinion_ElectricityBall_C_UpdateBeam_Params
{
	TArray<class AActor*>                              actors;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Proj_EelMinion_ElectricityBall.Proj_EelMinion_ElectricityBall_C.ReceiveTick
struct AProj_EelMinion_ElectricityBall_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_EelMinion_ElectricityBall.Proj_EelMinion_ElectricityBall_C.UserConstructionScript
struct AProj_EelMinion_ElectricityBall_C_UserConstructionScript_Params
{
};

// Function Proj_EelMinion_ElectricityBall.Proj_EelMinion_ElectricityBall_C.ReceiveBeginPlay
struct AProj_EelMinion_ElectricityBall_C_ReceiveBeginPlay_Params
{
};

// Function Proj_EelMinion_ElectricityBall.Proj_EelMinion_ElectricityBall_C.ExecuteUbergraph_Proj_EelMinion_ElectricityBall
struct AProj_EelMinion_ElectricityBall_C_ExecuteUbergraph_Proj_EelMinion_ElectricityBall_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
