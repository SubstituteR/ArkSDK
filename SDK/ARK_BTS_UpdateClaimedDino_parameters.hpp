#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BTS_UpdateClaimedDino_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTS_UpdateClaimedDino.BTS_UpdateClaimedDino_C.ReceiveTick
struct UBTS_UpdateClaimedDino_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTS_UpdateClaimedDino.BTS_UpdateClaimedDino_C.ExecuteUbergraph_BTS_UpdateClaimedDino
struct UBTS_UpdateClaimedDino_C_ExecuteUbergraph_BTS_UpdateClaimedDino_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
