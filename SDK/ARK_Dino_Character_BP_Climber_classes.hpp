#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Dino_Character_BP_Climber_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dino_Character_BP_Climber.Dino_Character_BP_Climber_C
// 0x0D28 (0x2E30 - 0x2108)
class ADino_Character_BP_Climber_C : public ADino_Character_BP_NoBossArena_C
{
public:
	bool                                               bAllowClimber_RotateToLookDirWhileClimbing;               // 0x2108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowClimber_AttachFromGround;                           // 0x2109(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowClimber_ClimbAroundCorners;                         // 0x210A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowClimber_ClimbOutOfWater;                            // 0x210B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceFromWaterSurfaceToAllowClimbing;                  // 0x210C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClimbingConsumesStamina;                                 // 0x2110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPreventRiderWeaponsWhenClimbing;                         // 0x2111(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldBoostUpAtTopOfClimb;                               // 0x2112(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x2113(0x0001) MISSED OFFSET
	struct FVector                                     reachedTopOfClimbImpulse;                                 // 0x2114(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreventAimOffsetsWhileClimbing;                          // 0x2120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_DinoClimberState>                    CurrentClimberState_Base;                                 // 0x2121(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x2122(0x0006) MISSED OFFSET
	TArray<TEnumAsByte<ETraceTypeQuery>>               ClimbableObjectTypes;                                     // 0x2128(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              GravityScale_Climbing;                                    // 0x2138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimerInterval_Seeking_Rider;                              // 0x213C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimerInterval_Seeking_NoRider_MIN;                        // 0x2140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimerInterval_Seeking_NoRider_MAX;                        // 0x2144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimerInterval_Climbing_Rider;                             // 0x2148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimerInterval_Climbing_NoRider_MIN;                       // 0x214C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimerInterval_Climbing_NoRider_MAX;                       // 0x2150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimerInterval_Attaching;                                  // 0x2154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimerInterval_Skidding;                                   // 0x2158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimerInterval_Attached_NoRider_MIN;                       // 0x215C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimerInterval_Attached_NoRider_MAX;                       // 0x2160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimerInterval_Attached_Rider;                             // 0x2164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_AttachingMontage_Ground;                              // 0x2168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_AttachingMontage_Air;                                 // 0x2170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowClimber_OrientTPVCameraToCurrentSurface;            // 0x2178(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClimber_AutoPlayCameraShake_Jump;                        // 0x2179(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClimber_AutoPlayCameraShake_Land;                        // 0x217A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClimber_AutoPlayCameraShake_Attach_Air;                  // 0x217B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClimber_AutoPlayCameraShake_Detach;                      // 0x217C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClimber_AutoPlayCameraShake_WallJump;                    // 0x217D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x217E(0x0002) MISSED OFFSET
	float                                              ClimberTPVCameraOffsetInterpSpeed;                        // 0x2180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x2184(0x0004) MISSED OFFSET
	class UAnimMontage*                                Ref_DetachMontage;                                        // 0x2188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbableSurfaceMinDot;                                   // 0x2190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlipPastDotWithFlipAxis;                                  // 0x2194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               TraceMap_SocketNames_Server;                              // 0x2198(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              SurfaceTraceDistance_Climbing;                            // 0x21A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsReadyToClimb;                                          // 0x21AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRestoringToAttached;                                   // 0x21AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClimber_PreventUpdateClimbingRotationWhileAttached;      // 0x21AE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x21AF(0x0001) MISSED OFFSET
	float                                              startClimbingDelay;                                       // 0x21B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              requiredDistanceAboveNonClimbableSurface;                 // 0x21B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClimber_AI_AttachedToSurface;                            // 0x21B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugClimber_General;                                    // 0x21B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowClimber_HoldJumpToSeekWhileFalling;                 // 0x21BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowClimber_PressJumpToToggleSeek;                      // 0x21BB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowClimber_RotateToLookDirOnSeekStart;                 // 0x21BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClimber_RequireDistanceAboveNonWalkableSurface_Seeking;  // 0x21BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClimberRestoreToAttached;                                // 0x21BE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x21BF(0x0001) MISSED OFFSET
	float                                              requiredNormalDotToClimb_MAX;                             // 0x21C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              requiredNormalDotToClimb_MIN;                             // 0x21C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              currentDistanceToSurface;                                 // 0x21C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RequiredDistanceFromSurface_MAX;                          // 0x21CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimberAi_Spawning_LookForSurfaceRadius;                  // 0x21D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClimber_isMeshInterpolating;                             // 0x21D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x21D5(0x0003) MISSED OFFSET
	float                                              CurrentMeshInterpSpeed_rotation;                          // 0x21D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentMeshInterpSpeed_location;                          // 0x21DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowClimberWallJump;                                    // 0x21E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDidWallJump;                                             // 0x21E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x21E2(0x0002) MISSED OFFSET
	struct FRotator                                    WallJumpRotation;                                         // 0x21E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              wallJumpVelocity;                                         // 0x21F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     meshTargetLocation;                                       // 0x21F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    meshTargetRotation;                                       // 0x2200(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x220C(0x0004) MISSED OFFSET
	double                                             lastWallJumpStartTime;                                    // 0x2210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              noClimbTimeAfterWallJump;                                 // 0x2218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingStaminaCost_Attached;                             // 0x221C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingStaminaCost_Skidding;                             // 0x2220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingStaminaCost_Climbing;                             // 0x2224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingStaminaCost_Climbing_RunMultiplier;               // 0x2228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RequiredStaminaToClimb;                                   // 0x222C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             lastJumpFromGroundTime;                                   // 0x2230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              jumpFromGroundClimbDelay;                                 // 0x2238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingStaminaCost_WallJump;                             // 0x223C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             lastStaminaCostTime;                                      // 0x2240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      LowStaminaMessage_Climbing;                               // 0x2248(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      LowStaminaMessage_WallJump;                               // 0x2258(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bCanClimberPlayLandingAnim;                               // 0x2268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x2269(0x0003) MISSED OFFSET
	struct FVector                                     MeshClimbingOffset;                                       // 0x226C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_DinoClimberState>                    PreviousClimberState_Base;                                // 0x2278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      CurrentClimberStateIndex;                                 // 0x2279(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowClimber_Skid;                                       // 0x227A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClimber_OnlySkidOnAttach;                                // 0x227B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttachBelowAbsSkiddingVelocity;                           // 0x227C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                minRequiredClimbableTraceHits;                            // 0x2280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x2284(0x0004) MISSED OFFSET
	TArray<class UAnimMontage*>                        ClimbingAnimsToClean;                                     // 0x2288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             Ref_Climber_AttachVFX;                                    // 0x2298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpDelay;                                                // 0x22A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Climber_AllowForwardInputAboveForwardSkiddingVelocity;    // 0x22A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             lastAttachToSurfaceStartTime;                             // 0x22A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxTimeToAttachToSurface;                                 // 0x22B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StayOnSurfaceVelocity_Failsafe;                           // 0x22B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             lastServerTickTime;                                       // 0x22B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimbingVelocity_Walk;                                    // 0x22C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingVelocity_RunMultiplier;                           // 0x22C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             lastDetachStartTime;                                      // 0x22C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              currentDetachDuration;                                    // 0x22D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimPercent_ToAttach_Ground;                              // 0x22D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimPercent_ToAttach_Air;                                 // 0x22D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimPercent_ToDetach;                                     // 0x22DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsClimbingIndex_MAX;                                      // 0x22E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x22E1(0x0003) MISSED OFFSET
	struct FVector                                     CurrentClimbableSurfaceLocation;                          // 0x22E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentClimbableSurfaceLocation_Move;                     // 0x22F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     currentClimbableSurfaceNormal;                            // 0x22FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentClimbableSurfaceFwdMoveDir;                        // 0x2308(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxClimbVelocity_ReachedError;                            // 0x2314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      IsClimbingIndex_MIN;                                      // 0x2318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowClimbingClimberFlipWithLookDir;                     // 0x2319(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x231A(0x0002) MISSED OFFSET
	float                                              ignoreControlRotationForFlipBelowUpDot;                   // 0x231C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               RiderAnim_Climbing_Idle;                                  // 0x2320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               RiderAnim_Climbing_Move;                                  // 0x2328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              attachAroundCornerPadding;                                // 0x2330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClimber_CanRotateToLookDirWhileClimbingBackwards;        // 0x2334(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowClimber_RotateInPlaceWhileAttached;                 // 0x2335(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x2336(0x0002) MISSED OFFSET
	class UAnimMontage*                                Ref_FlipMontage_Left;                                     // 0x2338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_FlipMontage_Right;                                    // 0x2340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MeshClimbingOffset_Attaching_Ground;                      // 0x2348(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MeshClimbingOffset_Attaching_Air;                         // 0x2354(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttachFromGroundHeight_Depricated;                        // 0x2360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsClimberFlipped;                                        // 0x2364(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x2365(0x0003) MISSED OFFSET
	float                                              RequiredDistanceFromSurface_MIN;                          // 0x2368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimPercent_AllowClimbInput_Flip;                         // 0x236C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceNetUpdateThisServerTick;                            // 0x2370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x2371(0x0003) MISSED OFFSET
	struct FRotator                                    currentRiderViewRotation;                                 // 0x2374(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SyncControlRotationInterval;                              // 0x2380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x2384(0x0004) MISSED OFFSET
	double                                             lastSyncControlRotationTime;                              // 0x2388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ClimbingRiderFPVSocketName;                               // 0x2390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OnDetachImpulse;                                          // 0x2398(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimPercent_ToAlignToSurface_AttachGround;                // 0x23A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Climber_MovementCalc_UseClimbingTraceHitsAboveDotToVelocity;// 0x23A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    NonControlledClimberRotation_Previous;                    // 0x23AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceClimberFlipHardSetRotation;                         // 0x23B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x23B9(0x0007) MISSED OFFSET
	TArray<struct UObject_FTransform>                  SurfaceTraceOffsetTransforms;                             // 0x23C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              TraceMap_SocketNames_ClimbingIK;                          // 0x23D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<E_DinoClimber_TraceType>>       TraceMap_TraceTypes;                                      // 0x23E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      TraceMap_NormalWeights;                                   // 0x23F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      TraceMap_NormalWeights_NoRider;                           // 0x2400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      TraceMap_NormalWeights_Seeking;                           // 0x2410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      TraceMap_NormalWeights_Climbing_Forward;                  // 0x2420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      TraceMap_NormalWeights_Climbing_Backward;                 // 0x2430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      TraceMap_NormalWeights_ReplaceFailure;                    // 0x2440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      TraceMap_LookLockDots;                                    // 0x2450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      TraceMap_CustomTraceDistances;                            // 0x2460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        TraceMap_MaxRetries;                                      // 0x2470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       UseTraceMap_Seeking_Idle;                                 // 0x2480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       UseTraceMap_Seeking_Forward;                              // 0x2490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       UseTraceMap_Seeking_Backward;                             // 0x24A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       UseTraceMap_Seeking_Falling;                              // 0x24B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       UseTraceMap_Seeking_Swimming;                             // 0x24C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       UseTraceMap_Climbing_Attaching;                           // 0x24D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       UseTraceMap_Climbing_Skidding;                            // 0x24E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       UseTraceMap_Climbing_Forward;                             // 0x24F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       UseTraceMap_Climbing_Forward_NoRider;                     // 0x2500(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       UseTraceMap_Climbing_Backward;                            // 0x2510(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       UseTraceMap_Climbing_Backward_NoRider;                    // 0x2520(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       UseTraceMap_Attached_Rider;                               // 0x2530(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       UseTraceMap_Attached_NoRider;                             // 0x2540(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              RequiredClimbingTurnDeltaForTurnAnims;                    // 0x2550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x2554(0x0004) MISSED OFFSET
	TArray<bool>                                       UseTraceMap_CheckForGround;                               // 0x2558(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              StayOnSurfaceVelocity_MAX;                                // 0x2568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StayOnSurfaceVelocity_MIN;                                // 0x256C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Climber_ClimbingClientDesyncErrorToleranceOverride;       // 0x2570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceBelowClimberToCheckForCorners_Seeking;            // 0x2574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceBelowClimberToCheckForCorners_MAX;                // 0x2578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Climber_AutoDetachOnFlatGroundAboveUpDot;                 // 0x257C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreventLandingAnimDuration;                               // 0x2580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PreventLandingAnimDuration_NoRider;                       // 0x2584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PreventUpdateTargetOrientationBelowDot_To_Surface;        // 0x2588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LerpTargetOrientationMaxSpeed;                            // 0x258C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRequireDistanceAboveNonWalkableSurface_Climbing;         // 0x2590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x2591(0x0003) MISSED OFFSET
	float                                              MeshInterpSpeed_Location_Climbing;                        // 0x2594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeshInterpSpeed_Rotation_GroundAttach;                    // 0x2598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeshInterpSpeed_Rotation_AirAttach;                       // 0x259C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeshInterpSpeed_Rotation_Climbing;                        // 0x25A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeshInterpSpeed_Rotation_Climbing_Running;                // 0x25A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeshInterpSpeed_Location_Climbing_Running;                // 0x25A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeshInterpSpeed_Location_NotClimbing;                     // 0x25AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClimberUseDetachImpulse;                                 // 0x25B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClimberHasPassedAttachFromGroundDot;                     // 0x25B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x2];                                       // 0x25B2(0x0002) MISSED OFFSET
	float                                              Climber_ForceDetachAboveUpDot;                            // 0x25B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RemoteClientClimber_RotationInterpSpeed_Climbing;         // 0x25B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClimberInput_Server_Run_Pressed;                         // 0x25BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowClimber_RunBackwardsWhileClimbing;                  // 0x25BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClimberInput_Client_Run_Pressed;                         // 0x25BE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClimber_IgnoreLookLockTracesWhenClimbingBackwards;       // 0x25BF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     previousWorldLocation;                                    // 0x25C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CurrentClimbingCameraOrientation;                         // 0x25CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TargetClimbingCameraOrientation;                          // 0x25D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimberCameraOrientationInterpSpeed;                      // 0x25E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TraceDistance_CheckForGround;                             // 0x25E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimberCameraFinalRotationLerpTime_MAX_Current;           // 0x25EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NonDediClimberClimbingVelocity;                           // 0x25F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x25FC(0x0004) MISSED OFFSET
	class APrimalBuff*                                 Ref_IsClimbingBuff;                                       // 0x2600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Ref_IsClimbingBuffClass;                                  // 0x2608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ClimberTPVCameraOffset_Seeking;                           // 0x2610(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ClimberTPVCameraOffset_Attached;                          // 0x261C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ClimberTPVCameraOffset_Climbing;                          // 0x2628(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ClimberTPVCameraOffset_CurrTarget;                        // 0x2634(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RequiredClimbingTurnDeltaForTurnAnims_RemoteClient;       // 0x2640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceBelowClimberToCheckForCorners_MIN;                // 0x2644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentCornerStartCheckDistanceBelowClimber;              // 0x2648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimbingCostsStaminaBelowClimberUpDot;                    // 0x264C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimberClampRiderControlRotationYawToAngleRange;          // 0x2650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClimbingClampArmedFPVRiderControlRotationYaw;            // 0x2654(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x2655(0x0003) MISSED OFFSET
	float                                              TimerInterval_Flipping;                                   // 0x2658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimerInterval_Detaching;                                  // 0x265C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       TraceMap_ReplaceFailure;                                  // 0x2660(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bSeekingClimberPlayClimbingAnims_Idle;                    // 0x2670(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSeekingClimberPlayClimbingAnims_Move;                    // 0x2671(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSeekingClimberPlayClimbingAnims_Run;                     // 0x2672(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x1];                                       // 0x2673(0x0001) MISSED OFFSET
	float                                              CenterSphereTraceForSurfaceLocation_Distance;             // 0x2674(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    NonControlledClimberResetRotation;                        // 0x2678(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RemoteClientClimber_RotationInterpSpeed_Reset;            // 0x2684(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RemoteClientClimber_RotationInterpSpeed_Reset_Detaching;  // 0x2688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeshInterpSpeed_Rotation_WallJump;                        // 0x268C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeshInterpSpeed_Rotation_Detaching;                       // 0x2690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeshInterpSpeed_Rotation_NotClimbing;                     // 0x2694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CenterSphereTraceForSurface_RelativeRadiusMultiplier;     // 0x2698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClimberInput_Server_Seek_Pressed;                        // 0x269C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRestoreToSeeking;                                        // 0x269D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData24[0x2];                                       // 0x269E(0x0002) MISSED OFFSET
	float                                              SurfaceTraceDistance_Seeking;                             // 0x26A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugClimber_ClimbingIK;                                 // 0x26A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugClimber_ClimbingAI;                                 // 0x26A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugClimber_DrawClimbingTraces;                         // 0x26A6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugClimber_WildSpawnAttaching;                         // 0x26A7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugClimber_PreventAllClimbingLogicStaminaLoss;         // 0x26A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugClimber_PreventAiAttachOnSpawn;                     // 0x26A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugClimber_SimulateClimbLogicBetweenFrames;            // 0x26AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData25[0x1];                                       // 0x26AB(0x0001) MISSED OFFSET
	float                                              DebugClimber_Duration_ClimbingTrace;                      // 0x26AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeAfterStopClimbingToPreventSeeking;                    // 0x26B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NonDediClimberClimbingVelocity_InterpSpeed;               // 0x26B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreventDetachAnimWhenDetachingAboveUpDot;                 // 0x26B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimberGroundAttachDuration;                              // 0x26BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowClimber_AI_WanderWhileClimbing;                     // 0x26C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowClimber_AI_PursueTargetWhileClimbing;               // 0x26C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClimber_AI_ClimbWander_OnlyWhenUntamed;                  // 0x26C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClimber_AI_ClimbWander_CanWanderOntoWalls;               // 0x26C3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClimber_AI_DetachWhenDamaged;                            // 0x26C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsClimberClimbWandering;                                 // 0x26C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x2];                                       // 0x26C6(0x0002) MISSED OFFSET
	float                                              Climber_AI_Spawning_MaxAllowedDistanceFromOrigin;         // 0x26C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimberAi_Spawning_CheckForGroundDistance;                // 0x26CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RiderDismountOffset;                                      // 0x26D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimberOverrideRiderDismountLocationBelowUpDot;           // 0x26DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ListenServerClimberOrientToLookSpeedScale;                // 0x26E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Climber_MovementCalc_UseClimbingTraceHitsBelowAngleDeltaToVelocity;// 0x26E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClimber_PreventClimbingMovement;                         // 0x26E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreventAiClimberDetachForDeadTarget_Wild;                // 0x26E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreventAiClimberDetachForDeadTarget_Tamed;               // 0x26EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x1];                                       // 0x26EB(0x0001) MISSED OFFSET
	struct FRotator                                    ClimberRestoreToClimbingRotation;                         // 0x26EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	struct FVector                                     ClimbingNewFallVelocity;                                  // 0x26F8(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugClimber_Thickness_SurfaceTrace_ValidHit;             // 0x2704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugClimber_Thickness_SurfaceTrace_Retry_Success;        // 0x2708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugClimber_Thickness_SurfaceTrace_Initial;              // 0x270C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugClimber_Thickness_Velocity_StayOnSurface;            // 0x2710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugClimber_Thickness_CurrentNormal;                     // 0x2714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugClimber_Thickness_CurrentNormal_Move;                // 0x2718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugClimber_Length_CurrentNormal_Move;                   // 0x271C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugClimber_Thickness_DesiredClimbingDir;                // 0x2720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugClimber_Thickness_Velocity_AntiSkid;                 // 0x2724(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugClimber_Thickness_RotationAxes;                      // 0x2728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugClimber_Thickness_SurfaceTrace_GroundCheck;          // 0x272C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugClimber_Thickness_SurfaceTrace_Retry_Attempt;        // 0x2730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      Climber_AttachedCustomMovementMode;                       // 0x2734(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x2735(0x0003) MISSED OFFSET
	struct FName                                       ClimberAttachVFX_SocketName;                              // 0x2738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Climber_AttachVFX_Scale;                                  // 0x2740(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData29[0x4];                                       // 0x274C(0x0004) MISSED OFFSET
	class UParticleSystem*                             Ref_VFX_ClimbingFootstep;                                 // 0x2750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Ref_SFX_ClimbingFootstep;                                 // 0x2758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VFX_Scale_ClimbingFootstep;                               // 0x2760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxClimberStateIndex;                                     // 0x2764(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData30[0x3];                                       // 0x2765(0x0003) MISSED OFFSET
	float                                              CurrentAttachDuration;                                    // 0x2768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentFlipDuration;                                      // 0x276C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             lastFlipStartTime;                                        // 0x2770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Climber_AllowBackwardsInputBelowForwardSkiddingVelocity;  // 0x2778(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkidIntensity_Forward;                                    // 0x277C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkidIntensity_Right;                                      // 0x2780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RequiredDistanceFromSurface_ToAttach;                     // 0x2784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockClimbingMeshRotationInterpSpeed;                     // 0x2788(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData31[0x3];                                       // 0x2789(0x0003) MISSED OFFSET
	float                                              DebugClimber_Length_DesiredMoveDir;                       // 0x278C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    ClimberClimbingRotation_Current;                          // 0x2790(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    NonControlledClimberRotation_Target;                      // 0x279C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FRotator>                            recentClimbingRotations;                                  // 0x27A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              ClimbingClimberRotationRate;                              // 0x27B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingClimberRotationRate_NoRider_NoTarget;             // 0x27BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingClimberRotationRate_NoRider_Target;               // 0x27C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingClimberRotationRate_RunMultiplier_Rider;          // 0x27C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateClimberRotationPastError_Attached;                  // 0x27C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateClimberRotationPastError_Climbing_CurrentRotation_Pitch;// 0x27CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateClimberRotationPastError_Climbing_CurrentRotation_Roll;// 0x27D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateClimberRotationPastError_Climbing_PrevRotations_Pitch;// 0x27D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateClimberRotationPastError_Climbing_PrevRotations_Roll;// 0x27D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Climber_ReachedClimbingRotationBelowError;                // 0x27DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LerpTargetRotationAboveLookDotToUp;                       // 0x27E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IgnoreClimberRotationAboveAttachViewRotationDot;          // 0x27E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           Ref_LastSetRider;                                         // 0x27E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AShooterCharacter*                           Ref_LastClearedRider;                                     // 0x27F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ClimberTPVCameraOffset_Skidding;                          // 0x27F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Climber_FOV_WarpMultiplier_Target;                        // 0x2804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Climber_FOV_WarpPercent;                                  // 0x2808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Climber_RiderStartFOV;                                    // 0x280C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowClimber_WarpFOV;                                    // 0x2810(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData32[0x3];                                       // 0x2811(0x0003) MISSED OFFSET
	float                                              Climber_FOV_InterpSpeed;                                  // 0x2814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsClimberWarpingFOV;                                     // 0x2818(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData33[0x3];                                       // 0x2819(0x0003) MISSED OFFSET
	float                                              Climber_FOV_WarpMultiplier_Current;                       // 0x281C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WorldSpaceCameraOverride_ActivateAboveCameraAbsUpDots;    // 0x2820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WorldSpaceCameraOverride_PreventAboveAbsUpDots;           // 0x2824(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WorldSpaceCameraOverride_ActivateBelowClimberUpVectorDownDot;// 0x2828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ClimberAttachViewRotation;                                // 0x282C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Climber_AI_ChanceToAttachOnSpawn;                         // 0x2838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData34[0x4];                                       // 0x283C(0x0004) MISSED OFFSET
	class UAnimMontage*                                Ref_JumpMontage;                                          // 0x2840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_LandingMontage;                                       // 0x2848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimPercent_ToJump;                                       // 0x2850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimPercent_ToWallJump;                                   // 0x2854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_WallJumpMontage;                                      // 0x2858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FRotator>                            ClimbingCameraFinalRotationRiderTargets;                  // 0x2860(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      ClimbingCameraFinalRotationLerpTimes;                     // 0x2870(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              ResetControlRotationOnZoomWhenAboveDotToClimbingNormal_ZoomOut;// 0x2880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ResetControlRotationOnZoomWhenAboveDotToClimbingNormal_ZoomIn;// 0x2884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       ClimbingCameraFinalRotationsReached;                      // 0x2888(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              ClimberCameraFinalRotationLerpTime_MAX_Attach;            // 0x2898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimberCameraFinalRotationLerpTime_MAX_Detach;            // 0x289C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Climber_AnimPlayRate_Attach;                              // 0x28A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Climber_AnimPlayRate_Detach;                              // 0x28A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                maxNumPrevClimbingRotationSamples;                        // 0x28A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData35[0x4];                                       // 0x28AC(0x0004) MISSED OFFSET
	class UClass*                                      CameraShake_Jump;                                         // 0x28B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraShake_Jump_Scale;                                   // 0x28B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraShake_Jump_Speed;                                   // 0x28BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CameraShake_Land;                                         // 0x28C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraShake_Land_Scale;                                   // 0x28C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraShake_Land_Speed;                                   // 0x28CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CameraShake_Attach_Air;                                   // 0x28D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraShake_Attach_Air_Scale;                             // 0x28D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraShake_Attach_Air_Speed;                             // 0x28DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CameraShake_Detach;                                       // 0x28E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraShake_Detach_Scale;                                 // 0x28E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraShake_Detach_Speed;                                 // 0x28EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CameraShake_WallJump;                                     // 0x28F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraShake_WallJump_Scale;                               // 0x28F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraShake_WallJump_Speed;                               // 0x28FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Climber_AttachFromGroundUpDotThreshold;                   // 0x2900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClimberInput_Client_Seek_Pressed;                        // 0x2904(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsClimber_Jumping_Client;                                // 0x2905(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData36[0x2];                                       // 0x2906(0x0002) MISSED OFFSET
	float                                              ChangeWallJumpToNormalJumpAboveUpDot;                     // 0x2908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxWallJumpToSurfaceNormalLerpPercent;                    // 0x290C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowClimber_UseClimbingIK;                              // 0x2910(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData37[0x7];                                       // 0x2911(0x0007) MISSED OFFSET
	TArray<class FString>                              ClimbingIK_SocketName_Substring_Groups;                   // 0x2918(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      ClimbingIK_SocketName_Substring_UseFloorLocationOverride; // 0x2928(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector2D                                   ClimbingIK_CurrentBlendspaceAxes_Front;                   // 0x2938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ClimbingIK_CurrentBlendspaceAxes_Back;                    // 0x2940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimbingIK_MeshHeightOffset_Current;                      // 0x2948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimbingIK_MeshHeightOffset_InterpSpeed;                  // 0x294C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingIK_MeshHeightOffsetTrace_Length;                  // 0x2950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingIK_MeshHeightOffsetTraceRadius_CapsulePercent;    // 0x2954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingIK_MeshHeightOffset_FromBend_Up;                  // 0x2958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingIK_MeshHeightOffset_FromBend_Running_Up;          // 0x295C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingIK_MeshHeightOffset_FromBend_Down;                // 0x2960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingIK_MeshHeightOffset_FromBend_Running_Down;        // 0x2964(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingIK_MeshHeightOffset_AdditionalZ;                  // 0x2968(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingIK_CanUpdateAxesPastErrorWithPrev;                // 0x296C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingIK_CanUpdateAxesAboveDotToSurfaceNormal;          // 0x2970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingIK_MaxDotToSurfaceNormal;                         // 0x2974(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingIK_MaxAxisClamp;                                  // 0x2978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingIK_TraceRadius;                                   // 0x297C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingIK_TraceLength;                                   // 0x2980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingIK_TraceStartOffset_X;                            // 0x2984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingIK_TraceStartOffset_Z;                            // 0x2988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RequiredVelocity_StartUsingMovingSeekTraces;              // 0x298C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             lastStopClimbingTime;                                     // 0x2990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Climber_TimeAfterStopClimbingToPreventFallDamage;         // 0x2998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsClimber_WallJumping;                                   // 0x299C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData38[0x3];                                       // 0x299D(0x0003) MISSED OFFSET
	double                                             lastUpVectorAboveForceStopClimbingDotTime;                // 0x29A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsClimberCheckingForForceDetach;                         // 0x29A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData39[0x3];                                       // 0x29A9(0x0003) MISSED OFFSET
	float                                              Climber_AllowedTimeAboveForceDetachDot;                   // 0x29AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Climber_AI_ClimbingWander_PercentChanceToWander;          // 0x29B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Climber_AI_ClimbingWander_PercentChanceToUpdateTargetRotation;// 0x29B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Climber_AI_ClimbingWander_TargetForward;                  // 0x29B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData40[0x4];                                       // 0x29C4(0x0004) MISSED OFFSET
	double                                             lastUpdateClimbWanderingTime;                             // 0x29C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Climber_AI_ClimbWandering_Duration_Current;               // 0x29D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Climber_AI_ClimbWandering_Duration_MIN;                   // 0x29D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Climber_AI_ClimbWandering_Duration_MAX;                   // 0x29D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData41[0x4];                                       // 0x29DC(0x0004) MISSED OFFSET
	TArray<float>                                      Climber_AI_AttachedSpawnTraceDirArray_Pitch;              // 0x29E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      Climber_AI_AttachedSpawnTraceDirArray_Yaw;                // 0x29F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Climber_AI_RequiredClearRadiusForAttachedSpawn;           // 0x2A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData42[0x4];                                       // 0x2A04(0x0004) MISSED OFFSET
	TArray<float>                                      ClimbingIK_CurrentMeshBendDotProducts;                    // 0x2A08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	double                                             lastRestoreToSeekingTime;                                 // 0x2A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Climber_AI_RestartSeekingDelay_MIN;                       // 0x2A20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Climber_AI_RestartSeekingDelay_MAX;                       // 0x2A24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DebugClimber_Length_RotationAxes;                         // 0x2A28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugClimber_ClimbingIK_TraceLength_BendHitDir;           // 0x2A2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugClimber_ClimbingIK_TraceThickness_BendHitDir;        // 0x2A30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugClimber_ClimbingIK_BoxExtent_TraceFloor;             // 0x2A34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugClimber_ClimbingIK_SphereRadius_HeightOffsetHit;     // 0x2A38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ClimbingIK_MeshBendOffset_Current;                        // 0x2A3C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NonRiddenClimber_ListenServer_RotationInterpSpeed_Climbing;// 0x2A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NonRiddenClimber_ListenServer_RotationInterpSpeed_Reset;  // 0x2A4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NonRiddenClimber_ListenServer_RotationInterpSpeed_Reset_Detaching;// 0x2A50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimbingIK_MeshHeightOffset_InterpSpeed_Running;          // 0x2A54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DebugClimber_Radius_CurrentLocation;                      // 0x2A58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugClimber_Radius_CurrentLocation_Move;                 // 0x2A5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Climber_StayOnSurfaceVelocity_RunMultiplier;              // 0x2A60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLockSeeking;                                             // 0x2A64(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsClimberCheckingForAutoDetach;                          // 0x2A65(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData43[0x2];                                       // 0x2A66(0x0002) MISSED OFFSET
	double                                             lastUpVectorAboveAutoDetachDotTime;                       // 0x2A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Climber_AllowedTimeAboveAutoDetachDot;                    // 0x2A70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRealJump;                                              // 0x2A74(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData44[0x3];                                       // 0x2A75(0x0003) MISSED OFFSET
	float                                              ClimbingClimberRotationRate_RunMultiplier_NoRider;        // 0x2A78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClimber_AI_AllowAILogicWhileClimbing;                    // 0x2A7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClimber_AI_ForceSeekWhilePursuingTarget;                 // 0x2A7D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData45[0x2];                                       // 0x2A7E(0x0002) MISSED OFFSET
	struct FVector                                     Climber_CurrReplicatedLoc;                                // 0x2A80(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Climber_CurrReplicatedRot;                                // 0x2A8C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NonControlledClimber_CorrectLocation_ErrorTolerance;      // 0x2A98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NonControlledClimber_CorrectLocation_InterpSpeed;         // 0x2A9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsClimber_Jumping_Server;                                // 0x2AA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClimber_PreventSeekTraces;                               // 0x2AA1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData46[0x6];                                       // 0x2AA2(0x0006) MISSED OFFSET
	class FString                                      EncumberedMessage_Climbing;                               // 0x2AA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      EncumberedMessage_WallJump;                               // 0x2AB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bClimber_OverrideStateIsMovement;                         // 0x2AC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClimber_AllowClimbRunAnim;                               // 0x2AC9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData47[0x2];                                       // 0x2ACA(0x0002) MISSED OFFSET
	float                                              ClimberLookRotationDeadzoneAngle;                         // 0x2ACC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SimulateLogicBetweenFrames_Climbing_StepDeltaTime;        // 0x2AD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SimulateLogicBetweenFrames_Climbing_PositionErrorToleranceSqrd;// 0x2AD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowClimber_SimulateClimbLogicBetweenFrames;            // 0x2AD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData48[0x3];                                       // 0x2AD9(0x0003) MISSED OFFSET
	struct FStruct_ClimberSimulatedMoveData            LastCachedServerClimberMoveData;                          // 0x2ADC(0x0024) (Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	struct FVector                                     CurrentClimbableSurfaceNormal_Move;                       // 0x2B00(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SimulateLogicBetweenFrames_Seeking_StepDeltaTime;         // 0x2B0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_NewLoc;                                // 0x2B10(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_NewRot;                                // 0x2B1C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bSoftSet;                              // 0x2B28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData49[0x7];                                       // 0x2B29(0x0007) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_MakeTransform_ReturnValue;                       // 0x2B30(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_SetActorLocationAndRotation_ReturnValue;         // 0x2B60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData50[0x3];                                       // 0x2B61(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x2B64(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x2B74(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x2B75(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x2B76(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_CustomEvent_newState;                              // 0x2B77(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_delay3;                                // 0x2B78(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData51[0x4];                                       // 0x2B7C(0x0004) MISSED OFFSET
	class ADino_AIController_BP_Climber_C*             CallFunc_Get_Climber_Ai_Controller_ref;                   // 0x2B80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x2B88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData52[0x3];                                       // 0x2B89(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate2;                    // 0x2B8C(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x2B9C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x2B9D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x2B9E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData53[0x1];                                       // 0x2B9F(0x0001) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x2BA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x2BA8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue;               // 0x2BB4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue;                // 0x2BC0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x2BCC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x2BCD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x2BCE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x2BCF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_viewRotation;                          // 0x2BD0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_climbingVelocity;                      // 0x2BDC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x2BE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetControlRotation_ReturnValue;                  // 0x2BF0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x2BFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x2C00(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x2C04(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x2C08(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Get_Climber_Capsule_BottomWorldLocation_bottom;  // 0x2C14(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPFastTrace_ReturnValue;                         // 0x2C20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData54[0x3];                                       // 0x2C21(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_duration4;                             // 0x2C24(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_desiredRotation;                       // 0x2C28(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x2C34(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLoadingSaveGame_ReturnValue;                   // 0x2C40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData55[0x3];                                       // 0x2C41(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_wallJumpVelocity;                      // 0x2C44(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x2C50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x2C51(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData56[0x2];                                       // 0x2C52(0x0002) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate3;                    // 0x2C54(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate4;                    // 0x2C64(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     K2Node_CustomEvent_lineStart;                             // 0x2C74(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_lineEnd;                               // 0x2C80(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_CustomEvent_color3;                                // 0x2C8C(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_duration3;                             // 0x2C9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Thickness;                             // 0x2CA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_delay2;                                // 0x2CA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x2CA8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_newRotation2;                          // 0x2CAC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Delay;                                 // 0x2CB8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_velocity;                              // 0x2CBC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_SetActorRotation_ReturnValue;                    // 0x2CC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData57[0x7];                                       // 0x2CC9(0x0007) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x2CD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsClimberClimbingSimple_Pure_result;             // 0x2CD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsClimberClimbingSimple_Pure_result2;            // 0x2CD9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x2CDA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsClimberClimbingSimple_Pure_result3;            // 0x2CDB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x2CDC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanJumpInternal_ReturnValue;                     // 0x2CDD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData58[0x2];                                       // 0x2CDE(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_GetSocketLocation_ReturnValue;                   // 0x2CE0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData59[0x4];                                       // 0x2CEC(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x2CF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_forceSuccess2;                         // 0x2CF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_forceSuccess;                          // 0x2CF9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData60[0x2];                                       // 0x2CFA(0x0002) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_center2;                               // 0x2CFC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_radius;                                // 0x2D08(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_segments;                              // 0x2D0C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_CustomEvent_color2;                                // 0x2D10(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_duration2;                             // 0x2D20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_center;                                // 0x2D24(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_extent;                                // 0x2D30(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_CustomEvent_color;                                 // 0x2D3C(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_Rotation;                              // 0x2D4C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Duration;                              // 0x2D58(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsClimberClimbingSimple_Pure_result4;            // 0x2D5C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData61[0x3];                                       // 0x2D5D(0x0003) MISSED OFFSET
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x2D60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData62[0x4];                                       // 0x2D64(0x0004) MISSED OFFSET
	class FString                                      CallFunc_Conv_BoolToString_ReturnValue;                   // 0x2D68(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue;                       // 0x2D78(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x2D88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue7;                        // 0x2D89(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData63[0x2];                                       // 0x2D8A(0x0002) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x2D8C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_newRotation;                           // 0x2D90(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue2;                        // 0x2D9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue3;                        // 0x2DA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue4;                        // 0x2DA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue5;                        // 0x2DA8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsClimberFalling_Pure_result;                    // 0x2DAC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue8;                        // 0x2DAD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x2DAE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue3;                          // 0x2DAF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue9;                        // 0x2DB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanClimberSeek_result;                           // 0x2DB1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_newVal;                                // 0x2DB2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x2DB3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsClimberClimbingSimple_Pure_result5;            // 0x2DB4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData64[0x3];                                       // 0x2DB5(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue3;                // 0x2DB8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x2DC4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_Find_ItemToFind_RefProperty;               // 0x2DD0(0x0001) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	bool                                               CallFunc_Array_Set_Item_RefProperty;                      // 0x2DD1(0x0001) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	unsigned char                                      UnknownData65[0x6];                                       // 0x2DD2(0x0006) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_CapsuleTraceMulti_NEW_ActorsToIgnore_RefProperty;// 0x2DD8(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	bool                                               CallFunc_Array_Set_Item2_RefProperty;                     // 0x2DE8(0x0001) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	unsigned char                                      UnknownData66[0x3];                                       // 0x2DE9(0x0003) MISSED OFFSET
	float                                              CallFunc_Array_Set_Item3_RefProperty;                     // 0x2DEC(0x0004) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	bool                                               CallFunc_Array_Insert_NewItem_RefProperty;                // 0x2DF0(0x0001) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	unsigned char                                      UnknownData67[0x3];                                       // 0x2DF1(0x0003) MISSED OFFSET
	float                                              CallFunc_Array_Insert_NewItem2_RefProperty;               // 0x2DF4(0x0004) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	bool                                               CallFunc_Array_Set_Item4_RefProperty;                     // 0x2DF8(0x0001) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	unsigned char                                      UnknownData68[0x7];                                       // 0x2DF9(0x0007) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_SphereTraceSingle_NEW_ActorsToIgnore_RefProperty;// 0x2E00(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_SphereTraceSingle_NEW_ActorsToIgnore2_RefProperty;// 0x2E10(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_SphereTraceSingle_NEW_ActorsToIgnore3_RefProperty;// 0x2E20(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dino_Character_BP_Climber.Dino_Character_BP_Climber_C");
		return ptr;
	}


	void OnClimberFinishedAttaching();
	void IsClimbingTraceHitResultValid(bool bValidHit, const struct FVector& TraceStart, const struct FVector& TraceEnd, int TraceIndex, int TraceRetryNum, struct FHitResult* Hit, bool* bResult);
	void CanClimberOverrideRetriedTraceResult(struct FHitResult* WithHit, bool* bResult);
	void AdjustClimbTraceTransform(const struct FName& WithSocketName, struct UObject_FTransform* WithTraceTransform, struct UObject_FTransform* climberTransform, struct UObject_FTransform* AdjustedTransform);
	void Tick_SimulateSeekingBetweenFrames(bool* bFoundSurface);
	void ClearCachedServerClimberMoveData();
	void CacheServerClimberMoveData();
	void STATIC_Tick_SimulateClimbingBetweenFrames();
	void OnWalkableGroundFoundWhileClimbing();
	void GetDesiredMoveDirection(struct FVector* Direction);
	void Get_Correct_Surface_Trace_Offset_Use_Trace_Map_Override(TArray<bool>* UseTraceMap);
	void GetCorrectClimbingTraceWeightOverride(bool* UseResult, TArray<float>* Weights);
	void ClimberUpdateServerTimerByClimberStateOverride();
	void Calc_Current_Climbing_Velocity_Override_State(const struct FVector& CurrentVelocity, bool* ShouldOverrideVelocity, struct FVector* Velocity);
	void Climber_AllowMovementWhileClimbing(bool* Result);
	void IsClimberDetaching_Pure(bool checkPrevious, bool* Result);
	void ClimberCanEverJump_Pure(bool* Result);
	void Climber_CanEverJump(bool* Result);
	void OnJumped();
	void NetSync_ClimberIsJumping(bool newVal);
	void BP_OnPostNetReplication(struct FVector* ReplicatedLoc, struct FRotator* ReplicatedRot);
	void Climber_AI_OnPreventStopServerTick();
	void Climber_AI_CanStopServerTick(bool* Result);
	void ShouldClimberLockInputsWhileAttached(bool* Result);
	void Climber_AI_ClimbingCanAttack(int AttackIndex, bool* Result);
	void Climber_AI_OnFlee();
	void Climber_AI_CheckForAttackWhileClimbing();
	bool BPOnStartJump();
	void Climber_OnRunReleased();
	void Climber_OnRunPressed();
	void BPCharacterUnsleeped();
	void BPCharacterSleeped();
	void ClimberAI_UpdateHasTargetWhileClimbing();
	void IsClimberPlayingPreventInputAnim(bool* Result);
	void BP_OnSetDeath();
	void IsClimberInClimbingStateRange(TEnumAsByte<E_DinoClimberState> startState, TEnumAsByte<E_DinoClimberState> EndState, bool checkPrevious, bool* Result);
	void BPOrderedMoveToLoc(struct FVector* DestLoc);
	bool BP_IsCharacterHardAttached(bool* bIgnoreRiding, bool* bIgnoreCarried);
	void BPCharacterDetach();
	void IsClimberNearWaterSurface(float Distance, bool* Result);
	void IsClimberClimbing_Pure(bool isFinishedAttaching, bool includeSeeking__when_above_false_, bool includeDetaching, bool checkPrevious, bool* Result);
	void GetCorrectWallJumpAnim(const struct FVector& wallJumpVelocity, class UAnimMontage** Anim);
	void ShouldUseTraceHitForClimbingMovement(const struct FVector& HitLocation, bool* Result);
	void ShouldClimberCheckNewClimbingRotation(const struct FRotator& climbingRotation, bool* Result);
	void IsClimberMovingOnSurface_Pure(bool checkPrevious, bool* Result);
	void CanClimberSoftSetRotation(bool* Result);
	void ConvertClimberSpaceVectorToWorld_Pure(const struct FVector& climberSpaceVector, struct FVector* WorldVector);
	void ConvertClimberSpaceVectorToWorld(const struct FVector& climberSpaceVector, struct FVector* WorldVector);
	void ConvertVectorToWorld_Pure(const struct FVector& localVector, struct FVector* WorldVector);
	void ConvertRotatorToWorld_Pure(const struct FRotator& localRotator, struct FRotator* worldRotator);
	void ConvertRotatorToWorld(const struct FRotator& localRotator, struct FRotator* worldRotator);
	void ConvertVectorToWorld(const struct FVector& localVector, struct FVector* WorldVector);
	void ClimberUpdateServerTimer(float newMin, float newMax);
	void IsClimberFalling_Pure(bool* Result);
	void IsClimberFalling(bool* Result);
	void STATIC_Climber_TraceForMoveNormal(const struct FVector& TargetLocation, bool* foundHit, struct FVector* newMoveNormal);
	bool CanClimberRestoreToSeeking();
	void Climber_AI_CanWanderOntoWalls(bool* Result);
	void ClimbingIK_SetNewBlendspaceAxes();
	void DebugClimber_NetDrawDebug_Box(const struct FVector& Center, const struct FVector& Extent, const struct FLinearColor& Color, const struct FRotator& Rotation, float Duration, bool allowDraw, bool forceDebug, bool preventReplication);
	void DebugClimber_NetDrawDebug_Sphere(const struct FVector& Center, float Radius, int Segments, const struct FLinearColor& Color, float Duration, bool allowDraw, bool forceDebug, bool preventReplication);
	void ClimberUpdateServerTimerByClimberState();
	void Climber_AI_CanStopAttachedServerTick(bool* Result);
	void Climber_AI_Update_ClimbWandering_Duration();
	void Climber_AI_CanUpdateClimbWandering(bool* Result);
	void UpdateClimbingClimber_AI();
	void Climber_AI_Update_IsClimbWandering(bool forceStartWandering);
	void Climber_AI_Update_ClimbWander_TargetRotation();
	void ConvertRotatorToLocal(const struct FRotator& Rotator, struct FRotator* localRotator);
	void ClimbingIK_UpdateMeshBendDotProducts();
	void Climber_AI_CanWanderWhileClimbing(bool* Result);
	void GetCorrectClimbingTraceMaxRetryCount_Pure(int index, int* Count);
	void GetCorrectClimbingTraceMaxRetryCount(int index, int* Count);
	void GetCorrectClimbingTraceType_Pure(int index, TEnumAsByte<E_DinoClimber_TraceType>* Type);
	void GetCorrectClimbingTraceType(int index, TEnumAsByte<E_DinoClimber_TraceType>* Type);
	void GetCorrectLookLockDot_Pure(int TraceIndex, float* dot);
	void GetCorrectLookLockDot(int TraceIndex, float* dot);
	void GetCorrectClimbingTraceWeight_Pure(int TraceIndex, bool isForReplace, float* Weight);
	void GetCorrectClimbingTraceWeight(int TraceIndex, bool isForReplace, float* Weight);
	void Should_Climber_Use_Climbing_Trace_Hit(int TraceIndex, const struct FVector& HitLocation, const struct FVector& HitNormal, bool* Result);
	void CanClimberRetryClimbingTrace(int TraceIndex, bool* Result);
	void ProcessResultsOfClimbingTraces(int numValidTraceHits, bool requireAllTraceHitsValid, int numTraceSockets, const struct UObject_FTransform& currentClimberTransform, bool centerTraceHit, const struct FVector& desiredSurfaceLocation, TArray<int>* traceIndecesArray, TArray<bool>* traceHitsArray, TArray<struct FVector>* traceHitLocationsArray, TArray<struct FVector>* traceNormalsArray, bool* isSurfaceValid, struct FVector* SurfaceLocation, struct FVector* SurfaceNormal, struct FVector* surfaceLocation_Move, struct FVector* surfaceNormal_Move);
	void CenterSphereTraceForSurfaceLocation(const struct UObject_FTransform& currTransform, bool* foundSurface, struct FVector* SurfaceLocation);
	void STATIC_TraceForClimbableSurface(const struct UObject_FTransform& climberTransform, float TraceLength, bool preventTraceRetries, TArray<struct UObject_FTransform>* traceSocketOffsetTransforms, TArray<int>* currSurfaceTraceIndecesArray, bool* foundAnyValidTraceHits, int* numValidTraceHits, TArray<bool>* validTraceHits, TArray<struct FVector>* traceHitLocations, TArray<struct FVector>* traceHitNormals);
	void ConvertRotatorToLocal_Pure(const struct FRotator& Rotator, struct FRotator* localRotator);
	void ClimbingIK_TraceForNewSurfaceNormals(const class FString& socketGroupSubstring, float* dot);
	void STATIC_ClimbingIK_UpdateMeshHeightOffset();
	void UpdateClimbingIK();
	void GetClimberDesiredWallJumpDir(struct FVector* desiredDir);
	void OnStartSeeking();
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** meshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void On_ClimberAttached();
	void Climber_PlayCameraShake_Client(class UClass* Shake, float Scale, float Speed);
	void BP_OnZoomOut();
	void BP_OnZoomIn();
	void Get_Average_Max_Delta_with_Rotator_Array(const struct FRotator& Rotator, TArray<struct FRotator>* Array, float* averageDelta);
	void Get_AverageMeanDelta_with_Rotator_Array(const struct FRotator& Rotator, TArray<struct FRotator>* Array, float* averageDelta);
	void GetMaxDeltaBetweenRotators(const struct FRotator& A, const struct FRotator& B, float* Delta);
	void GetAverageDeltaBetweenRotators(const struct FRotator& A, const struct FRotator& B, float* Delta);
	void AddRiderToFinalCameraRotationArrays(class AShooterCharacter* RiderToAdd);
	void DetermineNewRiderFinalCameraRotationIndex(class AShooterCharacter* theRider, int* index);
	void RemoveRiderFromFinalCameraRotationArrays(class AShooterCharacter* RiderToRemove);
	void GetClimberLookDirDotToClimbingNormal_Pure(float* dot);
	void GetClimberLookDirDotToClimbingNormal(float* dot);
	void GetClimberUpVector_Pure(struct FVector* Up);
	void GetCurrentRiderFinalCameraRotationArrayIndex(class AShooterCharacter* thisRider, int* index);
	void Update_Riding_Players_Final_Camera_Rotations(bool StartedClimbing);
	void BPDoAttack(int* AttackIndex);
	void CanNonControlledClimberNotClimbingOverrideTransformInterpolation(bool* Result);
	void CanClimberStopNonDediTick_NonControlled(bool* Result);
	void Input_Jump_Released();
	void Input_Jump_Pressed();
	void Climber_AI_CanAttachOnSpawn(bool* Result);
	void GetClimberLookDir(struct FVector* lookDir);
	void IsPrimalCharacterFriendly(class APrimalCharacter* Character, bool* Result);
	void Get_Climber_Look_Dir_Dot_to_Normal(const struct FVector& Normal, float* dot);
	void GetClimberViewLocation_Pure(struct FVector* Location);
	void GetClimberViewLocation(struct FVector* Location);
	void CanClimberSeek(bool isForStart, bool* Result);
	void IsClimberClimbingSimple_Pure(bool excludeDetaching, bool checkPrev, bool* Result);
	void IsClimberClimbing_Simple(bool excludeDetaching, bool checkPrev, bool* Result);
	void ClimberOn_Server_Run_Released();
	void Climber_OnServerRunPressed();
	void ClientTick_UpdateClimberTarget_FOV();
	void CanClimberStopNonDediTick_Controlled(bool* Result);
	float BPModifyFOV(float* FOVIn);
	void HasClimberResetTPVCamera(bool* Result);
	void Stop_All_Climber_Logic();
	void GetClimbingSurfaceNormalFromRotation(const struct FRotator& climbingRotation, struct FVector* SurfaceNormal);
	void GetAngleDeltaBetweenVectors(const struct FVector& VectorA, const struct FVector& VectorB, const struct FVector& AroundAxis, float* theta);
	void Rotate_RotatorForwardVector_to_Target_Constant(const struct FRotator& currentRotator, const struct FVector& targetForward, float RotationRate, struct FRotator* newRotator);
	void RemoveAxisFromVector(const struct FVector& Vector, const struct FVector& Axis, struct FVector* newVector);
	void IsClimberSwimming_Pure(bool* Result);
	void Can_Climber_Finish_Attaching(bool* Result);
	void Can_Climber_Finish_Skidding(bool* Result);
	void CanClimberSkid(bool* Result);
	void ServerTick_Flipping();
	void DoesClimberHaveEnough_Stamina_Pure(float needsStamina, bool* Result);
	void DoesClimberHave_Enough_Stamina(float needsStamina, bool* Result);
	void CanClimberCallServerRunInputEvents(bool newRunPressed, bool* Result);
	void Is_Climber_Grounded_Pure(bool* Result);
	void Input_Run_Toggle();
	void Input_Run_Released();
	void Input_Run_Pressed();
	void ResetShouldDrawCrosshair();
	void STATIC_Climber_Check_for_ObstaclesInDir(const struct FVector& checkDir, float checkTrace_Distance, float checkTrace_Padding, TEnumAsByte<ETraceTypeQuery> checkTrace_Channel, bool forceDebug, bool* NoObstacles, struct FHitResult* obstacleHit);
	void DebugClimber_NetDrawDebug_Line(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FLinearColor& Color, float Duration, float Thickness, bool allowDraw, bool forceDebug, bool preventReplication);
	void Get_Climber_Right_Vector_Pure(struct FVector* Right);
	void Get_Climber_Forward_Vector_Pure(struct FVector* Forward);
	void OnWallJump(const struct FVector& wallJumpVelocity);
	void CanWallJump(bool* Result);
	bool BP_PreventMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode);
	struct FVector BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity);
	void Get_Current_Climber_LookRotation(bool bIgnoreDeadzone, struct FRotator* lookRot);
	void IsRemoteClientClimber(bool* Result);
	void Climber_AI_OnSetTamedFollowTarget();
	bool AllowGrappling();
	void Climber_AI_OnSetTarget(class AActor* NewTarget);
	void ClimberStartSeeking();
	void ClimberStopSeeking();
	void Set_Climber_IK_Active(bool newActive);
	void GetClimbingIK_BlendspaceAxes_Back(struct FVector2D* axes);
	void GetClimbingIK_BlendspaceAxes_Front(struct FVector2D* axes);
	void Update_NonDedi_Climber_Mesh();
	bool BPDesiredRotationIsLocalSpace();
	void STATIC_ClimberCheckForAboveWalkableGround(bool* Result);
	bool BPModifyDesiredRotation(struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation);
	void BPSetupTamed(bool* bWasJustTamed);
	void IsClimberSeeking(bool checkPrevious, bool* Result);
	void Did_Climber_Just_Start_or_Stop_Climbing(bool* Result);
	void IsClimberSwimming(bool* Result);
	void ResetClimbingVars();
	void UpdateClimber_Inputs();
	void IsOwningClientClimber(bool* Result);
	void Can_Climber_Update_ClimbingCamera_Final_Orientation(class AShooterCharacter* viewingRider, bool* Result);
	void Can_Update_Climber_TPV_Camera_Offset(bool* Result);
	void Client_Tick_Update_Climber_TPV_Camera_Offset();
	void UpdateOwningClientIsClimbingBuff();
	void Store_NonDedi_Climber_Climbing_Velocity();
	struct FRotator BPCameraRotationFinal(class APrimalCharacter** viewingCharacter, struct FRotator* InCurrentFinalRot);
	void Get_Climber_Capsule_BottomWorldLocation(float offsetTowardsCenter, struct FVector* Bottom);
	void Get_ClimberVelocity_Pure(bool forceUseWorldDeltaSeconds, struct FVector* Velocity);
	bool BPOverrideFPVViewLocation(class APrimalCharacter** viewingCharacter);
	struct FVector STATIC_BPGetFPVViewLocation(class APrimalCharacter** viewingCharacter);
	struct FRotator BPLimitPlayerRotation(class APrimalCharacter** viewingCharacter, struct FRotator* InViewRotation);
	float BPModifyViewHitDir(class APrimalCharacter** viewingCharacter, float* InViewHitDir);
	struct FRotator BPCameraBaseOrientation(class APrimalCharacter** viewingCharacter);
	void GetClimberVelocityAlongNormal(const struct FVector& Normal, float* Velocity);
	void Get_Climber_Velocity(bool forceUseWorldDeltaSeconds, struct FVector* Velocity);
	void GetCurrentClimbingStaminaCost(float* cost);
	void GetCurrentClimbingRotationSpeed(float* RotationSpeed);
	void GetCurrentClimbingMoveVector(const struct FVector& OverrideMoveDir, struct FVector* moveVector);
	void Get_CurrentClimbingVelocityMax(float* Velocity);
	void OnSeek_Released(bool toggle);
	void OnSeek_Pressed(bool toggle);
	void Climber_OnClientRunReleased();
	void Climber_OnClientRunPressed();
	void On_Climbing_Traces_Found_No_Valid_Surface(TArray<bool>* hitMap);
	void Get_New_Trace_Vectors_For_AroundCornerCheck(const struct FVector& TraceStart, const struct FVector& TraceEnd, int TraceIndex, int retryNum, bool didLastTraceHit, const struct FHitResult& lastTraceHitResult, bool* retryTrace, struct FVector* updatedTraceStart, struct FVector* updatedTraceEnd, bool* overrideTraceHit, struct FVector* newHitLoc, struct FVector* newHitNormal);
	void GetCustomSurfaceTraceDistance(int TraceIndex, float* customDistance);
	void ShouldClimber_CenterSphereTraceForSurfaceLocation(bool* Result);
	void SetNewClimbingRotation(const struct FRotator& NewRotation);
	void ForceStopClimbingNow();
	void Can_Climber_Apply_Detach_Impulse(bool* Result);
	void LerpRotatorToTarget(const struct FRotator& currentRotator, const struct FRotator& targetRotator, float LerpSpeed, struct FRotator* lerpedRotator);
	void Trace_for_Non_Climbable_Surface(const struct FVector& traceDir, bool* Found);
	void Get_Surface_Trace_Offset_Array_from_UseTraceMap(TArray<bool>* useMap, TArray<struct UObject_FTransform>* Result, TArray<int>* indexArray);
	void MakeClimbingRotationFromForwardVector(const struct FVector& newForward, struct FRotator* NewRotation);
	void GetCurrentClimbingTurnAngleDelta(float* Delta);
	void DebugClimber_NetDrawDebug_RotationAxes(const struct FRotator& Rotator, const struct FVector& Origin, float Length, float Duration, float Thickness, bool allowDraw, bool forceDebug, bool preventReplication);
	void SetClimbableSurfaceVars(const struct FVector& newSurfaceNormal, const struct FVector& newSurfaceNormal_Move, const struct FVector& newSurfaceLocation, const struct FVector& newSurfaceLocation_Move);
	void STATIC_SnapClimberToSurface();
	void Get_ClimberState_Index(bool getPrevious, unsigned char* index);
	void CanClimber_Update_Climbing_Rotation(const struct FRotator& NewRotation, bool* Result, struct FRotator* approvedRotation);
	void CheckForRetrySurfaceTrace(const struct FVector& TraceStart, const struct FVector& TraceEnd, int TraceIndex, int retryNum, bool didLastTraceHit, const struct FHitResult& lastTraceHitResult, bool* retry, struct FVector* retryStart, struct FVector* retryEnd, bool* overrideTraceHit, struct FVector* NewLocation, struct FVector* newNormal);
	void GetClimbingTurnDirection(int* turnDir);
	void Get_Climber_Flipped_Rotation(struct FRotator* flipRotation);
	void GetClimberFlipAxis(struct FVector* Axis);
	void GetClimbingMoveDirFromRotation(const struct FRotator& Rotation, struct FVector* moveDir);
	void Make_Climbing_Rotation_fromSurfaceNormal(const struct FVector& SurfaceNormal, struct FRotator* Rotation);
	void Get_Climber_Right_Vector(struct FVector* Right);
	void Get_Climber_Forward_Vector(struct FVector* Forward);
	void Get_Climber_Up_Vector(struct FVector* Up);
	void SetClimberCanIgnoreWater(bool restoreToDefault, bool newVal);
	void Can_Climber_Currently_Climb_Out_Of_Water(bool* Result);
	void CheckForClimbOutOfWater(bool* AllowClimbing);
	void UpdateControlledClientClimber();
	void ClimberTick_Server();
	void ClimberTick_NonDedi();
	void UpdateNonControlledClimber();
	void UpdateClimberMovementMode();
	void OnClimberDetached();
	void UpdateClimberOverrideFallVelocity();
	void Can_Climber_Rotate_to_Target_Rotation(bool* Result);
	void IsClimberDetaching(bool checkPrevious, bool* Result);
	void Sync_RiderLookDirection();
	void OnRep_CurrentClimberStateIndex();
	void CanClimberMeshInterpolate(bool* Result);
	void Get_Climber_Flip_CheckNormal(struct FVector* Normal);
	void GetCorrectFlippingAnim(class UAnimMontage** Anim);
	void CanClimberAttachFromGround(bool* Result);
	void Get_CorrectClimber_Rotation(bool* updateRotation, struct FRotator* Rotation);
	void Can_Receive_Climbing_Input_Backward(bool* Result);
	void CanReceiveClimbingInput_Forward(bool* Result);
	void GetCorrectSurfaceTraceDistance(bool isForRetry, float* traceDist);
	void UpdateClimbingClimber(bool IgnoreFailure, bool* canKeepClimbing);
	void Get_Correct_Surface_Trace_OffsetTransforms(bool overrideUseMap, TArray<bool>* newUseMp, TArray<struct UObject_FTransform>* offsetTransforms, TArray<int>* TraceIndeces);
	void Get_CorrectDetachAnim(class UAnimMontage** Anim);
	void IsClimberPlayingAnim(class UAnimMontage* checkAnim, bool* Result);
	void STATIC_Interp_Climber_toTransform(const struct UObject_FTransform& Transform, float LocationInterpSpeed, float RotationInterpSpeed, float DeltaTime, bool* reachedTransform);
	void STATIC_SoftSetClimberTransform(const struct UObject_FTransform& NewTransform);
	void GetCorrectAttachAnim(class UAnimMontage** Anim);
	void Get_Correct_Mesh_Offset(struct FVector* Offset);
	void STATIC_StoreClimb_Trace_Socket_Offsets();
	void Is_Climber_Attaching(bool checkPrevious, bool* Result);
	void RotateClimber_To_Look_Rotation();
	void Check_For_Prevent_Stop_Climbing(int numValidHits, int numTraces, TArray<bool>* traceHitsArray, bool* AllowClimbing);
	void Update_RiderWithClimberState();
	void IsClimberInAnyClimberState(bool checkPrevious, bool* Result);
	void Flip_Attached_Climber();
	void CanAttached_Climber_Flip(bool* Result);
	void Check_for_Attached_Climber_Flip();
	void Is_Climber_Moving_on_Surface(bool checkPrevious, bool* Result);
	void Get_Climbing_Forward_Velocity(float* ForwardVelocity);
	void Get_Climbing_Right_Velocity(float* RightVelocity);
	void Detach_Climber_from_Surface();
	void ServerTick_Detaching();
	void GetServerTickDeltaTime(float* DeltaTime);
	void Skid(const struct FVector& currVelocity, const struct FVector& Dir, float InterpSpeed, struct FVector* NewVelocity);
	void Get_Move_on_Surface_Velocity(struct FVector* Velocity);
	void Can_Climber_Continue_Attaching(bool* Result);
	void Rotate_Climber_To_TargetClimbingRotation();
	void Update_Climber_TargetClimbingRotation();
	void Attach_Climber_to_Surface();
	void IsClimbingIndexEqualToCurrent(unsigned char index, bool* Result);
	void IsClimberMoving_Absolute_Up(bool* Result);
	void ServerTick_Override();
	void StopClimbing(bool resetRestoreToSeeking, bool skipDetach);
	void Replicate_Index_Update_Non_Dedi_Climber();
	void STATIC_Find_Valid_AiSpawn_Transform(bool* canSpawn, struct UObject_FTransform* validTransform);
	void Replicate_Index_Update_Target_TPV_Camera_Offset();
	void Replicate_Index_Update_Server_And_Client_Climber();
	void ReachedTop_Of_Climb();
	void UpdateClimbingVars(bool validSurfaceFound, const struct FVector& SurfaceNormal, const struct FVector& surfaceNormal_Move, const struct FVector& SurfaceLocation, const struct FVector& surfaceLocation_Move, TArray<bool>* hitMap, TArray<int>* traceIndexArray);
	void IsHitSurfaceClimbable(const struct FHitResult& Hit, bool* Result);
	void ReplicateClimbing_Index();
	void UpdateServerClimberByClimbingIndex();
	void UpdateClimberStateByClimbingIndex(unsigned char newIndex);
	void UpdateClimbing_Velocity();
	void Calc_Current_Climbing_Velocity(struct FVector* newClimbingVel);
	void ServerTick_Climbing();
	void ServerTick_Attached();
	void ServerTick_Skidding();
	void ServerTick_Attaching();
	void ServerTick_Seeking();
	void ClientTick_NoInput();
	void Client_Tick_Input_Backward();
	void ClientTick_Input_Forward();
	void ShouldClimberDraw_CrosshairWhileClimbing(bool* Result);
	void IsNormalClimbable(const struct FVector& Normal, bool isAverageNormal, bool* Result);
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void ReduceClimberStamina(float amount);
	void DisplayMessage(const class FString& Message);
	void ClimberHas_Enough_Stamina_to_Climb(bool HUD_NotifyOnFailure, bool* Result);
	void Is_ClimberClimbing(bool isFinishedAttaching, bool includeSeeking__when_above_false_, bool includeDetaching, bool checkPrevious, bool* Result);
	void Reduce_StaminaWhileClimbing();
	void ClimberPlayLandAnim(bool forceSuccess);
	void BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode);
	void Hard_Set_Climber_RotationBut_Interp_Mesh_Location(const struct FRotator& NewRotation);
	void CleanUpClimbingAnims(bool* animsClean);
	void Set_Should_Restore_to_Attached(bool newVal);
	void SoftSetClimberRotation(const struct FRotator& NewRotation);
	void WallJump();
	void InterpolateClimberMesh(class USkeletalMeshComponent* meshToInterpolate);
	void Update_Climber_Cilmbing_Anims(bool ensureAnimsPlaying);
	void SetUse_Aim_Offsets(bool newUse);
	void GetStayOnSurfaceVelocity(bool bOverrideVars, const struct FVector& OverrideSurfaceLoc, float OverrideDistFromSurface, const struct FVector& OverrideClimberLoc, bool bPreventUpdatingServerTimer, struct FVector* Velocity);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void Init_Climber();
	void BPUnstasis();
	void Climber_AI_CheckForAttachToSurfaceOnSpawn();
	void Client_Set_Climber_State(unsigned char NewState);
	void Can_ClimberContinueClimbing(bool* Result);
	void Climber_AI_SetAttachedToSurface(bool newVal, bool forceSuccess);
	void Get_Climber_Ai_Controller(class ADino_AIController_BP_Climber_C** Ref);
	void Climber_AI_DetachFromSurface();
	void Is_Climber_Attached(bool checkPrevious, bool* Result);
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	void BPTimerNonDedicated();
	void Update_Climber_Transforms();
	void Get_Default_Climber(class ADino_Character_BP_Climber_C** Ref);
	void IsClimberGrounded(bool* Result);
	void STATIC_CalcCurrentClimbableSurface(float TraceDistance, bool preventTraceRetries, bool requireAllTraceHitsAreValid, bool OverrideClimberTransform, const struct UObject_FTransform& NewTransform, bool OverrideTraceUseMap, TArray<bool>* newUseMap, bool* validSurfaceFound, struct FVector* SurfaceNormal, struct FVector* surfaceNormal_Move, struct FVector* SurfaceLocation, struct FVector* surfaceLocation_Move, TArray<bool>* hitMap, TArray<int>* traceIndexArray);
	void Net_Set_Climber_State(unsigned char newStateIndex);
	void BPTimerServer();
	void UserConstructionScript();
	void InpActEvt_Run_K2Node_InputActionEvent_117();
	void InpActEvt_Run_K2Node_InputActionEvent_116();
	void InpActEvt_RunToggle_K2Node_InputActionEvent_115();
	void InpActEvt_Jump_K2Node_InputActionEvent_114();
	void Server_StartSeeking();
	void Server_StopSeeking();
	void Server_NetSetClimberState(unsigned char NewState);
	void SetReadyToClimbAfterDelay(float Delay);
	void CheckUntil_SetAiAttachedToSurface();
	void PlayAttachParticleWhenCloseToSurface();
	void PreventLandingAnimBriefly();
	void CheckOnJumpStateAfterJumpDelay();
	void BP_OnJumpPressed();
	void BP_OnJumpReleased();
	void SyncToServer_RiderViewRotation(const struct FRotator& ViewRotation);
	void SyncToOwningClient_ClimbingVelocity(const struct FVector& climbingVelocity);
	void Server_OnRunPressed();
	void Server_OnRunReleased();
	void Multi_Climber_OnRunPressed();
	void Multi_Climber_OnRunReleased();
	void ClearClimberControlRotationRoll();
	void ClearClimberControlRotationRoll_NextTick();
	void ReceiveBeginPlay();
	void LockClimbingMeshRotationInterpSpeedForDuration(float Duration);
	void Multi_SyncClimberDesiredRotationOnDetach(const struct FRotator& DesiredRotation);
	void InitClimber_NextTick();
	void InitClimber_Now();
	void Multi_OnWallJump(const struct FVector& wallJumpVelocity);
	void Multi_DrawDebug_Line(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FLinearColor& Color, float Duration, float Thickness);
	void Server_OnJumpPresssed();
	void Climber_JumpAfterDelay(float Delay);
	void Multi_HardSetClimberActorRotation(const struct FRotator& NewRotation);
	void Climber_WallJumpAfterDelay(float Delay, const struct FVector& Velocity);
	void Multi_ClimberPlayLandAnim(bool forceSuccess);
	void Client_Jump(bool forceSuccess);
	void Multi_DrawDebug_Sphere(const struct FVector& Center, float Radius, int Segments, const struct FLinearColor& Color, float Duration);
	void Multi_DrawDebug_Box(const struct FVector& Center, const struct FVector& Extent, const struct FLinearColor& Color, const struct FRotator& Rotation, float Duration);
	void Climber_AI_Restart_Seeking_After_Delay();
	void Multi_SoftSetClimberActorRotation(const struct FRotator& NewRotation);
	void Server_SetIsClimberJumping(bool newVal);
	void Client_SetActorLocAndRot(const struct FVector& NewLoc, const struct FRotator& newRot, bool bSoftSet);
	void ExecuteUbergraph_Dino_Character_BP_Climber(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
