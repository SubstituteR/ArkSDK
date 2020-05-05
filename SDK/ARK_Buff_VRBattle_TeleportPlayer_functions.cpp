// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_VRBattle_TeleportPlayer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.BPPreventFirstPerson
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_VRBattle_TeleportPlayer_C::BPPreventFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.BPPreventFirstPerson");

	ABuff_VRBattle_TeleportPlayer_C_BPPreventFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.BPForceCameraStyle
// ()
// Parameters:
// class APrimalCharacter**       ForViewTarget                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECameraStyle>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECameraStyle> ABuff_VRBattle_TeleportPlayer_C::BPForceCameraStyle(class APrimalCharacter** ForViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.BPForceCameraStyle");

	ABuff_VRBattle_TeleportPlayer_C_BPForceCameraStyle_Params params;
	params.ForViewTarget = ForViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.BPOverrideTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_VRBattle_TeleportPlayer_C::BPOverrideTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.BPOverrideTargetingDesire");

	ABuff_VRBattle_TeleportPlayer_C_BPOverrideTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_TeleportPlayer_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.BuffTickClient");

	ABuff_VRBattle_TeleportPlayer_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_TeleportPlayer_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.BuffTickServer");

	ABuff_VRBattle_TeleportPlayer_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.UserConstructionScript
// ()

void ABuff_VRBattle_TeleportPlayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.UserConstructionScript");

	ABuff_VRBattle_TeleportPlayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.Multicast_StartTeleporting
// ()

void ABuff_VRBattle_TeleportPlayer_C::Multicast_StartTeleporting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.Multicast_StartTeleporting");

	ABuff_VRBattle_TeleportPlayer_C_Multicast_StartTeleporting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.OwningClient_StartTeleporting
// ()
// Parameters:
// class AMissionTrigger_VRBattleTeleporter_C* Teleporter                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_TeleportPlayer_C::OwningClient_StartTeleporting(class AMissionTrigger_VRBattleTeleporter_C* Teleporter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.OwningClient_StartTeleporting");

	ABuff_VRBattle_TeleportPlayer_C_OwningClient_StartTeleporting_Params params;
	params.Teleporter = Teleporter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.Server Teleport
// ()
// Parameters:
// class AMissionTrigger_VRBattleTeleporter_C* Teleporter                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_TeleportPlayer_C::Server_Teleport(class AMissionTrigger_VRBattleTeleporter_C* Teleporter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.Server Teleport");

	ABuff_VRBattle_TeleportPlayer_C_Server_Teleport_Params params;
	params.Teleporter = Teleporter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.Server_DoneTeleporting
// ()

void ABuff_VRBattle_TeleportPlayer_C::Server_DoneTeleporting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.Server_DoneTeleporting");

	ABuff_VRBattle_TeleportPlayer_C_Server_DoneTeleporting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.OwningClient_DoneTeleporting
// ()

void ABuff_VRBattle_TeleportPlayer_C::OwningClient_DoneTeleporting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.OwningClient_DoneTeleporting");

	ABuff_VRBattle_TeleportPlayer_C_OwningClient_DoneTeleporting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.Force_OwningClientDoneTeleporting
// ()

void ABuff_VRBattle_TeleportPlayer_C::Force_OwningClientDoneTeleporting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.Force_OwningClientDoneTeleporting");

	ABuff_VRBattle_TeleportPlayer_C_Force_OwningClientDoneTeleporting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.OnLandingLocationFound
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_TeleportPlayer_C::OnLandingLocationFound(class APrimalCharacter* Character, const struct FVector& Location, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.OnLandingLocationFound");

	ABuff_VRBattle_TeleportPlayer_C_OnLandingLocationFound_Params params;
	params.Character = Character;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.ExecuteUbergraph_Buff_VRBattle_TeleportPlayer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_TeleportPlayer_C::ExecuteUbergraph_Buff_VRBattle_TeleportPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.ExecuteUbergraph_Buff_VRBattle_TeleportPlayer");

	ABuff_VRBattle_TeleportPlayer_C_ExecuteUbergraph_Buff_VRBattle_TeleportPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.OnFinishedTeleporting__DelegateSignature
// ()
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_TeleportPlayer_C::OnFinishedTeleporting__DelegateSignature(class APlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_TeleportPlayer.Buff_VRBattle_TeleportPlayer_C.OnFinishedTeleporting__DelegateSignature");

	ABuff_VRBattle_TeleportPlayer_C_OnFinishedTeleporting__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
