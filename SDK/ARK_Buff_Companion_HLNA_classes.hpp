#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Companion_HLNA_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Companion_HLNA.Buff_Companion_HLNA_C
// 0x4A60 (0x5A90 - 0x1030)
class ABuff_Companion_HLNA_C : public ABuff_Companion_BaseBP_C
{
public:
	class UParticleSystemComponent*                    ParticleSystemThrustersLeftRight;                         // 0x1030(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystemThrustersIdle;                              // 0x1038(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystemThrustersFwd;                               // 0x1040(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystemBubbles;                                    // 0x1048(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Intro_Teleport_Sphere;                                    // 0x1050(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Scanning_ParticleSystemComponent;                         // 0x1058(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             MeshBodyLocation;                                         // 0x1060(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ScanAudioComponent;                                       // 0x1068(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    fixed_orientation_timeline__Direction_1331766D43686C4FC74B1F9D034C7ED3;// 0x1070(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1071(0x0007) MISSED OFFSET
	class UTimelineComponent*                          fixed_orientation_timeline;                               // 0x1078(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    delay_before_intro_shatter__Direction_E2C184154AA60B3BAA9DAA849D72EE0D;// 0x1080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1081(0x0007) MISSED OFFSET
	class UTimelineComponent*                          delay_before_intro_shatter;                               // 0x1088(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_7__Direction_7E09B6D84A707742267EED9CB48F51B6;   // 0x1090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x1091(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_8;                                               // 0x1098(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_6_NewTrack_0_66D724D5415E024F5AE7A1A7BA932F52;   // 0x10A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_6__Direction_66D724D5415E024F5AE7A1A7BA932F52;   // 0x10A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x10A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_7;                                               // 0x10A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_5_NewTrack_0_6B52F643432B23481CC770B9B5C2A90D;   // 0x10B0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_5__Direction_6B52F643432B23481CC770B9B5C2A90D;   // 0x10B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x10B5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_6;                                               // 0x10B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_3__Direction_F5DEB8A64FF6E9F1FAFF80A6D2E2EACA;   // 0x10C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x10C1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_4;                                               // 0x10C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_1_NewTrack_1_FE1D884C42EF8A6DE37907BD43FB246E;   // 0x10D0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_FE1D884C42EF8A6DE37907BD43FB246E;   // 0x10D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x10D5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x10D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_alpha_71C86B7A4C8EAD62EBB76CA47B61F709;        // 0x10E0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_71C86B7A4C8EAD62EBB76CA47B61F709;   // 0x10E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x10E5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x10E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ProjectFromScreenPercents_Focused;                        // 0x10F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectFromScreenDist_Focused;                            // 0x10F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BobDist_Idle;                                             // 0x10FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BobDist_Focused;                                          // 0x1100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrTargetZOffset_Bob;                                    // 0x1104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrTargetZOffset;                                        // 0x1108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrTargetZOffset_NoBob;                                  // 0x110C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OffsetZ_Idle;                                             // 0x1110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OffsetZ_Focused;                                          // 0x1114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastOrbitNormal;                                          // 0x1118(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   AcceptableOrbitAngleRange_Current;                        // 0x1124(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   AcceptableOrbitAngleRange;                                // 0x112C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerOrbitRadius;                                        // 0x1134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EdgeOfScreenAngle;                                        // 0x1138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TestMeshRotOffset;                                        // 0x113C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OrbitOffsetFromPlayerZ;                                   // 0x1148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastPlayerLocation;                                       // 0x114C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PretendCompanionWorldLoc;                                 // 0x1158(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LastPlayerRotation;                                       // 0x1164(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FakeVelocityLagDistance;                                  // 0x1170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FakeVelocityLagDistance_AttachedToCamera;                 // 0x1174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerVelocityLag_BaseSpeed;                              // 0x1178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentCompanionRootWorldZ;                               // 0x117C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultEventLocationInterpSpeed;                          // 0x1180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastFakeVelocityOffset;                                   // 0x1184(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FakeVelocityLagInterpSpeed;                               // 0x1190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ProjectFromScreenPercents_Monologue;                      // 0x1194(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectFromScreenDist_Monologue;                          // 0x119C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerOrbitRadius_MonologueTPV;                           // 0x11A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastProjectedRelativeLoc;                                 // 0x11A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverProjectionInterpSpeed;                               // 0x11B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastMeshLocation;                                         // 0x11B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MeshVelocity;                                             // 0x11C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x11CC(0x0004) MISSED OFFSET
	class UAnimMontage*                                EquipMontage;                                             // 0x11D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEarsDown;                                                // 0x11D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x11D9(0x0007) MISSED OFFSET
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Salute;                               // 0x11E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Sorry;                                // 0x11F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Thank;                                // 0x1200(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Wave;                                 // 0x1210(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Laugh;                                // 0x1220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Yes;                                  // 0x1230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_No;                                   // 0x1240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Taunt;                                // 0x1250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Cheer;                                // 0x1260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Friendly;                             // 0x1270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundCue*>                           EmoteSounds_Unlockable;                                   // 0x1280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Turkey;                               // 0x1290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Snowball;                             // 0x12A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Heart;                                // 0x12B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Evil;                                 // 0x12C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_LightenUp;                            // 0x12D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Flex_2;                               // 0x12E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Flex_3;                               // 0x12F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAnimMontage*                                PlayerDiedMontage;                                        // 0x1300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OrbitDirInterpSpeed;                                      // 0x1308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetRelativeOffset;                                     // 0x130C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetRelLocFPV_InterpSpeed;                              // 0x1318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BobDist_Monologue;                                        // 0x131C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PretendCompanionWorldLocInterpSpeed;                      // 0x1320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BobSpeed_Idle;                                            // 0x1324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BobSpeed_Focused;                                         // 0x1328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BobSpeed_Monologue;                                       // 0x132C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BobSpeed_Focused_FPV;                                     // 0x1330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BobDist_Focused_FPV;                                      // 0x1334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockHLNaSphereRadius_FPV;                                // 0x1338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHLNA_CompactMode;                                        // 0x133C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x133D(0x0003) MISSED OFFSET
	double                                             LastWantsToCompactTime;                                   // 0x1340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantsToCompact;                                          // 0x1348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x1349(0x0003) MISSED OFFSET
	float                                              TimeAfterReactionEndsToCompact;                           // 0x134C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             CompactVFX_In;                                            // 0x1350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CompactSFX_In;                                            // 0x1358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CompactSFX_Out;                                           // 0x1360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             CompactVFX_Out;                                           // 0x1368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsCompact;                                               // 0x1370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x1371(0x0007) MISSED OFFSET
	struct FCompanionReactionData                      Reaction_SayHello;                                        // 0x1378(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bIsPreparingMassTeleport;                                 // 0x1410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x1411(0x0007) MISSED OFFSET
	double                                             LastMassTeleportStartTime;                                // 0x1418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MassTeleportTriggersAfterTime;                            // 0x1420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x1424(0x0004) MISSED OFFSET
	class AVfxManager_HLNaMassTeleport_C*              SpawnedActor_MassTeleportVFX;                             // 0x1428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              MassTeleportChargeDuration;                               // 0x1430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x1434(0x0004) MISSED OFFSET
	TArray<class APrimalCharacter*>                    CurrentMassTeleportChars;                                 // 0x1438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              MassTeleportGroundTraceHalfHeight;                        // 0x1448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MassTeleportAreaRadius;                                   // 0x144C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MassTeleport_MaxCharCount;                                // 0x1450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MassTeleport_MaxPlayerCount;                              // 0x1454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTeleportDestination                        CurrentTeleportDestination;                               // 0x1458(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     MassTeleportStartLocation;                                // 0x1480(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAllowedTeleportWaitTime;                               // 0x148C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MassTeleport_TargetLocOffsetZ;                            // 0x1490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CanMonologueWithinOrbitRadiusMult;                        // 0x1494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                last_selected_desired_teleportation_direction_index;      // 0x1498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                last_selected_desired_teleportation_region;               // 0x149C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               debug_teleport;                                           // 0x14A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x14A1(0x0007) MISSED OFFSET
	class UParticleSystem*                             VFX_BeamToChars;                                          // 0x14A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            TeleportingCharsVFX;                                      // 0x14B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             VFX_TeleportFailed;                                       // 0x14C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_TeleportFailed;                                     // 0x14C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             VFX_TeleportTriggered;                                    // 0x14D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CleanUpVfxDuration;                                       // 0x14D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x14DC(0x0004) MISSED OFFSET
	class UParticleSystem*                             Mass_Teleport_Sphere_VFX_Emitter_Template;                // 0x14E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Teleport_Sphere_Emitter_Reference;                        // 0x14E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpToTargetSpeed_Idle_MIN;                             // 0x14F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpToTargetSpeed_Idle_MAX;                             // 0x14F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpToTargetSpeed_FlyingToPoint;                        // 0x14F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpToTargetSpeed_Focused;                              // 0x14FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpRotSpeed;                                           // 0x1500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpToTargetSpeed_Monologue;                            // 0x1504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpToTargetSpeed_OrbitingPoint;                        // 0x1508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpToTargetSpeed_ADS;                                  // 0x150C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpToTargetSpeed_Focused_FPV;                          // 0x1510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OrbitDirInterpSpeed_ADS;                                  // 0x1514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpRotSpeed_Focused;                                   // 0x1518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpRotSpeed_Monologue;                                 // 0x151C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MassTeleport_TeleportDuration;                            // 0x1520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpToTargetSpeed_Custom;                               // 0x1524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpRotSpeed_Custom;                                    // 0x1528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpToTeleportLocationInterpSpeed;                      // 0x152C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCompanionReactionData                      CompanionReaction_StartScan;                              // 0x1530(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    Finished_Scan_Dispatcher;                                 // 0x15C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UClass*                                      HexagonTradeTemplate;                                     // 0x15D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPrimalUI*                                   CurrentTradeUI;                                           // 0x15E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsShopOpen;                                               // 0x15E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x7];                                       // 0x15E9(0x0007) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            HLNA_Materials_for_Fresnel_or_Other_Purpose;              // 0x15F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       AbleToBePurchased;                                        // 0x1600(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Teleport_Begin;                                  // 0x1610(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_JustAboutToTeleport;                    // 0x16A8(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Seconds_Before_Teleport_When_Reaction_Plays;              // 0x1740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x1744(0x0004) MISSED OFFSET
	struct FCompanionReactionData                      CompanionReaction_CancelledTeleport;                      // 0x1748(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_PostTeleport;                           // 0x17E0(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                Hexagon_Absorb_Anim;                                      // 0x1878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             last_time_played_absorb_anim;                             // 0x1880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MassTeleportVfxActorClass;                                // 0x1888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PostMassTeleportVfxActorClass;                            // 0x1890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Detatched_Riding_Dino_Interp_Speed;                       // 0x1898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x189C(0x0004) MISSED OFFSET
	class USoundBase*                                  ScanOnSFX;                                                // 0x18A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Default_Scan_Loop_Duration;                               // 0x18A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x18AC(0x0004) MISSED OFFSET
	class USoundBase*                                  ScanLoopSFX;                                              // 0x18B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ScanOffSFX;                                               // 0x18B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Default_Scan_Loop_VFX_Duration;                           // 0x18C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x4];                                       // 0x18C4(0x0004) MISSED OFFSET
	struct FCompanionReactionData                      Default_Scan_Finish_Reaction;                             // 0x18C8(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Player_Died_Reaction;                                     // 0x1960(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Begin_Play_Reaction;                                      // 0x19F8(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Buff_Leech;                                      // 0x1A90(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Buff_Psychadelic;                                // 0x1B28(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Buff_Grappled_By_Spider;                         // 0x1BC0(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Buff_Bolad;                                      // 0x1C58(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Buff_Frozen;                                     // 0x1CF0(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Buff_On_Fire;                                    // 0x1D88(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_PlayerStatus_Handcuffed;                         // 0x1E20(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_PlayerStatus_Starving;                           // 0x1EB8(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_PlayerStatus_Thirsty;                            // 0x1F50(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_PlayerStatus_No_Air;                             // 0x1FE8(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_PlayerStatus_Low_Stamina;                        // 0x2080(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_PlayerStatus_Almost_Unconscious;                 // 0x2118(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_PlayerStatus_Low_Health;                         // 0x21B0(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_PlayerStatus_Asleep;                             // 0x2248(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_PlayerStatus_IndoorsAfterHavingBeenGone;         // 0x22E0(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_RidingDinoStatus_Starving;                       // 0x2378(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_RidingDinoStatus_Thirsty;                        // 0x2410(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_RidingDinoStatus_No_Air;                         // 0x24A8(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_RidingDinoStatus_LowStamina;                     // 0x2540(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_RidingDinoStatus_Almost_Unconscious;             // 0x25D8(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_RidingDinoStatus_Low_Health;                     // 0x2670(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Interval_to_check_for_various_possible_world_reactions;   // 0x2708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Has_Been_Outside_Recently_Reaction_Check;                 // 0x270C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Has_Been_Inside_Recently_Reaction_Check;                  // 0x270D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x2];                                       // 0x270E(0x0002) MISSED OFFSET
	struct FVector                                     Recent_Inside_Location_for_Travel_Reaction;               // 0x2710(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x4];                                       // 0x271C(0x0004) MISSED OFFSET
	struct FCompanionReactionData                      Reaction_PlayerStatus_Traveling;                          // 0x2720(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              distance_to_check_whether_the_player_is_traveling_from_the_last_indoors_location;// 0x27B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Velocity_at_which_the_boost_reaction_plays;               // 0x27BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCompanionReactionData                      Reaction_PlayerStatus_BoostLaunch;                        // 0x27C0(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                              Leech_Buff_Class_Names;                                   // 0x2858(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              Psychadelic_Buff_Class_Names;                             // 0x2868(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              Poison_Buff_Class_Names;                                  // 0x2878(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              Grappled_Buff_Class_Names;                                // 0x2888(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              Bola_d_Buff_Class_Names;                                  // 0x2898(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              Frozen_Buff_Class_Names;                                  // 0x28A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              Enflamed_Buff_Class_Names;                                // 0x28B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              XP_Buff_Class_Names;                                      // 0x28C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_PlayerStatus_BonusXP;                            // 0x28D8(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Has_Checked_Buffs_Once_During_This_Reaction_Period;       // 0x2970(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x7];                                       // 0x2971(0x0007) MISSED OFFSET
	double                                             Last_Time_Try_Check_FIre_Reaction;                        // 0x2978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCompanionReactionData                      Reaction_Combat_FriendlyFire;                             // 0x2980(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Combat_DamagedEnemy;                             // 0x2A18(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Combat_KilledEnemy;                              // 0x2AB0(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               debug_enable_immediate_reactions;                         // 0x2B48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x2B49(0x0003) MISSED OFFSET
	float                                              Recent_Damage_Taken;                                      // 0x2B4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Damage_Threshold_Before_Reacting_To_Heavy_Damage_Taken;   // 0x2B50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x4];                                       // 0x2B54(0x0004) MISSED OFFSET
	struct FCompanionReactionData                      Reaction_Combat_TookHeavyDamage;                          // 0x2B58(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Last_Checked_Health;                                      // 0x2BF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x4];                                       // 0x2BF4(0x0004) MISSED OFFSET
	struct FCompanionReactionData                      Reaction_Combat_DamagedCreatureAlmostDead;                // 0x2BF8(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              target_health_reaction_will_play_if_target_has_max_health_above_this_value;// 0x2C90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              target_health_reaction_will_play_if_target_gets_current_health_under_this_value;// 0x2C94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             Last_Time_Played_Monologue;                               // 0x2C98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Currently_In_Face_Speed_Monologue;                        // 0x2CA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              reaction_timer_settings_increment_threshold_lowest;       // 0x2CA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              reaction_timer_settings_increment_threshold_low;          // 0x2CA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              reaction_timer_settings_lowest_increment;                 // 0x2CAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              reaction_timer_settings_low_increment;                    // 0x2CB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              reaction_timer_settings_med_increment;                    // 0x2CB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                reaction_timer_settings_min_seconds;                      // 0x2CB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                reaction_timer_settings_max_seconds;                      // 0x2CBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              global_reaction_chance_settings_min_value;                // 0x2CC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              global_reaction_chance_settings_max_value;                // 0x2CC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              global_reaction_chance_settings_increment;                // 0x2CC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EmoteParticleScale;                                       // 0x2CCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    EmoteRotationOffset;                                      // 0x2CD0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData29[0x4];                                       // 0x2CDC(0x0004) MISSED OFFSET
	TArray<class UParticleSystem*>                     Emote_HLNAParticles;                                      // 0x2CE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystemComponent*                    EmoteComponent;                                           // 0x2CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentEyeMouthOpacity;                                   // 0x2CF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EyeMouthOpacityInterpSpeed;                               // 0x2CFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Time_To_Hide_Eye_During_Emote;                            // 0x2D00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_flashing_from_hexagons;                                // 0x2D04(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData30[0x3];                                       // 0x2D05(0x0003) MISSED OFFSET
	TArray<struct FHLNALocalizedAudioEntry>            HLNA_localized_emote_audio;                               // 0x2D08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Poop;                                            // 0x2D18(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_EquippedLowDurabilityWeapon;                // 0x2DB0(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	double                                             Last_time_tried_to_react_to_equipping_a_low_durability_weapon;// 0x2E48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCompanionReactionData                      Reaction_Gear_CraftedFirstThatchStructure;                // 0x2E50(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedFirstJumpPad;                        // 0x2EE8(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedFirstOceanPlatform;                  // 0x2F80(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedFirstPressurePlate;                  // 0x3018(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedFirstFishingNet;                     // 0x30B0(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedFirstMiningDrill;                    // 0x3148(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedFirstShoulderCannon;                 // 0x31E0(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedFirstTekGrenadeLauncher;             // 0x3278(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedFirstTekCruiseMissile;               // 0x3310(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedFirstTekAlarm;                       // 0x33A8(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedFirstTekClaws;                       // 0x3440(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedFirstHoverSkiff;                     // 0x34D8(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Dino_TamedFirstBigTurtle;                        // 0x3570(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Dino_TamedFirstBogSpider;                        // 0x3608(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Dino_TamedFirstSpaceWhale;                       // 0x36A0(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Dino_TamedFirstLavaLizard;                       // 0x3738(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Dino_TamedFirstShapeShifter;                     // 0x37D0(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Dino_TamedFirstRex;                              // 0x3868(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Dino_TamedFirstRaptor;                           // 0x3900(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Dino_TamedFirstDodo;                             // 0x3998(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Dino_TamedCarnivore;                             // 0x3A30(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Dino_TamedHerbivore;                             // 0x3AC8(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsPlayingInitialSpawnIntroAnim;                           // 0x3B60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData31[0x3];                                       // 0x3B61(0x0003) MISSED OFFSET
	struct FVector                                     Initial_Spawn_Intro_Anim_Loc_Offset;                      // 0x3B64(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Intro_World_Rig_Class;                                    // 0x3B70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Intro_VR_World_Actor_Class;                               // 0x3B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct UObject_FTransform                          Intro_World_Rig_Transform_Offset;                         // 0x3B80(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Intro_Anim_Timeout;                                       // 0x3BB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData32[0x4];                                       // 0x3BB4(0x0004) MISSED OFFSET
	class AActor*                                      Intro_World_Rig_Ref;                                      // 0x3BB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      Intro_VR_World_Actor_Ref;                                 // 0x3BC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Intro_HLNA_Anim;                                          // 0x3BC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Has_Been_Off_Mount_Recently_Reaction_Check;               // 0x3BD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData33[0x7];                                       // 0x3BD1(0x0007) MISSED OFFSET
	struct FCompanionReactionData                      Reaction_Dino_RecentlyRodeOn;                             // 0x3BD8(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Dino_LeveledUp;                                  // 0x3C70(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Dino_Died;                                       // 0x3D08(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Recent_Mount_Level_to_Check_For_Level_Up;                 // 0x3DA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData34[0x4];                                       // 0x3DA4(0x0004) MISSED OFFSET
	struct FCompanionReactionData                      Previous_HLNA_Environmental_Reaction;                     // 0x3DA8(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Has_Played_Initial_Spawn_Anim;                            // 0x3E40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData35[0x3];                                       // 0x3E41(0x0003) MISSED OFFSET
	struct FVector                                     last_checked_player_location_for_idle_reaction;           // 0x3E44(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCompanionReactionData                      Reaction_Swamp_Idle;                                      // 0x3E50(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Lunar_Idle;                                      // 0x3EE8(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Ocean_Idle;                                      // 0x3F80(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Arctic_Idle;                                     // 0x4018(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Volcanic_Idle;                                   // 0x40B0(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Generic_Idle;                                    // 0x4148(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedTurret;                              // 0x41E0(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedTeleporter;                          // 0x4278(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedReplicator;                          // 0x4310(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedSmithy;                              // 0x43A8(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedCampfire;                            // 0x4440(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_Gear_CraftedGrill;                               // 0x44D8(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Has_Played_Post_Initial_Spawn_HLNA_Reaction;              // 0x4570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData36[0x7];                                       // 0x4571(0x0007) MISSED OFFSET
	class UClass*                                      HLNA_Teleport_Post_Process_Buff;                          // 0x4578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCompanionReactionData                      Reaction_Dino_EnterSpaceWhaleBallTurret;                  // 0x4580(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                      Space_Whale_Turret_Passenger_Buff;                        // 0x4618(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Allowed_Time_Interval_To_Refresh_If_Items_Can_Be_Purchased;// 0x4628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData37[0x4];                                       // 0x462C(0x0004) MISSED OFFSET
	struct FCompanionReactionData                      Reaction_Dino_GiantTurtleSubmerged;                       // 0x4630(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                      Giant_Turtle_Submerged_Buff;                              // 0x46C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            Intro_Teleport_Sphere_Dynamic_Matierials;                 // 0x46D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	float                                              Intro_Teleport_Sphere_vfx_radius;                         // 0x46E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Intro_VFX_Finish_Envelop_Duration;                        // 0x46EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Intro_Delay_Before_Sphere_Unmask;                         // 0x46F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData38[0x4];                                       // 0x46F4(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Intro_Teleport_Sphere_Dynamic_Matierial;                  // 0x46F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_force_set;                                             // 0x4700(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData39[0x3];                                       // 0x4701(0x0003) MISSED OFFSET
	struct FRotator                                    post_intro_rotation_offset;                               // 0x4704(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               has_started_intro_shatter_vfx;                            // 0x4710(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData40[0x7];                                       // 0x4711(0x0007) MISSED OFFSET
	class UClass*                                      punch_damage_type;                                        // 0x4718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCompanionReactionData                      Reaction_PlayerStatus_LevelUp;                            // 0x4720(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRotator                                    Intro_World_Rig_Socket_Rotation_Offset;                   // 0x47B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData41[0x4];                                       // 0x47C4(0x0004) MISSED OFFSET
	class UAnimMontage*                                Respawn_HLNA_Anim;                                        // 0x47C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Respawn_World_Rig_Class;                                  // 0x47D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               spawn_anim_is_respawn;                                    // 0x47D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               biome_buffs;                                              // 0x47D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData42[0x6];                                       // 0x47DA(0x0006) MISSED OFFSET
	class FString                                      CannotTeleportString;                                     // 0x47E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      CannotTeleportReasonRaft;                                 // 0x47F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      CannotTeleportReasonFish;                                 // 0x4800(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      HowToUnhideHLNAString;                                    // 0x4810(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              BiomeBuffTags;                                            // 0x4820(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              random_focus_vertical_offset;                             // 0x4830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              random_focus_rotation_angle;                              // 0x4834(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              random_focus_height_offset_range;                         // 0x4838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              scan_orbit_randomize_interval;                            // 0x483C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              delay_before_playing_scan_vfx;                            // 0x4840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData43[0x4];                                       // 0x4844(0x0004) MISSED OFFSET
	struct FCompanionReactionData                      Reaction_Emote;                                           // 0x4848(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        Emote_PlayerMontages;                                     // 0x48E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        CompanionEmoteAnims_Poop;                                 // 0x48F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               should_be_idle;                                           // 0x4900(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData44[0x7];                                       // 0x4901(0x0007) MISSED OFFSET
	class UParticleSystem*                             Scanning_VFX_particle_emitter;                            // 0x4908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParticleSystem*>                     vfx_to_disable_during_reactions;                          // 0x4910(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               able_to_play_initial_movement_sfx;                        // 0x4920(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData45[0x3];                                       // 0x4921(0x0003) MISSED OFFSET
	float                                              distance_threshold_for_fast_movement_speed;               // 0x4924(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              distance_threshold_for_medium_movement_speed;             // 0x4928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              distance_threshold_for_slow_movement_speed;               // 0x492C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              distance_threshold_for_resetting_ability_to_play_movement_speed;// 0x4930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData46[0x4];                                       // 0x4934(0x0004) MISSED OFFSET
	class USoundBase*                                  begin_fast_movement_sfx;                                  // 0x4938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  begin_medium_movement_sfx;                                // 0x4940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  begin_slow_movement_sfx;                                  // 0x4948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_first_respawn;                                         // 0x4950(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData47[0x7];                                       // 0x4951(0x0007) MISSED OFFSET
	struct FCompanionReactionData                      Reaction_Respawn_B;                                       // 0x4958(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Multiuse_Hexagon_Gather_Refresh_Interval;                 // 0x49F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               disable_ability_to_get_hexagons_from_refresh_pool_until_timer_starts;// 0x49F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData48[0x3];                                       // 0x49F5(0x0003) MISSED OFFSET
	int                                                Multiuse_Hexagon_Gather_Pool_Gain_Amount;                 // 0x49F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData49[0x4];                                       // 0x49FC(0x0004) MISSED OFFSET
	struct FCompanionReactionData                      Reaction_CollectHexagonsFromMultiusePool;                 // 0x4A00(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      Reaction_CollectHexagonsFromMultiusePool_ManyHexagons;    // 0x4A98(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                amount_of_hexagons_at_which_HLNA_comments_that_you_have_a_bunch;// 0x4B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData50[0x4];                                       // 0x4B34(0x0004) MISSED OFFSET
	class FString                                      Collect_Hexagons_String;                                  // 0x4B38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Current_Completed_Missions;                               // 0x4B48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Number_of_Missions_Needed_For_Easy_Final_Boss;            // 0x4B4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Number_of_Missions_Needed_For_Med_Final_Boss;             // 0x4B50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Number_of_Missions_Needed_For_Hard_Final_Boss_MP;         // 0x4B54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      Missions_string;                                          // 0x4B58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                total_number_of_missions;                                 // 0x4B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VR_mission_teleport_location;                             // 0x4B6C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FTeleportedCharacter>                SavedTeleportReturnLocations;                             // 0x4B78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     NewVar;                                                   // 0x4B88(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              current_desired_volume;                                   // 0x4B94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCompanionReactionData                      Reaction_Respawn_A;                                       // 0x4B98(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAudioComponent*                             current_audio_comp_reference;                             // 0x4C30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHLNALocalizedAudioEntry                    Localized_Intro_Dialog;                                   // 0x4C38(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int>                                        StoredColors;                                             // 0x4C48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               ColorNames;                                               // 0x4C58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               UsingColorNames;                                          // 0x4C68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               UsingColorizedColor;                                      // 0x4C78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AMissionType*                                Current_Intermediate_Final_Boss_Fight_Mission_Ref;        // 0x4C88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AMissionDispatcher*                          final_boss_fight_mission_dispatcher;                      // 0x4C90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_currently_trying_to_TP_to_final_boss;                  // 0x4C98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData51[0x7];                                       // 0x4C99(0x0007) MISSED OFFSET
	class APrimalCharacter*                            recently_selected_remote_character_to_draw_tool_tip_for;  // 0x4CA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  On_Hexagon_Purchase_Sfx;                                  // 0x4CA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  hexagon_collect_sfx;                                      // 0x4CB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Focused_Selected_Remote_Target_Timeout_Time;              // 0x4CB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              hlna_focus_selected_remote_target_range;                  // 0x4CBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_moving_towards_target_to_for_remote_tooltip;           // 0x4CC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_currently_scan_looping;                                // 0x4CC1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>                       hlna_mesh_channel;                                        // 0x4CC2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               last_time_check_if_player_was_ADS;                        // 0x4CC3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              time_between_environmental_reactions;                     // 0x4CC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                respawn_reaction_frequency;                               // 0x4CC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                death_reaction_frequency;                                 // 0x4CCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              hello_reaction_chance;                                    // 0x4CD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              volume_fade_multiplier;                                   // 0x4CD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              max_movement_audio_volume;                                // 0x4CD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData52[0x4];                                       // 0x4CDC(0x0004) MISSED OFFSET
	TArray<class FString>                              teleported_player_names;                                  // 0x4CE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Is_VR_Mission_Available;                                  // 0x4CF0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData53[0x7];                                       // 0x4CF1(0x0007) MISSED OFFSET
	class FString                                      Cannot_Teleport_Seated_Characters_String;                 // 0x4CF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              MaxFinalBossTeleportDragWeight;                           // 0x4D08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData54[0x4];                                       // 0x4D0C(0x0004) MISSED OFFSET
	class FString                                      Cannot_Teleport_Large_Dinos_To_Final_Boss;                // 0x4D10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      Story_Glitches;                                           // 0x4D20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               awaiting_set_of_initial_spawn_intro_anim;                 // 0x4D30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_colliding_with_something;                              // 0x4D31(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData55[0x2];                                       // 0x4D32(0x0002) MISSED OFFSET
	float                                              distance_from_target_where_hlna_should_move_to;           // 0x4D34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      Cannot_Teleport_Players_On_Mission;                       // 0x4D38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     Amount_to_launch_player_in_space_when_they_poop;          // 0x4D48(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData56[0x4];                                       // 0x4D54(0x0004) MISSED OFFSET
	class FString                                      Simple_Sound_Loading;                                     // 0x4D58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundBase*                                  Simple_Loaded_Sound;                                      // 0x4D68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               last_spawn_was_fast_travel;                               // 0x4D70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData57[0x7];                                       // 0x4D71(0x0007) MISSED OFFSET
	TArray<struct FCompanionReactionData>              Reactions_PostIntro_FirstSpawnLines;                      // 0x4D78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Number_of_Missions_Needed_For_Hard_Final_Boss_SP;         // 0x4D88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               only_finish_intro_once;                                   // 0x4D8C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData58[0x3];                                       // 0x4D8D(0x0003) MISSED OFFSET
	class FString                                      post_intro_mission_alert_text;                            // 0x4D90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      Post_Intro_Mission_Alert_Title;                           // 0x4DA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               next_async_loaded_audio_should_play_anim_texture;         // 0x4DB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData59[0x7];                                       // 0x4DB1(0x0007) MISSED OFFSET
	TArray<struct FVector>                             Region_TP_VFX_Colors_By_Index;                            // 0x4DB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLocalizedSoundWaveAnimTexturePairArrays> Localized_Death_Audio_Sound_Waves;                        // 0x4DC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                random_sound_wave_index;                                  // 0x4DD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Awaiting_Displaying_Post_Intro_Mission_Alert;          // 0x4DDC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Awaiting_Displaying_Post_Intro_Remote_Targeting_Alert; // 0x4DDD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData60[0x2];                                       // 0x4DDE(0x0002) MISSED OFFSET
	struct FCompanionReactionData                      last_played_reaction;                                     // 0x4DE0(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      test_POI_glitch_fixing_reaction_used_to_check_if_hlna_is_currently_fixing_a_POI;// 0x4E78(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                      post_intro_hlna_remote_target_alert_title;                // 0x4F10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       post_intro_hlna_remote_target_alert_text_before_key;      // 0x4F20(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       post_intro_hlna_remote_target_alert_text_after_key;       // 0x4F48(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              duration_to_display_post_intro_mission_alert;             // 0x4F70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              duration_to_display_post_intro_remote_target_alert;       // 0x4F74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCompanionReactionData                      current_playing_reaction;                                 // 0x4F78(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      blank_reaction;                                           // 0x5010(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               was_fixing_glitch;                                        // 0x50A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               last_check_was_ADS;                                       // 0x50A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData61[0x2];                                       // 0x50AA(0x0002) MISSED OFFSET
	struct FVector                                     saved_initial_ADS_orbit_dir;                              // 0x50AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  current_simple_async_loaded_anim_texture;                 // 0x50B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                max_dino_count_allowed_for_vr_teleport;                   // 0x50C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData62[0x4];                                       // 0x50C4(0x0004) MISSED OFFSET
	class FString                                      exceeding_max_tame_count_string;                          // 0x50C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                max_player_count_allowed_for_vr_teleport;                 // 0x50D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData63[0x4];                                       // 0x50DC(0x0004) MISSED OFFSET
	class FString                                      exceeding_max_player_count_string;                        // 0x50E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      cant_teleport_dead_tames_string;                          // 0x50F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      cant_teleport_dead_players_string;                        // 0x5100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              radius_to_check_for_enemies_before_teleporting;           // 0x5110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               try_to_avoid_TP_near_enemy_turrets;                       // 0x5114(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               try_to_avoid_TP_near_enemy_players;                       // 0x5115(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               try_to_avoid_TP_near_hostile_dinos;                       // 0x5116(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData64[0x1];                                       // 0x5117(0x0001) MISSED OFFSET
	float                                              angle_to_count_an_appropriate_tp_spot_in_a_cardinal_direction;// 0x5118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                first_few_points_to_check_angle;                          // 0x511C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              smaller_angle_to_check_points_first_and_foremost_in;      // 0x5120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x5124(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x5128(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable2;                          // 0x512C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x5130(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x5134(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x5138(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue;         // 0x5139(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x513A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData65[0x1];                                       // 0x513B(0x0001) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable3;                          // 0x513C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue3;                         // 0x5140(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable4;                          // 0x5144(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable5;                          // 0x5148(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue4;                         // 0x514C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue5;                         // 0x5150(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable6;                          // 0x5154(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue6;                         // 0x5158(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x515C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue2;        // 0x515D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x515E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue3;        // 0x515F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable7;                          // 0x5160(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue7;                         // 0x5164(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x5168(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue4;        // 0x5169(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData66[0x2];                                       // 0x516A(0x0002) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable8;                          // 0x516C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue8;                         // 0x5170(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable9;                          // 0x5174(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue9;                         // 0x5178(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_WithPlayerLocation;                    // 0x517C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EMassTeleportState>                    K2Node_CustomEvent_EventState2;                           // 0x5188(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData67[0x7];                                       // 0x5189(0x0007) MISSED OFFSET
	TArray<class APrimalCharacter*>                    K2Node_CustomEvent_NewTeleportCharsList;                  // 0x5190(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_LastIndex_ReturnValue;                     // 0x51A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue5;                            // 0x51A4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue5;        // 0x51A5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData68[0x2];                                       // 0x51A6(0x0002) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x51A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue;                  // 0x51AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData69[0x3];                                       // 0x51AD(0x0003) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_Array_Get_Item;                                  // 0x51B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue6;                            // 0x51B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData70[0x3];                                       // 0x51B9(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x51BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Subtract_IntInt_ReturnValue;                     // 0x51C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData71[0x4];                                       // 0x51C4(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x51C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue2;                 // 0x51D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue7;                            // 0x51D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData72[0x2];                                       // 0x51D2(0x0002) MISSED OFFSET
	int                                                CallFunc_Array_Add_ReturnValue;                           // 0x51D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Abs_Int_ReturnValue;                             // 0x51D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x51DC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_IntInt_ReturnValue;                     // 0x51DD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EMassTeleportState>                    K2Node_CustomEvent_EventState;                            // 0x51DE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData73[0x1];                                       // 0x51DF(0x0001) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue3;                       // 0x51E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x51E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData74[0x3];                                       // 0x51E5(0x0003) MISSED OFFSET
	class APrimalCharacter*                            CallFunc_Array_Get_Item2;                                 // 0x51E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue8;                            // 0x51F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData75[0x3];                                       // 0x51F1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x51F4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x5200(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x5201(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x5202(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData76[0x1];                                       // 0x5203(0x0001) MISSED OFFSET
	struct FLinearColor                                K2Node_CustomEvent_color;                                 // 0x5204(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue4;                       // 0x5214(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CallFunc_Array_Get_Item3;                                 // 0x5218(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x5220(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue9;                            // 0x5221(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue10;                           // 0x5222(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData77[0x5];                                       // 0x5223(0x0005) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x5228(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x5230(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x5238(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData78[0x7];                                       // 0x5239(0x0007) MISSED OFFSET
	class AHUD*                                        CallFunc_GetHUD_ReturnValue;                              // 0x5240(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterHUD*                                 K2Node_DynamicCast_AsShooterHUD;                          // 0x5248(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x5250(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData79[0x7];                                       // 0x5251(0x0007) MISSED OFFSET
	class UPrimalUI*                                   CallFunc_BPShowUIScene_ReturnValue;                       // 0x5258(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UHexagon_Trade_UI_C*                         K2Node_DynamicCast_AsHexagon_Trade_UI_C;                  // 0x5260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x5268(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData80[0x3];                                       // 0x5269(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayCompanionMontage_ReturnValue;                // 0x526C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue;             // 0x5270(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x5278(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_Network_ReturnValue;                 // 0x5280(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData81[0x3];                                       // 0x5281(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue5;                       // 0x5284(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlayingCompanionReaction_ReturnValue;          // 0x5288(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue2;                     // 0x5289(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData82[0x2];                                       // 0x528A(0x0002) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue6;                       // 0x528C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CallFunc_Array_Get_Item4;                                 // 0x5290(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue3;                        // 0x5298(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue11;                           // 0x5299(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData83[0x2];                                       // 0x529A(0x0002) MISSED OFFSET
	int                                                Temp_int_Variable;                                        // 0x529C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue7;                       // 0x52A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_IntInt_ReturnValue;                    // 0x52A4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue3;                     // 0x52A5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData84[0x2];                                       // 0x52A6(0x0002) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue10;                        // 0x52A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x52AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData85[0x3];                                       // 0x52AD(0x0003) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x52B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Scan_Duration;                         // 0x52B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FCompanionReactionData                      K2Node_CustomEvent_Post_Scan_Reaction;                    // 0x52B8(0x0098) (Transient, DuplicateTransient)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x5350(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x5358(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData86[0x3];                                       // 0x5359(0x0003) MISSED OFFSET
	int                                                Temp_int_Variable2;                                       // 0x535C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter2;                   // 0x5360(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x5368(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData87[0x7];                                       // 0x5369(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_Array_Get_Item5;                                 // 0x5370(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue12;                           // 0x5378(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue13;                           // 0x5379(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData88[0x6];                                       // 0x537A(0x0006) MISSED OFFSET
	double                                             CallFunc_Conv_FloatToDouble_ReturnValue;                  // 0x5380(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue14;                           // 0x5388(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_IntInt_ReturnValue2;                   // 0x5389(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData89[0x2];                                       // 0x538A(0x0002) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue11;                        // 0x538C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x5390(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue;                    // 0x5391(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue2;                   // 0x5392(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData90[0x5];                                       // 0x5393(0x0005) MISSED OFFSET
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue;                  // 0x5398(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FBPNetExecParams                            K2Node_MakeStruct_BPNetExecParams;                        // 0x53A0(0x0040) (Transient, DuplicateTransient)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter3;                   // 0x53E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x53E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_is_dead2;                              // 0x53E9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue15;                           // 0x53EA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData91[0x5];                                       // 0x53EB(0x0005) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x53F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue2;            // 0x53F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_Network_ReturnValue2;                // 0x5400(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_is_dead;                               // 0x5401(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData92[0x6];                                       // 0x5402(0x0006) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue3;                        // 0x5408(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_Network_ReturnValue3;                // 0x5410(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x5411(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue16;                           // 0x5412(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue6;        // 0x5413(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x5414(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x5415(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue4;                  // 0x5416(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData93[0x1];                                       // 0x5417(0x0001) MISSED OFFSET
	class UShooterGameUserSettings*                    CallFunc_GetShooterGameUserSettings_ReturnValue;          // 0x5418(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UShooterGameUserSettings*                    CallFunc_GetShooterGameUserSettings_ReturnValue2;         // 0x5420(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue17;                           // 0x5428(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue18;                           // 0x5429(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData94[0x6];                                       // 0x542A(0x0006) MISSED OFFSET
	class FString                                      K2Node_CustomEvent_ItemName;                              // 0x5430(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               K2Node_SwitchString_CmpSuccess;                           // 0x5440(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue5;                  // 0x5441(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData95[0x6];                                       // 0x5442(0x0006) MISSED OFFSET
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter4;                   // 0x5448(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast7_CastSuccess;                          // 0x5450(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;// 0x5451(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData96[0x6];                                       // 0x5452(0x0006) MISSED OFFSET
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue2;                 // 0x5458(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController2;            // 0x5460(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast8_CastSuccess;                          // 0x5468(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData97[0x7];                                       // 0x5469(0x0007) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_CustomEvent_ridden_dino;                           // 0x5470(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FCompanionReactionData                      K2Node_CustomEvent_reaction;                              // 0x5478(0x0098) (Transient, DuplicateTransient)
	bool                                               CallFunc_IsValid_ReturnValue19;                           // 0x5510(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanPlayEnvironmentalCompanionReaction_ReturnValue;// 0x5511(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData98[0x6];                                       // 0x5512(0x0006) MISSED OFFSET
	class APrimalCharacter*                            K2Node_CustomEvent_DiedCharacter;                         // 0x5518(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue20;                           // 0x5520(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue7;        // 0x5521(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue6;                  // 0x5522(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData99[0x1];                                       // 0x5523(0x0001) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue8;                       // 0x5524(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue4;                        // 0x5528(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_Get_Item6;                                 // 0x5529(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData100[0x2];                                      // 0x552A(0x0002) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue9;                       // 0x552C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue4;                     // 0x5530(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData101[0x3];                                      // 0x5531(0x0003) MISSED OFFSET
	int                                                K2Node_CustomEvent_Store_Item_Index;                      // 0x5534(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_New_Index_Value;                       // 0x5538(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue3;                 // 0x5539(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue21;                           // 0x553A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData102[0x5];                                      // 0x553B(0x0005) MISSED OFFSET
	class UHexagon_Trade_UI_C*                         K2Node_DynamicCast_AsHexagon_Trade_UI_C2;                 // 0x5540(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast9_CastSuccess;                          // 0x5548(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue7;                  // 0x5549(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue4;                 // 0x554A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x554B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue2;                        // 0x554C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x5550(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Location;                              // 0x5554(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_Rotation;                              // 0x5560(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue8;                  // 0x556C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData103[0x3];                                      // 0x556D(0x0003) MISSED OFFSET
	class USceneComponent*                             CallFunc_K2_GetRootComponent_ReturnValue;                 // 0x5570(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class USceneComponent*>                     CallFunc_GetChildrenComponents_Children;                  // 0x5578(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue9;                  // 0x5588(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData104[0x3];                                      // 0x5589(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue10;                      // 0x558C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue5;                        // 0x5590(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData105[0x7];                                      // 0x5591(0x0007) MISSED OFFSET
	class USceneComponent*                             CallFunc_Array_Get_Item7;                                 // 0x5598(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_DynamicCast_AsPrimitiveComponent;                  // 0x55A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast10_CastSuccess;                         // 0x55A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue10;                 // 0x55A9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData106[0x2];                                      // 0x55AA(0x0002) MISSED OFFSET
	int                                                K2Node_CustomEvent_ExtraCharacterLevel;                   // 0x55AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue11;                 // 0x55B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData107[0x7];                                      // 0x55B1(0x0007) MISSED OFFSET
	class ABP_GEN1_Intro_VR_World_C*                   K2Node_DynamicCast_AsBP_GEN1_Intro_VR_World_C;            // 0x55B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast11_CastSuccess;                         // 0x55C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData108[0x7];                                      // 0x55C1(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue2;               // 0x55C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode;                // 0x55D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x55D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue12;                 // 0x55D2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue22;                           // 0x55D3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue8;        // 0x55D4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData109[0x3];                                      // 0x55D5(0x0003) MISSED OFFSET
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue2;                // 0x55D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ClassClass_ReturnValue;                 // 0x55DC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ClassClass_ReturnValue2;                // 0x55DD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ClassClass_ReturnValue3;                // 0x55DE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue13;                 // 0x55DF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue23;                           // 0x55E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ClassClass_ReturnValue4;                // 0x55E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData110[0x2];                                      // 0x55E2(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x55E4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue3;                // 0x55F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue4;                // 0x55F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetComponentLocation_ReturnValue;             // 0x55F8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x5604(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x5610(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue3;                // 0x561C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue;                // 0x5628(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue2;              // 0x5634(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue2;                             // 0x5640(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue14;                 // 0x564C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x564D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData111[0x2];                                      // 0x564E(0x0002) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue3;                        // 0x5650(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x5654(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x5658(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue3;                   // 0x565C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue24;                           // 0x565D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue9;        // 0x565E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x565F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlayingCompanionReaction_ReturnValue2;         // 0x5660(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlayingCompanionReaction_ReturnValue3;         // 0x5661(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x5662(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x5663(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum3_CmpSuccess;                            // 0x5664(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData112[0x3];                                      // 0x5665(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x5668(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x5678(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData113[0x4];                                      // 0x5684(0x0004) MISSED OFFSET
	class UGameInstance*                               CallFunc_GetGameInstance_ReturnValue;                     // 0x5688(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x5690(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData114[0x4];                                      // 0x569C(0x0004) MISSED OFFSET
	class UShooterGameInstance*                        K2Node_DynamicCast_AsShooterGameInstance;                 // 0x56A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast12_CastSuccess;                         // 0x56A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData115[0x7];                                      // 0x56A9(0x0007) MISSED OFFSET
	TArray<struct FLocalizedSoundCueEntry>             K2Node_CustomEvent_Localized2;                            // 0x56B0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               K2Node_CustomEvent_play_anim_textures2;                   // 0x56C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData116[0x7];                                      // 0x56C1(0x0007) MISSED OFFSET
	class FString                                      K2Node_CustomEvent_AssetPath2;                            // 0x56C8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UObject*                                     K2Node_CustomEvent_LoadedAsset2;                          // 0x56D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USoundWave*                                  K2Node_DynamicCast_AsSoundWave;                           // 0x56E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast13_CastSuccess;                         // 0x56E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData117[0x7];                                      // 0x56E9(0x0007) MISSED OFFSET
	class USoundCue*                                   K2Node_DynamicCast_AsSoundCue;                            // 0x56F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast14_CastSuccess;                         // 0x56F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData118[0x7];                                      // 0x56F9(0x0007) MISSED OFFSET
	struct FLocalizedSoundCueEntry                     CallFunc_GetLocaleSpecificAudio_OutLocalizedAudio;        // 0x5700(0x0020) (Transient, DuplicateTransient)
	bool                                               CallFunc_GetLocaleSpecificAudio_ReturnValue;              // 0x5720(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_StrStr_ReturnValue;                   // 0x5721(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData119[0x6];                                      // 0x5722(0x0006) MISSED OFFSET
	class FString                                      CallFunc_FindLocalizedVersionOfFilename_ReturnValue;      // 0x5728(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue;                       // 0x5738(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AShooterHUD*                                 CallFunc_GetMyPlayerHUD_ReturnValue;                      // 0x5748(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue25;                           // 0x5750(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData120[0x3];                                      // 0x5751(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate2;                    // 0x5754(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsValid_ReturnValue26;                           // 0x5764(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData121[0x3];                                      // 0x5765(0x0003) MISSED OFFSET
	class UShooterGameUserSettings*                    CallFunc_GetShooterGameUserSettings_ReturnValue3;         // 0x5768(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      CallFunc_Conv_IntToByte_ReturnValue;                      // 0x5770(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue27;                           // 0x5771(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_ByteByte_ReturnValue;               // 0x5772(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue10;       // 0x5773(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue11;                      // 0x5774(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CallFunc_Array_Get_Item8;                                 // 0x5778(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue6;                        // 0x5780(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue28;                           // 0x5781(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData122[0x2];                                      // 0x5782(0x0002) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue12;                      // 0x5784(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue13;                      // 0x5788(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue5;                     // 0x578C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue7;                        // 0x578D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData123[0x2];                                      // 0x578E(0x0002) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CallFunc_Array_Get_Item9;                                 // 0x5790(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue29;                           // 0x5798(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData124[0x3];                                      // 0x5799(0x0003) MISSED OFFSET
	float                                              CallFunc_Ease_ReturnValue;                                // 0x579C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue14;                      // 0x57A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue6;                     // 0x57A4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData125[0x3];                                      // 0x57A5(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue15;                      // 0x57A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue7;                     // 0x57AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData126[0x3];                                      // 0x57AD(0x0003) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue4;                        // 0x57B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ADayCycleManager*                            CallFunc_GetDayCycleManager_ReturnValue;                  // 0x57B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue30;                           // 0x57C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData127[0x3];                                      // 0x57C1(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue16;                      // 0x57C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Ease_ReturnValue2;                               // 0x57C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate3;                    // 0x57CC(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue17;                      // 0x57DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FCompanionReactionData                      CallFunc_Array_Get_Item10;                                // 0x57E0(0x0098) (Transient, DuplicateTransient)
	bool                                               CallFunc_Less_IntInt_ReturnValue8;                        // 0x5878(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData128[0x3];                                      // 0x5879(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate4;                    // 0x587C(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsValid_ReturnValue31;                           // 0x588C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue32;                           // 0x588D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue11;       // 0x588E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue33;                           // 0x588F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue18;                      // 0x5890(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData129[0x4];                                      // 0x5894(0x0004) MISSED OFFSET
	class UMaterialInterface*                          CallFunc_Array_Get_Item11;                                // 0x5898(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue9;                        // 0x58A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData130[0x7];                                      // 0x58A1(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CallFunc_CreateDynamicMaterialInstance_ReturnValue;       // 0x58A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue19;                      // 0x58B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Add_ReturnValue2;                          // 0x58B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue8;                     // 0x58B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData131[0x3];                                      // 0x58B9(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Find_ReturnValue;                          // 0x58BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_IntInt_ReturnValue;                 // 0x58C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue34;                           // 0x58C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue35;                           // 0x58C2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue36;                           // 0x58C3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue37;                           // 0x58C4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData132[0x3];                                      // 0x58C5(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetComponentRotation_ReturnValue;             // 0x58C8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x58D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x58D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x58DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x58E0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_SetActorRotation_ReturnValue;                    // 0x58EC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue38;                           // 0x58ED(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData133[0x2];                                      // 0x58EE(0x0002) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue;                             // 0x58F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x58F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue39;                           // 0x5900(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue40;                           // 0x5901(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData134[0x6];                                      // 0x5902(0x0006) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CallFunc_GetBuffPostprocessMaterial_ReturnValue;          // 0x5908(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CallFunc_GetBuffPostprocessMaterial_ReturnValue2;         // 0x5910(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue41;                           // 0x5918(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue42;                           // 0x5919(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData135[0x2];                                      // 0x591A(0x0002) MISSED OFFSET
	int                                                CallFunc_Array_AddUnique_ReturnValue;                     // 0x591C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_AddUnique_ReturnValue2;                    // 0x5920(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue43;                           // 0x5924(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue12;       // 0x5925(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue44;                           // 0x5926(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue13;       // 0x5927(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UGameInstance*                               CallFunc_GetGameInstance_ReturnValue2;                    // 0x5928(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UShooterGameInstance*                        K2Node_DynamicCast_AsShooterGameInstance2;                // 0x5930(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast15_CastSuccess;                         // 0x5938(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData136[0x7];                                      // 0x5939(0x0007) MISSED OFFSET
	class FString                                      K2Node_CustomEvent_AssetPath;                             // 0x5940(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UObject*                                     K2Node_CustomEvent_LoadedAsset;                           // 0x5950(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_GetTwoLetterISOLanguageName_ReturnValue;         // 0x5958(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_NotEqual_StriStri_ReturnValue;                   // 0x5968(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData137[0x7];                                      // 0x5969(0x0007) MISSED OFFSET
	class FString                                      CallFunc_GetTwoLetterISOLanguageName_ReturnValue2;        // 0x5970(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_NotEqual_StriStri_ReturnValue2;                  // 0x5980(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData138[0x7];                                      // 0x5981(0x0007) MISSED OFFSET
	TArray<struct FLocalizedSoundWaveAnimTexturePairArrays> K2Node_CustomEvent_Localized;                             // 0x5988(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               K2Node_CustomEvent_Play_Anim_Textures;                    // 0x5998(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData139[0x7];                                      // 0x5999(0x0007) MISSED OFFSET
	class UGameInstance*                               CallFunc_GetGameInstance_ReturnValue3;                    // 0x59A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UShooterGameInstance*                        K2Node_DynamicCast_AsShooterGameInstance3;                // 0x59A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast16_CastSuccess;                         // 0x59B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData140[0x7];                                      // 0x59B1(0x0007) MISSED OFFSET
	struct FLocalizedSoundWaveAnimTexturePairArrays    CallFunc_GetLocaleSpecificSoundWaveAnimTexturePairArrays_OutLocalizedAudio;// 0x59B8(0x0020) (Transient, DuplicateTransient)
	bool                                               CallFunc_GetLocaleSpecificSoundWaveAnimTexturePairArrays_FoundLocalizedSoundWavesForThisLanguage;// 0x59D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetLocaleSpecificSoundWaveAnimTexturePairArrays_ReturnValue;// 0x59D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData141[0x2];                                      // 0x59DA(0x0002) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue20;                      // 0x59DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Subtract_IntInt_ReturnValue2;                    // 0x59E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData142[0x4];                                      // 0x59E4(0x0004) MISSED OFFSET
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue;                   // 0x59E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_RandomIntegerInRange_ReturnValue;                // 0x59F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue9;                     // 0x59F4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData143[0x3];                                      // 0x59F5(0x0003) MISSED OFFSET
	class USoundWave*                                  K2Node_DynamicCast_AsSoundWave2;                          // 0x59F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast17_CastSuccess;                         // 0x5A00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData144[0x7];                                      // 0x5A01(0x0007) MISSED OFFSET
	class USoundCue*                                   K2Node_DynamicCast_AsSoundCue2;                           // 0x5A08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast18_CastSuccess;                         // 0x5A10(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData145[0x7];                                      // 0x5A11(0x0007) MISSED OFFSET
	class USoundCue*                                   K2Node_DynamicCast_AsSoundCue3;                           // 0x5A18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast19_CastSuccess;                         // 0x5A20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue5;                 // 0x5A21(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_StrStr_ReturnValue;                     // 0x5A22(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData146[0x5];                                      // 0x5A23(0x0005) MISSED OFFSET
	struct FSoundWaveAnimTexturePairs                  CallFunc_Array_Get_Item12;                                // 0x5A28(0x0020) (Transient, DuplicateTransient)
	class FString                                      CallFunc_FindLocalizedVersionOfFilename_ReturnValue2;     // 0x5A48(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue5;                // 0x5A58(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData147[0x4];                                      // 0x5A5C(0x0004) MISSED OFFSET
	class FString                                      CallFunc_find_associated_anim_texture_from_localized_sound_wave_pairs_anim_texture_path;// 0x5A60(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue6;                 // 0x5A70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_StrStr_ReturnValue2;                    // 0x5A71(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData148[0x6];                                      // 0x5A72(0x0006) MISSED OFFSET
	class UGameInstance*                               CallFunc_GetGameInstance_ReturnValue4;                    // 0x5A78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UShooterGameInstance*                        K2Node_DynamicCast_AsShooterGameInstance4;                // 0x5A80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast20_CastSuccess;                         // 0x5A88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData149[0x3];                                      // 0x5A89(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Add_NewItem_RefProperty;                   // 0x5A8C(0x0004) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Companion_HLNA.Buff_Companion_HLNA_C");
		return ptr;
	}


	void Pre_Teleport_Dismount();
	void unmount_teleporting_players(TArray<class APrimalCharacter*>* teleporting_players);
	void Notify_Players_That_They_Cant_Teleport_Unconsious_or_Dead_Dinos();
	void Notify_Players_That_They_Cant_Teleport_Unconsious_Or_Dead_Players();
	void Prevent_Glitch_Use_Sphere_Collision();
	void Notify_Players_That_They_Exceed_Final_Boss_player_Count();
	void notify_players_that_they_exceed_final_boss_tame_count();
	void find_associated_anim_texture_from_localized_sound_wave_pairs(const class FString& sound_wave_path, TArray<struct FLocalizedSoundWaveAnimTexturePairArrays>* Array, class FString* anim_texture_path);
	void Recently_Released_ADS();
	void begin_scan_random_location_orbit();
	void is_fixing_glitch(bool* is_fixing);
	void Check_if_You_Can_Play_Post_Intro_HLNA_Target_Alert_Message();
	void Show_Post_Intro_Mission_Alert_Message();
	void Show_Post_Intro_HLNA_Target_Alert_Message();
	void STATIC_Reaction_Equals_Reaction(const struct FCompanionReactionData& reaction_1, const struct FCompanionReactionData& reaction_2, bool* is_equal);
	void STATIC_set_up_aysnc_loaded_anim_texture(class UObject* InputPin, bool Eye_Only);
	void is_player_tpv_and_hlna_is_in_the_way(const struct FVector& loc_override, bool* is_in_the_way);
	void force_play_mission_alert(const class FString& Title, const class FString& Label, TEnumAsByte<EMissionAlertType> alert_type, float display_time, class UTexture2D* Icon);
	void Delay_to_Play_Hlna_Subtitles_Move_Out_Anim();
	void create_dynamic_materials();
	void Clear_Async_Loaded_Audio();
	void Is_Player_On_Mission(class AShooterCharacter* Player, bool* ret_val, class AMissionType** active_mission);
	void is_player_on_mission_and_cant_teleport(class AShooterCharacter* InputPin, bool* ret_val);
	void Notify_Player_That_They_Cannot_Teleport_Players_On_Mission();
	void Colliding_with_Something();
	void BPNotifyOtherBuffDeactivated(class APrimalBuff** OtherBuff);
	bool IsCompanionAbleToMonologue();
	void Awaiting_Set_Of_Initial_Spawn_Intro_Anim_Timer();
	void STATIC_Notify_Player_That_They_Cannot_Teleport_Large_Dinos_To_Final_Boss();
	void STATIC_Notify_Player_That_They_Cannot_Teleport_Players_On_Seated_Structures();
	void Temp_Keep_Movement_Volume_Up();
	void Set_Intro_sphere_Mask_Amount(float InputPin);
	void Move_Cuz_In_The_Way();
	void should_hlna_move_away_from_the_camera(bool* Return);
	void Is_Probably_Firing();
	void BPHandleOnStopFire(bool* bFromGamepad);
	void Restrict_Getting_In_Front_Of_Camera_During_Firing_Or_Ads();
	void StopCompanionEvent();
	void FocusOnRemoteTarget();
	void play_focused_scan_sfx_and_vfx();
	void Focused_Selected_Remote_Target_Timeout();
	void play_hexagon_sfx();
	void OnSpawnHexagons(float* OverrideCollectSFXVolume, bool* VFXImmediatelyAttracts);
	void OnMadeHexagonPurchase();
	void HLNa_Mass_Teleport_Trigger_to_VR_Boss_Battle_Flow_Test();
	void find_or_get_mission_dispatcher(class AMissionDispatcher** AsMissionDispatcher);
	void Remove_Cosmetic_HLNA();
	void STATIC_RefreshCompanionColorization();
	void STATIC_start_boss_battle(class UClass* InputPin);
	void start_mission_and_set_reverse_teleports();
	void STATIC_Set_Return_Teleport_Locations();
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void HLNa_Mass_Teleport_Trigger_To_VR_Boss_Battle_Hard();
	void HLNa_Mass_Teleport_Trigger_To_VR_Boss_Battle_Med();
	void HLNa_Mass_Teleport_Trigger_To_VR_Boss_Battle_Easy();
	void Sync_Mission_Complete_Status();
	void Restrict_Sync_Mission_Complete_Status();
	void format_VR_boss_battle_teleport_multiuse_options(int Required_Missions, const class FString& Mission_Title, bool Requires_All_Story_Glitches, class FString* Appended_String, bool* Disabled);
	void Restricted_Timed_Hexagon_Collection();
	void restricted_time_since_last_played_movement_sounds();
	void Play_movement_sound(float Distance);
	void Randomly_pick_orbit_location();
	void Notify_Player_That_They_Cannot_Teleport_Fish();
	void notify_player_that_they_cannot_teleport_rafts();
	void Play_HLNA_Respawn_Anim();
	void play_spawn_anim(class UClass* anActorClass, class UAnimMontage* AnimToPlay);
	void Simple_Play_Localized_Audio_cue(bool play_anim_textures, struct FHLNALocalizedAudioEntry* HLNALocalizedAudioEntry);
	void BPAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** meshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void set_all_components_custom_depth_stencil_value(int stencil_Value, class AActor* Actor);
	bool CanPlayEnvironmentalCompanionReaction(struct FCompanionReactionData* CanPlayReactionData);
	void Server_Update_Purchasable_Items();
	void Restricted_Interval_For_Checking_Updated_Hex_Store_Purchasable_Items();
	void Play_HLNA_Initial_Spawn_Anim();
	void Companion_is_in_first_person_in_a_seat(bool* Result);
	void Finish_Intro_Anim();
	void NotifyHasTamedDino(class UClass** DinoClass);
	void Keep_Eye_Hidden_For_Emotes();
	void BuffTickClient(float* DeltaTime);
	void Reset_Delay_Between_Environmental_Reactions();
	void Check_Recieve_Damage_For_Reactions();
	void Reset_Recent_Damage_Recieved();
	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void Play_World_Reaction(struct FCompanionReactionData* WithReactionData);
	void Interval_to_check_for_HLNA_world_reactions();
	void Restrict_Random_World_Reactions();
	void Check_Current_Status_of_various_things_to_react_to();
	void STATIC_BPInventoryItemUsed(class UObject** InventoryItemObject);
	void BPDeactivated(class AActor** ForInstigator);
	void BPNotifyOtherBuffActivated(class APrimalBuff** OtherBuff);
	void BPNotifyExperienceGained(float* ActualExpGained, float* ExpectedExpGain, TEnumAsByte<EXPType>* ExpTypeGained);
	void BPInstigatorDied();
	void BPHandleOnStartFire(bool* bFromGamepad);
	void PlayJustAboutToTeleportReaction();
	void FinishedScanDispatcher(class AShooterCharacter* ShooterChar);
	void FinishedScan();
	void Play_Scan_Reactions(const struct FCompanionReactionData& Post_Scan_Reaction, float Override_Scan_Duration, float* Total_Reactions_Duration);
	void Clean_Up_Teleport_VFX();
	void On_Mass_Teleport_Event_VFX(TEnumAsByte<EMassTeleportState> Event);
	void STATIC_Find_Best_Teleport_Location(int selected_coordinate_direction_index, int region_index, class APlayerController* player_controller, bool only_test_if_theres_any_available, bool* Has_Found_Spot);
	void NotifyDamage(float* DamageAmount, class UClass** DamageClass, class AController** EventInstigator, class AActor** TheDamageCauser);
	void Set_Best_Teleport_Spot_From_Sorted_Start_Points(bool ignore_turrets, bool ignore_players, bool ignore_hostile_dinos, TArray<class AActor*>* Array, bool* able_to_set_spot);
	void Get_Biome_Names(TArray<class FString>* OverridePlayerSpawnRegions);
	struct FVector GetCompanionWorldLocation();
	void GetCurrentOrbitRadius(float* Radius);
	void BPOnOwnerMassTeleportEvent(TEnumAsByte<EMassTeleportState>* EventState, class APrimalCharacter** TeleportInitiatedByChar);
	void STATIC_OnMassTeleportEventReceived(TEnumAsByte<EMassTeleportState> EventState);
	void HLNaMassTeleport_Cancel();
	void CleanUpMassTeleport();
	void Tick_UpdateCompanionState(float* DeltaTime);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	void Tick_SearchForMassTeleportChars(bool bIsFinalCheck);
	void BuffTickServer(float* DeltaTime);
	void HLNaMassTeleport_Trigger();
	void HLNaMassTeleport_Start(int region_index, bool Teleport_To_VR_Boss_Battle_easy, bool Teleport_To_VR_Boss_Battle_med, bool Teleport_To_VR_Boss_Battle_hard, bool Teleport_To_VR_Boss_Battle_FLOW_TEST);
	void STATIC_GetTeleportationDestinations(TArray<struct FTeleportDestination>* Destinations);
	void GetLookAtPlayerRotation(struct FRotator* Rotation);
	void STATIC_GetAnimMoveVelocityAxes(struct FVector* VelocityAxes);
	void ShouldBeCompact(bool* Result);
	void Determine_Best_Teleport_Spot();
	void OnCompanionEventStarted(struct FCompanionEventData* StartingEventData);
	bool CanStartCompanionEvent(class AActor** EventActor, struct FCompanionEventData* WithEventData);
	void OnCompanionReactionPlayed(int* UniqueID, struct FCompanionReactionData* PlayedReactionData);
	void SetCompactState(bool bNewCompactState);
	void OnCompanionReactionStopped(int* UniqueID, struct FCompanionReactionData* StoppedReactionData);
	bool CanPlayCompanionReaction(struct FCompanionReactionData* CanPlayReactionData);
	void Tick_UpdateHLNaSounds(float DeltaTime);
	void Tick_CompactMode();
	void STATIC_IsCurrentEventMonalogue(bool* Result);
	void CalculateFakeVelocityLagOffset(float DeltaTime, struct FVector* VelocityLag);
	void CalculateHLNaHeightOffset(float DeltaTime, struct FVector* HeightOffset_Base, struct FVector* HeightOffset_WithBob, struct FVector* BobOffset);
	void IsAttachedToCamera(bool* bResult);
	void IsAttachedToPlayer(bool* bResult);
	void Tick_CompanionEvents(float* DeltaTime);
	bool IsCompanionReadyToMonologue();
	void ConvertTargetRelOffsetToWorld(struct FVector* WorldLocation);
	void IsAttachedToCamera_Pure(bool* bResult);
	void UpdateHLNaTargetRelLocFPV(const struct FVector& WithWorldLocation, float DeltaTime);
	void CalculateHLNaOrbitDir(float DeltaTime, struct FVector* OrbitDir);
	void GetScreenPercentageWorldLocation(const struct FVector2D& Percentage, float ProjectionDist, struct FVector* WorldLocation);
	void STATIC_TickUpdateHLNaEventMovement(float DeltaTime);
	void CalculateHLNaTargetWorldRotation(struct FRotator* TargetWorldRotation);
	void CalculateHLNaTargetWorldLocation(float DeltaTime, struct FVector* TargetWorldLocation);
	void STATIC_OnPlayerDeath(class APrimalCharacter** DiedCharacter);
	void Tick_UpdateCompanionTransform(float* DeltaTime);
	void STATIC_PlayParallelEmoteMontage(class UAnimMontage** PlayerEmote, bool* bSuccess);
	void OnPlayerPlayAnimation(class UAnimMontage** PlayedAnim, float* AnimDuration, struct FName* StartSectionName);
	void OnCompanionStateChanged();
	void SoftSetHLNaLocationRelative(const struct FVector& NewLocation);
	void GetMeshRotationInterpSpeed(float* Speed);
	void SoftSetHLNaRotation(const struct FRotator& NewRotation);
	void GetPlayerVelocity(struct FVector* Velocity);
	void IsAttachedToPlayer_Pure(bool* bResult);
	void PretendWeAreInWorldSpace();
	void OnFoundPoI(class AActor** FoundPointActor, struct FPointOfInterestData_ForCompanion* FoundPointData);
	bool IsPlayerADS();
	void STATIC_GetMeshLocationInterpSpeed(float* Speed);
	void GetPlayerOrbitOrigin(struct FVector* Origin);
	void InterpHLNaRootToOrigin(float DeltaTime);
	void SoftSetHLNaLocation(const struct FVector& NewLocation);
	void UpdateHLNaAttachment();
	bool IsPlayerLookingAtCompanion();
	void OnSpawnedForPlayer();
	void STATIC_BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void Timeline_5__FinishedFunc();
	void Timeline_5__UpdateFunc();
	void Timeline_6__FinishedFunc();
	void Timeline_6__UpdateFunc();
	void Timeline_7__FinishedFunc();
	void Timeline_7__UpdateFunc();
	void delay_before_intro_shatter__FinishedFunc();
	void delay_before_intro_shatter__UpdateFunc();
	void fixed_orientation_timeline__FinishedFunc();
	void fixed_orientation_timeline__UpdateFunc();
	void ReceiveBeginPlay();
	void Client_OnMassTeleportStarted(const struct FVector& WithPlayerLocation);
	void Client_OnMassTeleportEnded();
	void Client_OnMassTeleportEventReceived(TEnumAsByte<EMassTeleportState> EventState);
	void Multi_UpdateTeleportingChars(TArray<class APrimalCharacter*>* NewTeleportCharsList);
	void update_teleporting_characters_vfx();
	void Multi_OnMassTeleportEvent(TEnumAsByte<EMassTeleportState> EventState);
	void Fresnel_Flash(const struct FLinearColor& Color);
	void Show_Hexagon_Conversion_Shop_on_Client();
	void post_teleport_reaction();
	void play_hexagon_absorb_anim();
	void Play_Scanning_SFX_and_VFX();
	void Play_Post_Scan_Reaction(float Scan_Duration, const struct FCompanionReactionData& Post_Scan_Reaction);
	void Delay_and_React_to_Shot_Event();
	void Server_React_To_Shot_Event();
	void try_play_friendly_fire_reaction(bool is_dead);
	void try_play_attacked_opponent_reaction(bool is_dead);
	void try_play_creature_almost_dead();
	void React_To_Equipping_Low_Durability_Weapon();
	void Client_ReactToCraftedItem(const class FString& ItemName);
	void Bind_Dino_Death_Reaction(class APrimalDinoCharacter* ridden_dino);
	void Try_HLNA_Environmental_Reaction(const struct FCompanionReactionData& reaction);
	void Ridden_Dino_Died_Reaction(class APrimalCharacter* DiedCharacter);
	void Update_Purchasable_Item_State_and_update_store_on_client(int Store_Item_Index, bool New_Index_Value);
	void Delay_and_Disable_Item_Visibility_In_Store();
	void intro_teleport_materials();
	void force_set_hlna_location_and_rotation(const struct FVector& Location, const struct FRotator& Rotation);
	void fade_away_intro_PP_mask();
	void PrimalCharacterNotifyLevelUp(int ExtraCharacterLevel);
	void React_To_Player_Level_Up();
	void delay_and_scan();
	void Tell_Client_To_React_With_Hlna_After_Respawn();
	void delay_start_VR_mission_easy();
	void delay_start_VR_mission_med();
	void delay_start_VR_mission_hard();
	void fade_in_audio_comp();
	void fade_out_audio_comp();
	void delay_start_vr_mission_flow_test();
	void move_hlna_to_focused_target_for_tooltip();
	void start_looping_scans();
	void stop_looping_scans();
	void keep_looping_scans();
	void Simple_Load_Async_Sound_Cue(bool play_anim_textures, TArray<struct FLocalizedSoundCueEntry>* Localized);
	void AsyncAssetLoadedDelegate__ExplorerNoteAudio(const class FString& AssetPath, class UObject* LoadedAsset);
	void play_intro_reaction();
	void ignore_respawn_reaction();
	void prematurely_cancel_intro_stuff();
	void finished_loading_async_loaded_anim_texture(const class FString& AssetPath, class UObject* LoadedAsset);
	void Simple_Load_Async_Sound_Wave(bool play_anim_textures, TArray<struct FLocalizedSoundWaveAnimTexturePairArrays>* Localized);
	void ResetHexTimer();
	void ExecuteUbergraph_Buff_Companion_HLNA(int EntryPoint);
	void Finished_Scan_Dispatcher__DelegateSignature(class AShooterCharacter* ShooterChar);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
