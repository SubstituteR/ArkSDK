#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BTT_MoveAwayFromTarget_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTT_MoveAwayFromTarget.BTT_MoveAwayFromTarget_C.ReceiveAbort
struct UBTT_MoveAwayFromTarget_C_ReceiveAbort_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_MoveAwayFromTarget.BTT_MoveAwayFromTarget_C.ReceiveTick
struct UBTT_MoveAwayFromTarget_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_MoveAwayFromTarget.BTT_MoveAwayFromTarget_C.ReceiveExecute
struct UBTT_MoveAwayFromTarget_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_MoveAwayFromTarget.BTT_MoveAwayFromTarget_C.ExecuteUbergraph_BTT_MoveAwayFromTarget
struct UBTT_MoveAwayFromTarget_C_ExecuteUbergraph_BTT_MoveAwayFromTarget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
