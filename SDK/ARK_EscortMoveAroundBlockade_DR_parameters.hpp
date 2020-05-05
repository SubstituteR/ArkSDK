#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EscortMoveAroundBlockade_DR_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EscortMoveAroundBlockade_DR.EscortMoveAroundBlockade_DR_C.ReceiveExecutionFinish
struct UEscortMoveAroundBlockade_DR_C_ReceiveExecutionFinish_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBTNodeResult>*                        NodeResult;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EscortMoveAroundBlockade_DR.EscortMoveAroundBlockade_DR_C.ReceiveConditionCheck
struct UEscortMoveAroundBlockade_DR_C_ReceiveConditionCheck_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EscortMoveAroundBlockade_DR.EscortMoveAroundBlockade_DR_C.ReceiveExecutionStart
struct UEscortMoveAroundBlockade_DR_C_ReceiveExecutionStart_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EscortMoveAroundBlockade_DR.EscortMoveAroundBlockade_DR_C.ExecuteUbergraph_EscortMoveAroundBlockade_DR
struct UEscortMoveAroundBlockade_DR_C_ExecuteUbergraph_EscortMoveAroundBlockade_DR_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
