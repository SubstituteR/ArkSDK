#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Xenomorph_Character_BP_Female_InitialBuryOnly_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.KillSelf
struct AXenomorph_Character_BP_Female_InitialBuryOnly_C_KillSelf_Params
{
};

// Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.BP_OnSetDeath
struct AXenomorph_Character_BP_Female_InitialBuryOnly_C_BP_OnSetDeath_Params
{
};

// Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.DiveEnd
struct AXenomorph_Character_BP_Female_InitialBuryOnly_C_DiveEnd_Params
{
};

// Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.GetDefaultXeno
struct AXenomorph_Character_BP_Female_InitialBuryOnly_C_GetDefaultXeno_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.BlueprintCanAttack
struct AXenomorph_Character_BP_Female_InitialBuryOnly_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.UserConstructionScript
struct AXenomorph_Character_BP_Female_InitialBuryOnly_C_UserConstructionScript_Params
{
};

// Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.ReceiveBeginPlay
struct AXenomorph_Character_BP_Female_InitialBuryOnly_C_ReceiveBeginPlay_Params
{
};

// Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.BPDinoPostBeginPlay
struct AXenomorph_Character_BP_Female_InitialBuryOnly_C_BPDinoPostBeginPlay_Params
{
};

// Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.AttemptDiveOut
struct AXenomorph_Character_BP_Female_InitialBuryOnly_C_AttemptDiveOut_Params
{
};

// Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.ForceDiveEnd
struct AXenomorph_Character_BP_Female_InitialBuryOnly_C_ForceDiveEnd_Params
{
};

// Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.ExecuteUbergraph_Xenomorph_Character_BP_Female_InitialBuryOnly
struct AXenomorph_Character_BP_Female_InitialBuryOnly_C_ExecuteUbergraph_Xenomorph_Character_BP_Female_InitialBuryOnly_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
