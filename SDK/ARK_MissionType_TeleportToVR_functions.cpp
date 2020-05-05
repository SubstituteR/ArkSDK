// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_TeleportToVR_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.GetBossArenaManager
// ()
// Parameters:
// class ABossArenaManager_VRBattle_C* BossArenaManager               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_TeleportToVR_C::GetBossArenaManager(class ABossArenaManager_VRBattle_C** BossArenaManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.GetBossArenaManager");

	AMissionType_TeleportToVR_C_GetBossArenaManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BossArenaManager != nullptr)
		*BossArenaManager = params.BossArenaManager;
}


// Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.AreAnyPlayersInTheVRBiome?
// ()
// Parameters:
// TArray<class AShooterCharacter*> Players                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           APlayerIsInTheVRBiome          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_TeleportToVR_C::AreAnyPlayersInTheVRBiome_(TArray<class AShooterCharacter*>* Players, bool* APlayerIsInTheVRBiome)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.AreAnyPlayersInTheVRBiome?");

	AMissionType_TeleportToVR_C_AreAnyPlayersInTheVRBiome__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;
	if (APlayerIsInTheVRBiome != nullptr)
		*APlayerIsInTheVRBiome = params.APlayerIsInTheVRBiome;
}


// Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.AllowMissionCreation
// ()
// Parameters:
// class AShooterCharacter**      forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor**                 MissionDispatcherActor         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_TeleportToVR_C::AllowMissionCreation(class AShooterCharacter** forCharacter, class AActor** MissionDispatcherActor, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.AllowMissionCreation");

	AMissionType_TeleportToVR_C_AllowMissionCreation_Params params;
	params.forCharacter = forCharacter;
	params.MissionDispatcherActor = MissionDispatcherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;

	return params.ReturnValue;
}


// Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.OnMissionPhaseEnded
// ()
// Parameters:
// struct FName*                  OldPhase                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NewPhase                       (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_TeleportToVR_C::OnMissionPhaseEnded(struct FName* OldPhase, struct FName* NewPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.OnMissionPhaseEnded");

	AMissionType_TeleportToVR_C_OnMissionPhaseEnded_Params params;
	params.OldPhase = OldPhase;
	params.NewPhase = NewPhase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.create and initialize next mission
// (NetRequest, Exec, Native, Event, Static, NetMulticast, Protected, Delegate, NetServer, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// bool                           Success_                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_TeleportToVR_C::STATIC_create_and_initialize_next_mission(bool* Success_)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.create and initialize next mission");

	AMissionType_TeleportToVR_C_create_and_initialize_next_mission_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success_ != nullptr)
		*Success_ = params.Success_;
}


// Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.OnThrottledClientTick
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_TeleportToVR_C::OnThrottledClientTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.OnThrottledClientTick");

	AMissionType_TeleportToVR_C_OnThrottledClientTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.BPIsPhaseComplete
// ()
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_TeleportToVR_C::BPIsPhaseComplete(struct FName* PhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.BPIsPhaseComplete");

	AMissionType_TeleportToVR_C_BPIsPhaseComplete_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.end mission
// ()

void AMissionType_TeleportToVR_C::end_mission()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.end mission");

	AMissionType_TeleportToVR_C_end_mission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.UserConstructionScript
// ()

void AMissionType_TeleportToVR_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.UserConstructionScript");

	AMissionType_TeleportToVR_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.BPOnMissionServerSetup
// ()

void AMissionType_TeleportToVR_C::BPOnMissionServerSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.BPOnMissionServerSetup");

	AMissionType_TeleportToVR_C_BPOnMissionServerSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.PrepareTeleport
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_TeleportToVR_C::PrepareTeleport(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.PrepareTeleport");

	AMissionType_TeleportToVR_C_PrepareTeleport_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.On Teleport Finish
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_TeleportToVR_C::On_Teleport_Finish(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.On Teleport Finish");

	AMissionType_TeleportToVR_C_On_Teleport_Finish_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.PrepVRBattleArea
// ()

void AMissionType_TeleportToVR_C::PrepVRBattleArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.PrepVRBattleArea");

	AMissionType_TeleportToVR_C_PrepVRBattleArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.ExecuteUbergraph_MissionType_TeleportToVR
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_TeleportToVR_C::ExecuteUbergraph_MissionType_TeleportToVR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_TeleportToVR.MissionType_TeleportToVR_C.ExecuteUbergraph_MissionType_TeleportToVR");

	AMissionType_TeleportToVR_C_ExecuteUbergraph_MissionType_TeleportToVR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
