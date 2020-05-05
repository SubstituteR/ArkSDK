#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Gen_AreaBuff_Lunar_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C
// 0x0208 (0x0D8A - 0x0B82)
class AGen_AreaBuff_Lunar_C : public AGen_AreaBuff_Base_C
{
public:
	bool                                               bInShadow;                                                // 0x0B82(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0B83(0x0005) MISSED OFFSET
	TArray<class UClass*>                              BuffsToPreventInShadow;                                   // 0x0B88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              OldAirControl;                                            // 0x0B98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastFallVelocity;                                         // 0x0B9C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWasFalling;                                              // 0x0BA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0BA9(0x0003) MISSED OFFSET
	float                                              PitchInput;                                               // 0x0BAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              YawInput;                                                 // 0x0BB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0BB4(0x0004) MISSED OFFSET
	class UCharacterMovementComponent*                 InstigatorMoveComponent;                                  // 0x0BB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    DefaultRotationRate;                                      // 0x0BC0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RollInput;                                                // 0x0BCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultRollScale;                                         // 0x0BD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilImpulse;                                            // 0x0BD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaximumPitchRollAngle;                                    // 0x0BD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationCorrectionRate;                                   // 0x0BDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraShakeScalar;                                        // 0x0BE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Gravity_Scale;                                            // 0x0BE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TekSuitThrust;                                            // 0x0BE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TekSuitEquipped;                                          // 0x0BE9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0BEA(0x0002) MISSED OFFSET
	float                                              FallDamageSpeedThreshold;                                 // 0x0BEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MovementInput;                                            // 0x0BF0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BounceTimer;                                              // 0x0BFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinBounceInterval;                                        // 0x0C00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxBounceInterval;                                        // 0x0C04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IgnoreGravityDisorientation;                              // 0x0C08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WasFlying;                                                // 0x0C09(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0C0A(0x0002) MISSED OFFSET
	float                                              MaximumPitchRollAngle_Dino;                               // 0x0C0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FStatusValueModifierDescription             AlternateBuffDescription;                                 // 0x0C10(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MaxRunSpeed;                                              // 0x0C60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWasFalling_Server;                                       // 0x0C64(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0C65(0x0003) MISSED OFFSET
	float                                              AnimRateInterpTime;                                       // 0x0C68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultMeshOffset;                                        // 0x0C6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RightFootDown;                                            // 0x0C70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LeftFootDown;                                             // 0x0C71(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x0C72(0x0006) MISSED OFFSET
	double                                             LastFootStep;                                             // 0x0C78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeshBounceHeight;                                         // 0x0C80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeshBounceSpeed;                                          // 0x0C84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimRateMin;                                              // 0x0C88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0C8C(0x0004) MISSED OFFSET
	class UClass*                                      BuffToAddInSunlight;                                      // 0x0C90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimRateInterpTime_Run;                                   // 0x0C98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimRateMin_Run;                                          // 0x0C9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeshBounceHeight_Run;                                     // 0x0CA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeshBounceSpeed_Run;                                      // 0x0CA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingTurnInertia;                                        // 0x0CA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PitchCorrection;                                          // 0x0CAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RollCorrection;                                           // 0x0CB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TerminalVelocity;                                         // 0x0CB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClientAssumedShadow;                                      // 0x0CB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0CB9(0x0003) MISSED OFFSET
	struct FVector                                     ClientShadowHitLocation;                                  // 0x0CBC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MissionTypePreventsImpulse;                               // 0x0CC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x0CD0(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	class AShooterWeapon*                              K2Node_CustomEvent_Weapon;                                // 0x0CE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x0CE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0CF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0CF1(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_RecoilDir;                             // 0x0CF4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterWeapon*                              K2Node_CustomEvent_FiredWeapon;                           // 0x0D00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x0D08(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0D0C(0x0004) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x0D10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x0D18(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0D24(0x0004) MISSED OFFSET
	class ADayCycleManager*                            CallFunc_GetDayCycleManager_ReturnValue;                  // 0x0D28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ADayCycleManager_Genesis_C*                  K2Node_DynamicCast_AsDayCycleManager_Genesis_C;           // 0x0D30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0D38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0D39(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x0D3A(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_GetForwardVector_ReturnValue;                    // 0x0D3C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_ClientAssumesShadow;                   // 0x0D48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0D49(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_HitLocation;                           // 0x0D4C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CheckIsInShadow_Client_InShadow;                 // 0x0D58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0D59(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_CheckIsInShadow_Client_HitLocation;              // 0x0D5C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter2;                   // 0x0D68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0D70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x0D71(0x0007) MISSED OFFSET
	class AMissionType*                                CallFunc_GetActiveMission_ReturnValue;                    // 0x0D78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UClass*                                      CallFunc_GetObjectClass_ReturnValue;                      // 0x0D80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0D88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_ClassIsChildOf_ReturnValue;                      // 0x0D89(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gen_AreaBuff_Lunar.Gen_AreaBuff_Lunar_C");
		return ptr;
	}


	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void STATIC_CheckIsInShadow_Client(const struct FVector& InLightVector, bool* InShadow, struct FVector* HitLocation);
	void CheckClientResponse(const struct FVector& ServerLightVector, bool* SemiCheckedClientInShadow);
	float BP_OverrideTerminalVelocity();
	bool IsSpinAllowed();
	void AutomaticRotationCorrection(float DeltaTime);
	bool BPPreventCharacterLanding(struct FVector* ImpactPoint, struct FVector* ImpactAccel, struct FVector* ImpactVelocity, struct FVector* NewVelocity);
	float GetOverrideWaterJumpVelocity(float* OutOfWaterZ);
	void UpdateClientFlying(float DeltaTime);
	void HandleFootsteps();
	bool IsWalking();
	void UpdatePlayerMeshOffset(float DeltaSeconds);
	float BPGetMoveAnimRate();
	float GetFallRotationMultiplier();
	struct FStatusValueModifierDescription GetBuffDescription();
	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	float BPGetGravityZScale(float* currentScale);
	float ClampRotation(float AngleDegrees, float DeltaSeconds);
	void GetMaxRotation(float* MaximumPitchRollAngle);
	void SetTekSuitState(class APrimalCharacter* Character);
	float BPBPGetCameraShakeScalar(class UClass** currentShake, float* currentScale);
	void ClampInputValue(float MaxValue, float CurrentValue, float* OutputValue);
	void HandleWeaponFired(class AShooterWeapon* InputPin);
	void UpdateFallingCorrection();
	void UpdateClientFallingRotation(float InputPin);
	void OverrideFallRotationSettings(bool InputPin);
	void Update_Player_Movement_Client(float DeltaSeconds);
	void UpdatePlayerMovement_Server(float DeltaTime);
	void BuffTickClient(float* DeltaTime);
	void BPDeactivated(class AActor** ForInstigator);
	void BPSetupForInstigator(class AActor** ForInstigator);
	bool BPPreventAddingOtherBuff(class UClass** anotherBuffClass);
	void BuffTickServer(float* DeltaTime);
	void STATIC_Check_IsIn_Shadow(const struct FVector& InLightVector, bool* InShadow, struct FVector* HitLocation);
	void UserConstructionScript();
	void BindPlayerEvents();
	void NotifyWeaponFired_Event(class AShooterWeapon* weapon);
	void ServerWeaponFired(const struct FVector& RecoilDir, class AShooterWeapon* FiredWeapon);
	void ClientCheckShadow();
	void ClientCheckShadowResponse(bool ClientAssumesShadow, const struct FVector& HitLocation);
	void ExecuteUbergraph_Gen_AreaBuff_Lunar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
