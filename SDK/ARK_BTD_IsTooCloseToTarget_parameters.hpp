#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BTD_IsTooCloseToTarget_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTD_IsTooCloseToTarget.BTD_IsTooCloseToTarget_C.ReceiveConditionCheck
struct UBTD_IsTooCloseToTarget_C_ReceiveConditionCheck_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTD_IsTooCloseToTarget.BTD_IsTooCloseToTarget_C.ExecuteUbergraph_BTD_IsTooCloseToTarget
struct UBTD_IsTooCloseToTarget_C_ExecuteUbergraph_BTD_IsTooCloseToTarget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
