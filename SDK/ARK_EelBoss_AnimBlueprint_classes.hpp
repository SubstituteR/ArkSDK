#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EelBoss_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass EelBoss_AnimBlueprint.EelBoss_AnimBlueprint_C
// 0x1028 (0x1368 - 0x0340)
class UEelBoss_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_94BCFA184BE5A3EFDFAAFF9FC5442338;// 0x0340(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_38042E1942FC8262618EFE9421944C4F;// 0x0370(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6729F3D94583456DD4C14E94D5D7D626;// 0x03D0(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_DDF2192040E11D255B43259380E446A0;// 0x0400(0x0028)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0428(0x0008) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F7A9160845B8363DC7329494E0194635;// 0x0430(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_FF532E594AF00B671B800D953BF6265C;// 0x04E0(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_397EC8984CBAFE4CC2683297FF3B6408;      // 0x0508(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_20B2B432486B844FD6B8F8AE10A6B53F;      // 0x0540(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_17D4D7A1429A4EE360746BA920A1D6B1;      // 0x0578(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D3D8A4BB474DD2DC256AC5951978BB5D;// 0x05B0(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1110C5DF4032604FD4FD109CE488A82A;// 0x0610(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0334CA154ED5952C39C4D6995B730537;// 0x0650(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6715809B4DF3B1CB60CC3A8C9AE3EB81;// 0x0678(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C30F7C344327E4406C1A5FB6A846D117;// 0x06A0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_Root_2F31C9874F403671FEE0E8AB307A617B;      // 0x0700(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_401C0FFC420D1B50313EB4BA96ED8319;// 0x0728(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D4334A4547517FF33D3CD3A80A92DA55;// 0x0788(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F4BBB58C43B9AD5D099329A7696163CC;// 0x07B8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_ED8F58CA4D8A0D61B51360B3DBED9D0B;// 0x0818(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1F39FE4941171A7981EE0AB46A85BD80;// 0x0878(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D87D22E546188617A862B394A250183D;// 0x08A8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C994BBDF4E8EA206ED47849B3CBC2936;// 0x08D8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7DD92D4E43A920F9C720CB81028C84E0;// 0x0938(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_136C7F4D4DC947465FE36CB362212542;// 0x0968(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2CCDF01E478C61663DE34B83DA2B5F95;// 0x09C8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B5E35ED54DEA414F4E6127B13659FF85;// 0x09F8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5DB56DD941B7D85E879B31849DB7FB95;      // 0x0A58(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DFFAFF7F4B895BE428AEA58618D7CBAD;      // 0x0A90(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9174F87B4DFEE4559EC934AD7C0E687E;      // 0x0AC8(0x0038)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_2C3DCC16436C284BCA82D2976BAEDE5B;// 0x0B00(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_951BC2F5458BDBEA65877C918CB84BEF;// 0x0B50(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9DB1CA3F4F5A038E0883259E4B724B49;// 0x0B80(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0E79304C457247D9B6F4C99CF7F65A70;// 0x0BB0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F0EB709F4D77629F21D2AAA66CDAEEFC;// 0x0C10(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D15955F94E01FCE3BF1285906C7A4BF1;// 0x0C70(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_ED4A206C48268B1B398366BEAA368D67;// 0x0CA0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E380EAC04F83208E19ED8BB208A2AF6F;// 0x0D00(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1E61AEA34EF8D1B08A81B7A0C86B0E58;// 0x0D30(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7A3E4BEC4023DF1F778D5B85E22C48F2;// 0x0D90(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4F8BC4A94B6DEDB400C29B9101C8D59A;// 0x0DF0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_54215F7649992E000C9ECDA08698F3BE;// 0x0E20(0x0030)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_F1A66C5F4038853D2DE159AA4C9D818B;// 0x0E50(0x00F8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2868B8D943A2C262DE5A388B1481DB95;// 0x0F48(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7CB21ECD4DF8B30763F154B82E66097F;// 0x0FA8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_696F50B44A56307F4AAC589D2CC93D05;// 0x0FD8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F73B41D34AF00CCFDFAEE69EAFC40B20;// 0x1008(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D173C27147BFC9CD4BF170B31B203E6E;// 0x1038(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_720C6A3C4EDD7DB09FCAB2BFF8B1D3F6;// 0x1098(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F073E9E84E115E470A31FA939AD2C87F;// 0x10F8(0x0030)
	bool                                               bIsMoving;                                                // 0x1128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1129(0x0003) MISSED OFFSET
	struct FRotator                                    RootRotationOffset;                                       // 0x112C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimPitch;                                                 // 0x1138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimYaw;                                                   // 0x113C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RootLocationOffset;                                       // 0x1140(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAimOffset;                                            // 0x114C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x114D(0x0003) MISSED OFFSET
	float                                              MovementAnimRate;                                         // 0x1150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFlying;                                                // 0x1154(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0xB];                                       // 0x1155(0x000B) MISSED OFFSET
	struct UObject_FTransform                          RootOffsetTransform;                                      // 0x1160(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumMovementSpeed;                                     // 0x1190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingAnimPlayRate;                                      // 0x1194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendInTime;                                       // 0x1198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendOutTime;                                      // 0x119C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendInTime;                                        // 0x11A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendOutTime;                                       // 0x11A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseFalling;                                              // 0x11A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFalling;                                               // 0x11A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x11AA(0x0002) MISSED OFFSET
	float                                              MinimumMovementSpeedFlying;                               // 0x11AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTurning;                                              // 0x11B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTurning;                                               // 0x11B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTurningRight;                                            // 0x11B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x11B3(0x0001) MISSED OFFSET
	float                                              MinTurnRateForTurnAnimation;                              // 0x11B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningEnabledBlendTime;                                  // 0x11B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDisabledBlendTime;                                 // 0x11BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDirectionBlendTime;                                // 0x11C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingMoveBlendIn;                                        // 0x11C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingMoveBlendOut;                                       // 0x11C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementAnimRatePower;                                    // 0x11CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSleepingAnim;                                         // 0x11D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSleeping;                                              // 0x11D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkipAnimGraph;                                           // 0x11D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseFlyingOffset;                                         // 0x11D3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FlyingOffset;                                             // 0x11D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentFlyingOffset;                                      // 0x11E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LandedOffset;                                             // 0x11EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkBlend;                                               // 0x11F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseBlinking;                                             // 0x11FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsMounted;                                               // 0x11FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseMounted;                                              // 0x11FE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x11FF(0x0001) MISSED OFFSET
	float                                              AimOffsetYawScale;                                        // 0x1200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetPitchScale;                                      // 0x1204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRunning;                                               // 0x1208(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRunning;                                              // 0x1209(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsHiding;                                                // 0x120A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayDeathIdle;                                           // 0x120B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x120C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x1210(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x1214(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue;                     // 0x1218(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x1220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x1228(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x1229(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x122A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x122B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x122C(0x0004) MISSED OFFSET
	class AEelBoss_Character_BP_C*                     K2Node_DynamicCast_AsEelBoss_Character_BP_C;              // 0x1230(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x1238(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x1239(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x123A(0x0002) MISSED OFFSET
	float                                              CallFunc_Lerp_ReturnValue;                                // 0x123C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x1240(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMeshGameplayRelevant_ReturnValue;              // 0x1241(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x1242(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0xD];                                       // 0x1243(0x000D) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetAimOffsetsTransform_RootRotOffsetTransform;   // 0x1250(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAimOffsetsTransform_TheRootYawSpeed;          // 0x1280(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetAimOffsetsTransform_RootLocOffset;            // 0x1284(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetAimOffsetsTransform_ReturnValue;              // 0x1290(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x129C(0x0004) MISSED OFFSET
	class UPawnMovementComponent*                      CallFunc_GetMovementComponent_ReturnValue;                // 0x12A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x12A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x12AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x12B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x12B4(0x0004) MISSED OFFSET
	class UCharacterMovementComponent*                 K2Node_DynamicCast_AsCharacterMovementComponent;          // 0x12B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x12C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x12C1(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x12C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x12C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x12C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0x12CA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x12CB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x12CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x12D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x12D1(0x0003) MISSED OFFSET
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x12D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetDefaultMovementSpeed_ReturnValue;             // 0x12D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_Conv_VectorToVector2D_ReturnValue;               // 0x12DC(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x12E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize2D_ReturnValue;                             // 0x12E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x12EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Select_ReturnValue;                                // 0x12F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x12F4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x12F5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x12F6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x1];                                       // 0x12F7(0x0001) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue3;                  // 0x12F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x12FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue5;                 // 0x12FD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2];                                       // 0x12FE(0x0002) MISSED OFFSET
	float                                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;         // 0x1300(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x1304(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x1305(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x1306(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x1];                                       // 0x1307(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x1308(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue2;                   // 0x1314(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x1320(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_VInterpTo_ReturnValue;                           // 0x1324(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_VInterpTo_ReturnValue2;                          // 0x1330(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x133C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x133D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x133E(0x0002) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x1340(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x1344(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x1345(0x0003) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue2;               // 0x1348(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x134C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x1350(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x1354(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue5;                // 0x1358(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x135C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue6;                // 0x1360(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue3;                     // 0x1364(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass EelBoss_AnimBlueprint.EelBoss_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_EelBoss_AnimBlueprint_AnimGraphNode_BlendListByBool_5478();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_EelBoss_AnimBlueprint_AnimGraphNode_ModifyBone_888();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_EelBoss_AnimBlueprint_AnimGraphNode_BlendListByBool_5477();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_EelBoss_AnimBlueprint_AnimGraphNode_BlendListByBool_5476();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_EelBoss_AnimBlueprint_AnimGraphNode_BlendListByBool_5475();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_EelBoss_AnimBlueprint_AnimGraphNode_BlendListByBool_5474();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_EelBoss_AnimBlueprint_AnimGraphNode_BlendListByBool_5473();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_EelBoss_AnimBlueprint_AnimGraphNode_BlendListByBool_5472();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_EelBoss_AnimBlueprint_AnimGraphNode_SequencePlayer_6762();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_EelBoss_AnimBlueprint_AnimGraphNode_BlendListByBool_5471();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_EelBoss_AnimBlueprint_AnimGraphNode_BlendListByBool_5470();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_EelBoss_AnimBlueprint_AnimGraphNode_ApplyAdditive_474();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_EelBoss_AnimBlueprint_AnimGraphNode_BlendListByBool_5469();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_EelBoss_AnimBlueprint_AnimGraphNode_BlendListByBool_5468();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_EelBoss_AnimBlueprint_AnimGraphNode_BlendListByBool_5467();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_EelBoss_AnimBlueprint_AnimGraphNode_BlendListByBool_5466();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_EelBoss_AnimBlueprint_AnimGraphNode_BlendListByBool_5465();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_EelBoss_AnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_324();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_EelBoss_AnimBlueprint_AnimGraphNode_BlendListByBool_5464();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_EelBoss_AnimBlueprint_AnimGraphNode_BlendListByBool_5463();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_EelBoss_AnimBlueprint_AnimGraphNode_BlendListByBool_5462();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_EelBoss_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
