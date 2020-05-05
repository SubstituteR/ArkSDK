#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalStructure_GiveRetrieveItem_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalStructure_GiveRetrieveItem.PrimalStructure_GiveRetrieveItem_C
// 0x0044 (0x0AF4 - 0x0AB0)
class APrimalStructure_GiveRetrieveItem_C : public APrimalStructure
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0AB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      SearchItemUseString;                                      // 0x0AB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             DestructionFX;                                            // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DestructionFXScale;                                       // 0x0AD0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0ADC(0x0004) MISSED OFFSET
	class USoundBase*                                  MultiuseActivationSound;                                  // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DestructionFXOffset;                                      // 0x0AE8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalStructure_GiveRetrieveItem.PrimalStructure_GiveRetrieveItem_C");
		return ptr;
	}


	void SpawnItemOrDino();
	struct FVector BPOverrideUILocation(class APlayerController** ForPC);
	void ReceiveDestroyed();
	void BPOnDemolish(class APlayerController** ForPC, class AActor** DamageCauser);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void UserConstructionScript();
	void ExecuteUbergraph_PrimalStructure_GiveRetrieveItem(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
