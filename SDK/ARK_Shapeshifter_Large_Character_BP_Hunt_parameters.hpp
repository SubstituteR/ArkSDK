#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Shapeshifter_Large_Character_BP_Hunt_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Shapeshifter_Large_Character_BP_Hunt.Shapeshifter_Large_Character_BP_Hunt_C.ThrowRock
struct AShapeshifter_Large_Character_BP_Hunt_C_ThrowRock_Params
{
};

// Function Shapeshifter_Large_Character_BP_Hunt.Shapeshifter_Large_Character_BP_Hunt_C.BPGetMultiUseEntries
struct AShapeshifter_Large_Character_BP_Hunt_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shapeshifter_Large_Character_BP_Hunt.Shapeshifter_Large_Character_BP_Hunt_C.Initialize
struct AShapeshifter_Large_Character_BP_Hunt_C_Initialize_Params
{
};

// Function Shapeshifter_Large_Character_BP_Hunt.Shapeshifter_Large_Character_BP_Hunt_C.BPOverrideTamingDescriptionLabel
struct AShapeshifter_Large_Character_BP_Hunt_C_BPOverrideTamingDescriptionLabel_Params
{
	struct FSlateColor                                 TextColor;                                                // (Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Shapeshifter_Large_Character_BP_Hunt.Shapeshifter_Large_Character_BP_Hunt_C.UserConstructionScript
struct AShapeshifter_Large_Character_BP_Hunt_C_UserConstructionScript_Params
{
};

// Function Shapeshifter_Large_Character_BP_Hunt.Shapeshifter_Large_Character_BP_Hunt_C.ExecuteUbergraph_Shapeshifter_Large_Character_BP_Hunt
struct AShapeshifter_Large_Character_BP_Hunt_C_ExecuteUbergraph_Shapeshifter_Large_Character_BP_Hunt_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
