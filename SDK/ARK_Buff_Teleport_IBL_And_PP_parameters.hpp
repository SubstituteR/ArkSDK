#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Teleport_IBL_And_PP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Teleport_IBL_And_PP.Buff_Teleport_IBL_And_PP_C.BPDeactivated
struct ABuff_Teleport_IBL_And_PP_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Teleport_IBL_And_PP.Buff_Teleport_IBL_And_PP_C.BPActivated
struct ABuff_Teleport_IBL_And_PP_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Teleport_IBL_And_PP.Buff_Teleport_IBL_And_PP_C.UserConstructionScript
struct ABuff_Teleport_IBL_And_PP_C_UserConstructionScript_Params
{
};

// Function Buff_Teleport_IBL_And_PP.Buff_Teleport_IBL_And_PP_C.ExecuteUbergraph_Buff_Teleport_IBL_And_PP
struct ABuff_Teleport_IBL_And_PP_C_ExecuteUbergraph_Buff_Teleport_IBL_And_PP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
