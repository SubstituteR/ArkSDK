#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_VRBattle_FinalStage_Player_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.OnRep_TauntRandomSeed
struct ABuff_VRBattle_FinalStage_Player_C_OnRep_TauntRandomSeed_Params
{
};

// Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.InitializeBossActor
struct ABuff_VRBattle_FinalStage_Player_C_InitializeBossActor_Params
{
};

// Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.BPGetHUDElements
struct ABuff_VRBattle_FinalStage_Player_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.UserConstructionScript
struct ABuff_VRBattle_FinalStage_Player_C_UserConstructionScript_Params
{
};

// Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.PlayBossDeathMatinee
struct ABuff_VRBattle_FinalStage_Player_C_PlayBossDeathMatinee_Params
{
	class AMatineeActor*                               Matinee;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.Server_OnClientFinishedMatinee
struct ABuff_VRBattle_FinalStage_Player_C_Server_OnClientFinishedMatinee_Params
{
};

// Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.BuffTickClient
struct ABuff_VRBattle_FinalStage_Player_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.Server_PlayBossDeathMatinee
struct ABuff_VRBattle_FinalStage_Player_C_Server_PlayBossDeathMatinee_Params
{
	class AMatineeActor*                               DeathMatinee;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.BuffTickServer
struct ABuff_VRBattle_FinalStage_Player_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.PlayBossTauntSequence
struct ABuff_VRBattle_FinalStage_Player_C_PlayBossTauntSequence_Params
{
};

// Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.ReceiveBeginPlay
struct ABuff_VRBattle_FinalStage_Player_C_ReceiveBeginPlay_Params
{
};

// Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.CancelBossTaunt
struct ABuff_VRBattle_FinalStage_Player_C_CancelBossTaunt_Params
{
};

// Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.ExecuteUbergraph_Buff_VRBattle_FinalStage_Player
struct ABuff_VRBattle_FinalStage_Player_C_ExecuteUbergraph_Buff_VRBattle_FinalStage_Player_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.OnBossDeathMatineeFinished__DelegateSignature
struct ABuff_VRBattle_FinalStage_Player_C_OnBossDeathMatineeFinished__DelegateSignature_Params
{
	class AShooterCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
