#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Bot_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bot_Character_BP.Bot_Character_BP_C
// 0x0038 (0x21E8 - 0x21B0)
class ABot_Character_BP_C : public APrimalBotCharacter
{
public:
	class UDinoCharacterStatusComponent_BP_Bot_C*      DinoCharacterStatus_BP_Bot_C1;                            // 0x21B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StasisComponent;                                          // 0x21B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        TauntMontages;                                            // 0x21C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        AlternateTauntMontages;                                   // 0x21D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundBase*                                  BotDeathSound;                                            // 0x21E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bot_Character_BP.Bot_Character_BP_C");
		return ptr;
	}


	void BPPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent);
	void BP_OnSetDeath();
	void PlayRandomTauntMontageFn(float* MontageDuration);
	int BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray);
	void ReceivePossessed(class AController** NewController);
	void GetMeleeSocketLocation(const struct FName& SocketName, struct FVector* SocketLocation);
	void UserConstructionScript();
	void ExecuteUbergraph_Bot_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
