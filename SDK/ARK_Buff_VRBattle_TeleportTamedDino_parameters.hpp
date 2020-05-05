#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_VRBattle_TeleportTamedDino_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_VRBattle_TeleportTamedDino.Buff_VRBattle_TeleportTamedDino_C.BPOverrideTargetingDesire
struct ABuff_VRBattle_TeleportTamedDino_C_BPOverrideTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_VRBattle_TeleportTamedDino.Buff_VRBattle_TeleportTamedDino_C.BPInstigatorDied
struct ABuff_VRBattle_TeleportTamedDino_C_BPInstigatorDied_Params
{
};

// Function Buff_VRBattle_TeleportTamedDino.Buff_VRBattle_TeleportTamedDino_C.UserConstructionScript
struct ABuff_VRBattle_TeleportTamedDino_C_UserConstructionScript_Params
{
};

// Function Buff_VRBattle_TeleportTamedDino.Buff_VRBattle_TeleportTamedDino_C.TeleportOut
struct ABuff_VRBattle_TeleportTamedDino_C_TeleportOut_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionTrigger_VRBattleTeleporter_C*        Teleporter;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_TeleportTamedDino.Buff_VRBattle_TeleportTamedDino_C.LandingLocationFound_Event
struct ABuff_VRBattle_TeleportTamedDino_C_LandingLocationFound_Event_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_TeleportTamedDino.Buff_VRBattle_TeleportTamedDino_C.TeleportIn
struct ABuff_VRBattle_TeleportTamedDino_C_TeleportIn_Params
{
};

// Function Buff_VRBattle_TeleportTamedDino.Buff_VRBattle_TeleportTamedDino_C.ExecuteUbergraph_Buff_VRBattle_TeleportTamedDino
struct ABuff_VRBattle_TeleportTamedDino_C_ExecuteUbergraph_Buff_VRBattle_TeleportTamedDino_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
