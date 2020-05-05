// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_VRBattle_FinalStage_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.ForceSucceedMission
// ()

void AMissionType_VRBattle_FinalStage_C::ForceSucceedMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.ForceSucceedMission");

	AMissionType_VRBattle_FinalStage_C_ForceSucceedMission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.HaveAllPlayersAscended?
// ()
// Parameters:
// bool                           AllPlayersHaveAscended         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_FinalStage_C::HaveAllPlayersAscended_(bool* AllPlayersHaveAscended)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.HaveAllPlayersAscended?");

	AMissionType_VRBattle_FinalStage_C_HaveAllPlayersAscended__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllPlayersHaveAscended != nullptr)
		*AllPlayersHaveAscended = params.AllPlayersHaveAscended;
}


// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.BPOnPlayerRemovedFromMission
// ()
// Parameters:
// class AShooterCharacter**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromMissionCompleteEvent      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLastPhaseSuccess              (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_FinalStage_C::BPOnPlayerRemovedFromMission(class AShooterCharacter** Player, class AShooterPlayerController** Controller, bool* bFromMissionCompleteEvent, bool* bLastPhaseSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.BPOnPlayerRemovedFromMission");

	AMissionType_VRBattle_FinalStage_C_BPOnPlayerRemovedFromMission_Params params;
	params.Player = Player;
	params.Controller = Controller;
	params.bFromMissionCompleteEvent = bFromMissionCompleteEvent;
	params.bLastPhaseSuccess = bLastPhaseSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.FireBeamFromKiosk
// (NetReliable, Event, NetResponse, Private, Protected, NetServer, BlueprintCallable, BlueprintEvent, NetValidate)

void AMissionType_VRBattle_FinalStage_C::FireBeamFromKiosk()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.FireBeamFromKiosk");

	AMissionType_VRBattle_FinalStage_C_FireBeamFromKiosk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.Get Difficulty Index As Int
// ()
// Parameters:
// int                            NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_FinalStage_C::Get_Difficulty_Index_As_Int(int* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.Get Difficulty Index As Int");

	AMissionType_VRBattle_FinalStage_C_Get_Difficulty_Index_As_Int_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.Num Code Keys Required to Activate Kiosk
// ()
// Parameters:
// int                            NumKeys                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_FinalStage_C::Num_Code_Keys_Required_to_Activate_Kiosk(int* NumKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.Num Code Keys Required to Activate Kiosk");

	AMissionType_VRBattle_FinalStage_C_Num_Code_Keys_Required_to_Activate_Kiosk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumKeys != nullptr)
		*NumKeys = params.NumKeys;
}


// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.BPOnMissionActivated
// ()

void AMissionType_VRBattle_FinalStage_C::BPOnMissionActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.BPOnMissionActivated");

	AMissionType_VRBattle_FinalStage_C_BPOnMissionActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.GetCurrentWorldIndicators
// (NetReliable, Static, Private, Protected, NetServer, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// TArray<struct FMissionWorldIndicator> WorldIndicators                (Parm, OutParm, ZeroConstructor)

void AMissionType_VRBattle_FinalStage_C::STATIC_GetCurrentWorldIndicators(TArray<struct FMissionWorldIndicator>* WorldIndicators)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.GetCurrentWorldIndicators");

	AMissionType_VRBattle_FinalStage_C_GetCurrentWorldIndicators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldIndicators != nullptr)
		*WorldIndicators = params.WorldIndicators;
}


// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.BPOnMissionDeactivated
// (NetRequest, Exec, Event, MulticastDelegate, Public, Private, NetServer, BlueprintCallable, BlueprintEvent, NetValidate)

void AMissionType_VRBattle_FinalStage_C::BPOnMissionDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.BPOnMissionDeactivated");

	AMissionType_VRBattle_FinalStage_C_BPOnMissionDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.IsMissionComplete
// ()
// Parameters:
// class AShooterCharacter**      forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForController                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_VRBattle_FinalStage_C::IsMissionComplete(class AShooterCharacter** forCharacter, class AShooterPlayerController** ForController)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.IsMissionComplete");

	AMissionType_VRBattle_FinalStage_C_IsMissionComplete_Params params;
	params.forCharacter = forCharacter;
	params.ForController = ForController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.On Player Begin Overlap Code Key Kiosk
// ()
// Parameters:
// class AShooterCharacter**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AMissionTrigger_VRBattleCodeKeyKiosk_C** CodeKeyKiosk                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_FinalStage_C::On_Player_Begin_Overlap_Code_Key_Kiosk(class AShooterCharacter** Player, class AMissionTrigger_VRBattleCodeKeyKiosk_C** CodeKeyKiosk)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.On Player Begin Overlap Code Key Kiosk");

	AMissionType_VRBattle_FinalStage_C_On_Player_Begin_Overlap_Code_Key_Kiosk_Params params;
	params.Player = Player;
	params.CodeKeyKiosk = CodeKeyKiosk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.BPOnMissionComplete
// ()
// Parameters:
// class AShooterCharacter**      ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForController                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLastPhaseSuccess              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPRewarded                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UPrimalItem*>     ItemsRewarded                  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMissionType_VRBattle_FinalStage_C::BPOnMissionComplete(class AShooterCharacter** ForPlayer, class AShooterPlayerController** ForController, bool* bLastPhaseSuccess, float* XPRewarded, TArray<class UPrimalItem*>* ItemsRewarded)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.BPOnMissionComplete");

	AMissionType_VRBattle_FinalStage_C_BPOnMissionComplete_Params params;
	params.ForPlayer = ForPlayer;
	params.ForController = ForController;
	params.bLastPhaseSuccess = bLastPhaseSuccess;
	params.XPRewarded = XPRewarded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemsRewarded != nullptr)
		*ItemsRewarded = params.ItemsRewarded;
}


// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.OnMainBossDamaged
// ()
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_FinalStage_C::OnMainBossDamaged(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.OnMainBossDamaged");

	AMissionType_VRBattle_FinalStage_C_OnMainBossDamaged_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.GeneratePhaseRequirements
// (NetReliable, Native, NetMulticast, Private, Protected, NetServer, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionPhaseRequirement> Requirements                   (Parm, OutParm, ZeroConstructor)

void AMissionType_VRBattle_FinalStage_C::GeneratePhaseRequirements(struct FName* PhaseName, TArray<struct FMissionPhaseRequirement>* Requirements)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.GeneratePhaseRequirements");

	AMissionType_VRBattle_FinalStage_C_GeneratePhaseRequirements_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Requirements != nullptr)
		*Requirements = params.Requirements;
}


// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.Play Shield Up Reaction
// ()

void AMissionType_VRBattle_FinalStage_C::Play_Shield_Up_Reaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.Play Shield Up Reaction");

	AMissionType_VRBattle_FinalStage_C_Play_Shield_Up_Reaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.OnSpawningPhaseStarted
// ()

void AMissionType_VRBattle_FinalStage_C::OnSpawningPhaseStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.OnSpawningPhaseStarted");

	AMissionType_VRBattle_FinalStage_C_OnSpawningPhaseStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.OnMainBossDied
// (NetRequest, NetResponse, NetMulticast, Private, Protected, NetServer, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// class APrimalCharacter*        BossCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_FinalStage_C::OnMainBossDied(class APrimalCharacter* BossCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.OnMainBossDied");

	AMissionType_VRBattle_FinalStage_C_OnMainBossDied_Params params;
	params.BossCharacter = BossCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.Init Main Boss
// ()

void AMissionType_VRBattle_FinalStage_C::Init_Main_Boss()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.Init Main Boss");

	AMissionType_VRBattle_FinalStage_C_Init_Main_Boss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.UserConstructionScript
// ()

void AMissionType_VRBattle_FinalStage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.UserConstructionScript");

	AMissionType_VRBattle_FinalStage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.OnCollectCodeKeysPhaseStarted
// ()
// Parameters:
// struct FName*                  OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_FinalStage_C::OnCollectCodeKeysPhaseStarted(struct FName* OldPhaseName, struct FName* NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.OnCollectCodeKeysPhaseStarted");

	AMissionType_VRBattle_FinalStage_C_OnCollectCodeKeysPhaseStarted_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.OnPrepPhaseStarted
// ()
// Parameters:
// struct FName*                  OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_FinalStage_C::OnPrepPhaseStarted(struct FName* OldPhaseName, struct FName* NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.OnPrepPhaseStarted");

	AMissionType_VRBattle_FinalStage_C_OnPrepPhaseStarted_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.FireBeamAtBoss
// ()
// Parameters:
// int                            TerminalIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_FinalStage_C::FireBeamAtBoss(int TerminalIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.FireBeamAtBoss");

	AMissionType_VRBattle_FinalStage_C_FireBeamAtBoss_Params params;
	params.TerminalIndex = TerminalIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.AscendPlayer
// ()
// Parameters:
// class AShooterCharacter*       Character                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_FinalStage_C::AscendPlayer(class AShooterCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.AscendPlayer");

	AMissionType_VRBattle_FinalStage_C_AscendPlayer_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.OnThrottledServerTick
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_FinalStage_C::OnThrottledServerTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.OnThrottledServerTick");

	AMissionType_VRBattle_FinalStage_C_OnThrottledServerTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.BPOnMissionServerSetup
// ()

void AMissionType_VRBattle_FinalStage_C::BPOnMissionServerSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.BPOnMissionServerSetup");

	AMissionType_VRBattle_FinalStage_C_BPOnMissionServerSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.ExecuteUbergraph_MissionType_VRBattle_FinalStage
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_FinalStage_C::ExecuteUbergraph_MissionType_VRBattle_FinalStage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_FinalStage.MissionType_VRBattle_FinalStage_C.ExecuteUbergraph_MissionType_VRBattle_FinalStage");

	AMissionType_VRBattle_FinalStage_C_ExecuteUbergraph_MissionType_VRBattle_FinalStage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
