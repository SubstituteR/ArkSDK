#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Mission_Hunt_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.GetMissionData
struct ABuff_Mission_Hunt_C_GetMissionData_Params
{
	struct FClientMissionData                          missionData;                                              // (Parm, OutParm)
};

// Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.RemoveTracks
struct ABuff_Mission_Hunt_C_RemoveTracks_Params
{
};

// Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.BPClientHandleNetExecCommand
struct ABuff_Mission_Hunt_C_BPClientHandleNetExecCommand_Params
{
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.RevealTracks
struct ABuff_Mission_Hunt_C_RevealTracks_Params
{
	int                                                TrackStartIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TrackEndIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.UpdateStencilValues
struct ABuff_Mission_Hunt_C_UpdateStencilValues_Params
{
};

// Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.ReceiveDestroyed
struct ABuff_Mission_Hunt_C_ReceiveDestroyed_Params
{
};

// Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.UpdateTracks
struct ABuff_Mission_Hunt_C_UpdateTracks_Params
{
};

// Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.UserConstructionScript
struct ABuff_Mission_Hunt_C_UserConstructionScript_Params
{
};

// Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.BuffTickClient
struct ABuff_Mission_Hunt_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.Client_RevealTrackingItem
struct ABuff_Mission_Hunt_C_Client_RevealTrackingItem_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.PlaySoundOnOwnerChar_RoC
struct ABuff_Mission_Hunt_C_PlaySoundOnOwnerChar_RoC_Params
{
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Mission_Hunt.Buff_Mission_Hunt_C.ExecuteUbergraph_Buff_Mission_Hunt
struct ABuff_Mission_Hunt_C_ExecuteUbergraph_Buff_Mission_Hunt_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
