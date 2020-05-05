#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Para_Character_BP_Escort_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Para_Character_BP_Escort.Para_Character_BP_Escort_C.BP_ForceAllowAddBuff
struct APara_Character_BP_Escort_C_BP_ForceAllowAddBuff_Params
{
	class UClass**                                     BuffClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Para_Character_BP_Escort.Para_Character_BP_Escort_C.AllowGrappling
struct APara_Character_BP_Escort_C_AllowGrappling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Para_Character_BP_Escort.Para_Character_BP_Escort_C.DelayEscape
struct APara_Character_BP_Escort_C_DelayEscape_Params
{
};

// Function Para_Character_BP_Escort.Para_Character_BP_Escort_C.BPAdjustImpulseFromDamage
struct APara_Character_BP_Escort_C_BPAdjustImpulseFromDamage_Params
{
	struct FVector*                                    DesiredImpulse;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class APawn**                                      PawnInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Para_Character_BP_Escort.Para_Character_BP_Escort_C.BPDisplayTamedMessage
struct APara_Character_BP_Escort_C_BPDisplayTamedMessage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Para_Character_BP_Escort.Para_Character_BP_Escort_C.DelayRoar
struct APara_Character_BP_Escort_C_DelayRoar_Params
{
};

// Function Para_Character_BP_Escort.Para_Character_BP_Escort_C.UserConstructionScript
struct APara_Character_BP_Escort_C_UserConstructionScript_Params
{
};

// Function Para_Character_BP_Escort.Para_Character_BP_Escort_C.ExecuteUbergraph_Para_Character_BP_Escort
struct APara_Character_BP_Escort_C_ExecuteUbergraph_Para_Character_BP_Escort_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
