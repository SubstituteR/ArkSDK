// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Escort_Lunar_LanternPets_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.InitMeshCheckpoints
// ()

void AMissionType_Escort_Lunar_LanternPets_C::InitMeshCheckpoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.InitMeshCheckpoints");

	AMissionType_Escort_Lunar_LanternPets_C_InitMeshCheckpoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.GeneratePhaseRequirements
// (NetReliable, Exec, Event, NetResponse, NetMulticast, Public, Delegate, HasDefaults, BlueprintEvent, NetValidate)
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionPhaseRequirement> Requirements                   (Parm, OutParm, ZeroConstructor)

void AMissionType_Escort_Lunar_LanternPets_C::GeneratePhaseRequirements(struct FName* PhaseName, TArray<struct FMissionPhaseRequirement>* Requirements)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.GeneratePhaseRequirements");

	AMissionType_Escort_Lunar_LanternPets_C_GeneratePhaseRequirements_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Requirements != nullptr)
		*Requirements = params.Requirements;
}


// Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.TryIncrementCheckpoint
// ()
// Parameters:
// class AMissionTrigger**        HitTrigger                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Succes                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           AtEnd                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Lunar_LanternPets_C::TryIncrementCheckpoint(class AMissionTrigger** HitTrigger, bool* Succes, bool* AtEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.TryIncrementCheckpoint");

	AMissionType_Escort_Lunar_LanternPets_C_TryIncrementCheckpoint_Params params;
	params.HitTrigger = HitTrigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Succes != nullptr)
		*Succes = params.Succes;
	if (AtEnd != nullptr)
		*AtEnd = params.AtEnd;
}


// Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.BPOnMissionDeactivated
// ()

void AMissionType_Escort_Lunar_LanternPets_C::BPOnMissionDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.BPOnMissionDeactivated");

	AMissionType_Escort_Lunar_LanternPets_C_BPOnMissionDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.BPIsPhaseComplete
// ()
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_Escort_Lunar_LanternPets_C::BPIsPhaseComplete(struct FName* PhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.BPIsPhaseComplete");

	AMissionType_Escort_Lunar_LanternPets_C_BPIsPhaseComplete_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.SpawnTriggerDinos
// ()
// Parameters:
// class AMissionTrigger**        Trigger                        (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Lunar_LanternPets_C::SpawnTriggerDinos(class AMissionTrigger** Trigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.SpawnTriggerDinos");

	AMissionType_Escort_Lunar_LanternPets_C_SpawnTriggerDinos_Params params;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.UserConstructionScript
// ()

void AMissionType_Escort_Lunar_LanternPets_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.UserConstructionScript");

	AMissionType_Escort_Lunar_LanternPets_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.BPOnMissionServerSetup
// ()

void AMissionType_Escort_Lunar_LanternPets_C::BPOnMissionServerSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.BPOnMissionServerSetup");

	AMissionType_Escort_Lunar_LanternPets_C_BPOnMissionServerSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.EscapePhaseStarted
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Lunar_LanternPets_C::EscapePhaseStarted(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.EscapePhaseStarted");

	AMissionType_Escort_Lunar_LanternPets_C_EscapePhaseStarted_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.EscortPhaseStarted
// ()
// Parameters:
// struct FName*                  OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Lunar_LanternPets_C::EscortPhaseStarted(struct FName* OldPhaseName, struct FName* NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.EscortPhaseStarted");

	AMissionType_Escort_Lunar_LanternPets_C_EscortPhaseStarted_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.MultiDoTeleportFX
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rot                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Lunar_LanternPets_C::MultiDoTeleportFX(const struct FVector& Loc, const struct FRotator& Rot, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.MultiDoTeleportFX");

	AMissionType_Escort_Lunar_LanternPets_C_MultiDoTeleportFX_Params params;
	params.Loc = Loc;
	params.Rot = Rot;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.OnThrottledServerTick
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Lunar_LanternPets_C::OnThrottledServerTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.OnThrottledServerTick");

	AMissionType_Escort_Lunar_LanternPets_C_OnThrottledServerTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.Event_EscortDinoDied
// ()
// Parameters:
// class APrimalCharacter**       DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Lunar_LanternPets_C::Event_EscortDinoDied(class APrimalCharacter** DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.Event_EscortDinoDied");

	AMissionType_Escort_Lunar_LanternPets_C_Event_EscortDinoDied_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.ExecuteUbergraph_MissionType_Escort_Lunar_LanternPets
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Lunar_LanternPets_C::ExecuteUbergraph_MissionType_Escort_Lunar_LanternPets(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Lunar_LanternPets.MissionType_Escort_Lunar_LanternPets_C.ExecuteUbergraph_MissionType_Escort_Lunar_LanternPets");

	AMissionType_Escort_Lunar_LanternPets_C_ExecuteUbergraph_MissionType_Escort_Lunar_LanternPets_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
