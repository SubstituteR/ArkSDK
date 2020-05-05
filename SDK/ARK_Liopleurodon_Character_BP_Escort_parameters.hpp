#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Liopleurodon_Character_BP_Escort_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Liopleurodon_Character_BP_Escort.Liopleurodon_Character_BP_Escort_C.ReceiveBeginPlay
struct ALiopleurodon_Character_BP_Escort_C_ReceiveBeginPlay_Params
{
};

// Function Liopleurodon_Character_BP_Escort.Liopleurodon_Character_BP_Escort_C.UserConstructionScript
struct ALiopleurodon_Character_BP_Escort_C_UserConstructionScript_Params
{
};

// Function Liopleurodon_Character_BP_Escort.Liopleurodon_Character_BP_Escort_C.ReceiveAnyDamage
struct ALiopleurodon_Character_BP_Escort_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Liopleurodon_Character_BP_Escort.Liopleurodon_Character_BP_Escort_C.ExecuteUbergraph_Liopleurodon_Character_BP_Escort
struct ALiopleurodon_Character_BP_Escort_C_ExecuteUbergraph_Liopleurodon_Character_BP_Escort_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
