#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VfxManager_HLNaPostMassTeleport_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.Player Is nearby
struct AVfxManager_HLNaPostMassTeleport_C_Player_Is_nearby_Params
{
	bool                                               is_nearby;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           local_player;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.cleanup ibl and transfer pp
struct AVfxManager_HLNaPostMassTeleport_C_cleanup_ibl_and_transfer_pp_Params
{
};

// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.Check if Fully Loaded Fallback
struct AVfxManager_HLNaPostMassTeleport_C_Check_if_Fully_Loaded_Fallback_Params
{
};

// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.set sphere PP teleport value
struct AVfxManager_HLNaPostMassTeleport_C_set_sphere_PP_teleport_value_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.ReceiveDestroyed
struct AVfxManager_HLNaPostMassTeleport_C_ReceiveDestroyed_Params
{
};

// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.Set Dynamic Materials
struct AVfxManager_HLNaPostMassTeleport_C_Set_Dynamic_Materials_Params
{
};

// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.Init
struct AVfxManager_HLNaPostMassTeleport_C_Init_Params
{
	class ABuff_Companion_HLNA_C*                      CreatedByHLNA;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Teleport_Sphere_Radius;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Teleport_Charge_Duration;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VFX_Color;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.OnMassTeleportEvent
struct AVfxManager_HLNaPostMassTeleport_C_OnMassTeleportEvent_Params
{
	TEnumAsByte<EMassTeleportState>                    EventState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.CleanUpTeleportVfxManager
struct AVfxManager_HLNaPostMassTeleport_C_CleanUpTeleportVfxManager_Params
{
};

// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.UpdateTeleportCharList
struct AVfxManager_HLNaPostMassTeleport_C_UpdateTeleportCharList_Params
{
	TArray<class APrimalCharacter*>                    NewTeleportCharList;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.ReceiveBeginPlay
struct AVfxManager_HLNaPostMassTeleport_C_ReceiveBeginPlay_Params
{
};

// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.ReceiveTick
struct AVfxManager_HLNaPostMassTeleport_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.UserConstructionScript
struct AVfxManager_HLNaPostMassTeleport_C_UserConstructionScript_Params
{
};

// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.Timeline_0__FinishedFunc
struct AVfxManager_HLNaPostMassTeleport_C_Timeline_0__FinishedFunc_Params
{
};

// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.Timeline_0__UpdateFunc
struct AVfxManager_HLNaPostMassTeleport_C_Timeline_0__UpdateFunc_Params
{
};

// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.Multi_UpdateTeleportingChars
struct AVfxManager_HLNaPostMassTeleport_C_Multi_UpdateTeleportingChars_Params
{
	TArray<class APrimalCharacter*>                    NewTeleportCharsList;                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.set vfx parameters
struct AVfxManager_HLNaPostMassTeleport_C_set_vfx_parameters_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.Envelop Sphere
struct AVfxManager_HLNaPostMassTeleport_C_Envelop_Sphere_Params
{
};

// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.begin local client events
struct AVfxManager_HLNaPostMassTeleport_C_begin_local_client_events_Params
{
};

// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.ExecuteUbergraph_VfxManager_HLNaPostMassTeleport
struct AVfxManager_HLNaPostMassTeleport_C_ExecuteUbergraph_VfxManager_HLNaPostMassTeleport_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
