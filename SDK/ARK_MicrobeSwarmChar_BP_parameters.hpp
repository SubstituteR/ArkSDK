#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MicrobeSwarmChar_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.Can Damage Victim in Radius
struct AMicrobeSwarmChar_BP_C_Can_Damage_Victim_in_Radius_Params
{
	class AActor**                                     Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanDamage;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.BlueprintOverrideWantsToRun
struct AMicrobeSwarmChar_BP_C_BlueprintOverrideWantsToRun_Params
{
	bool*                                              bInputWantsToRun;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.BPOverrideFloatingHUDLocation
struct AMicrobeSwarmChar_BP_C_BPOverrideFloatingHUDLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.KillRemainingBoids
struct AMicrobeSwarmChar_BP_C_KillRemainingBoids_Params
{
};

// Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.UpdateDeadBoids
struct AMicrobeSwarmChar_BP_C_UpdateDeadBoids_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.Kill Boid
struct AMicrobeSwarmChar_BP_C_Kill_Boid_Params
{
	class UStaticMeshComponent**                       StaticMeshComp;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.DestroyTarget
struct AMicrobeSwarmChar_BP_C_DestroyTarget_Params
{
};

// Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.UserConstructionScript
struct AMicrobeSwarmChar_BP_C_UserConstructionScript_Params
{
};

// Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.ReceiveTick
struct AMicrobeSwarmChar_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_234_PhysicsVolumeChanged__DelegateSignature
struct AMicrobeSwarmChar_BP_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_234_PhysicsVolumeChanged__DelegateSignature_Params
{
	class APhysicsVolume*                              NewVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MicrobeSwarmChar_BP.MicrobeSwarmChar_BP_C.ExecuteUbergraph_MicrobeSwarmChar_BP
struct AMicrobeSwarmChar_BP_C_ExecuteUbergraph_MicrobeSwarmChar_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
