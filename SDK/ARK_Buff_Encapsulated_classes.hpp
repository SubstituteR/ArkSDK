#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Encapsulated_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Encapsulated.Buff_Encapsulated_C
// 0x008C (0x0A0C - 0x0980)
class ABuff_Encapsulated_C : public ABuff_FrozenEffect_Base_C
{
public:
	float                                              IceShieldHealthPctOfCharBaseHealth;                       // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IceShieldMinHealth;                                       // 0x0984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PctOfDamageToForwardToOwnerOwl;                           // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AddPercentOfBaseHealthPerSecond;                          // 0x098C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OwlStaminaDrainPerSecond;                                 // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EncapsulatedFallDamageMultiplier;                         // 0x0994(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EncapsulatedGravityScale;                                 // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EncapsulatedDamageMultiplier;                             // 0x099C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaterialLength;                                           // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartedFlying;                                            // 0x09A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartedInAir;                                             // 0x09A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x09A6(0x0002) MISSED OFFSET
	double                                             FallStartTime;                                            // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCollisionResponseSet                       OrigCollisionResponseSet;                                 // 0x09B0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              IceShieldCurrentHealth;                                   // 0x09D0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IceShieldMaxHealth;                                       // 0x09D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OrigGravityScale;                                         // 0x09D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OrigFallDamageMultiplier;                                 // 0x09DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      OrigPoopItemClass;                                        // 0x09E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VelocityAtBuffStart;                                      // 0x09E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DeactivatingSoon;                                         // 0x09F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PreventCameraControlWhileFrozen;                          // 0x09F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x09F6(0x0002) MISSED OFFSET
	float                                              PrevFoodConsumptionMultiplier;                            // 0x09F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPVEEnemyPlayer;                                        // 0x09FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x09FD(0x0003) MISSED OFFSET
	struct FVector                                     StartLocation;                                            // 0x0A00(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Encapsulated.Buff_Encapsulated_C");
		return ptr;
	}


	class UClass* BPOverrideBuffToGiveOnDeactivation();
	bool PreventJump();
	bool CheckPVEEnemy();
	void BuffTickServer(float* DeltaTime);
	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	struct FVector BPAdjustImpulseFromDamage(struct FVector* DesiredImpulse, float* DamageTaken, struct FDamageEvent* TheDamageEvent, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void IsOwnerOwlRider(bool* IsOwlRider);
	void DeactivateSoon(float DelayTime);
	void BPActivated(class AActor** ForInstigator);
	void OnRep_IceShieldCurrentHealth();
	float BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	void STATIC_ApplyDamageToIceShield(float Damage, bool IsRemoteDamage);
	bool Is_Riding_or_Carried_Player(class AActor* Actor);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void FreezeCharacter(class APrimalCharacter* Character, bool Freeze);
	void BPDeactivated(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Encapsulated(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
