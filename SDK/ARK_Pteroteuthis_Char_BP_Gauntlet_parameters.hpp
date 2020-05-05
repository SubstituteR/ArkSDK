#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Pteroteuthis_Char_BP_Gauntlet_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Pteroteuthis_Char_BP_Gauntlet.Pteroteuthis_Char_BP_Gauntlet_C.CreateChargeManager
struct APteroteuthis_Char_BP_Gauntlet_C_CreateChargeManager_Params
{
};

// Function Pteroteuthis_Char_BP_Gauntlet.Pteroteuthis_Char_BP_Gauntlet_C.OverrideRandomWanderLocation
struct APteroteuthis_Char_BP_Gauntlet_C_OverrideRandomWanderLocation_Params
{
	struct FVector                                     originalDestination;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     inVec;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pteroteuthis_Char_BP_Gauntlet.Pteroteuthis_Char_BP_Gauntlet_C.UserConstructionScript
struct APteroteuthis_Char_BP_Gauntlet_C_UserConstructionScript_Params
{
};

// Function Pteroteuthis_Char_BP_Gauntlet.Pteroteuthis_Char_BP_Gauntlet_C.ExecuteUbergraph_Pteroteuthis_Char_BP_Gauntlet
struct APteroteuthis_Char_BP_Gauntlet_C_ExecuteUbergraph_Pteroteuthis_Char_BP_Gauntlet_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
