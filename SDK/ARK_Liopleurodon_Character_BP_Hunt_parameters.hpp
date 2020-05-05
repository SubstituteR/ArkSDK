#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Liopleurodon_Character_BP_Hunt_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Liopleurodon_Character_BP_Hunt.Liopleurodon_Character_BP_Hunt_C.ReceiveBeginPlay
struct ALiopleurodon_Character_BP_Hunt_C_ReceiveBeginPlay_Params
{
};

// Function Liopleurodon_Character_BP_Hunt.Liopleurodon_Character_BP_Hunt_C.UserConstructionScript
struct ALiopleurodon_Character_BP_Hunt_C_UserConstructionScript_Params
{
};

// Function Liopleurodon_Character_BP_Hunt.Liopleurodon_Character_BP_Hunt_C.ReceiveAnyDamage
struct ALiopleurodon_Character_BP_Hunt_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Liopleurodon_Character_BP_Hunt.Liopleurodon_Character_BP_Hunt_C.ExecuteUbergraph_Liopleurodon_Character_BP_Hunt
struct ALiopleurodon_Character_BP_Hunt_C_ExecuteUbergraph_Liopleurodon_Character_BP_Hunt_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
