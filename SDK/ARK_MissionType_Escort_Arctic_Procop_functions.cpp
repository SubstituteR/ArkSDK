// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Escort_Arctic_Procop_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.SetDinoEscapeProperties
// ()
// Parameters:
// class APrimalDinoCharacter*    Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ClearController                (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Arctic_Procop_C::SetDinoEscapeProperties(class APrimalDinoCharacter* Dino, bool ClearController)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.SetDinoEscapeProperties");

	AMissionType_Escort_Arctic_Procop_C_SetDinoEscapeProperties_Params params;
	params.Dino = Dino;
	params.ClearController = ClearController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.AttemptSpawnMother
// (Native, Event, NetResponse, Static, Private, Protected, HasDefaults, BlueprintEvent, NetValidate)

void AMissionType_Escort_Arctic_Procop_C::STATIC_AttemptSpawnMother()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.AttemptSpawnMother");

	AMissionType_Escort_Arctic_Procop_C_AttemptSpawnMother_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.TryIncrementCheckpoint
// ()
// Parameters:
// class AMissionTrigger**        HitTrigger                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Succes                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           AtEnd                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Arctic_Procop_C::TryIncrementCheckpoint(class AMissionTrigger** HitTrigger, bool* Succes, bool* AtEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.TryIncrementCheckpoint");

	AMissionType_Escort_Arctic_Procop_C_TryIncrementCheckpoint_Params params;
	params.HitTrigger = HitTrigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Succes != nullptr)
		*Succes = params.Succes;
	if (AtEnd != nullptr)
		*AtEnd = params.AtEnd;
}


// Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.ExtraEscortDinoSetup
// ()

void AMissionType_Escort_Arctic_Procop_C::ExtraEscortDinoSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.ExtraEscortDinoSetup");

	AMissionType_Escort_Arctic_Procop_C_ExtraEscortDinoSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.BPIsPhaseComplete
// ()
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_Escort_Arctic_Procop_C::BPIsPhaseComplete(struct FName* PhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.BPIsPhaseComplete");

	AMissionType_Escort_Arctic_Procop_C_BPIsPhaseComplete_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.DinoJump
// ()
// Parameters:
// class APrimalDinoCharacter*    Dino                           (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Arctic_Procop_C::DinoJump(class APrimalDinoCharacter* Dino)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.DinoJump");

	AMissionType_Escort_Arctic_Procop_C_DinoJump_Params params;
	params.Dino = Dino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.MakeEscortBaby
// ()

void AMissionType_Escort_Arctic_Procop_C::MakeEscortBaby()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.MakeEscortBaby");

	AMissionType_Escort_Arctic_Procop_C_MakeEscortBaby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.UserConstructionScript
// ()

void AMissionType_Escort_Arctic_Procop_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.UserConstructionScript");

	AMissionType_Escort_Arctic_Procop_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.BPOnMissionTriggerBeginOverlap
// ()
// Parameters:
// class AMissionTrigger**        Trigger                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Arctic_Procop_C::BPOnMissionTriggerBeginOverlap(class AMissionTrigger** Trigger, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.BPOnMissionTriggerBeginOverlap");

	AMissionType_Escort_Arctic_Procop_C_BPOnMissionTriggerBeginOverlap_Params params;
	params.Trigger = Trigger;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.BPOnMissionServerSetup
// ()

void AMissionType_Escort_Arctic_Procop_C::BPOnMissionServerSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.BPOnMissionServerSetup");

	AMissionType_Escort_Arctic_Procop_C_BPOnMissionServerSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.EscapePhaseStarted
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Arctic_Procop_C::EscapePhaseStarted(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.EscapePhaseStarted");

	AMissionType_Escort_Arctic_Procop_C_EscapePhaseStarted_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.OnThrottledServerTick
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Arctic_Procop_C::OnThrottledServerTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.OnThrottledServerTick");

	AMissionType_Escort_Arctic_Procop_C_OnThrottledServerTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.ExecuteUbergraph_MissionType_Escort_Arctic_Procop
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Arctic_Procop_C::ExecuteUbergraph_MissionType_Escort_Arctic_Procop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Arctic_Procop.MissionType_Escort_Arctic_Procop_C.ExecuteUbergraph_MissionType_Escort_Arctic_Procop");

	AMissionType_Escort_Arctic_Procop_C_ExecuteUbergraph_MissionType_Escort_Arctic_Procop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
