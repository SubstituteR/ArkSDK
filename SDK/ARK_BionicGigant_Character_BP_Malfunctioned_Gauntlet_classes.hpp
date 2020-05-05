#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicGigant_Character_BP_Malfunctioned_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BionicGigant_Character_BP_Malfunctioned_Gauntlet.BionicGigant_Character_BP_Malfunctioned_Gauntlet_C
// 0x000E (0x2138 - 0x212A)
class ABionicGigant_Character_BP_Malfunctioned_Gauntlet_C : public ABionicGigant_Character_BP_Malfunctioned_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x212A(0x0006) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_Gigant_Gauntlet_C* DinoCharacterStatus_BP_Gigant_Gauntlet_C1;                // 0x2130(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BionicGigant_Character_BP_Malfunctioned_Gauntlet.BionicGigant_Character_BP_Malfunctioned_Gauntlet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BionicGigant_Character_BP_Malfunctioned_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
