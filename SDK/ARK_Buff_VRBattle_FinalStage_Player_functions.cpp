// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_VRBattle_FinalStage_Player_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.OnRep_TauntRandomSeed
// ()

void ABuff_VRBattle_FinalStage_Player_C::OnRep_TauntRandomSeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.OnRep_TauntRandomSeed");

	ABuff_VRBattle_FinalStage_Player_C_OnRep_TauntRandomSeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.InitializeBossActor
// ()

void ABuff_VRBattle_FinalStage_Player_C::InitializeBossActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.InitializeBossActor");

	ABuff_VRBattle_FinalStage_Player_C_InitializeBossActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.BPGetHUDElements
// (NetReliable, Exec, Native, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_VRBattle_FinalStage_Player_C::STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.BPGetHUDElements");

	ABuff_VRBattle_FinalStage_Player_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.UserConstructionScript
// ()

void ABuff_VRBattle_FinalStage_Player_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.UserConstructionScript");

	ABuff_VRBattle_FinalStage_Player_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.PlayBossDeathMatinee
// ()
// Parameters:
// class AMatineeActor*           Matinee                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_FinalStage_Player_C::PlayBossDeathMatinee(class AMatineeActor* Matinee)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.PlayBossDeathMatinee");

	ABuff_VRBattle_FinalStage_Player_C_PlayBossDeathMatinee_Params params;
	params.Matinee = Matinee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.Server_OnClientFinishedMatinee
// ()

void ABuff_VRBattle_FinalStage_Player_C::Server_OnClientFinishedMatinee()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.Server_OnClientFinishedMatinee");

	ABuff_VRBattle_FinalStage_Player_C_Server_OnClientFinishedMatinee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_FinalStage_Player_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.BuffTickClient");

	ABuff_VRBattle_FinalStage_Player_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.Server_PlayBossDeathMatinee
// ()
// Parameters:
// class AMatineeActor*           DeathMatinee                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_FinalStage_Player_C::Server_PlayBossDeathMatinee(class AMatineeActor* DeathMatinee)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.Server_PlayBossDeathMatinee");

	ABuff_VRBattle_FinalStage_Player_C_Server_PlayBossDeathMatinee_Params params;
	params.DeathMatinee = DeathMatinee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_FinalStage_Player_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.BuffTickServer");

	ABuff_VRBattle_FinalStage_Player_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.PlayBossTauntSequence
// ()

void ABuff_VRBattle_FinalStage_Player_C::PlayBossTauntSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.PlayBossTauntSequence");

	ABuff_VRBattle_FinalStage_Player_C_PlayBossTauntSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.ReceiveBeginPlay
// ()

void ABuff_VRBattle_FinalStage_Player_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.ReceiveBeginPlay");

	ABuff_VRBattle_FinalStage_Player_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.CancelBossTaunt
// ()

void ABuff_VRBattle_FinalStage_Player_C::CancelBossTaunt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.CancelBossTaunt");

	ABuff_VRBattle_FinalStage_Player_C_CancelBossTaunt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.ExecuteUbergraph_Buff_VRBattle_FinalStage_Player
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_FinalStage_Player_C::ExecuteUbergraph_Buff_VRBattle_FinalStage_Player(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.ExecuteUbergraph_Buff_VRBattle_FinalStage_Player");

	ABuff_VRBattle_FinalStage_Player_C_ExecuteUbergraph_Buff_VRBattle_FinalStage_Player_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.OnBossDeathMatineeFinished__DelegateSignature
// ()
// Parameters:
// class AShooterCharacter*       Character                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_FinalStage_Player_C::OnBossDeathMatineeFinished__DelegateSignature(class AShooterCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C.OnBossDeathMatineeFinished__DelegateSignature");

	ABuff_VRBattle_FinalStage_Player_C_OnBossDeathMatineeFinished__DelegateSignature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
