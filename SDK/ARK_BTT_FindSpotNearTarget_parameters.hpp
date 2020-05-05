#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BTT_FindSpotNearTarget_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTT_FindSpotNearTarget.BTT_FindSpotNearTarget_C.ReceiveExecute
struct UBTT_FindSpotNearTarget_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_FindSpotNearTarget.BTT_FindSpotNearTarget_C.ExecuteUbergraph_BTT_FindSpotNearTarget
struct UBTT_FindSpotNearTarget_C_ExecuteUbergraph_BTT_FindSpotNearTarget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
