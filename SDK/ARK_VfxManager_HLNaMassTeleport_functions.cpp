// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VfxManager_HLNaMassTeleport_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.post timeline
// ()

void AVfxManager_HLNaMassTeleport_C::post_timeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.post timeline");

	AVfxManager_HLNaMassTeleport_C_post_timeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.Player Is within sphere
// ()
// Parameters:
// bool                           ret_val                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       local_player                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVfxManager_HLNaMassTeleport_C::Player_Is_within_sphere(bool* ret_val, class AShooterCharacter** local_player)
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.Player Is within sphere");

	AVfxManager_HLNaMassTeleport_C_Player_Is_within_sphere_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ret_val != nullptr)
		*ret_val = params.ret_val;
	if (local_player != nullptr)
		*local_player = params.local_player;
}


// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.Player Is nearby
// ()
// Parameters:
// bool                           ret_val                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       local_player                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVfxManager_HLNaMassTeleport_C::Player_Is_nearby(bool* ret_val, class AShooterCharacter** local_player)
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.Player Is nearby");

	AVfxManager_HLNaMassTeleport_C_Player_Is_nearby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ret_val != nullptr)
		*ret_val = params.ret_val;
	if (local_player != nullptr)
		*local_player = params.local_player;
}


// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.player is valid for teleporting
// ()
// Parameters:
// bool                           ret_val                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       local_player                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVfxManager_HLNaMassTeleport_C::player_is_valid_for_teleporting(bool* ret_val, class AShooterCharacter** local_player)
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.player is valid for teleporting");

	AVfxManager_HLNaMassTeleport_C_player_is_valid_for_teleporting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ret_val != nullptr)
		*ret_val = params.ret_val;
	if (local_player != nullptr)
		*local_player = params.local_player;
}


// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.play collapse vfx
// ()

void AVfxManager_HLNaMassTeleport_C::play_collapse_vfx()
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.play collapse vfx");

	AVfxManager_HLNaMassTeleport_C_play_collapse_vfx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.Pass In Teleporting Player Names
// ()
// Parameters:
// TArray<class FString>          PlayerNames                    (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AVfxManager_HLNaMassTeleport_C::Pass_In_Teleporting_Player_Names(TArray<class FString>* PlayerNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.Pass In Teleporting Player Names");

	AVfxManager_HLNaMassTeleport_C_Pass_In_Teleporting_Player_Names_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerNames != nullptr)
		*PlayerNames = params.PlayerNames;
}


// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.set sphere PP teleport value
// ()
// Parameters:
// float                          InputPin                       (Parm, ZeroConstructor, IsPlainOldData)

void AVfxManager_HLNaMassTeleport_C::set_sphere_PP_teleport_value(float InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.set sphere PP teleport value");

	AVfxManager_HLNaMassTeleport_C_set_sphere_PP_teleport_value_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.setup dynamic materials
// ()

void AVfxManager_HLNaMassTeleport_C::setup_dynamic_materials()
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.setup dynamic materials");

	AVfxManager_HLNaMassTeleport_C_setup_dynamic_materials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.update teleporting characters vfx
// ()

void AVfxManager_HLNaMassTeleport_C::update_teleporting_characters_vfx()
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.update teleporting characters vfx");

	AVfxManager_HLNaMassTeleport_C_update_teleporting_characters_vfx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.Init
// ()
// Parameters:
// class ABuff_Companion_HLNA_C*  CreatedByHLNA                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Teleport_Sphere_Radius         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Teleport_Charge_Duration       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Color                          (Parm, ZeroConstructor, IsPlainOldData)

void AVfxManager_HLNaMassTeleport_C::Init(class ABuff_Companion_HLNA_C* CreatedByHLNA, float Teleport_Sphere_Radius, float Teleport_Charge_Duration, const struct FVector& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.Init");

	AVfxManager_HLNaMassTeleport_C_Init_Params params;
	params.CreatedByHLNA = CreatedByHLNA;
	params.Teleport_Sphere_Radius = Teleport_Sphere_Radius;
	params.Teleport_Charge_Duration = Teleport_Charge_Duration;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.OnMassTeleportEvent
// ()
// Parameters:
// TEnumAsByte<EMassTeleportState> EventState                     (Parm, ZeroConstructor, IsPlainOldData)

void AVfxManager_HLNaMassTeleport_C::OnMassTeleportEvent(TEnumAsByte<EMassTeleportState> EventState)
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.OnMassTeleportEvent");

	AVfxManager_HLNaMassTeleport_C_OnMassTeleportEvent_Params params;
	params.EventState = EventState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.CleanUpTeleportVfxManager
// ()

void AVfxManager_HLNaMassTeleport_C::CleanUpTeleportVfxManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.CleanUpTeleportVfxManager");

	AVfxManager_HLNaMassTeleport_C_CleanUpTeleportVfxManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.UpdateTeleportCharList
// ()
// Parameters:
// TArray<class APrimalCharacter*> NewTeleportCharList            (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AVfxManager_HLNaMassTeleport_C::UpdateTeleportCharList(TArray<class APrimalCharacter*>* NewTeleportCharList)
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.UpdateTeleportCharList");

	AVfxManager_HLNaMassTeleport_C_UpdateTeleportCharList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewTeleportCharList != nullptr)
		*NewTeleportCharList = params.NewTeleportCharList;
}


// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.ReceiveBeginPlay
// ()

void AVfxManager_HLNaMassTeleport_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.ReceiveBeginPlay");

	AVfxManager_HLNaMassTeleport_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AVfxManager_HLNaMassTeleport_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.ReceiveTick");

	AVfxManager_HLNaMassTeleport_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.UserConstructionScript
// ()

void AVfxManager_HLNaMassTeleport_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.UserConstructionScript");

	AVfxManager_HLNaMassTeleport_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.Timeline_0__FinishedFunc
// ()

void AVfxManager_HLNaMassTeleport_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.Timeline_0__FinishedFunc");

	AVfxManager_HLNaMassTeleport_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.Timeline_0__UpdateFunc
// ()

void AVfxManager_HLNaMassTeleport_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.Timeline_0__UpdateFunc");

	AVfxManager_HLNaMassTeleport_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.Multi_UpdateTeleportingChars
// ()
// Parameters:
// TArray<class APrimalCharacter*> NewTeleportCharsList           (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AVfxManager_HLNaMassTeleport_C::Multi_UpdateTeleportingChars(TArray<class APrimalCharacter*>* NewTeleportCharsList)
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.Multi_UpdateTeleportingChars");

	AVfxManager_HLNaMassTeleport_C_Multi_UpdateTeleportingChars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewTeleportCharsList != nullptr)
		*NewTeleportCharsList = params.NewTeleportCharsList;
}


// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.set vfx parameters
// ()
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Color                          (Parm, ZeroConstructor, IsPlainOldData)

void AVfxManager_HLNaMassTeleport_C::set_vfx_parameters(float Radius, float Speed, const struct FVector& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.set vfx parameters");

	AVfxManager_HLNaMassTeleport_C_set_vfx_parameters_Params params;
	params.Radius = Radius;
	params.Speed = Speed;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.Envelop Sphere
// ()

void AVfxManager_HLNaMassTeleport_C::Envelop_Sphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.Envelop Sphere");

	AVfxManager_HLNaMassTeleport_C_Envelop_Sphere_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.multicast clean up
// ()

void AVfxManager_HLNaMassTeleport_C::multicast_clean_up()
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.multicast clean up");

	AVfxManager_HLNaMassTeleport_C_multicast_clean_up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.multicast vfx failed
// ()

void AVfxManager_HLNaMassTeleport_C::multicast_vfx_failed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.multicast vfx failed");

	AVfxManager_HLNaMassTeleport_C_multicast_vfx_failed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.ExecuteUbergraph_VfxManager_HLNaMassTeleport
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVfxManager_HLNaMassTeleport_C::ExecuteUbergraph_VfxManager_HLNaMassTeleport(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaMassTeleport.VfxManager_HLNaMassTeleport_C.ExecuteUbergraph_VfxManager_HLNaMassTeleport");

	AVfxManager_HLNaMassTeleport_C_ExecuteUbergraph_VfxManager_HLNaMassTeleport_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
