#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Shapeshifter_Large_Character_BP_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Shapeshifter_Large_Character_BP_Gauntlet.Shapeshifter_Large_Character_BP_Gauntlet_C
// 0x0000 (0x4970 - 0x4970)
class AShapeshifter_Large_Character_BP_Gauntlet_C : public AShapeshifter_Large_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Shapeshifter_Large_Character_BP_Gauntlet.Shapeshifter_Large_Character_BP_Gauntlet_C");
		return ptr;
	}


	class FString BPOverrideTamingDescriptionLabel(struct FSlateColor* TextColor);
	void Initialize();
	void UserConstructionScript();
	void AnimNotify_ChargingMeleeStart();
	void ExecuteUbergraph_Shapeshifter_Large_Character_BP_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
