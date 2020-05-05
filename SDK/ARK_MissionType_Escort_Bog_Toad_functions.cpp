// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Escort_Bog_Toad_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.BPIsPhaseComplete
// ()
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_Escort_Bog_Toad_C::BPIsPhaseComplete(struct FName* PhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.BPIsPhaseComplete");

	AMissionType_Escort_Bog_Toad_C_BPIsPhaseComplete_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.TryIncrementCheckpoint
// ()
// Parameters:
// class AMissionTrigger**        HitTrigger                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Succes                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           AtEnd                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Bog_Toad_C::TryIncrementCheckpoint(class AMissionTrigger** HitTrigger, bool* Succes, bool* AtEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.TryIncrementCheckpoint");

	AMissionType_Escort_Bog_Toad_C_TryIncrementCheckpoint_Params params;
	params.HitTrigger = HitTrigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Succes != nullptr)
		*Succes = params.Succes;
	if (AtEnd != nullptr)
		*AtEnd = params.AtEnd;
}


// Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.AttemptSpawnFrogFamily
// (NetReliable, NetRequest, Exec, Event, NetResponse, Private, Protected, HasDefaults, BlueprintEvent, NetValidate)

void AMissionType_Escort_Bog_Toad_C::AttemptSpawnFrogFamily()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.AttemptSpawnFrogFamily");

	AMissionType_Escort_Bog_Toad_C_AttemptSpawnFrogFamily_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.SetDinoEscapeProperties
// ()
// Parameters:
// class APrimalDinoCharacter*    Dino                           (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Bog_Toad_C::SetDinoEscapeProperties(class APrimalDinoCharacter* Dino)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.SetDinoEscapeProperties");

	AMissionType_Escort_Bog_Toad_C_SetDinoEscapeProperties_Params params;
	params.Dino = Dino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.MakeDinoBaby
// ()
// Parameters:
// class APrimalDinoCharacter*    Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          BabyAge                        (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Bog_Toad_C::MakeDinoBaby(class APrimalDinoCharacter* Dino, float BabyAge)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.MakeDinoBaby");

	AMissionType_Escort_Bog_Toad_C_MakeDinoBaby_Params params;
	params.Dino = Dino;
	params.BabyAge = BabyAge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.UserConstructionScript
// ()

void AMissionType_Escort_Bog_Toad_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.UserConstructionScript");

	AMissionType_Escort_Bog_Toad_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.BPOnMissionServerSetup
// ()

void AMissionType_Escort_Bog_Toad_C::BPOnMissionServerSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.BPOnMissionServerSetup");

	AMissionType_Escort_Bog_Toad_C_BPOnMissionServerSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.EscapePhaseStarted
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Bog_Toad_C::EscapePhaseStarted(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.EscapePhaseStarted");

	AMissionType_Escort_Bog_Toad_C_EscapePhaseStarted_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.MultiFXFrogFamily
// ()
// Parameters:
// TArray<class APrimalDinoCharacter*> Dinos                          (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMissionType_Escort_Bog_Toad_C::MultiFXFrogFamily(TArray<class APrimalDinoCharacter*>* Dinos)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.MultiFXFrogFamily");

	AMissionType_Escort_Bog_Toad_C_MultiFXFrogFamily_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dinos != nullptr)
		*Dinos = params.Dinos;
}


// Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.BPOnMissionComplete
// ()
// Parameters:
// class AShooterCharacter**      ForPlayer                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForController                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLastPhaseSuccess              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPRewarded                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UPrimalItem*>     ItemsRewarded                  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMissionType_Escort_Bog_Toad_C::BPOnMissionComplete(class AShooterCharacter** ForPlayer, class AShooterPlayerController** ForController, bool* bLastPhaseSuccess, float* XPRewarded, TArray<class UPrimalItem*>* ItemsRewarded)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.BPOnMissionComplete");

	AMissionType_Escort_Bog_Toad_C_BPOnMissionComplete_Params params;
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


// Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.ExecuteUbergraph_MissionType_Escort_Bog_Toad
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Bog_Toad_C::ExecuteUbergraph_MissionType_Escort_Bog_Toad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Bog_Toad.MissionType_Escort_Bog_Toad_C.ExecuteUbergraph_MissionType_Escort_Bog_Toad");

	AMissionType_Escort_Bog_Toad_C_ExecuteUbergraph_MissionType_Escort_Bog_Toad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
