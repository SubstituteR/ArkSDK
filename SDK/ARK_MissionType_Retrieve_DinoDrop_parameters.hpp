#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Retrieve_DinoDrop_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionType_Retrieve_DinoDrop.MissionType_Retrieve_DinoDrop_C.GetPerPlayerWorldIndicators
struct AMissionType_Retrieve_DinoDrop_C_GetPerPlayerWorldIndicators_Params
{
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionWorldIndicator>              WorldIndicators;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Retrieve_DinoDrop.MissionType_Retrieve_DinoDrop_C.GeneratePhaseRequirements
struct AMissionType_Retrieve_DinoDrop_C_GeneratePhaseRequirements_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionPhaseRequirement>            Requirements;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Retrieve_DinoDrop.MissionType_Retrieve_DinoDrop_C.ExtraSpecificDinoSetup
struct AMissionType_Retrieve_DinoDrop_C_ExtraSpecificDinoSetup_Params
{
	class APrimalDinoCharacter**                       Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionServerSidePoint**                    Spawner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAttackerDino;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_DinoDrop.MissionType_Retrieve_DinoDrop_C.UserConstructionScript
struct AMissionType_Retrieve_DinoDrop_C_UserConstructionScript_Params
{
};

// Function MissionType_Retrieve_DinoDrop.MissionType_Retrieve_DinoDrop_C.BPOnMissionDinoDied
struct AMissionType_Retrieve_DinoDrop_C_BPOnMissionDinoDied_Params
{
	class APrimalDinoCharacter**                       Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class AController**                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_DinoDrop.MissionType_Retrieve_DinoDrop_C.ItemSetup
struct AMissionType_Retrieve_DinoDrop_C_ItemSetup_Params
{
	struct FName*                                      OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_DinoDrop.MissionType_Retrieve_DinoDrop_C.EscapeEventSetup
struct AMissionType_Retrieve_DinoDrop_C_EscapeEventSetup_Params
{
	struct FName*                                      OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_DinoDrop.MissionType_Retrieve_DinoDrop_C.BPOnMissionDroppedItemPickedUp
struct AMissionType_Retrieve_DinoDrop_C_BPOnMissionDroppedItemPickedUp_Params
{
	class ADroppedItemMission**                        DroppedItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          ByPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                InventoryItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Retrieve_DinoDrop.MissionType_Retrieve_DinoDrop_C.ExecuteUbergraph_MissionType_Retrieve_DinoDrop
struct AMissionType_Retrieve_DinoDrop_C_ExecuteUbergraph_MissionType_Retrieve_DinoDrop_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
