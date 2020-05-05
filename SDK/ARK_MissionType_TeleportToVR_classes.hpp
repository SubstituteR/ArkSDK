#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_TeleportToVR_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_TeleportToVR.MissionType_TeleportToVR_C
// 0x0119 (0x0AF4 - 0x09DB)
class AMissionType_TeleportToVR_C : public AMissionTypeBlueprintBase_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x09DB(0x0005) MISSED OFFSET
	TArray<struct FTeleportedCharacter>                SavedTeleportReturnLocations;                             // 0x09E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      NextMissionClassOverride;                                 // 0x09F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TeleportPrepareTime;                                      // 0x09F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x09FC(0x0004) MISSED OFFSET
	TArray<class APrimalCharacter*>                    TeleportActors;                                           // 0x0A00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UParticleSystemComponent*                    TeleportAreaEmmitter;                                     // 0x0A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ParticleSpawned;                                          // 0x0A18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0A19(0x0003) MISSED OFFSET
	struct FVector                                     Initial_Teleport_Start_Location;                          // 0x0A1C(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GameplayLevel;                                            // 0x0A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayersAreOnNextMission;                                  // 0x0A30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0A31(0x0007) MISSED OFFSET
	class AMissionType_VRBattle_Base_C*                NextMissionInstance;                                      // 0x0A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       VRBiomeTag;                                               // 0x0A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClearVRBiome_;                                            // 0x0A48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0A49(0x0003) MISSED OFFSET
	struct FName                                       CosmeticManagerKey;                                       // 0x0A4C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0A54(0x0004) MISSED OFFSET
	class ABossArenaManager_VRBattle_C*                CachedBossArenaManager;                                   // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0A60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0A61(0x0003) MISSED OFFSET
	struct FName                                       K2Node_CustomEvent_OldPhaseName2;                         // 0x0A64(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_CustomEvent_NewPhaseName2;                         // 0x0A6C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0A74(0x0004) MISSED OFFSET
	class ULevelStreaming*                             CallFunc_GetStreamingLevel_ReturnValue;                   // 0x0A78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0A80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLevelLoaded_ReturnValue;                       // 0x0A81(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x6];                                       // 0x0A82(0x0006) MISSED OFFSET
	TArray<class AShooterCharacter*>                   CallFunc_GetAllPlayersOnMission_OutCharacters;            // 0x0A88(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_AreAnyPlayersInTheVRBiome__APlayerIsInTheVRBiome;// 0x0A98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0A99(0x0007) MISSED OFFSET
	TArray<class AShooterCharacter*>                   CallFunc_GetAllPlayersOnMission_OutCharacters2;           // 0x0AA0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_AreAnyPlayersInTheVRBiome__APlayerIsInTheVRBiome2;// 0x0AB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0AB1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0AB2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0AB3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x0AB4(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       K2Node_CustomEvent_OldPhaseName;                          // 0x0AC4(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_CustomEvent_NewPhaseName;                          // 0x0ACC(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0AD4(0x0004) MISSED OFFSET
	class ULevelStreaming*                             CallFunc_GetStreamingLevel_ReturnValue2;                  // 0x0AD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLevelLoaded_ReturnValue2;                      // 0x0AE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0AE1(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate2;                    // 0x0AE4(0x0014) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_TeleportToVR.MissionType_TeleportToVR_C");
		return ptr;
	}


	void GetBossArenaManager(class ABossArenaManager_VRBattle_C** BossArenaManager);
	void AreAnyPlayersInTheVRBiome_(TArray<class AShooterCharacter*>* Players, bool* APlayerIsInTheVRBiome);
	bool AllowMissionCreation(class AShooterCharacter** forCharacter, class AActor** MissionDispatcherActor, struct FVector* Location);
	void OnMissionPhaseEnded(struct FName* OldPhase, struct FName* NewPhase);
	void STATIC_create_and_initialize_next_mission(bool* Success_);
	void OnThrottledClientTick(float* DeltaTime);
	bool BPIsPhaseComplete(struct FName* PhaseName);
	void end_mission();
	void UserConstructionScript();
	void BPOnMissionServerSetup();
	void PrepareTeleport(const struct FName& OldPhaseName, const struct FName& NewPhaseName);
	void On_Teleport_Finish(const struct FName& OldPhaseName, const struct FName& NewPhaseName);
	void PrepVRBattleArea();
	void ExecuteUbergraph_MissionType_TeleportToVR(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
