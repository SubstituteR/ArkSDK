#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_StartingNote_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_StartingNote.PrimalItem_StartingNote_C
// 0x0098 (0x0A48 - 0x09B0)
class UPrimalItem_StartingNote_C : public UPrimalItem_Note_C
{
public:
	TArray<class UTexture2D*>                          AscensionIcons;                                           // 0x09B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      LocalCustomItemDesc;                                      // 0x09C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              DifficultyStrings;                                        // 0x09D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              BossStrings;                                              // 0x09E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FArrayOfStrings>                     BossPostStrings;                                          // 0x09F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UTexture2D*                                  LocalItemIcon;                                            // 0x0A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UTexture2D*>                          LocalAscensionIcons;                                      // 0x0A08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UTexture2D*>                          SecondaryAscensionIcons;                                  // 0x0A18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UTexture2D*                                  SecondaryIcon;                                            // 0x0A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UTexture2D*>                          TertiaryAscensionIcons;                                   // 0x0A30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UTexture2D*                                  TertiaryIcon;                                             // 0x0A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_StartingNote.PrimalItem_StartingNote_C");
		return ptr;
	}


	void BPDrawItemIcon(class UCanvas** ItemCanvas, bool* bItemEnabled, struct FVector2D* ItemCanvasSize, struct FVector2D* ItemCanvasScale, struct FLinearColor* TheTintColor);
	class UTexture2D* BPGetItemIcon(class AShooterPlayerController** ForPC);
	void IsLocalImplant(class AShooterPlayerController* ForPC, bool* IsLocal);
	class FString BPGetItemName(class FString* ItemNameIn, class AShooterPlayerController** ForPC);
	void Get_Survival_Quotient_String(TArray<float>* SurvData, class FString* OutString);
	class FString BPGetItemDescription(class FString* InDescription, bool* bGetLongDescription, class AShooterPlayerController** ForPC);
	void BPPreInitializeItem(class UWorld** OptionalInitWorld);
	void ExecuteUbergraph_PrimalItem_StartingNote(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
