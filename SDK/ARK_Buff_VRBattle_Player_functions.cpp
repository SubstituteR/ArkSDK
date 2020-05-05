// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_VRBattle_Player_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.GetPlayerController
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_Player_C::GetPlayerController(class APlayerController** PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.GetPlayerController");

	ABuff_VRBattle_Player_C_GetPlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PC != nullptr)
		*PC = params.PC;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.IsReady?
// ()
// Parameters:
// bool                           Ready_                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_Player_C::IsReady_(bool* Ready_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.IsReady?");

	ABuff_VRBattle_Player_C_IsReady__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ready_ != nullptr)
		*Ready_ = params.Ready_;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_VRBattle_Player_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.BPServerHandleNetExecCommand");

	ABuff_VRBattle_Player_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.EnsureBossIsVisible
// ()

void ABuff_VRBattle_Player_C::EnsureBossIsVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.EnsureBossIsVisible");

	ABuff_VRBattle_Player_C_EnsureBossIsVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Play Current Boss Montage
// (NetReliable, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, BlueprintCallable, BlueprintEvent, NetValidate)

void ABuff_VRBattle_Player_C::STATIC_Play_Current_Boss_Montage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Play Current Boss Montage");

	ABuff_VRBattle_Player_C_Play_Current_Boss_Montage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.InitializeBossActor
// ()

void ABuff_VRBattle_Player_C::InitializeBossActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.InitializeBossActor");

	ABuff_VRBattle_Player_C_InitializeBossActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Does Companion Reaction Match?
// (NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// struct FVRBattleCompanionData  BossReaction                   (Parm, OutParm, ReferenceParm)
// struct FCompanionReactionData  CompanionReaction              (Parm, OutParm, ReferenceParm)
// bool                           Matches                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_Player_C::STATIC_Does_Companion_Reaction_Match_(struct FVRBattleCompanionData* BossReaction, struct FCompanionReactionData* CompanionReaction, bool* Matches)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Does Companion Reaction Match?");

	ABuff_VRBattle_Player_C_Does_Companion_Reaction_Match__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BossReaction != nullptr)
		*BossReaction = params.BossReaction;
	if (CompanionReaction != nullptr)
		*CompanionReaction = params.CompanionReaction;
	if (Matches != nullptr)
		*Matches = params.Matches;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Does Boss CompanionReaction Match?
// ()
// Parameters:
// struct FVRBattleCompanionData  BossReaction                   (Parm, OutParm, ReferenceParm)
// struct FCompanionReactionData  CompanionReaction              (Parm, OutParm, ReferenceParm)
// bool                           Matches                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_Player_C::Does_Boss_CompanionReaction_Match_(struct FVRBattleCompanionData* BossReaction, struct FCompanionReactionData* CompanionReaction, bool* Matches)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Does Boss CompanionReaction Match?");

	ABuff_VRBattle_Player_C_Does_Boss_CompanionReaction_Match__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BossReaction != nullptr)
		*BossReaction = params.BossReaction;
	if (CompanionReaction != nullptr)
		*CompanionReaction = params.CompanionReaction;
	if (Matches != nullptr)
		*Matches = params.Matches;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Get Current VR Battle Companion Data
// (NetReliable, NetRequest, Native, MulticastDelegate, Public, Private, Protected, NetServer, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// bool                           IsValid_                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVRBattleCompanionData  Data                           (Parm, OutParm)

void ABuff_VRBattle_Player_C::Get_Current_VR_Battle_Companion_Data(bool* IsValid_, struct FVRBattleCompanionData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Get Current VR Battle Companion Data");

	ABuff_VRBattle_Player_C_Get_Current_VR_Battle_Companion_Data_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid_ != nullptr)
		*IsValid_ = params.IsValid_;
	if (Data != nullptr)
		*Data = params.Data;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Does Companion Reaction Data Match Current Request?
// (Event, MulticastDelegate, Public, Private, Protected, NetServer, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// struct FCompanionReactionData  ReactionData                   (Parm, OutParm, ReferenceParm)
// bool                           Matches                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_Player_C::Does_Companion_Reaction_Data_Match_Current_Request_(struct FCompanionReactionData* ReactionData, bool* Matches)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Does Companion Reaction Data Match Current Request?");

	ABuff_VRBattle_Player_C_Does_Companion_Reaction_Data_Match_Current_Request__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReactionData != nullptr)
		*ReactionData = params.ReactionData;
	if (Matches != nullptr)
		*Matches = params.Matches;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Stop Companion Reaction
// ()

void ABuff_VRBattle_Player_C::Stop_Companion_Reaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Stop Companion Reaction");

	ABuff_VRBattle_Player_C_Stop_Companion_Reaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.MakeCompanionHackingEvent
// (NetRequest, Exec, Native, Event, MulticastDelegate, Public, Private, Protected, NetServer, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_Player_C::MakeCompanionHackingEvent(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.MakeCompanionHackingEvent");

	ABuff_VRBattle_Player_C_MakeCompanionHackingEvent_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.IsCarryingMaxCodeKeys
// ()
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_Player_C::IsCarryingMaxCodeKeys(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.IsCarryingMaxCodeKeys");

	ABuff_VRBattle_Player_C_IsCarryingMaxCodeKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Get Modified Max Code Keys That Can be Carried
// ()
// Parameters:
// int                            Num                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_Player_C::Get_Modified_Max_Code_Keys_That_Can_be_Carried(int* Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Get Modified Max Code Keys That Can be Carried");

	ABuff_VRBattle_Player_C_Get_Modified_Max_Code_Keys_That_Can_be_Carried_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Num != nullptr)
		*Num = params.Num;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_Player_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.BuffTickServer");

	ABuff_VRBattle_Player_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.UserConstructionScript
// ()

void ABuff_VRBattle_Player_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.UserConstructionScript");

	ABuff_VRBattle_Player_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.DoSpawnPortalFX
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_Player_C::DoSpawnPortalFX(const struct FVector& Location, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.DoSpawnPortalFX");

	ABuff_VRBattle_Player_C_DoSpawnPortalFX_Params params;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Server_StartCompanionHacking
// ()
// Parameters:
// float                          HackingDuration                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Kiosk                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_Player_C::Server_StartCompanionHacking(float HackingDuration, class AActor* Kiosk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Server_StartCompanionHacking");

	ABuff_VRBattle_Player_C_Server_StartCompanionHacking_Params params;
	params.HackingDuration = HackingDuration;
	params.Kiosk = Kiosk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Multicast_StartCompanionHacking
// ()
// Parameters:
// float                          HackDuration                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Kiosk                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_Player_C::Multicast_StartCompanionHacking(float HackDuration, class AActor* Kiosk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Multicast_StartCompanionHacking");

	ABuff_VRBattle_Player_C_Multicast_StartCompanionHacking_Params params;
	params.HackDuration = HackDuration;
	params.Kiosk = Kiosk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Server_StopCompanionHacking
// ()

void ABuff_VRBattle_Player_C::Server_StopCompanionHacking()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Server_StopCompanionHacking");

	ABuff_VRBattle_Player_C_Server_StopCompanionHacking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Multicast_StopCompanionHacking
// ()

void ABuff_VRBattle_Player_C::Multicast_StopCompanionHacking()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Multicast_StopCompanionHacking");

	ABuff_VRBattle_Player_C_Multicast_StopCompanionHacking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Server_StopCompanionReaction
// ()

void ABuff_VRBattle_Player_C::Server_StopCompanionReaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Server_StopCompanionReaction");

	ABuff_VRBattle_Player_C_Server_StopCompanionReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Multicast_StopCompanionReaction
// ()

void ABuff_VRBattle_Player_C::Multicast_StopCompanionReaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Multicast_StopCompanionReaction");

	ABuff_VRBattle_Player_C_Multicast_StopCompanionReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_Player_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.BuffTickClient");

	ABuff_VRBattle_Player_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.StartBossCompanionReactionSequence
// ()
// Parameters:
// struct FVRBattleBossCompanionReactionSequence Sequence                       (Parm, OutParm, ReferenceParm)

void ABuff_VRBattle_Player_C::StartBossCompanionReactionSequence(struct FVRBattleBossCompanionReactionSequence* Sequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.StartBossCompanionReactionSequence");

	ABuff_VRBattle_Player_C_StartBossCompanionReactionSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sequence != nullptr)
		*Sequence = params.Sequence;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.PlayBossCompanionReaction
// ()
// Parameters:
// int                            ReactionIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_Player_C::PlayBossCompanionReaction(int ReactionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.PlayBossCompanionReaction");

	ABuff_VRBattle_Player_C_PlayBossCompanionReaction_Params params;
	params.ReactionIndex = ReactionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.PlayBossLine
// ()
// Parameters:
// struct FVRBattleCompanionData  CompanionData                  (Parm)

void ABuff_VRBattle_Player_C::PlayBossLine(const struct FVRBattleCompanionData& CompanionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.PlayBossLine");

	ABuff_VRBattle_Player_C_PlayBossLine_Params params;
	params.CompanionData = CompanionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.PlayCompanionLine
// ()
// Parameters:
// struct FVRBattleCompanionData  CompanionData                  (Parm)

void ABuff_VRBattle_Player_C::PlayCompanionLine(const struct FVRBattleCompanionData& CompanionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.PlayCompanionLine");

	ABuff_VRBattle_Player_C_PlayCompanionLine_Params params;
	params.CompanionData = CompanionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.OnReactionPlayed_Delegate_Event
// ()
// Parameters:
// class APrimalBuff_Companion*   ReactingCompanion              (Parm, ZeroConstructor, IsPlainOldData)
// struct FCompanionReactionData  ReactionData                   (Parm, OutParm, ReferenceParm)
// int                            UniqueID                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_Player_C::OnReactionPlayed_Delegate_Event(class APrimalBuff_Companion* ReactingCompanion, int UniqueID, struct FCompanionReactionData* ReactionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.OnReactionPlayed_Delegate_Event");

	ABuff_VRBattle_Player_C_OnReactionPlayed_Delegate_Event_Params params;
	params.ReactingCompanion = ReactingCompanion;
	params.UniqueID = UniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReactionData != nullptr)
		*ReactionData = params.ReactionData;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.StartDelayedBossCompanionSequence
// ()

void ABuff_VRBattle_Player_C::StartDelayedBossCompanionSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.StartDelayedBossCompanionSequence");

	ABuff_VRBattle_Player_C_StartDelayedBossCompanionSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_Player_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.BPDeactivated");

	ABuff_VRBattle_Player_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.OnReactionStopped_Delegate_Event
// ()
// Parameters:
// class APrimalBuff_Companion*   ReactingCompanion              (Parm, ZeroConstructor, IsPlainOldData)
// struct FCompanionReactionData  ReactionData                   (Parm, OutParm, ReferenceParm)
// int                            UniqueID                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_Player_C::OnReactionStopped_Delegate_Event(class APrimalBuff_Companion* ReactingCompanion, int UniqueID, struct FCompanionReactionData* ReactionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.OnReactionStopped_Delegate_Event");

	ABuff_VRBattle_Player_C_OnReactionStopped_Delegate_Event_Params params;
	params.ReactingCompanion = ReactingCompanion;
	params.UniqueID = UniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReactionData != nullptr)
		*ReactionData = params.ReactionData;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Cancel Boss Companion Sequence
// ()

void ABuff_VRBattle_Player_C::Cancel_Boss_Companion_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Cancel Boss Companion Sequence");

	ABuff_VRBattle_Player_C_Cancel_Boss_Companion_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.PlayPhaseEventSequence
// ()
// Parameters:
// struct FName                   PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EVRBattlePhaseEvent> Event                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_Player_C::PlayPhaseEventSequence(const struct FName& PhaseName, TEnumAsByte<EVRBattlePhaseEvent> Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.PlayPhaseEventSequence");

	ABuff_VRBattle_Player_C_PlayPhaseEventSequence_Params params;
	params.PhaseName = PhaseName;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Multicast_OnPhaseEvent_Event
// ()
// Parameters:
// struct FName                   PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EVRBattlePhaseEvent> Event                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_Player_C::Multicast_OnPhaseEvent_Event(const struct FName& PhaseName, TEnumAsByte<EVRBattlePhaseEvent> Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Multicast_OnPhaseEvent_Event");

	ABuff_VRBattle_Player_C_Multicast_OnPhaseEvent_Event_Params params;
	params.PhaseName = PhaseName;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.ServerBroadcastPhaseEvent
// ()
// Parameters:
// struct FName                   PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EVRBattlePhaseEvent> EventName                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_Player_C::ServerBroadcastPhaseEvent(const struct FName& PhaseName, TEnumAsByte<EVRBattlePhaseEvent> EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.ServerBroadcastPhaseEvent");

	ABuff_VRBattle_Player_C_ServerBroadcastPhaseEvent_Params params;
	params.PhaseName = PhaseName;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Client_PlayPickupNoise
// ()

void ABuff_VRBattle_Player_C::Client_PlayPickupNoise()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.Client_PlayPickupNoise");

	ABuff_VRBattle_Player_C_Client_PlayPickupNoise_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.ShowBossLastWordsSubtitles
// ()

void ABuff_VRBattle_Player_C::ShowBossLastWordsSubtitles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.ShowBossLastWordsSubtitles");

	ABuff_VRBattle_Player_C_ShowBossLastWordsSubtitles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.CheckSendKeyFullAlert
// ()
// Parameters:
// bool                           IsFull                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_Player_C::CheckSendKeyFullAlert(bool IsFull)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.CheckSendKeyFullAlert");

	ABuff_VRBattle_Player_C_CheckSendKeyFullAlert_Params params;
	params.IsFull = IsFull;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.ExecuteUbergraph_Buff_VRBattle_Player
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_Player_C::ExecuteUbergraph_Buff_VRBattle_Player(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_Player.Buff_VRBattle_Player_C.ExecuteUbergraph_Buff_VRBattle_Player");

	ABuff_VRBattle_Player_C_ExecuteUbergraph_Buff_VRBattle_Player_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
