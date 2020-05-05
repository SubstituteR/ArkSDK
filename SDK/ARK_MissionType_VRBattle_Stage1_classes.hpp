#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_VRBattle_Stage1_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_VRBattle_Stage1.MissionType_VRBattle_Stage1_C
// 0x00DE (0x1DD8 - 0x1CFA)
class AMissionType_VRBattle_Stage1_C : public AMissionType_VRBattle_Base_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x1CFA(0x0006) MISSED OFFSET
	TArray<struct FCompanionReactionData>              InitialCompanionReactions;                                // 0x1D00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               DebugUseForcedNumPlayers_;                                // 0x1D10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1D11(0x0003) MISSED OFFSET
	int                                                ForcedNumPlayers;                                         // 0x1D14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AMissionServerSidePoint_VRBattleCosmeticsManager_C* CallFunc_VRBattleCosmeticsManager_CosmeticsManager;       // 0x1D18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_Event_OldPhaseName3;                               // 0x1D20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_Event_NewPhaseName3;                               // 0x1D28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x1D30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x1D31(0x0007) MISSED OFFSET
	struct FMissionAlertEntry                          K2Node_MakeStruct_MissionAlertEntry;                      // 0x1D38(0x0030) (Transient, DuplicateTransient)
	TArray<struct FMissionAlertEntry>                  K2Node_MakeArray_Array;                                   // 0x1D68(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       K2Node_Event_OldPhaseName4;                               // 0x1D78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_Event_NewPhaseName4;                               // 0x1D80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_Event_OldPhaseName2;                               // 0x1D88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_Event_NewPhaseName2;                               // 0x1D90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x1D98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x1D99(0x0007) MISSED OFFSET
	class AMissionServerSidePoint_VRBattleCosmeticsManager_C* CallFunc_VRBattleCosmeticsManager_CosmeticsManager2;      // 0x1DA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x1DA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x1DA9(0x0003) MISSED OFFSET
	struct FName                                       K2Node_Event_OldPhaseName;                                // 0x1DAC(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_Event_NewPhaseName;                                // 0x1DB4(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x1DBC(0x0004) MISSED OFFSET
	TArray<class AShooterCharacter*>                   CallFunc_GetAllPlayersOnMission_OutCharacters;            // 0x1DC0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x1DD0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_SelectInt_ReturnValue;                           // 0x1DD4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_VRBattle_Stage1.MissionType_VRBattle_Stage1_C");
		return ptr;
	}


	void TryToTeleportPlayerCharacterToMissionStart(class AShooterCharacter* Character, const struct FVector& Location);
	void UserConstructionScript();
	void OnPrepPhaseStarted(struct FName* OldPhaseName, struct FName* NewPhaseName);
	void OnCollectCodeKeysPhaseStarted(struct FName* OldPhaseName, struct FName* NewPhaseName);
	void OnLoadingLevelPhaseStarted(struct FName* OldPhaseName, struct FName* NewPhaseName);
	void StartVRBattle();
	void OnLoadingLevelPhaseEnded(struct FName* OldPhaseName, struct FName* NewPhaseName);
	void ExecuteUbergraph_MissionType_VRBattle_Stage1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
