// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Escort_Volcano_Para_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.TryIncrementCheckpoint
// ()
// Parameters:
// class AMissionTrigger**        HitTrigger                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Succes                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           AtEnd                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Volcano_Para_C::TryIncrementCheckpoint(class AMissionTrigger** HitTrigger, bool* Succes, bool* AtEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.TryIncrementCheckpoint");

	AMissionType_Escort_Volcano_Para_C_TryIncrementCheckpoint_Params params;
	params.HitTrigger = HitTrigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Succes != nullptr)
		*Succes = params.Succes;
	if (AtEnd != nullptr)
		*AtEnd = params.AtEnd;
}


// Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.BPIsPhaseComplete
// ()
// Parameters:
// struct FName*                  PhaseName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_Escort_Volcano_Para_C::BPIsPhaseComplete(struct FName* PhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.BPIsPhaseComplete");

	AMissionType_Escort_Volcano_Para_C_BPIsPhaseComplete_Params params;
	params.PhaseName = PhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.SetDinoEscapeProperties
// ()
// Parameters:
// class APrimalDinoCharacter*    Dino                           (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Volcano_Para_C::SetDinoEscapeProperties(class APrimalDinoCharacter* Dino)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.SetDinoEscapeProperties");

	AMissionType_Escort_Volcano_Para_C_SetDinoEscapeProperties_Params params;
	params.Dino = Dino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.GetExplosionEmittersThisCheckpoint
// ()

void AMissionType_Escort_Volcano_Para_C::GetExplosionEmittersThisCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.GetExplosionEmittersThisCheckpoint");

	AMissionType_Escort_Volcano_Para_C_GetExplosionEmittersThisCheckpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.SpawnExplosionEmitter
// ()

void AMissionType_Escort_Volcano_Para_C::SpawnExplosionEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.SpawnExplosionEmitter");

	AMissionType_Escort_Volcano_Para_C_SpawnExplosionEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.ExtraEscortDinoSetup
// ()

void AMissionType_Escort_Volcano_Para_C::ExtraEscortDinoSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.ExtraEscortDinoSetup");

	AMissionType_Escort_Volcano_Para_C_ExtraEscortDinoSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.ExtraFollowerSetup
// ()
// Parameters:
// int*                           index                          (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Volcano_Para_C::ExtraFollowerSetup(int* index)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.ExtraFollowerSetup");

	AMissionType_Escort_Volcano_Para_C_ExtraFollowerSetup_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.UserConstructionScript
// ()

void AMissionType_Escort_Volcano_Para_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.UserConstructionScript");

	AMissionType_Escort_Volcano_Para_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.Event_EscortDinoDied
// ()
// Parameters:
// class APrimalCharacter**       DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Volcano_Para_C::Event_EscortDinoDied(class APrimalCharacter** DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.Event_EscortDinoDied");

	AMissionType_Escort_Volcano_Para_C_Event_EscortDinoDied_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.BPOnMissionServerSetup
// ()

void AMissionType_Escort_Volcano_Para_C::BPOnMissionServerSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.BPOnMissionServerSetup");

	AMissionType_Escort_Volcano_Para_C_BPOnMissionServerSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.EscapePhaseStarted
// ()
// Parameters:
// struct FName                   OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Volcano_Para_C::EscapePhaseStarted(const struct FName& OldPhaseName, const struct FName& NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.EscapePhaseStarted");

	AMissionType_Escort_Volcano_Para_C_EscapePhaseStarted_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.ExecuteUbergraph_MissionType_Escort_Volcano_Para
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Volcano_Para_C::ExecuteUbergraph_MissionType_Escort_Volcano_Para(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Volcano_Para.MissionType_Escort_Volcano_Para_C.ExecuteUbergraph_MissionType_Escort_Volcano_Para");

	AMissionType_Escort_Volcano_Para_C_ExecuteUbergraph_MissionType_Escort_Volcano_Para_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
