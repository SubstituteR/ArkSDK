#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Gen_AreaBuff_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.BPClientHandleNetExecCommand
struct AGen_AreaBuff_Base_C_BPClientHandleNetExecCommand_Params
{
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.UpdateLocalTransform
struct AGen_AreaBuff_Base_C_UpdateLocalTransform_Params
{
};

// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.BPGetHUDElements
struct AGen_AreaBuff_Base_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.SwitchAudioWaterAndCave
struct AGen_AreaBuff_Base_C_SwitchAudioWaterAndCave_Params
{
};

// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.BuffTickServer
struct AGen_AreaBuff_Base_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.BuffTickClient
struct AGen_AreaBuff_Base_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.SetParticleVis
struct AGen_AreaBuff_Base_C_SetParticleVis_Params
{
};

// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.LocalEffects
struct AGen_AreaBuff_Base_C_LocalEffects_Params
{
};

// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.BPPreventRunning
struct AGen_AreaBuff_Base_C_BPPreventRunning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.BPCustomAllowAddBuff
struct AGen_AreaBuff_Base_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.UserConstructionScript
struct AGen_AreaBuff_Base_C_UserConstructionScript_Params
{
};

// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.ReceiveBeginPlay
struct AGen_AreaBuff_Base_C_ReceiveBeginPlay_Params
{
};

// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.OnPlayerStatusUpdate
struct AGen_AreaBuff_Base_C_OnPlayerStatusUpdate_Params
{
	bool                                               IsInCave;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUnderwater;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.BPDeactivated
struct AGen_AreaBuff_Base_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.BPSetupForInstigator
struct AGen_AreaBuff_Base_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.ExecuteUbergraph_Gen_AreaBuff_Base
struct AGen_AreaBuff_Base_C_ExecuteUbergraph_Gen_AreaBuff_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
