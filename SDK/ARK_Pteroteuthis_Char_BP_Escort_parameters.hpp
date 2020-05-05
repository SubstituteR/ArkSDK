#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Pteroteuthis_Char_BP_Escort_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.ReceiveBeginPlay
struct APteroteuthis_Char_BP_Escort_C_ReceiveBeginPlay_Params
{
};

// Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.SetNavLoc
struct APteroteuthis_Char_BP_Escort_C_SetNavLoc_Params
{
};

// Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.OverrideRandomWanderLocation
struct APteroteuthis_Char_BP_Escort_C_OverrideRandomWanderLocation_Params
{
	struct FVector                                     originalDestination;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     inVec;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.BPTimerServer
struct APteroteuthis_Char_BP_Escort_C_BPTimerServer_Params
{
};

// Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.BPAdjustDamage
struct APteroteuthis_Char_BP_Escort_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.BlueprintCanRiderAttack
struct APteroteuthis_Char_BP_Escort_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.BlueprintCanAttack
struct APteroteuthis_Char_BP_Escort_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.BPDidClearCarriedCharacter
struct APteroteuthis_Char_BP_Escort_C_BPDidClearCarriedCharacter_Params
{
	class APrimalCharacter**                           PreviousCarriedCharacter;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.BPDidSetCarriedCharacter
struct APteroteuthis_Char_BP_Escort_C_BPDidSetCarriedCharacter_Params
{
	class APrimalCharacter**                           PreviousCarriedCharacter;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.BPAllowCarryCharacter
struct APteroteuthis_Char_BP_Escort_C_BPAllowCarryCharacter_Params
{
	class APrimalCharacter**                           checkCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.UserConstructionScript
struct APteroteuthis_Char_BP_Escort_C_UserConstructionScript_Params
{
};

// Function Pteroteuthis_Char_BP_Escort.Pteroteuthis_Char_BP_Escort_C.ExecuteUbergraph_Pteroteuthis_Char_BP_Escort
struct APteroteuthis_Char_BP_Escort_C_ExecuteUbergraph_Pteroteuthis_Char_BP_Escort_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
