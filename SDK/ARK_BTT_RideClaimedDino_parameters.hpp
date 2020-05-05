#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BTT_RideClaimedDino_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTT_RideClaimedDino.BTT_RideClaimedDino_C.ReceiveExecute
struct UBTT_RideClaimedDino_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_RideClaimedDino.BTT_RideClaimedDino_C.ExecuteUbergraph_BTT_RideClaimedDino
struct UBTT_RideClaimedDino_C_ExecuteUbergraph_BTT_RideClaimedDino_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
