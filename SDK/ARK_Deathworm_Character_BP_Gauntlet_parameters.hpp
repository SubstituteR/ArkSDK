#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Deathworm_Character_BP_Gauntlet_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Deathworm_Character_BP_Gauntlet.Deathworm_Character_BP_Gauntlet_C.UpdateBuriedVFX
struct ADeathworm_Character_BP_Gauntlet_C_UpdateBuriedVFX_Params
{
	struct FName                                       Notify;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deathworm_Character_BP_Gauntlet.Deathworm_Character_BP_Gauntlet_C.RefreshDeathwormState
struct ADeathworm_Character_BP_Gauntlet_C_RefreshDeathwormState_Params
{
};

// Function Deathworm_Character_BP_Gauntlet.Deathworm_Character_BP_Gauntlet_C.SetDefaultPopUpDistance
struct ADeathworm_Character_BP_Gauntlet_C_SetDefaultPopUpDistance_Params
{
};

// Function Deathworm_Character_BP_Gauntlet.Deathworm_Character_BP_Gauntlet_C.Pop Up
struct ADeathworm_Character_BP_Gauntlet_C_Pop_Up_Params
{
};

// Function Deathworm_Character_BP_Gauntlet.Deathworm_Character_BP_Gauntlet_C.BPTimerServer
struct ADeathworm_Character_BP_Gauntlet_C_BPTimerServer_Params
{
};

// Function Deathworm_Character_BP_Gauntlet.Deathworm_Character_BP_Gauntlet_C.UpdateUndergroundMesh
struct ADeathworm_Character_BP_Gauntlet_C_UpdateUndergroundMesh_Params
{
};

// Function Deathworm_Character_BP_Gauntlet.Deathworm_Character_BP_Gauntlet_C.OnRep_isUnderground
struct ADeathworm_Character_BP_Gauntlet_C_OnRep_isUnderground_Params
{
};

// Function Deathworm_Character_BP_Gauntlet.Deathworm_Character_BP_Gauntlet_C.BP_OnSetDeath
struct ADeathworm_Character_BP_Gauntlet_C_BP_OnSetDeath_Params
{
};

// Function Deathworm_Character_BP_Gauntlet.Deathworm_Character_BP_Gauntlet_C.DiveIn
struct ADeathworm_Character_BP_Gauntlet_C_DiveIn_Params
{
};

// Function Deathworm_Character_BP_Gauntlet.Deathworm_Character_BP_Gauntlet_C.BPOverrideCharacterParticle
struct ADeathworm_Character_BP_Gauntlet_C_BPOverrideCharacterParticle_Params
{
	class UParticleSystem**                            ParticleIn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Deathworm_Character_BP_Gauntlet.Deathworm_Character_BP_Gauntlet_C.UserConstructionScript
struct ADeathworm_Character_BP_Gauntlet_C_UserConstructionScript_Params
{
};

// Function Deathworm_Character_BP_Gauntlet.Deathworm_Character_BP_Gauntlet_C.ReceiveBeginPlay
struct ADeathworm_Character_BP_Gauntlet_C_ReceiveBeginPlay_Params
{
};

// Function Deathworm_Character_BP_Gauntlet.Deathworm_Character_BP_Gauntlet_C.BlueprintAnimNotifyCustomEvent
struct ADeathworm_Character_BP_Gauntlet_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     meshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deathworm_Character_BP_Gauntlet.Deathworm_Character_BP_Gauntlet_C.ExecuteUbergraph_Deathworm_Character_BP_Gauntlet
struct ADeathworm_Character_BP_Gauntlet_C_ExecuteUbergraph_Deathworm_Character_BP_Gauntlet_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
