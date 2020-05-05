#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BTT_BotPlayRandomMontage_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTT_BotPlayRandomMontage.BTT_BotPlayRandomMontage_C.ReceiveTick
struct UBTT_BotPlayRandomMontage_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_BotPlayRandomMontage.BTT_BotPlayRandomMontage_C.ReceiveExecute
struct UBTT_BotPlayRandomMontage_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_BotPlayRandomMontage.BTT_BotPlayRandomMontage_C.ExecuteUbergraph_BTT_BotPlayRandomMontage
struct UBTT_BotPlayRandomMontage_C_ExecuteUbergraph_BTT_BotPlayRandomMontage_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
