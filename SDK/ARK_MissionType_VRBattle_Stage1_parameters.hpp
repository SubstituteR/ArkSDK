#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_VRBattle_Stage1_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionType_VRBattle_Stage1.MissionType_VRBattle_Stage1_C.TryToTeleportPlayerCharacterToMissionStart
struct AMissionType_VRBattle_Stage1_C_TryToTeleportPlayerCharacterToMissionStart_Params
{
	class AShooterCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Stage1.MissionType_VRBattle_Stage1_C.UserConstructionScript
struct AMissionType_VRBattle_Stage1_C_UserConstructionScript_Params
{
};

// Function MissionType_VRBattle_Stage1.MissionType_VRBattle_Stage1_C.OnPrepPhaseStarted
struct AMissionType_VRBattle_Stage1_C_OnPrepPhaseStarted_Params
{
	struct FName*                                      OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Stage1.MissionType_VRBattle_Stage1_C.OnCollectCodeKeysPhaseStarted
struct AMissionType_VRBattle_Stage1_C_OnCollectCodeKeysPhaseStarted_Params
{
	struct FName*                                      OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Stage1.MissionType_VRBattle_Stage1_C.OnLoadingLevelPhaseStarted
struct AMissionType_VRBattle_Stage1_C_OnLoadingLevelPhaseStarted_Params
{
	struct FName*                                      OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Stage1.MissionType_VRBattle_Stage1_C.StartVRBattle
struct AMissionType_VRBattle_Stage1_C_StartVRBattle_Params
{
};

// Function MissionType_VRBattle_Stage1.MissionType_VRBattle_Stage1_C.OnLoadingLevelPhaseEnded
struct AMissionType_VRBattle_Stage1_C_OnLoadingLevelPhaseEnded_Params
{
	struct FName*                                      OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_VRBattle_Stage1.MissionType_VRBattle_Stage1_C.ExecuteUbergraph_MissionType_VRBattle_Stage1
struct AMissionType_VRBattle_Stage1_C_ExecuteUbergraph_MissionType_VRBattle_Stage1_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
