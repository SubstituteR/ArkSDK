#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Dino_Character_BP_Ramming_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C
// 0x042C (0x2534 - 0x2108)
class ADino_Character_BP_Ramming_C : public ADino_Character_BP_C
{
public:
	class USphereComponent*                            RamOverlapComponent;                                      // 0x2108(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsRamBuildup;                                             // 0x2110(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x2111(0x0007) MISSED OFFSET
	double                                             RamBuildupStartTime;                                      // 0x2118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RamMinAIBuildupTime;                                      // 0x2120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RamMinBuildupTime;                                        // 0x2124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RamMaxBuildupTime;                                        // 0x2128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RamHitRadius;                                             // 0x212C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BuffToApplyOnRamHit;                                      // 0x2130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RamOverlapComponentLocation;                              // 0x2138(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RamOverlapComponentRadius;                                // 0x2144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SmallDinoShoveDamage;                                     // 0x2148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RamStaminaPerSecondDrain;                                 // 0x214C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RamStarted;                                               // 0x2150(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2151(0x0003) MISSED OFFSET
	float                                              RamDuration;                                              // 0x2154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             RamStartTime;                                             // 0x2158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastRamTraceTime;                                         // 0x2160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RamHitSomething;                                          // 0x2168(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x2169(0x0007) MISSED OFFSET
	double                                             LastHitTraceCheckTime;                                    // 0x2170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RamDamageDone;                                            // 0x2178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RamDamageImpulse;                                         // 0x217C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DoWaterChecksInTick;                                      // 0x2180(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x2181(0x0007) MISSED OFFSET
	TArray<class APrimalCharacter*>                    ShovedSmallDinos;                                         // 0x2188(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector                                     RamBuildupStartWorldLocation;                             // 0x2198(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RamHitImpulseScaler;                                      // 0x21A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RamHitImpulseHorizontalToVerticalRatio;                   // 0x21A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SmallDinoShoveMassThreshold;                              // 0x21AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastRammingCollisionCheckTime;                            // 0x21B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RamingCollisionCheckTimeInterval;                         // 0x21B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentRammingStructureDamage;                            // 0x21BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RammingMinStructureBaseDamage;                            // 0x21C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RammingMaxStructureBaseDamage;                            // 0x21C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              ClassesUsedForDurabilityMultipliersForStructureSettings;  // 0x21C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      DurabilityMultiplierForStructureSettings;                 // 0x21D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      RammingDamageType;                                        // 0x21E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      RammingFoliageDamageType;                                 // 0x21F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RammingStructureDamageMultiplierAI;                       // 0x21F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x21FC(0x0004) MISSED OFFSET
	class UClass*                                      RammingStructuresDamageType;                              // 0x2200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x2208(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Conv_RotatorToVector_ReturnValue;                // 0x2214(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorVector_ReturnValue;               // 0x2220(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Duration;                              // 0x222C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x2230(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x2231(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_HitSomething4;                         // 0x2232(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_HitSomething3;                         // 0x2233(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_HitSomething2;                         // 0x2234(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x2235(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x2236(0x0002) MISSED OFFSET
	class APhysicsVolume*                              K2Node_ComponentBoundEvent_NewVolume;                     // 0x2238(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x2240(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue4;                           // 0x2241(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x2242(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x5];                                       // 0x2243(0x0005) MISSED OFFSET
	class AActor*                                      K2Node_CustomEvent_OtherActor;                            // 0x2248(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_CustomEvent_OtherComp;                             // 0x2250(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_OtherBodyIndex;                        // 0x2258(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bFromSweep;                            // 0x225C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x225D(0x0003) MISSED OFFSET
	struct FHitResult                                  K2Node_CustomEvent_SweepResult;                           // 0x2260(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x22E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAlliedWithOtherTeam_ReturnValue;               // 0x22E9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x6];                                       // 0x22EA(0x0006) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x22F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x22F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x22F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x22FA(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x22FC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x2308(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x2314(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x2315(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue2;                // 0x2318(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x2324(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              K2Node_MakeArray_Array;                                   // 0x2328(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     CallFunc_Conv_RotatorToVector_ReturnValue2;               // 0x2338(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x2344(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x2350(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x2358(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x2364(0x0004) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingleForObjects_ActorsToIgnore_RefProperty;// 0x2368(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	struct FHitResult                                  CallFunc_LineTraceSingleForObjects_OutHit;                // 0x2378(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_LineTraceSingleForObjects_ReturnValue;           // 0x2400(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x2401(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x2408(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue;                         // 0x2410(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x2411(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x2412(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue2;              // 0x2413(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_Contains_ReturnValue;                      // 0x2414(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x2415(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x2416(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x1];                                       // 0x2417(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue3;                // 0x2418(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Add_ReturnValue;                           // 0x2424(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x2428(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue;               // 0x2434(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x2440(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x244C(0x0004) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x2450(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Cross_VectorVector_ReturnValue;                  // 0x2458(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorUpVector_ReturnValue;                    // 0x2464(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x2470(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_HitSomething;                          // 0x2474(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x2475(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x2];                                       // 0x2476(0x0002) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x2478(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x247C(0x0004) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue2;               // 0x2480(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue5;                           // 0x2488(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x2489(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x248A(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_GetActorUpVector_ReturnValue2;                   // 0x248C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetVelocity_ReturnValue;                         // 0x2498(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x24A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x24A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x24AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue2;               // 0x24B0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x24BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x24C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x24C1(0x0007) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue3;               // 0x24C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue6;                           // 0x24D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x24D1(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_BuildUpDuration;                       // 0x24D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x24D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x24D9(0x0003) MISSED OFFSET
	float                                              CallFunc_Calculate_Ram_Duration_Duration;                 // 0x24DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue4;               // 0x24E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x24E8(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     CallFunc_GetActorUpVector_ReturnValue3;                   // 0x24F8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_RotateAngleAxis_ReturnValue;                     // 0x2504(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue2;                             // 0x2510(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue3;               // 0x251C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue2;                   // 0x2528(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C");
		return ptr;
	}


	void STATIC_ToString(const class FString& CallerName, class FString* DebugText);
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	void GetStructureDamageScaled(float CurrentValue, float MinValue, float MaxValue, float VelocityAlpha, float* ScaledDamage);
	void GetRammingSpeedMax(float* MaxSpeed);
	void CanTickStartedRam(bool* Tick);
	void DrainStatusValue(TEnumAsByte<EPrimalCharacterStatusValue> Type, float amount, bool* HasRemainingValue);
	void DoRamImpact(bool* HitSomething);
	void CanStartRamAttack(bool* AllowedToRam);
	void Calculate_Ram_Duration(float HoldTime, float* Duration);
	void ReceiveTick(float* DeltaSeconds);
	void Handle_Ram_Ended(bool HitSomething);
	void Handle_Ram_Started(float RamBuildupTime, float RamDuration);
	void GetRamState(bool* InRamBuildup, float* RamBuildupTime, bool* InRamming);
	void Stop_Ram_Attack_Buildup();
	void Start_Ram_Attack_Buildup();
	void UserConstructionScript();
	void ServerStopRamBuildup();
	void ServerStartRamBuildup();
	void OnRamStarted(float Duration);
	void OnRamEnded();
	void ClientOnRamEnded(bool HitSomething);
	void OnRamEndedEarly(bool HitSomething);
	void Private__RamEnded(bool HitSomething);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_162_PhysicsVolumeChanged__DelegateSignature(class APhysicsVolume* NewVolume);
	void OnComponentBeginOverlap_Event(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult);
	void ServerRequestRamEndEarly(bool HitSomething);
	void ServerCancelRamBuildup();
	void CancelRamBuildup();
	void MultiStartRam(float BuildUpDuration);
	void ExecuteUbergraph_Dino_Character_BP_Ramming(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
