#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Bot_WithSpear_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Bot_WithSpear_BP.Bot_WithSpear_BP_C.GetMeleeSocketLocation
struct ABot_WithSpear_BP_C_GetMeleeSocketLocation_Params
{
	struct FName*                                      SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SocketLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bot_WithSpear_BP.Bot_WithSpear_BP_C.UserConstructionScript
struct ABot_WithSpear_BP_C_UserConstructionScript_Params
{
};

// Function Bot_WithSpear_BP.Bot_WithSpear_BP_C.ExecuteUbergraph_Bot_WithSpear_BP
struct ABot_WithSpear_BP_C_ExecuteUbergraph_Bot_WithSpear_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
