#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BTD_IsTooFarFromTarget_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTD_IsTooFarFromTarget.BTD_IsTooFarFromTarget_C.ReceiveConditionCheck
struct UBTD_IsTooFarFromTarget_C_ReceiveConditionCheck_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTD_IsTooFarFromTarget.BTD_IsTooFarFromTarget_C.ExecuteUbergraph_BTD_IsTooFarFromTarget
struct UBTD_IsTooFarFromTarget_C_ExecuteUbergraph_BTD_IsTooFarFromTarget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
