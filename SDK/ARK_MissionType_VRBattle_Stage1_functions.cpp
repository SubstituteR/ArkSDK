// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_VRBattle_Stage1_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_VRBattle_Stage1.MissionType_VRBattle_Stage1_C.TryToTeleportPlayerCharacterToMissionStart
// ()
// Parameters:
// class AShooterCharacter*       Character                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Stage1_C::TryToTeleportPlayerCharacterToMissionStart(class AShooterCharacter* Character, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Stage1.MissionType_VRBattle_Stage1_C.TryToTeleportPlayerCharacterToMissionStart");

	AMissionType_VRBattle_Stage1_C_TryToTeleportPlayerCharacterToMissionStart_Params params;
	params.Character = Character;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Stage1.MissionType_VRBattle_Stage1_C.UserConstructionScript
// ()

void AMissionType_VRBattle_Stage1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Stage1.MissionType_VRBattle_Stage1_C.UserConstructionScript");

	AMissionType_VRBattle_Stage1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Stage1.MissionType_VRBattle_Stage1_C.OnPrepPhaseStarted
// ()
// Parameters:
// struct FName*                  OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Stage1_C::OnPrepPhaseStarted(struct FName* OldPhaseName, struct FName* NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Stage1.MissionType_VRBattle_Stage1_C.OnPrepPhaseStarted");

	AMissionType_VRBattle_Stage1_C_OnPrepPhaseStarted_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Stage1.MissionType_VRBattle_Stage1_C.OnCollectCodeKeysPhaseStarted
// ()
// Parameters:
// struct FName*                  OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Stage1_C::OnCollectCodeKeysPhaseStarted(struct FName* OldPhaseName, struct FName* NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Stage1.MissionType_VRBattle_Stage1_C.OnCollectCodeKeysPhaseStarted");

	AMissionType_VRBattle_Stage1_C_OnCollectCodeKeysPhaseStarted_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Stage1.MissionType_VRBattle_Stage1_C.OnLoadingLevelPhaseStarted
// ()
// Parameters:
// struct FName*                  OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Stage1_C::OnLoadingLevelPhaseStarted(struct FName* OldPhaseName, struct FName* NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Stage1.MissionType_VRBattle_Stage1_C.OnLoadingLevelPhaseStarted");

	AMissionType_VRBattle_Stage1_C_OnLoadingLevelPhaseStarted_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Stage1.MissionType_VRBattle_Stage1_C.StartVRBattle
// ()

void AMissionType_VRBattle_Stage1_C::StartVRBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Stage1.MissionType_VRBattle_Stage1_C.StartVRBattle");

	AMissionType_VRBattle_Stage1_C_StartVRBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Stage1.MissionType_VRBattle_Stage1_C.OnLoadingLevelPhaseEnded
// ()
// Parameters:
// struct FName*                  OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Stage1_C::OnLoadingLevelPhaseEnded(struct FName* OldPhaseName, struct FName* NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Stage1.MissionType_VRBattle_Stage1_C.OnLoadingLevelPhaseEnded");

	AMissionType_VRBattle_Stage1_C_OnLoadingLevelPhaseEnded_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_VRBattle_Stage1.MissionType_VRBattle_Stage1_C.ExecuteUbergraph_MissionType_VRBattle_Stage1
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_VRBattle_Stage1_C::ExecuteUbergraph_MissionType_VRBattle_Stage1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_VRBattle_Stage1.MissionType_VRBattle_Stage1_C.ExecuteUbergraph_MissionType_VRBattle_Stage1");

	AMissionType_VRBattle_Stage1_C_ExecuteUbergraph_MissionType_VRBattle_Stage1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
