#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Dodo_Character_BP_Basketball_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Dodo_Character_BP_Basketball.Dodo_Character_BP_Basketball_C.BPAdjustDamage
struct ADodo_Character_BP_Basketball_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dodo_Character_BP_Basketball.Dodo_Character_BP_Basketball_C.BPCanMountOnCharacter
struct ADodo_Character_BP_Basketball_C_BPCanMountOnCharacter_Params
{
	class APrimalCharacter**                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dodo_Character_BP_Basketball.Dodo_Character_BP_Basketball_C.ReceiveTick
struct ADodo_Character_BP_Basketball_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dodo_Character_BP_Basketball.Dodo_Character_BP_Basketball_C.UserConstructionScript
struct ADodo_Character_BP_Basketball_C_UserConstructionScript_Params
{
};

// Function Dodo_Character_BP_Basketball.Dodo_Character_BP_Basketball_C.ReceiveBeginPlay
struct ADodo_Character_BP_Basketball_C_ReceiveBeginPlay_Params
{
};

// Function Dodo_Character_BP_Basketball.Dodo_Character_BP_Basketball_C.ExecuteUbergraph_Dodo_Character_BP_Basketball
struct ADodo_Character_BP_Basketball_C_ExecuteUbergraph_Dodo_Character_BP_Basketball_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
