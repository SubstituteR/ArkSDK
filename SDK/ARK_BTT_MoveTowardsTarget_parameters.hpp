#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BTT_MoveTowardsTarget_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTT_MoveTowardsTarget.BTT_MoveTowardsTarget_C.ReceiveTick
struct UBTT_MoveTowardsTarget_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_MoveTowardsTarget.BTT_MoveTowardsTarget_C.ReceiveExecute
struct UBTT_MoveTowardsTarget_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_MoveTowardsTarget.BTT_MoveTowardsTarget_C.ExecuteUbergraph_BTT_MoveTowardsTarget
struct UBTT_MoveTowardsTarget_C_ExecuteUbergraph_BTT_MoveTowardsTarget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
