#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalBuff_CorruptedAvatarPhasingFX_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalBuff_CorruptedAvatarPhasingFX.PrimalBuff_CorruptedAvatarPhasingFX_C.BPSetupForInstigator
struct APrimalBuff_CorruptedAvatarPhasingFX_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalBuff_CorruptedAvatarPhasingFX.PrimalBuff_CorruptedAvatarPhasingFX_C.BuffTickServer
struct APrimalBuff_CorruptedAvatarPhasingFX_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalBuff_CorruptedAvatarPhasingFX.PrimalBuff_CorruptedAvatarPhasingFX_C.UserConstructionScript
struct APrimalBuff_CorruptedAvatarPhasingFX_C_UserConstructionScript_Params
{
};

// Function PrimalBuff_CorruptedAvatarPhasingFX.PrimalBuff_CorruptedAvatarPhasingFX_C.OnInstigatorDied
struct APrimalBuff_CorruptedAvatarPhasingFX_C_OnInstigatorDied_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalBuff_CorruptedAvatarPhasingFX.PrimalBuff_CorruptedAvatarPhasingFX_C.ExecuteUbergraph_PrimalBuff_CorruptedAvatarPhasingFX
struct APrimalBuff_CorruptedAvatarPhasingFX_C_ExecuteUbergraph_PrimalBuff_CorruptedAvatarPhasingFX_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
