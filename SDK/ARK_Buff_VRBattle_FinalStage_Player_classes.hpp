#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_VRBattle_FinalStage_Player_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C
// 0x0379 (0x1739 - 0x13C0)
class ABuff_VRBattle_FinalStage_Player_C : public ABuff_VRBattle_Player_C
{
public:
	struct FHUDElement                                 HUD_BossName;                                             // 0x13C0(0x00C8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHUDElement                                 HUD_BossHealth_ProgressBar;                               // 0x1488(0x00C8) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              BossMaxHealth;                                            // 0x1550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BossRemainingHealth;                                      // 0x1554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBossInvulnerable;                                       // 0x1558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1559(0x0007) MISSED OFFSET
	struct FHUDElement                                 HUD_BossHealth_OuterFrame;                                // 0x1560(0x00C8) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsPlayingBossDeathMatinee_;                               // 0x1628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1629(0x0007) MISSED OFFSET
	class AMatineeActor*                               BossDeathMatinee;                                         // 0x1630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	double                                             BossDeathStartTime;                                       // 0x1638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BossDeathTimeout;                                         // 0x1640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x1644(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBossDeathMatineeFinished;                               // 0x1648(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FVRBattleBossCompanionReactionSequence> BossTauntSequences;                                       // 0x1658(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                TauntRandomSeed;                                          // 0x1668(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRandomStream                               TauntRandomStream;                                        // 0x166C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CurrentTauntIndex;                                        // 0x1674(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x1678(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x1679(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTime2;                                  // 0x167C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x1680(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x1681(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x1682(0x0006) MISSED OFFSET
	class AMatineeActor*                               K2Node_CustomEvent_DeathMatinee;                          // 0x1688(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerPawnTest_C*                           K2Node_DynamicCast_AsPlayerPawnTest_C;                    // 0x1690(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x1698(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x1699(0x0007) MISSED OFFSET
	class AMatineeActor*                               K2Node_CustomEvent_Matinee;                               // 0x16A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue;             // 0x16A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaTime;                                   // 0x16B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x16B4(0x0004) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x16B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_Network_ReturnValue;                 // 0x16C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x16C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x16C2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue2;                       // 0x16C3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x16C4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x16C5(0x0003) MISSED OFFSET
	int                                                CallFunc_RandomIntegerInRange_ReturnValue;                // 0x16C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x16CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x16CD(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_LastIndex_ReturnValue;                     // 0x16D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x16D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_RandomIntegerInRangeFromStream_ReturnValue;      // 0x16D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x16DC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x16DD(0x0003) MISSED OFFSET
	struct FVRBattleBossCompanionReactionSequence      CallFunc_Array_Get_Item;                                  // 0x16E0(0x0030) (Transient, DuplicateTransient)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x1710(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x1711(0x0007) MISSED OFFSET
	class FString                                      CallFunc_Concat_StrStr_ReturnValue;                       // 0x1718(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_BuildString_Int_ReturnValue;                     // 0x1728(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x1738(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_VRBattle_FinalStage_Player.Buff_VRBattle_FinalStage_Player_C");
		return ptr;
	}


	void OnRep_TauntRandomSeed();
	void InitializeBossActor();
	void STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void UserConstructionScript();
	void PlayBossDeathMatinee(class AMatineeActor* Matinee);
	void Server_OnClientFinishedMatinee();
	void BuffTickClient(float* DeltaTime);
	void Server_PlayBossDeathMatinee(class AMatineeActor* DeathMatinee);
	void BuffTickServer(float* DeltaTime);
	void PlayBossTauntSequence();
	void ReceiveBeginPlay();
	void CancelBossTaunt();
	void ExecuteUbergraph_Buff_VRBattle_FinalStage_Player(int EntryPoint);
	void OnBossDeathMatineeFinished__DelegateSignature(class AShooterCharacter* Character);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
