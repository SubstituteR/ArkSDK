#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_LanternPug_Character_BP_Basketball_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LanternPug_Character_BP_Basketball.LanternPug_Character_BP_Basketball_C.BPAdjustDamage
struct ALanternPug_Character_BP_Basketball_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LanternPug_Character_BP_Basketball.LanternPug_Character_BP_Basketball_C.BPCanMountOnCharacter
struct ALanternPug_Character_BP_Basketball_C_BPCanMountOnCharacter_Params
{
	class APrimalCharacter**                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LanternPug_Character_BP_Basketball.LanternPug_Character_BP_Basketball_C.ReceiveTick
struct ALanternPug_Character_BP_Basketball_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LanternPug_Character_BP_Basketball.LanternPug_Character_BP_Basketball_C.UserConstructionScript
struct ALanternPug_Character_BP_Basketball_C_UserConstructionScript_Params
{
};

// Function LanternPug_Character_BP_Basketball.LanternPug_Character_BP_Basketball_C.ReceiveBeginPlay
struct ALanternPug_Character_BP_Basketball_C_ReceiveBeginPlay_Params
{
};

// Function LanternPug_Character_BP_Basketball.LanternPug_Character_BP_Basketball_C.ExecuteUbergraph_LanternPug_Character_BP_Basketball
struct ALanternPug_Character_BP_Basketball_C_ExecuteUbergraph_LanternPug_Character_BP_Basketball_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
