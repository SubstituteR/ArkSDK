// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Escort_Ocean_Turtle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.AttemptSpawnTurtlePals
// (Exec, Native, NetResponse, Public, Delegate, HasDefaults, BlueprintEvent, NetValidate)

void AMissionType_Escort_Ocean_Turtle_C::AttemptSpawnTurtlePals()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.AttemptSpawnTurtlePals");

	AMissionType_Escort_Ocean_Turtle_C_AttemptSpawnTurtlePals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.BPIsPhaseComplete
// ()
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_Escort_Ocean_Turtle_C::BPIsPhaseComplete(struct FName* PhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.BPIsPhaseComplete");

	AMissionType_Escort_Ocean_Turtle_C_BPIsPhaseComplete_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.SetDinoEscapeProperties
// ()
// Parameters:
// class APrimalDinoCharacter*    Dino                           (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Ocean_Turtle_C::SetDinoEscapeProperties(class APrimalDinoCharacter* Dino)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.SetDinoEscapeProperties");

	AMissionType_Escort_Ocean_Turtle_C_SetDinoEscapeProperties_Params params;
	params.Dino = Dino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.AttemptUpdateDeepWaterSpawnWeights
// ()

void AMissionType_Escort_Ocean_Turtle_C::AttemptUpdateDeepWaterSpawnWeights()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.AttemptUpdateDeepWaterSpawnWeights");

	AMissionType_Escort_Ocean_Turtle_C_AttemptUpdateDeepWaterSpawnWeights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.TryIncrementCheckpoint
// ()
// Parameters:
// class AMissionTrigger**        HitTrigger                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Succes                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           AtEnd                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Ocean_Turtle_C::TryIncrementCheckpoint(class AMissionTrigger** HitTrigger, bool* Succes, bool* AtEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.TryIncrementCheckpoint");

	AMissionType_Escort_Ocean_Turtle_C_TryIncrementCheckpoint_Params params;
	params.HitTrigger = HitTrigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Succes != nullptr)
		*Succes = params.Succes;
	if (AtEnd != nullptr)
		*AtEnd = params.AtEnd;
}


// Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.SpawnCyclones
// (NetRequest, Static, Public, Delegate, HasDefaults, BlueprintEvent, NetValidate)
// Parameters:
// TArray<class AMissionServerSidePoint*> CyclonePoints                  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMissionType_Escort_Ocean_Turtle_C::STATIC_SpawnCyclones(TArray<class AMissionServerSidePoint*>* CyclonePoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.SpawnCyclones");

	AMissionType_Escort_Ocean_Turtle_C_SpawnCyclones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CyclonePoints != nullptr)
		*CyclonePoints = params.CyclonePoints;
}


// Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.GetCyclonesThisCheckpoint
// ()

void AMissionType_Escort_Ocean_Turtle_C::GetCyclonesThisCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.GetCyclonesThisCheckpoint");

	AMissionType_Escort_Ocean_Turtle_C_GetCyclonesThisCheckpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.ExtraEscortDinoSetup
// ()

void AMissionType_Escort_Ocean_Turtle_C::ExtraEscortDinoSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.ExtraEscortDinoSetup");

	AMissionType_Escort_Ocean_Turtle_C_ExtraEscortDinoSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.ExtraFollowerSetup
// ()
// Parameters:
// int*                           index                          (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Ocean_Turtle_C::ExtraFollowerSetup(int* index)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.ExtraFollowerSetup");

	AMissionType_Escort_Ocean_Turtle_C_ExtraFollowerSetup_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.UserConstructionScript
// ()

void AMissionType_Escort_Ocean_Turtle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.UserConstructionScript");

	AMissionType_Escort_Ocean_Turtle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.BPOnMissionServerSetup
// ()

void AMissionType_Escort_Ocean_Turtle_C::BPOnMissionServerSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.BPOnMissionServerSetup");

	AMissionType_Escort_Ocean_Turtle_C_BPOnMissionServerSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.EscapePhaseStarted
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Ocean_Turtle_C::EscapePhaseStarted(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.EscapePhaseStarted");

	AMissionType_Escort_Ocean_Turtle_C_EscapePhaseStarted_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.MultiFXTurtlePals
// ()
// Parameters:
// TArray<class APrimalDinoCharacter*> Dinos                          (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMissionType_Escort_Ocean_Turtle_C::MultiFXTurtlePals(TArray<class APrimalDinoCharacter*>* Dinos)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.MultiFXTurtlePals");

	AMissionType_Escort_Ocean_Turtle_C_MultiFXTurtlePals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dinos != nullptr)
		*Dinos = params.Dinos;
}


// Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.BPOnMissionComplete
// ()
// Parameters:
// class AShooterCharacter**      ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForController                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLastPhaseSuccess              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPRewarded                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UPrimalItem*>     ItemsRewarded                  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMissionType_Escort_Ocean_Turtle_C::BPOnMissionComplete(class AShooterCharacter** ForPlayer, class AShooterPlayerController** ForController, bool* bLastPhaseSuccess, float* XPRewarded, TArray<class UPrimalItem*>* ItemsRewarded)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.BPOnMissionComplete");

	AMissionType_Escort_Ocean_Turtle_C_BPOnMissionComplete_Params params;
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


// Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.ExecuteUbergraph_MissionType_Escort_Ocean_Turtle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Ocean_Turtle_C::ExecuteUbergraph_MissionType_Escort_Ocean_Turtle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Ocean_Turtle.MissionType_Escort_Ocean_Turtle_C.ExecuteUbergraph_MissionType_Escort_Ocean_Turtle");

	AMissionType_Escort_Ocean_Turtle_C_ExecuteUbergraph_MissionType_Escort_Ocean_Turtle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
