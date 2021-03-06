#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_WeaponEmptyCryopod_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C
// 0x00E8 (0x0A98 - 0x09B0)
class UPrimalItem_WeaponEmptyCryopod_C : public UPrimalItemWeaponGenericAmmolessConsumeSelf_C
{
public:
	struct FScriptMulticastDelegate                    NewEventDispatcher;                                       // 0x09B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              DecayingDurability;                                       // 0x09C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x09C4(0x0004) MISSED OFFSET
	struct FCustomItemData                             CallFunc_GetCustomItemData_OutData;                       // 0x09C8(0x0078) (Transient, DuplicateTransient)
	bool                                               CallFunc_GetCustomItemData_ReturnValue;                   // 0x0A40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0A41(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwner_ReturnValue;                            // 0x0A48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0A50(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_TryDeploy_Deployed;                              // 0x0A5C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0A5D(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_TryDeploy_NewLocation;                           // 0x0A60(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0A6C(0x0004) MISSED OFFSET
	class FString                                      CallFunc_TryDeploy_FailureReason;                         // 0x0A70(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       CallFunc_Array_Contains_ItemToFind_RefProperty;           // 0x0A80(0x0008) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	struct FName                                       CallFunc_Array_Contains_ItemToFind2_RefProperty;          // 0x0A88(0x0008) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	double                                             CallFunc_Array_Add_NewItem_RefProperty;                   // 0x0A90(0x0008) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C");
		return ptr;
	}


	void Get_Stat_Value_for_Display(float MaxValue, TEnumAsByte<EPrimalCharacterStatusValue> Stat, float Value, struct FText* Result);
	void GetStatDisplayName(TEnumAsByte<EPrimalCharacterStatusValue> Stat, struct FText* DisplayName);
	class FString BPGetItemDescription(class FString* InDescription, bool* bGetLongDescription, class AShooterPlayerController** ForPC);
	void STATIC_BPInitIconMaterial();
	class UMaterialInterface* BPGetCustomIconMaterialParent();
	void STATIC_BPTributeItemUploaded(class UObject** ContextObject);
	void STATIC_BPTributeItemDownloaded(class UObject** ContextObject);
	void BPItemBelowDurabilityThreshold();
	struct FColor BPGetCustomInventoryWidgetTextColor();
	class FString BPGetCustomDurabilityText();
	float BPGetCustomAutoDecreaseDurabilityPerInterval();
	class FString BPGetCustomInventoryWidgetText();
	void BPItemBroken();
	void STATIC_TryDeploy(const struct FVector& Location, const struct FRotator& Rotation, class AActor* SpawningActor, class AActor* IgnoreActor, bool* Deployed, struct FVector* NewLocation, class FString* FailureReason);
	void STATIC_CanFit(const struct FVector& Location, float VerticalOffset, float Angle, float HorizontalOffset, float Radius, float HalfHeight, class AActor* SpawningActor, class AActor* IgnoreActor, bool* Can, struct FVector* NewLocation);
	void CanDeploy(class UClass* Class, const struct FVector& Location, class AActor* SpawningActor, class AActor* IgnoreActor, bool* Can, struct FVector* NewLocation, class FString* FailureReason);
	class FString BPGetItemName(class FString* ItemNameIn, class AShooterPlayerController** ForPC);
	void BrokenDeploy();
	void ExecuteUbergraph_PrimalItem_WeaponEmptyCryopod(int EntryPoint);
	void NewEventDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
