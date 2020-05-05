#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicRex_Character_BP_Malfunctioned_Adolescent_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BionicRex_Character_BP_Malfunctioned_Adolescent.BionicRex_Character_BP_Malfunctioned_Adolescent_C
// 0x0002 (0x21E4 - 0x21E2)
class ABionicRex_Character_BP_Malfunctioned_Adolescent_C : public ABionicRex_Character_BP_Malfunctioned_C
{
public:
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x21E2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x21E3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BionicRex_Character_BP_Malfunctioned_Adolescent.BionicRex_Character_BP_Malfunctioned_Adolescent_C");
		return ptr;
	}


	float BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BionicRex_Character_BP_Malfunctioned_Adolescent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
