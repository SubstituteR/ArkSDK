#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Basic.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct GauntletWaves_PlayerControllerDamageStruct.GauntletWaves_PlayerControllerDamageStruct
// 0x0010
struct FGauntletWaves_PlayerControllerDamageStruct
{
	class AShooterPlayerController*                    PlayerController_4_E53F82F14F19C0FC8F1AFDA53692876C;      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageDealt_9_13AA733A483510634B9F70A2DEDE2283;           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageTaken_10_C4F03A2C4789FD088497A38760182476;          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
