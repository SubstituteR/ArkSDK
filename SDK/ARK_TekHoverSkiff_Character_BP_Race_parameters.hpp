#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_TekHoverSkiff_Character_BP_Race_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TekHoverSkiff_Character_BP_Race.TekHoverSkiff_Character_BP_Race_C.BPNotifySetRider
struct ATekHoverSkiff_Character_BP_Race_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP_Race.TekHoverSkiff_Character_BP_Race_C.BPPreventRiding
struct ATekHoverSkiff_Character_BP_Race_C_BPPreventRiding_Params
{
	class AShooterCharacter**                          ByPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDontCheckDistance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP_Race.TekHoverSkiff_Character_BP_Race_C.BP_CanFly
struct ATekHoverSkiff_Character_BP_Race_C_BP_CanFly_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TekHoverSkiff_Character_BP_Race.TekHoverSkiff_Character_BP_Race_C.UserConstructionScript
struct ATekHoverSkiff_Character_BP_Race_C_UserConstructionScript_Params
{
};

// Function TekHoverSkiff_Character_BP_Race.TekHoverSkiff_Character_BP_Race_C.ExecuteUbergraph_TekHoverSkiff_Character_BP_Race
struct ATekHoverSkiff_Character_BP_Race_C_ExecuteUbergraph_TekHoverSkiff_Character_BP_Race_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
