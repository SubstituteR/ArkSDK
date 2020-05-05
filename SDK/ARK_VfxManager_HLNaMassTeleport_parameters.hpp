#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VfxManager_HLNaMassTeleport_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.post timeline
struct AVfxManager_HLNaMassTeleport_C_post_timeline_Params
{
};

// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.Player Is within sphere
struct AVfxManager_HLNaMassTeleport_C_Player_Is_within_sphere_Params
{
	bool                                               ret_val;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           local_player;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.Player Is nearby
struct AVfxManager_HLNaMassTeleport_C_Player_Is_nearby_Params
{
	bool                                               ret_val;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           local_player;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.player is valid for teleporting
struct AVfxManager_HLNaMassTeleport_C_player_is_valid_for_teleporting_Params
{
	bool                                               ret_val;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           local_player;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.play collapse vfx
struct AVfxManager_HLNaMassTeleport_C_play_collapse_vfx_Params
{
};

// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.Pass In Teleporting Player Names
struct AVfxManager_HLNaMassTeleport_C_Pass_In_Teleporting_Player_Names_Params
{
	TArray<class FString>                              PlayerNames;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.set sphere PP teleport value
struct AVfxManager_HLNaMassTeleport_C_set_sphere_PP_teleport_value_Params
{
	float                                              InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.setup dynamic materials
struct AVfxManager_HLNaMassTeleport_C_setup_dynamic_materials_Params
{
};

// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.update teleporting characters vfx
struct AVfxManager_HLNaMassTeleport_C_update_teleporting_characters_vfx_Params
{
};

// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.Init
struct AVfxManager_HLNaMassTeleport_C_Init_Params
{
	class ABuff_Companion_HLNA_C*                      CreatedByHLNA;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Teleport_Sphere_Radius;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Teleport_Charge_Duration;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.OnMassTeleportEvent
struct AVfxManager_HLNaMassTeleport_C_OnMassTeleportEvent_Params
{
	TEnumAsByte<EMassTeleportState>                    EventState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.CleanUpTeleportVfxManager
struct AVfxManager_HLNaMassTeleport_C_CleanUpTeleportVfxManager_Params
{
};

// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.UpdateTeleportCharList
struct AVfxManager_HLNaMassTeleport_C_UpdateTeleportCharList_Params
{
	TArray<class APrimalCharacter*>                    NewTeleportCharList;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.ReceiveBeginPlay
struct AVfxManager_HLNaMassTeleport_C_ReceiveBeginPlay_Params
{
};

// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.ReceiveTick
struct AVfxManager_HLNaMassTeleport_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.UserConstructionScript
struct AVfxManager_HLNaMassTeleport_C_UserConstructionScript_Params
{
};

// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.Timeline_0__FinishedFunc
struct AVfxManager_HLNaMassTeleport_C_Timeline_0__FinishedFunc_Params
{
};

// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.Timeline_0__UpdateFunc
struct AVfxManager_HLNaMassTeleport_C_Timeline_0__UpdateFunc_Params
{
};

// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.Multi_UpdateTeleportingChars
struct AVfxManager_HLNaMassTeleport_C_Multi_UpdateTeleportingChars_Params
{
	TArray<class APrimalCharacter*>                    NewTeleportCharsList;                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.set vfx parameters
struct AVfxManager_HLNaMassTeleport_C_set_vfx_parameters_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.Envelop Sphere
struct AVfxManager_HLNaMassTeleport_C_Envelop_Sphere_Params
{
};

// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.multicast clean up
struct AVfxManager_HLNaMassTeleport_C_multicast_clean_up_Params
{
};

// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.multicast vfx failed
struct AVfxManager_HLNaMassTeleport_C_multicast_vfx_failed_Params
{
};

// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.ExecuteUbergraph_VfxManager_HLNaMassTeleport
struct AVfxManager_HLNaMassTeleport_C_ExecuteUbergraph_VfxManager_HLNaMassTeleport_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
