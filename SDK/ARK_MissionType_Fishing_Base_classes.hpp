#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Fishing_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_Fishing_Base.MissionType_Fishing_Base_C
// 0x10AE (0x1A89 - 0x09DB)
class AMissionType_Fishing_Base_C : public AMissionTypeBlueprintBase_C
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x09DB(0x0001) MISSED OFFSET
	int                                                Initial_Number_of_Fish_to_Spawn;                          // 0x09DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Required_Min_Total_Random_Scale;                          // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              DisplayWeightMultiplier;                                  // 0x09E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Fishing_Damage_Type;                                      // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      Each_Player_Caught_Fish_Random_Scale;                     // 0x09F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	TArray<int>                                        Each_Player_Caught_Fish_Num;                              // 0x0A00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	double                                             Last_time_Spawned_Fish;                                   // 0x0A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	struct FDinoSetup                                  Rare_Fish_Setup;                                          // 0x0A18(0x00E8) (Edit, BlueprintVisible, SaveGame)
	float                                              Interval_To_Spawn_Rare_Fish;                              // 0x0B00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Index_of_player_with_most_fish_weight;                    // 0x0B04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	struct FText                                       YouCaughtTheMostFishString;                               // 0x0B08(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       OtherPlayerCaughtTheMostFishString;                       // 0x0B30(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              interval_to_spawn_more_normal_fish;                       // 0x0B58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                number_of_fish_to_spawn_per_interval;                     // 0x0B5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Weight_of_Fish_Required_Per_Player;                       // 0x0B60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0B64(0x0004) MISSED OFFSET
	class UClass*                                      AmmoType;                                                 // 0x0B68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AmmoQuantityPerPlayer;                                    // 0x0B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0B74(0x0004) MISSED OFFSET
	class UClass*                                      WeaponType;                                               // 0x0B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WeaponItemQuality;                                        // 0x0B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                number_of_rare_fish_to_spawn_per_interval;                // 0x0B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             Time_Since_Last_updated_ranks;                            // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	struct FCompanionReactionData                      CompanionReaction_MissionBegin;                           // 0x0B90(0x0098) (Edit, BlueprintVisible)
	struct FCompanionReactionData                      CompanionReaction_FishFullyReeledIn;                      // 0x0C28(0x0098) (Edit, BlueprintVisible)
	struct FCompanionReactionData                      CompanionReaction_FishFullyReeledIn_Rare;                 // 0x0CC0(0x0098) (Edit, BlueprintVisible)
	struct FCompanionReactionData                      CompanionReaction_TimeRunningOut;                         // 0x0D58(0x0098) (Edit, BlueprintVisible)
	struct FCompanionReactionData                      CompanionReaction_PassedOtherPlayerFishCount;             // 0x0DF0(0x0098) (Edit, BlueprintVisible)
	struct FCompanionReactionData                      CompanionReaction_WasPassedByOtherPlayerFishCount;        // 0x0E88(0x0098) (Edit, BlueprintVisible)
	struct FCompanionReactionData                      CompanionReaction_MissionOverSuccess;                     // 0x0F20(0x0098) (Edit, BlueprintVisible)
	struct FCompanionReactionData                      CompanionReaction_MissionOverFail;                        // 0x0FB8(0x0098) (Edit, BlueprintVisible)
	float                                              update_rank_frequency;                                    // 0x1050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Low_Time_Remaining_Warning_Time;                          // 0x1054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Has_Played_Low_Time_Remaining_Warning;                    // 0x1058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x1059(0x0007) MISSED OFFSET
	TArray<int>                                        player_rank_order;                                        // 0x1060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	TArray<int>                                        old_player_rank_order;                                    // 0x1070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	float                                              restricted_time_to_update_player_rank_interval;           // 0x1080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x1084(0x0004) MISSED OFFSET
	double                                             last_time_updated_player_ranks;                           // 0x1088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              highest_caught_fish_by_player_wild_scale;                 // 0x1090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                Initial_Number_of_Rare_Fish_to_Spawn;                     // 0x1094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             Last_time_Spawned_Rare_Fish;                              // 0x1098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               Respawn_Normal_Fish_When_All_Are_Killed;                  // 0x10A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Respawn_Rare_Fish_When_All_Are_Killed;                    // 0x10A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x10A2(0x0002) MISSED OFFSET
	int                                                number_of_normal_fish_to_spawn_when_all_are_killed;       // 0x10A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                number_of_rare_fish_to_spawn_when_all_are_killed;         // 0x10A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Complete_Immediately_On_Success;                          // 0x10AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x10AD(0x0003) MISSED OFFSET
	class FString                                      Allowed_Fish_Class_String;                                // 0x10B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Success_only_if_first_place;                              // 0x10C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SuccessOnlyIfIndividualThresholdMet;                      // 0x10C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Only_Care_About_Rare_Fish;                                // 0x10C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFishingMissionIndividualScoreboardType> Individual_scoreboard_type;                               // 0x10C3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Required_Min_Total_Fish;                                  // 0x10C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                Fish_Count_Required_Per_Player;                           // 0x10C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFishingMissionSuccessRequirement>     Winning_Condition_Type;                                   // 0x10CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x10CD(0x0003) MISSED OFFSET
	int                                                Highest_Caught_Fish_Count;                                // 0x10D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              Total_Caught_Fish_Wild_Scale;                             // 0x10D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                Total_Caught_Fish_Count;                                  // 0x10D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                index_of_player_with_most_caught_fish_count;              // 0x10DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              Rare_Fish_Wild_Random_Scale;                              // 0x10E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x10E4(0x0004) MISSED OFFSET
	class UBehaviorTree*                               Rare_Fish_BT_override;                                    // 0x10E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                number_of_dinos_in_mission_dino_array_before_needing_to_refresh;// 0x10F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               replace_normal_fish_immediately;                          // 0x10F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               replace_rare_fish_immediately;                            // 0x10F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x10F6(0x0002) MISSED OFFSET
	float                                              proper_count_maintain_interval;                           // 0x10F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               replace_rare_fish_on_abnormal_death;                      // 0x10FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               replace_normal_fish_on_abnormal_death;                    // 0x10FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x10FE(0x0002) MISSED OFFSET
	float                                              rare_fish_respawn_timer;                                  // 0x1100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               refresh_normal_fish_on_regular_interval;                  // 0x1104(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               refresh_rare_fish_on_regular_interval;                    // 0x1105(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x1106(0x0002) MISSED OFFSET
	TArray<class FString>                              NormalFishVarietyBlueprintPaths;                          // 0x1108(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      NormalFishVarietySpawnWeights;                            // 0x1118(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FCompanionReactionData                      CompanionReaction_GenericRespawn;                         // 0x1128(0x0098) (Edit, BlueprintVisible)
	bool                                               Allow_Fishing_Rod;                                        // 0x11C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Allow_Fishing_Net;                                        // 0x11C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x6];                                       // 0x11C2(0x0006) MISSED OFFSET
	struct FCompanionReactionData                      CompanionReaction_PassedAndNowInFirstPlace;               // 0x11C8(0x0098) (Edit, BlueprintVisible)
	struct FCompanionReactionData                      CompanionReaction_TimeOver;                               // 0x1260(0x0098) (Edit, BlueprintVisible)
	bool                                               Was_Ever_Using_Timer;                                     // 0x12F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x12F9(0x0003) MISSED OFFSET
	float                                              Higher_Remaining_Warning_Time;                            // 0x12FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Uses_Higher_Time_Remaining_Reaction;                      // 0x1300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Has_Played_Higher_Low_Time_Remaining_Warning;             // 0x1301(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData14[0x6];                                       // 0x1302(0x0006) MISSED OFFSET
	struct FCompanionReactionData                      CompanionReaction_TimeRunningOut_Higher;                  // 0x1308(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_LeftBounds;                             // 0x13A0(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AMissionServerSidePoint*>             Fish_Spawn_Points;                                        // 0x1438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame)
	TArray<struct FVector>                             Fish_Spawn_Locations;                                     // 0x1448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	TArray<struct FVector>                             Fish_Spawn_Point_Scale_Array;                             // 0x1458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	float                                              Fish_Spawn_Radius_Override;                               // 0x1468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x146C(0x0004) MISSED OFFSET
	TArray<struct FDinoSetup>                          Generic_Fish_Classes;                                     // 0x1470(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       Lost_Mission_But_Caught_Most_Fish_String;                 // 0x1480(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                              player_names;                                             // 0x14A8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame)
	class FString                                      Weight_string;                                            // 0x14B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      Fish_String;                                              // 0x14C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      total_string;                                             // 0x14D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                PlayerIndexRequirementsOffset;                            // 0x14E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                NonLocalPlayerNameColor;                                  // 0x14EC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                LocalPlayerNameColor;                                     // 0x14FC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PlayerNameProperty;                                       // 0x150C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowMaxValueOnFishingObjective;                           // 0x1514(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowIndividualScoreboard;                                 // 0x1515(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RankHighlightIndividualCompletion;                        // 0x1516(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasSpawnedInitialFish;                                    // 0x1517(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCompanionReactionData                      CompanionReaction_FirstPlaceLeaderboard;                  // 0x1518(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_PlacedInTop10;                          // 0x15B0(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               NewVar;                                                   // 0x1648(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x1649(0x0003) MISSED OFFSET
	float                                              total_max_points_for_leaderboard_which_are_multiplied_by_time_percentage;// 0x164C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Normal_Fish_Wild_Scale_Min;                               // 0x1650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Normal_Fish_Wild_Scale_Max;                               // 0x1654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x1658(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x1659(0x0003) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x165C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x1660(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable2;                          // 0x1664(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x1668(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x166C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x166D(0x0003) MISSED OFFSET
	struct FName                                       K2Node_CustomEvent_OldPhaseName;                          // 0x1670(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_CustomEvent_NewPhaseName;                          // 0x1678(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaTime;                                   // 0x1680(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue;                  // 0x1684(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x1685(0x0003) MISSED OFFSET
	struct FName                                       CallFunc_Array_Get_Item;                                  // 0x1688(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_NameName_ReturnValue;                   // 0x1690(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x7];                                       // 0x1691(0x0007) MISSED OFFSET
	TArray<class AMissionServerSidePoint*>             CallFunc_GetAllMissionServerSidePointsWithKey_OutServerSidePointActors;// 0x1698(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x16A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x16AC(0x0004) MISSED OFFSET
	class AMissionServerSidePoint*                     CallFunc_Array_Get_Item2;                                 // 0x16B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x16B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x16B9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x6];                                       // 0x16BA(0x0006) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x16C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x16C8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable3;                          // 0x16D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable4;                          // 0x16D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue3;                         // 0x16DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue4;                         // 0x16E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Array_Add_NewItem_RefProperty;                   // 0x16E4(0x0004) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	int                                                CallFunc_Array_Add_ReturnValue;                           // 0x16E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Add_NewItem2_RefProperty;                  // 0x16EC(0x0004) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	int                                                CallFunc_Array_Add_ReturnValue2;                          // 0x16F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x16F4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x16F5(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x16F8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x4];                                       // 0x1704(0x0004) MISSED OFFSET
	TArray<class AShooterCharacter*>                   CallFunc_GetNearbyPlayers_OutCharacters;                  // 0x1708(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x1718(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x4];                                       // 0x171C(0x0004) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_Array_Get_Item3;                                 // 0x1720(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x1728(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlayerOnMission_ReturnValue;                   // 0x1729(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AddPlayerToMission_ReturnValue;                  // 0x172A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x5];                                       // 0x172B(0x0005) MISSED OFFSET
	TArray<class AShooterCharacter*>                   CallFunc_GetAllPlayersOnMission_OutCharacters;            // 0x1730(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue3;                       // 0x1740(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x4];                                       // 0x1744(0x0004) MISSED OFFSET
	TArray<class APrimalDinoCharacter*>                CallFunc_Spawn_Normal_Fish_spawned_fish;                  // 0x1748(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_Greater_IntInt_ReturnValue2;                     // 0x1758(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x7];                                       // 0x1759(0x0007) MISSED OFFSET
	TArray<class AShooterCharacter*>                   CallFunc_GetAllPlayersOnMission_OutCharacters2;           // 0x1760(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue4;                       // 0x1770(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x1774(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AShooterCharacter*>                   CallFunc_GetAllPlayersOnMission_OutCharacters3;           // 0x1778(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_Multiply_IntFloat_ReturnValue;                   // 0x1788(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x4];                                       // 0x178C(0x0004) MISSED OFFSET
	TArray<class APrimalDinoCharacter*>                CallFunc_Spawn_Rare_Fish_spawned_fish;                    // 0x1790(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_Greater_IntInt_ReturnValue3;                     // 0x17A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue4;                     // 0x17A1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x6];                                       // 0x17A2(0x0006) MISSED OFFSET
	TArray<class AShooterCharacter*>                   CallFunc_GetAllPlayersOnMission_OutCharacters4;           // 0x17A8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue5;                       // 0x17B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Multiply_IntInt_ReturnValue;                     // 0x17BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x17C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x17C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_IntInt_ReturnValue;                    // 0x17C2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x17C3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x4];                                       // 0x17C4(0x0004) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x17C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_True_if_break_was_hit_Variable;                 // 0x17D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x3];                                       // 0x17D1(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue6;                       // 0x17D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue3;                        // 0x17D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x17D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x6];                                       // 0x17DA(0x0006) MISSED OFFSET
	struct FCharacterAndControllerPair                 CallFunc_Array_Get_Item4;                                 // 0x17E0(0x0010) (Transient, DuplicateTransient)
	class AWeapFishingRod_C*                           K2Node_DynamicCast_AsWeapFishingRod_C;                    // 0x17F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x17F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x7];                                       // 0x17F9(0x0007) MISSED OFFSET
	class AWeapFishingNet_C*                           K2Node_DynamicCast_AsWeapFishingNet_C;                    // 0x1800(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x1808(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x3];                                       // 0x1809(0x0003) MISSED OFFSET
	float                                              CallFunc_GetRemainingTime_ReturnValue;                    // 0x180C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x1810(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue2;               // 0x1811(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x6];                                       // 0x1812(0x0006) MISSED OFFSET
	TArray<class AShooterCharacter*>                   CallFunc_GetAllPlayersOnMission_OutCharacters5;           // 0x1818(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_GetRemainingTime_ReturnValue2;                   // 0x1828(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue3;               // 0x182C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x3];                                       // 0x182D(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Add_ReturnValue3;                          // 0x1830(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue7;                       // 0x1834(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AMissionServerSidePoint*                     CallFunc_Array_Get_Item5;                                 // 0x1838(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue4;                        // 0x1840(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x1841(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData38[0x2];                                       // 0x1842(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_GetActorScale3D_ReturnValue;                     // 0x1844(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x1850(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_VectorVector_ReturnValue;               // 0x1854(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData39[0x3];                                       // 0x1855(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_MakeVector_ReturnValue2;                         // 0x1858(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x1864(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData40[0x3];                                       // 0x1865(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x1868(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x1874(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x1878(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x187C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x1880(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPointUnderwater_ReturnValue;                   // 0x188C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData41[0x3];                                       // 0x188D(0x0003) MISSED OFFSET
	TArray<struct FHitResult>                          CallFunc_VTraceMultiBP_OutHits;                           // 0x1890(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_VTraceMultiBP_ReturnValue;                       // 0x18A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData42[0x3];                                       // 0x18A1(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue8;                       // 0x18A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable5;                          // 0x18A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Add_ReturnValue4;                          // 0x18AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue5;                        // 0x18B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue2;                 // 0x18B1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x18B2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData43[0x5];                                       // 0x18B3(0x0005) MISSED OFFSET
	struct FHitResult                                  CallFunc_Array_Get_Item6;                                 // 0x18B8(0x0088) (Transient, DuplicateTransient)
	int                                                CallFunc_Add_IntInt_ReturnValue5;                         // 0x1940(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Location;                         // 0x1944(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Normal;                           // 0x1950(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint;                      // 0x195C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal;                     // 0x1968(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData44[0x4];                                       // 0x1974(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat;                          // 0x1978(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BreakHitResult_HitActor;                         // 0x1980(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent;                     // 0x1988(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName;                      // 0x1990(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_HitItem;                          // 0x1998(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BreakHitResult_BlockingHit;                      // 0x199C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData45[0x3];                                       // 0x199D(0x0003) MISSED OFFSET
	class APhysicsVolume*                              K2Node_DynamicCast_AsPhysicsVolume;                       // 0x19A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x19A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x19A9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData46[0x2];                                       // 0x19AA(0x0002) MISSED OFFSET
	float                                              CallFunc_BreakVector_X2;                                  // 0x19AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y2;                                  // 0x19B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z2;                                  // 0x19B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue3;                         // 0x19B8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Add_ReturnValue5;                          // 0x19C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue4;                         // 0x19C8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Add_ReturnValue6;                          // 0x19D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Array_Add_NewItem3_RefProperty;                  // 0x19D8(0x000C) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	int                                                CallFunc_Array_Add_ReturnValue7;                          // 0x19E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x19E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData47[0x3];                                       // 0x19E9(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Add_ReturnValue8;                          // 0x19EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable6;                          // 0x19F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_caught_fish_wild_random_scale;         // 0x19F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_CustomEvent_net_owner2;                            // 0x19F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UClass*                                      K2Node_CustomEvent_fish_class2;                           // 0x1A00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     K2Node_CustomEvent_fish_ref;                              // 0x1A08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue6;                        // 0x1A10(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Can_Fish_Class_Be_Caught_ReturnValue;            // 0x1A11(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData48[0x6];                                       // 0x1A12(0x0006) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_Array_Get_Item7;                                 // 0x1A18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue6;                         // 0x1A20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x1A24(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate2;                    // 0x1A34(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              K2Node_CustomEvent_Caught_Fish_Wild_Scale;                // 0x1A44(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_CustomEvent_Net_Owner;                             // 0x1A48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UClass*                                      K2Node_CustomEvent_Fish_Class;                            // 0x1A50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     K2Node_CustomEvent_Fish_Reference;                        // 0x1A58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Can_Fish_Class_Be_Caught_ReturnValue2;           // 0x1A60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData49[0x7];                                       // 0x1A61(0x0007) MISSED OFFSET
	class APrimalCharacter*                            K2Node_CustomEvent_player;                                // 0x1A68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate3;                    // 0x1A70(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue;                   // 0x1A80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlled_ReturnValue;                 // 0x1A88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_Fishing_Base.MissionType_Fishing_Base_C");
		return ptr;
	}


	void Play_Player_Is_In_Top_10_on_Leaderboard_Reaction(class AShooterCharacter* shooter_character);
	void Play_Player_Is_First_On_Leaderboard_Reaction(class AShooterCharacter* shooter_character);
	void STATIC_Play_Leaderboard_Reaction(class AShooterCharacter* Player, float Leaderboard_Value);
	void Add_Player_To_Leaderboard(class AShooterCharacter* Player, float Leaderboard_Value);
	void STATIC_Create_player_requirement_string(const class FString& Name, int index, const class FString& fish_or_weight, struct FTaggedString* constructed_string);
	void STATIC_OnThrottledClientTick(float* DeltaTime);
	bool Can_Fish_Class_Be_Caught(class UClass* Class);
	bool Is_Rare_Fish_by_Class(class UClass* Object);
	void Refresh_Dead_Dino_Known_Killed_By_Net_or_Rod(class UClass* Dino_Died, class UObject* fish_ref);
	void BPOnMissionPlayerLeftBounds();
	void BPOnMissionPlayerRespawned(class AShooterCharacter** Player, class AShooterPlayerController** Controller);
	void respawn_rare_fish_after_timer();
	void add_caught_fish_and_play_reactions(class UObject* Player, float caught_fish_weight, int caught_fish_count);
	void interval_to_check_for_proper_fish_count();
	void ReceiveBeginPlay();
	bool is_rare_fish(class UObject* Object);
	void BPOnPlayerAddedToMission(class AShooterCharacter** Player, class AShooterPlayerController** Controller);
	void Update_Total_Caught_Fish_Count(int* total_caught_fish);
	void is_mission_complete_at_all(bool* is_complete);
	bool is_valid_player_on_mission(class UObject* Player);
	void Get_Number_Of_Each_Alive_Type_Of_Fish(class UObject* fish_to_ignore, int* Alive_Normal_Fish, int* Alive_Rare_Fish);
	void set_spawn_interval_normal();
	void Set_Spawn_Interval_Rare();
	void Start_Fish_Spawn_Interval_timers();
	void Spawn_Rare_Fish(int number_of_fish_to_spawn, TArray<class APrimalDinoCharacter*>* spawned_fish);
	void Update_Total_Caught_Fish_Wild_Scale(float* total_wild_scale);
	void update_ranks();
	int Get_Player_Index_Who_Has_Current_Given_Rank(int current_rank);
	void Get_Player_Index(class AShooterPlayerController* Controller, int* playerr_index);
	void spawn_additional_fish();
	void STATIC_Spawn_Normal_Fish(int number_of_fish_to_spawn, TArray<class APrimalDinoCharacter*>* spawned_fish);
	void STATIC_BPOnMissionComplete(class AShooterCharacter** ForPlayer, class AShooterPlayerController** ForController, bool* bLastPhaseSuccess, float* XPRewarded, TArray<class UPrimalItem*>* ItemsRewarded);
	void Spawn_Additional_Rare_Fish();
	bool BPIsPhaseComplete(struct FName* PhaseName);
	void BPOnMissionDinoDied(class APrimalDinoCharacter** Dino, float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent);
	void BPOnMissionDeactivated();
	bool IsMissionComplete(class AShooterCharacter** forCharacter, class AShooterPlayerController** ForController);
	void GetCurrentWorldIndicators(TArray<struct FMissionWorldIndicator>* WorldIndicators);
	void STATIC_GeneratePhaseRequirements(struct FName* PhaseName, TArray<struct FMissionPhaseRequirement>* Requirements);
	void UserConstructionScript();
	void BPOnMissionServerSetup();
	void PhaseStart(const struct FName& OldPhaseName, const struct FName& NewPhaseName);
	void OnThrottledServerTick(float* DeltaTime);
	void Get_Water_Locations_Beneath_Fish_Spawn_Point();
	void FishCaughtDispatcher_Net(float caught_fish_wild_random_scale, class AActor* Net_Owner, class UClass* Fish_Class, class UObject* fish_ref);
	void FishCaughtDispatcher_Rod(float Caught_Fish_Wild_Scale, class AActor* Net_Owner, class UClass* Fish_Class, class UObject* Fish_Reference);
	void caught_fish_multicast(class APrimalCharacter* Player);
	void ExecuteUbergraph_MissionType_Fishing_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
