#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRBattle_CodeKeyTumbler_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function VRBattle_CodeKeyTumbler.VRBattle_CodeKeyTumbler_C.UserConstructionScript
struct AVRBattle_CodeKeyTumbler_C_UserConstructionScript_Params
{
};

// Function VRBattle_CodeKeyTumbler.VRBattle_CodeKeyTumbler_C.SetTargetPercentage
struct AVRBattle_CodeKeyTumbler_C_SetTargetPercentage_Params
{
	float                                              Percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRBattle_CodeKeyTumbler.VRBattle_CodeKeyTumbler_C.ReceiveTick
struct AVRBattle_CodeKeyTumbler_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRBattle_CodeKeyTumbler.VRBattle_CodeKeyTumbler_C.Multicast_PlayDepositFX
struct AVRBattle_CodeKeyTumbler_C_Multicast_PlayDepositFX_Params
{
};

// Function VRBattle_CodeKeyTumbler.VRBattle_CodeKeyTumbler_C.Activate
struct AVRBattle_CodeKeyTumbler_C_Activate_Params
{
};

// Function VRBattle_CodeKeyTumbler.VRBattle_CodeKeyTumbler_C.Deactivate
struct AVRBattle_CodeKeyTumbler_C_Deactivate_Params
{
};

// Function VRBattle_CodeKeyTumbler.VRBattle_CodeKeyTumbler_C.FireBeam
struct AVRBattle_CodeKeyTumbler_C_FireBeam_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRBattle_CodeKeyTumbler.VRBattle_CodeKeyTumbler_C.ExecuteUbergraph_VRBattle_CodeKeyTumbler
struct AVRBattle_CodeKeyTumbler_C_ExecuteUbergraph_VRBattle_CodeKeyTumbler_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
