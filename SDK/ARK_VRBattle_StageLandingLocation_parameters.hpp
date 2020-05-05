#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRBattle_StageLandingLocation_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.ProcessDinoCharacterRequests
struct AVRBattle_StageLandingLocation_C_ProcessDinoCharacterRequests_Params
{
};

// Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.Process Shooter Character Requests
struct AVRBattle_StageLandingLocation_C_Process_Shooter_Character_Requests_Params
{
};

// Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.Find A Dino Character Landing Location
struct AVRBattle_StageLandingLocation_C_Find_A_Dino_Character_Landing_Location_Params
{
	class APrimalDinoCharacter*                        DinoCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FoundLocation_;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.Find A Shooter Character Landing Location
struct AVRBattle_StageLandingLocation_C_Find_A_Shooter_Character_Landing_Location_Params
{
	class AShooterCharacter*                           ShooterChar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FoundLocation_;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.UserConstructionScript
struct AVRBattle_StageLandingLocation_C_UserConstructionScript_Params
{
};

// Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.ReceiveTick
struct AVRBattle_StageLandingLocation_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.RequestALandingLocation
struct AVRBattle_StageLandingLocation_C_RequestALandingLocation_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.Cancel Request
struct AVRBattle_StageLandingLocation_C_Cancel_Request_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.StopProcessingRequests
struct AVRBattle_StageLandingLocation_C_StopProcessingRequests_Params
{
};

// Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.Reset
struct AVRBattle_StageLandingLocation_C_Reset_Params
{
};

// Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.ExecuteUbergraph_VRBattle_StageLandingLocation
struct AVRBattle_StageLandingLocation_C_ExecuteUbergraph_VRBattle_StageLandingLocation_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRBattle_StageLandingLocation.VRBattle_StageLandingLocation_C.LandingLocationFound__DelegateSignature
struct AVRBattle_StageLandingLocation_C_LandingLocationFound__DelegateSignature_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
