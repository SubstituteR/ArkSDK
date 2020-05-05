// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRBattle_StageLandingLocation_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.ProcessDinoCharacterRequests
// ()

void AVRBattle_StageLandingLocation_C::ProcessDinoCharacterRequests()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.ProcessDinoCharacterRequests");

	AVRBattle_StageLandingLocation_C_ProcessDinoCharacterRequests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.Process Shooter Character Requests
// ()

void AVRBattle_StageLandingLocation_C::Process_Shooter_Character_Requests()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.Process Shooter Character Requests");

	AVRBattle_StageLandingLocation_C_Process_Shooter_Character_Requests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.Find A Dino Character Landing Location
// ()
// Parameters:
// class APrimalDinoCharacter*    DinoCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FoundLocation_                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVRBattle_StageLandingLocation_C::Find_A_Dino_Character_Landing_Location(class APrimalDinoCharacter* DinoCharacter, bool* FoundLocation_, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.Find A Dino Character Landing Location");

	AVRBattle_StageLandingLocation_C_Find_A_Dino_Character_Landing_Location_Params params;
	params.DinoCharacter = DinoCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundLocation_ != nullptr)
		*FoundLocation_ = params.FoundLocation_;
	if (Location != nullptr)
		*Location = params.Location;
}


// Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.Find A Shooter Character Landing Location
// ()
// Parameters:
// class AShooterCharacter*       ShooterChar                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FoundLocation_                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVRBattle_StageLandingLocation_C::Find_A_Shooter_Character_Landing_Location(class AShooterCharacter* ShooterChar, bool* FoundLocation_, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.Find A Shooter Character Landing Location");

	AVRBattle_StageLandingLocation_C_Find_A_Shooter_Character_Landing_Location_Params params;
	params.ShooterChar = ShooterChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundLocation_ != nullptr)
		*FoundLocation_ = params.FoundLocation_;
	if (Location != nullptr)
		*Location = params.Location;
}


// Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.UserConstructionScript
// ()

void AVRBattle_StageLandingLocation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.UserConstructionScript");

	AVRBattle_StageLandingLocation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AVRBattle_StageLandingLocation_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.ReceiveTick");

	AVRBattle_StageLandingLocation_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.RequestALandingLocation
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)

void AVRBattle_StageLandingLocation_C::RequestALandingLocation(class APrimalCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.RequestALandingLocation");

	AVRBattle_StageLandingLocation_C_RequestALandingLocation_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.Cancel Request
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)

void AVRBattle_StageLandingLocation_C::Cancel_Request(class APrimalCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.Cancel Request");

	AVRBattle_StageLandingLocation_C_Cancel_Request_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.StopProcessingRequests
// ()

void AVRBattle_StageLandingLocation_C::StopProcessingRequests()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.StopProcessingRequests");

	AVRBattle_StageLandingLocation_C_StopProcessingRequests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.Reset
// ()

void AVRBattle_StageLandingLocation_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.Reset");

	AVRBattle_StageLandingLocation_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.ExecuteUbergraph_VRBattle_StageLandingLocation
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVRBattle_StageLandingLocation_C::ExecuteUbergraph_VRBattle_StageLandingLocation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.ExecuteUbergraph_VRBattle_StageLandingLocation");

	AVRBattle_StageLandingLocation_C_ExecuteUbergraph_VRBattle_StageLandingLocation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.LandingLocationFound__DelegateSignature
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)

void AVRBattle_StageLandingLocation_C::LandingLocationFound__DelegateSignature(class APrimalCharacter* Character, const struct FVector& Location, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.LandingLocationFound__DelegateSignature");

	AVRBattle_StageLandingLocation_C_LandingLocationFound__DelegateSignature_Params params;
	params.Character = Character;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
