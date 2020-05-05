#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_VRBattle_TeleportPlayer_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.BPPreventFirstPerson
struct ABuff_VRBattle_TeleportPlayer_C_BPPreventFirstPerson_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.BPForceCameraStyle
struct ABuff_VRBattle_TeleportPlayer_C_BPForceCameraStyle_Params
{
	class APrimalCharacter**                           ForViewTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECameraStyle>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.BPOverrideTargetingDesire
struct ABuff_VRBattle_TeleportPlayer_C_BPOverrideTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.BuffTickClient
struct ABuff_VRBattle_TeleportPlayer_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.BuffTickServer
struct ABuff_VRBattle_TeleportPlayer_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.UserConstructionScript
struct ABuff_VRBattle_TeleportPlayer_C_UserConstructionScript_Params
{
};

// Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.Multicast_StartTeleporting
struct ABuff_VRBattle_TeleportPlayer_C_Multicast_StartTeleporting_Params
{
};

// Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.OwningClient_StartTeleporting
struct ABuff_VRBattle_TeleportPlayer_C_OwningClient_StartTeleporting_Params
{
	class AMissionTrigger_VRBattleTeleporter_C*        Teleporter;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.Server Teleport
struct ABuff_VRBattle_TeleportPlayer_C_Server_Teleport_Params
{
	class AMissionTrigger_VRBattleTeleporter_C*        Teleporter;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.Server_DoneTeleporting
struct ABuff_VRBattle_TeleportPlayer_C_Server_DoneTeleporting_Params
{
};

// Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.OwningClient_DoneTeleporting
struct ABuff_VRBattle_TeleportPlayer_C_OwningClient_DoneTeleporting_Params
{
};

// Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.Force_OwningClientDoneTeleporting
struct ABuff_VRBattle_TeleportPlayer_C_Force_OwningClientDoneTeleporting_Params
{
};

// Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.OnLandingLocationFound
struct ABuff_VRBattle_TeleportPlayer_C_OnLandingLocationFound_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.ExecuteUbergraph_Buff_VRBattle_TeleportPlayer
struct ABuff_VRBattle_TeleportPlayer_C_ExecuteUbergraph_Buff_VRBattle_TeleportPlayer_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.OnFinishedTeleporting__DelegateSignature
struct ABuff_VRBattle_TeleportPlayer_C_OnFinishedTeleporting__DelegateSignature_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
