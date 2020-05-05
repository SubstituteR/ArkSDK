// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VfxManager_HLNaPostMassTeleport_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.Player Is nearby
// ()
// Parameters:
// bool                           is_nearby                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       local_player                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVfxManager_HLNaPostMassTeleport_C::Player_Is_nearby(bool* is_nearby, class AShooterCharacter** local_player)
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.Player Is nearby");

	AVfxManager_HLNaPostMassTeleport_C_Player_Is_nearby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (is_nearby != nullptr)
		*is_nearby = params.is_nearby;
	if (local_player != nullptr)
		*local_player = params.local_player;
}


// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.cleanup ibl and transfer pp
// ()

void AVfxManager_HLNaPostMassTeleport_C::cleanup_ibl_and_transfer_pp()
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.cleanup ibl and transfer pp");

	AVfxManager_HLNaPostMassTeleport_C_cleanup_ibl_and_transfer_pp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.Check if Fully Loaded Fallback
// ()

void AVfxManager_HLNaPostMassTeleport_C::Check_if_Fully_Loaded_Fallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.Check if Fully Loaded Fallback");

	AVfxManager_HLNaPostMassTeleport_C_Check_if_Fully_Loaded_Fallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.set sphere PP teleport value
// ()
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AVfxManager_HLNaPostMassTeleport_C::set_sphere_PP_teleport_value(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.set sphere PP teleport value");

	AVfxManager_HLNaPostMassTeleport_C_set_sphere_PP_teleport_value_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.ReceiveDestroyed
// ()

void AVfxManager_HLNaPostMassTeleport_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.ReceiveDestroyed");

	AVfxManager_HLNaPostMassTeleport_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.Set Dynamic Materials
// ()

void AVfxManager_HLNaPostMassTeleport_C::Set_Dynamic_Materials()
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.Set Dynamic Materials");

	AVfxManager_HLNaPostMassTeleport_C_Set_Dynamic_Materials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.Init
// ()
// Parameters:
// class ABuff_Companion_HLNA_C*  CreatedByHLNA                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Teleport_Sphere_Radius         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Teleport_Charge_Duration       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 VFX_Color                      (Parm, ZeroConstructor, IsPlainOldData)

void AVfxManager_HLNaPostMassTeleport_C::Init(class ABuff_Companion_HLNA_C* CreatedByHLNA, float Teleport_Sphere_Radius, float Teleport_Charge_Duration, const struct FVector& VFX_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.Init");

	AVfxManager_HLNaPostMassTeleport_C_Init_Params params;
	params.CreatedByHLNA = CreatedByHLNA;
	params.Teleport_Sphere_Radius = Teleport_Sphere_Radius;
	params.Teleport_Charge_Duration = Teleport_Charge_Duration;
	params.VFX_Color = VFX_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.OnMassTeleportEvent
// ()
// Parameters:
// TEnumAsByte<EMassTeleportState> EventState                     (Parm, ZeroConstructor, IsPlainOldData)

void AVfxManager_HLNaPostMassTeleport_C::OnMassTeleportEvent(TEnumAsByte<EMassTeleportState> EventState)
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.OnMassTeleportEvent");

	AVfxManager_HLNaPostMassTeleport_C_OnMassTeleportEvent_Params params;
	params.EventState = EventState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.CleanUpTeleportVfxManager
// ()

void AVfxManager_HLNaPostMassTeleport_C::CleanUpTeleportVfxManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.CleanUpTeleportVfxManager");

	AVfxManager_HLNaPostMassTeleport_C_CleanUpTeleportVfxManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.UpdateTeleportCharList
// ()
// Parameters:
// TArray<class APrimalCharacter*> NewTeleportCharList            (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AVfxManager_HLNaPostMassTeleport_C::UpdateTeleportCharList(TArray<class APrimalCharacter*>* NewTeleportCharList)
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.UpdateTeleportCharList");

	AVfxManager_HLNaPostMassTeleport_C_UpdateTeleportCharList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewTeleportCharList != nullptr)
		*NewTeleportCharList = params.NewTeleportCharList;
}


// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.ReceiveBeginPlay
// ()

void AVfxManager_HLNaPostMassTeleport_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.ReceiveBeginPlay");

	AVfxManager_HLNaPostMassTeleport_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AVfxManager_HLNaPostMassTeleport_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.ReceiveTick");

	AVfxManager_HLNaPostMassTeleport_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.UserConstructionScript
// ()

void AVfxManager_HLNaPostMassTeleport_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.UserConstructionScript");

	AVfxManager_HLNaPostMassTeleport_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.Timeline_0__FinishedFunc
// ()

void AVfxManager_HLNaPostMassTeleport_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.Timeline_0__FinishedFunc");

	AVfxManager_HLNaPostMassTeleport_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.Timeline_0__UpdateFunc
// ()

void AVfxManager_HLNaPostMassTeleport_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.Timeline_0__UpdateFunc");

	AVfxManager_HLNaPostMassTeleport_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.Multi_UpdateTeleportingChars
// ()
// Parameters:
// TArray<class APrimalCharacter*> NewTeleportCharsList           (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AVfxManager_HLNaPostMassTeleport_C::Multi_UpdateTeleportingChars(TArray<class APrimalCharacter*>* NewTeleportCharsList)
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.Multi_UpdateTeleportingChars");

	AVfxManager_HLNaPostMassTeleport_C_Multi_UpdateTeleportingChars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewTeleportCharsList != nullptr)
		*NewTeleportCharsList = params.NewTeleportCharsList;
}


// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.set vfx parameters
// ()
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Color                          (Parm, ZeroConstructor, IsPlainOldData)

void AVfxManager_HLNaPostMassTeleport_C::set_vfx_parameters(float Radius, const struct FVector& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.set vfx parameters");

	AVfxManager_HLNaPostMassTeleport_C_set_vfx_parameters_Params params;
	params.Radius = Radius;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.Envelop Sphere
// ()

void AVfxManager_HLNaPostMassTeleport_C::Envelop_Sphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.Envelop Sphere");

	AVfxManager_HLNaPostMassTeleport_C_Envelop_Sphere_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.begin local client events
// ()

void AVfxManager_HLNaPostMassTeleport_C::begin_local_client_events()
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.begin local client events");

	AVfxManager_HLNaPostMassTeleport_C_begin_local_client_events_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.ExecuteUbergraph_VfxManager_HLNaPostMassTeleport
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVfxManager_HLNaPostMassTeleport_C::ExecuteUbergraph_VfxManager_HLNaPostMassTeleport(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VfxManager_HLNaPostMassTeleport.VfxManager_HLNaPostMassTeleport_C.ExecuteUbergraph_VfxManager_HLNaPostMassTeleport");

	AVfxManager_HLNaPostMassTeleport_C_ExecuteUbergraph_VfxManager_HLNaPostMassTeleport_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
