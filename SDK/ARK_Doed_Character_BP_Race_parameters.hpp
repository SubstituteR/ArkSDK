#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Doed_Character_BP_Race_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Doed_Character_BP_Race.Doed_Character_BP_Race_C.BPTimerServer
struct ADoed_Character_BP_Race_C_BPTimerServer_Params
{
};

// Function Doed_Character_BP_Race.Doed_Character_BP_Race_C.BPChargingModifyInputAcceleration
struct ADoed_Character_BP_Race_C_BPChargingModifyInputAcceleration_Params
{
	struct FVector*                                    inputAcceleration;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Doed_Character_BP_Race.Doed_Character_BP_Race_C.UserConstructionScript
struct ADoed_Character_BP_Race_C_UserConstructionScript_Params
{
};

// Function Doed_Character_BP_Race.Doed_Character_BP_Race_C.ExecuteUbergraph_Doed_Character_BP_Race
struct ADoed_Character_BP_Race_C_ExecuteUbergraph_Doed_Character_BP_Race_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
