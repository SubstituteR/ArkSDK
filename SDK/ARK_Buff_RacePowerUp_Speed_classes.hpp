#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_RacePowerUp_Speed_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C
// 0x0144 (0x0A74 - 0x0930)
class ABuff_RacePowerUp_Speed_C : public ABuff_RacePowerUp_Base_C
{
public:
	bool                                               bStartFX_ShouldAttachToMesh;                              // 0x0930(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0931(0x0007) MISSED OFFSET
	class UParticleSystem*                             StartParticlesTemplate_Walking;                           // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             StartParticlesTemplate_Falling;                           // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             StartParticlesTemplate_Swimming;                          // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             StartParticlesTemplate_Flying;                            // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  StartSoundTemplate_Walking;                               // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             StartParticlesTemplate_Default;                           // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  StartSoundTemplate_Falling;                               // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  StartSoundTemplate_Swimming;                              // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  StartSoundTemplate_Flying;                                // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStartFX_SpawnWalkingParticlesOnGround;                   // 0x0980(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0981(0x0003) MISSED OFFSET
	struct FName                                       StartFX_SpawnSocketName;                                  // 0x0984(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BuffFX_AttachSocketName;                                  // 0x098C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartFX_ForceAttachToSocketName;                          // 0x0994(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x099C(0x0004) MISSED OFFSET
	class USoundBase*                                  StartSoundTemplate_Default;                               // 0x09A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   StartSound_VolumeAndPitch;                                // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSpeedBoost_AddsImpulse;                                  // 0x09B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x09B1(0x0003) MISSED OFFSET
	struct FVector                                     SpeedBoostImpulse;                                        // 0x09B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSpeedBoost_SetsVelocity;                                 // 0x09C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSpeedBoost_ForceForwardInput;                            // 0x09C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         SpeedBoostSetsMovementMode;                               // 0x09C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x09C3(0x0001) MISSED OFFSET
	float                                              SpeedBoostSetVelocity_Absolute;                           // 0x09C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedBoostSetVelocity_PercentOfMaxSpeed;                  // 0x09C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSpeedBoost_ImpulseIsVelocityChange;                      // 0x09CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x09CD(0x0003) MISSED OFFSET
	float                                              SpeedBoostImpulseExponent;                                // 0x09D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x09D4(0x0004) MISSED OFFSET
	class ASplineActor*                                RaceSplineRef;                                            // 0x09D8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceOwnerFollowRaceSpline;                              // 0x09E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x09E1(0x0003) MISSED OFFSET
	float                                              FollowRaceSpline_RotationSpeed_Actor_Pitch;               // 0x09E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FollowRaceSpline_RotationSpeed_Actor_Yaw;                 // 0x09E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedBoostFOV_WarpToFovMult;                              // 0x09EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FollowRaceSpline_RotationSpeed_Velocity_Pitch;            // 0x09F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FollowRaceSpline_RotationSpeed_Velocity_Yaw;              // 0x09F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedBoostFOV_WarpBuffLifetimePercent;                    // 0x09F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedBoostFOV_InterpSpeed_Up;                             // 0x09FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedBoostFOV_InterpSpeed_Down;                           // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentWarpedFOV;                                         // 0x0A04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	double                                             SpeedBoost_WarpFovEndTime;                                // 0x0A08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasInitialized;                                          // 0x0A10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0A11(0x0007) MISSED OFFSET
	class UClass*                                      SpeedBoost_CameraShakeClass;                              // 0x0A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   SpeedBoost_CameraShakeScaleAndSpeed;                      // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x8];                                       // 0x0A28(0x0008) MISSED OFFSET
	struct UObject_FTransform                          StartPartices_OffsetTransform;                            // 0x0A30(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              StartPartices_CustomTimeDilation;                         // 0x0A60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpeedBoost_AddsVelocity;                                 // 0x0A64(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0A65(0x0003) MISSED OFFSET
	struct FVector                                     SpeedBoostAddVelocity;                                    // 0x0A68(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_RacePowerUp_Speed.Buff_RacePowerUp_Speed_C");
		return ptr;
	}


	void InitRacePowerUp(class AMissionType_Race_C** FromRaceMission);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void BuffTickClient(float* DeltaTime);
	void RotateOwnerVelocityWithRaceSpline(float DeltaTime);
	float BP_ModifyCharacterFOV(float* inFOV);
	void BuffTickServer(float* DeltaTime);
	void DoSpeedBoostVelocityUpdate();
	void SpawnBoostStartFX();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_RacePowerUp_Speed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
