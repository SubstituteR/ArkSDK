#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalStructure_GiveRetrieveItem_OnDestruction_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalStructure_GiveRetrieveItem_OnDestruction.PrimalStructure_GiveRetrieveItem_OnDestruction_C
// 0x0000 (0x0AF4 - 0x0AF4)
class APrimalStructure_GiveRetrieveItem_OnDestruction_C : public APrimalStructure_GiveRetrieveItem_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalStructure_GiveRetrieveItem_OnDestruction.PrimalStructure_GiveRetrieveItem_OnDestruction_C");
		return ptr;
	}


	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void BPPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent);
	void UserConstructionScript();
	void ExecuteUbergraph_PrimalStructure_GiveRetrieveItem_OnDestruction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
