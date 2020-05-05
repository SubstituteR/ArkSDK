#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Shapeshifter_Large_Character_BP_Hunt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Shapeshifter_Large_Character_BP_Hunt.Shapeshifter_Large_Character_BP_Hunt_C
// 0x0008 (0x4978 - 0x4970)
class AShapeshifter_Large_Character_BP_Hunt_C : public AShapeshifter_Large_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Shapeshifter_Hunt_C* DinoCharacterStatus_BP_Shapeshifter_Hunt_C1;              // 0x4970(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Shapeshifter_Large_Character_BP_Hunt.Shapeshifter_Large_Character_BP_Hunt_C");
		return ptr;
	}


	void ThrowRock();
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void Initialize();
	class FString BPOverrideTamingDescriptionLabel(struct FSlateColor* TextColor);
	void UserConstructionScript();
	void ExecuteUbergraph_Shapeshifter_Large_Character_BP_Hunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
