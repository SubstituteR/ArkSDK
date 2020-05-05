#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_VRBattle_Player_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_VRBattle_Player.Buff_VRBattle_Player_C
// 0x0A90 (0x13C0 - 0x0930)
class ABuff_VRBattle_Player_C : public APrimalBuff
{
public:
	float                                              PickUpRadius;                                             // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0934(0x0004) MISSED OFFSET
	class UClass*                                      DroppedItemClass;                                         // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumItemsPickedUp;                                         // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasDepositedACodeKeyBefore_;                              // 0x0944(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasHadDepositCodeKeyAlert_;                               // 0x0945(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0946(0x0002) MISSED OFFSET
	class UParticleSystem*                             SpawnParticleSystem;                                      // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SpawnAudio;                                               // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxCodeKeysThatCanBeCarried;                              // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x095C(0x0004) MISSED OFFSET
	struct FCompanionEventData                         CompanionEvent_Hacking;                                   // 0x0960(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              CompanionEvent_HackingSegmentLength;                      // 0x09B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x09B4(0x0004) MISSED OFFSET
	TArray<struct FCompanionEventSegmentData>          CompanionEvent_HackingSegments;                           // 0x09B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              CurrentHackingDuration;                                   // 0x09C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x09CC(0x0004) MISSED OFFSET
	class AActor*                                      CurrentKioskBeingHacked;                                  // 0x09D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FCompanionReactionData                      CompanionReaction_StartHacking;                           // 0x09D8(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_StopHacking;                            // 0x0A70(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasInitializedMissionCallbacks_;                          // 0x0B08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0B09(0x0007) MISSED OFFSET
	TArray<struct FVRBattleBossCompanionReactionSequence> BossPhaseEventCompanionSequences;                         // 0x0B10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      CompanionBuffClass;                                       // 0x0B20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalBuff_Companion*                       PlayerCompanionBuff;                                      // 0x0B28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FCompanionReactionData                      CompanionReactionTemplate;                                // 0x0B30(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInterface*                          BossDialogIconOverride;                                   // 0x0BC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentReactionIndex;                                     // 0x0BD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBossCompanionSequencePlaying_;                          // 0x0BD4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ActivatedBossCompanionSequence_;                          // 0x0BD5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WaitingToPlayNextCompanionReaction_;                      // 0x0BD6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x0BD7(0x0001) MISSED OFFSET
	class FString                                      StartDelayedBossCompanionSequenceFunction;                // 0x0BD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                      BossActor;                                                // 0x0BE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVRBattleBossCompanionReactionSequence      CurrentBossCompanionSequence;                             // 0x0BF0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasSentReadyMessage_;                                     // 0x0C20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsReadyForMissionStart_;                                  // 0x0C21(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0C22(0x0002) MISSED OFFSET
	float                                              LastWordSubtitleLength;                                   // 0x0C24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      LastWordSubtitleString;                                   // 0x0C28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              MPMaxNumCodeKeysCanBeCarriedScalar;                       // 0x0C38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SPMaxNumCodeKeysCanBeCarriedScalar;                       // 0x0C3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      KeyDriveFullString;                                       // 0x0C40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FMissionAlertEntry                          K2Node_MakeStruct_MissionAlertEntry;                      // 0x0C50(0x0030) (Transient, DuplicateTransient)
	float                                              K2Node_CustomEvent_HackingDuration;                       // 0x0C80(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0C84(0x0004) MISSED OFFSET
	class AActor*                                      K2Node_CustomEvent_Kiosk2;                                // 0x0C88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<struct FMissionAlertEntry>                  K2Node_MakeArray_Array;                                   // 0x0C90(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              K2Node_CustomEvent_HackDuration;                          // 0x0CA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0CA4(0x0004) MISSED OFFSET
	class AActor*                                      K2Node_CustomEvent_Kiosk;                                 // 0x0CA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AMissionTrigger_VRBattleCodeKeyKiosk_C*      K2Node_DynamicCast_AsMissionTrigger_VRBattleCodeKeyKiosk_C;// 0x0CB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0CB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0CB9(0x0007) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x0CC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0CC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0CC9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NearlyEqual_FloatFloat_ReturnValue;              // 0x0CCA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x5];                                       // 0x0CCB(0x0005) MISSED OFFSET
	class AMissionTrigger_VRBattleCodeKeyKiosk_C*      K2Node_DynamicCast_AsMissionTrigger_VRBattleCodeKeyKiosk_C2;// 0x0CD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0CD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0CD9(0x0007) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter2;                    // 0x0CE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x0CE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0CE9(0x0007) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter3;                    // 0x0CF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x0CF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0CF9(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTime;                                   // 0x0CFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_True_if_break_was_hit_Variable;                 // 0x0D00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0D01(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x0D04(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0D08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x0D09(0x0007) MISSED OFFSET
	struct FVRBattleBossCompanionReactionSequence      K2Node_CustomEvent_Sequence;                              // 0x0D10(0x0030) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0D40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x0D41(0x0003) MISSED OFFSET
	int                                                K2Node_CustomEvent_ReactionIndex;                         // 0x0D44(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue;                  // 0x0D48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x0D49(0x0003) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x0D4C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVRBattleCompanionData                      K2Node_CustomEvent_CompanionData2;                        // 0x0D50(0x0030) (Transient, DuplicateTransient)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x0D80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0D81(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x6];                                       // 0x0D82(0x0006) MISSED OFFSET
	struct FStringAssetReference                       K2Node_MakeStruct_StringAssetReference;                   // 0x0D88(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FStringAssetReference>               K2Node_MakeArray_Array2;                                  // 0x0D98(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FCompanionReactionData                      K2Node_MakeStruct_CompanionReactionData;                  // 0x0DA8(0x0098) (Transient, DuplicateTransient)
	struct FVRBattleBossCompanionReactionSequence      CallFunc_Array_Get_Item;                                  // 0x0E40(0x0030) (Transient, DuplicateTransient)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0E70(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue2;                 // 0x0E74(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NearlyEqual_FloatFloat_ReturnValue2;             // 0x0E75(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0E76(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x1];                                       // 0x0E77(0x0001) MISSED OFFSET
	struct FVRBattleCompanionData                      K2Node_CustomEvent_CompanionData;                         // 0x0E78(0x0030) (Transient, DuplicateTransient)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0EA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x0EA9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x0EAA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x5];                                       // 0x0EAB(0x0005) MISSED OFFSET
	TArray<struct FStringAssetReference>               K2Node_MakeArray_Array3;                                  // 0x0EB0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FCompanionReactionData                      K2Node_MakeStruct_CompanionReactionData2;                 // 0x0EC0(0x0098) (Transient, DuplicateTransient)
	class APrimalBuff_Companion*                       K2Node_CustomEvent_ReactingCompanion2;                    // 0x0F58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FCompanionReactionData                      K2Node_CustomEvent_ReactionData2;                         // 0x0F60(0x0098) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	int                                                K2Node_CustomEvent_UniqueID2;                             // 0x0FF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Does_Companion_Reaction_Data_Match_Current_Request__Matches;// 0x0FFC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x0FFD(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x1000(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x1004(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x1005(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x2];                                       // 0x1006(0x0002) MISSED OFFSET
	class FString                                      CallFunc_GetDisplayName_ReturnValue;                      // 0x1008(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue;                       // 0x1018(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsPlayingCompanionReaction_ReturnValue;          // 0x1028(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue5;                            // 0x1029(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x102A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue6;                            // 0x102B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Location;                              // 0x102C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_Rotation;                              // 0x1038(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x4];                                       // 0x1044(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x1048(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_GetDisplayName_ReturnValue2;                     // 0x1050(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_GetDisplayName_ReturnValue3;                     // 0x1060(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue2;                      // 0x1070(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue3;                      // 0x1080(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_GetDisplayName_ReturnValue4;                     // 0x1090(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_GetDisplayName_ReturnValue5;                     // 0x10A0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue4;                      // 0x10B0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue5;                      // 0x10C0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x10D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x7];                                       // 0x10D1(0x0007) MISSED OFFSET
	class FString                                      CallFunc_GetDisplayName_ReturnValue6;                     // 0x10D8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue6;                      // 0x10E8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_GetDisplayName_ReturnValue7;                     // 0x10F8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue7;                      // 0x1108(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x1118(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue2;                       // 0x1119(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x6];                                       // 0x111A(0x0006) MISSED OFFSET
	class AActor*                                      K2Node_Event_ForInstigator;                               // 0x1120(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_TimerExists_ReturnValue;                      // 0x1128(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_TimerExists_ReturnValue2;                     // 0x1129(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x112A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x112B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue3;                          // 0x112C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue4;                          // 0x112D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x2];                                       // 0x112E(0x0002) MISSED OFFSET
	class APrimalBuff_Companion*                       K2Node_CustomEvent_ReactingCompanion;                     // 0x1130(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FCompanionReactionData                      K2Node_CustomEvent_ReactionData;                          // 0x1138(0x0098) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	int                                                K2Node_CustomEvent_UniqueID;                              // 0x11D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue3;                       // 0x11D4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Does_Companion_Reaction_Data_Match_Current_Request__Matches2;// 0x11D5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x2];                                       // 0x11D6(0x0002) MISSED OFFSET
	struct FVRBattleBossCompanionReactionSequence      CallFunc_Array_Get_Item2;                                 // 0x11D8(0x0030) (Transient, DuplicateTransient)
	struct FVRBattleCompanionData                      CallFunc_Array_Get_Item3;                                 // 0x1208(0x0030) (Transient, DuplicateTransient)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue3;                 // 0x1238(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue4;                  // 0x1239(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue4;                 // 0x123A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue5;                 // 0x123B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x123C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue5;                          // 0x123D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue6;                          // 0x123E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_TimerExists_ReturnValue3;                     // 0x123F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_CustomEvent_PhaseName3;                            // 0x1240(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EVRBattlePhaseEvent>                   K2Node_CustomEvent_Event2;                                // 0x1248(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x1249(0x0003) MISSED OFFSET
	struct FName                                       K2Node_CustomEvent_PhaseName2;                            // 0x124C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EVRBattlePhaseEvent>                   K2Node_CustomEvent_Event;                                 // 0x1254(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x1255(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue;                 // 0x1256(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x1257(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue7;                            // 0x1258(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x1259(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue8;                            // 0x125A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x5];                                       // 0x125B(0x0005) MISSED OFFSET
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x1260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x1268(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x7];                                       // 0x1269(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue;                             // 0x1270(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalBuff_Companion*                       K2Node_DynamicCast_AsPrimalBuff_Companion;                // 0x1278(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast7_CastSuccess;                          // 0x1280(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue7;                          // 0x1281(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x2];                                       // 0x1282(0x0002) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x1284(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       K2Node_CustomEvent_PhaseName;                             // 0x1294(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EVRBattlePhaseEvent>                   K2Node_CustomEvent_EventName;                             // 0x129C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsReady__Ready_;                                 // 0x129D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x129E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x1];                                       // 0x129F(0x0001) MISSED OFFSET
	struct FBPNetExecParams                            K2Node_MakeStruct_BPNetExecParams;                        // 0x12A0(0x0040) (Transient, DuplicateTransient)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x12E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x7];                                       // 0x12E1(0x0007) MISSED OFFSET
	class FString                                      CallFunc_GetDisplayName_ReturnValue8;                     // 0x12E8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue8;                      // 0x12F8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate2;                    // 0x1308(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue6;                 // 0x1318(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x7];                                       // 0x1319(0x0007) MISSED OFFSET
	struct FVRBattleCompanionData                      CallFunc_Array_Get_Item4;                                 // 0x1320(0x0030) (Transient, DuplicateTransient)
	bool                                               CallFunc_IsValid_ReturnValue9;                            // 0x1350(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x7];                                       // 0x1351(0x0007) MISSED OFFSET
	class APlayerController*                           CallFunc_GetPlayerController_PC;                          // 0x1358(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue10;                           // 0x1360(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x3];                                       // 0x1361(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x1364(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue;                  // 0x1370(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_IsFull;                                // 0x1378(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData38[0x7];                                       // 0x1379(0x0007) MISSED OFFSET
	class AHUD*                                        CallFunc_GetHUD_ReturnValue;                              // 0x1380(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterHUD*                                 K2Node_DynamicCast_AsShooterHUD;                          // 0x1388(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast8_CastSuccess;                          // 0x1390(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData39[0x7];                                       // 0x1391(0x0007) MISSED OFFSET
	class UUI_Subtitles*                               CallFunc_GetSubtitlesWidget_ReturnValue;                  // 0x1398(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter2;                   // 0x13A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast9_CastSuccess;                          // 0x13A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData40[0x7];                                       // 0x13A9(0x0007) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_SphereOverlapActors_NEW_ActorsToIgnore_RefProperty;// 0x13B0(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_VRBattle_Player.Buff_VRBattle_Player_C");
		return ptr;
	}


	void GetPlayerController(class APlayerController** PC);
	void IsReady_(bool* Ready_);
	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void EnsureBossIsVisible();
	void STATIC_Play_Current_Boss_Montage();
	void InitializeBossActor();
	void STATIC_Does_Companion_Reaction_Match_(struct FVRBattleCompanionData* BossReaction, struct FCompanionReactionData* CompanionReaction, bool* Matches);
	void Does_Boss_CompanionReaction_Match_(struct FVRBattleCompanionData* BossReaction, struct FCompanionReactionData* CompanionReaction, bool* Matches);
	void Get_Current_VR_Battle_Companion_Data(bool* IsValid_, struct FVRBattleCompanionData* Data);
	void Does_Companion_Reaction_Data_Match_Current_Request_(struct FCompanionReactionData* ReactionData, bool* Matches);
	void Stop_Companion_Reaction();
	void MakeCompanionHackingEvent(float Duration);
	void IsCarryingMaxCodeKeys(bool* NewParam);
	void Get_Modified_Max_Code_Keys_That_Can_be_Carried(int* Num);
	void BuffTickServer(float* DeltaTime);
	void UserConstructionScript();
	void DoSpawnPortalFX(const struct FVector& Location, const struct FRotator& Rotation);
	void Server_StartCompanionHacking(float HackingDuration, class AActor* Kiosk);
	void Multicast_StartCompanionHacking(float HackDuration, class AActor* Kiosk);
	void Server_StopCompanionHacking();
	void Multicast_StopCompanionHacking();
	void Server_StopCompanionReaction();
	void Multicast_StopCompanionReaction();
	void BuffTickClient(float* DeltaTime);
	void StartBossCompanionReactionSequence(struct FVRBattleBossCompanionReactionSequence* Sequence);
	void PlayBossCompanionReaction(int ReactionIndex);
	void PlayBossLine(const struct FVRBattleCompanionData& CompanionData);
	void PlayCompanionLine(const struct FVRBattleCompanionData& CompanionData);
	void OnReactionPlayed_Delegate_Event(class APrimalBuff_Companion* ReactingCompanion, int UniqueID, struct FCompanionReactionData* ReactionData);
	void StartDelayedBossCompanionSequence();
	void BPDeactivated(class AActor** ForInstigator);
	void OnReactionStopped_Delegate_Event(class APrimalBuff_Companion* ReactingCompanion, int UniqueID, struct FCompanionReactionData* ReactionData);
	void Cancel_Boss_Companion_Sequence();
	void PlayPhaseEventSequence(const struct FName& PhaseName, TEnumAsByte<EVRBattlePhaseEvent> Event);
	void Multicast_OnPhaseEvent_Event(const struct FName& PhaseName, TEnumAsByte<EVRBattlePhaseEvent> Event);
	void ServerBroadcastPhaseEvent(const struct FName& PhaseName, TEnumAsByte<EVRBattlePhaseEvent> EventName);
	void Client_PlayPickupNoise();
	void ShowBossLastWordsSubtitles();
	void CheckSendKeyFullAlert(bool IsFull);
	void ExecuteUbergraph_Buff_VRBattle_Player(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
