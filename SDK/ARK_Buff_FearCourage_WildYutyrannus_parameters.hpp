#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_FearCourage_WildYutyrannus_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_FearCourage_WildYutyrannus.Buff_FearCourage_WildYutyrannus_C.DrawBuffFloatingHUD
struct ABuff_FearCourage_WildYutyrannus_C_DrawBuffFloatingHUD_Params
{
	int*                                               BuffIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FearCourage_WildYutyrannus.Buff_FearCourage_WildYutyrannus_C.UserConstructionScript
struct ABuff_FearCourage_WildYutyrannus_C_UserConstructionScript_Params
{
};

// Function Buff_FearCourage_WildYutyrannus.Buff_FearCourage_WildYutyrannus_C.ExecuteUbergraph_Buff_FearCourage_WildYutyrannus
struct ABuff_FearCourage_WildYutyrannus_C_ExecuteUbergraph_Buff_FearCourage_WildYutyrannus_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
