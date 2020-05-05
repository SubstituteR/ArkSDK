#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicStego_Character_BP_Malfunctioned_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BionicStego_Character_BP_Malfunctioned_Gauntlet.BionicStego_Character_BP_Malfunctioned_Gauntlet_C
// 0x000E (0x2130 - 0x2122)
class ABionicStego_Character_BP_Malfunctioned_Gauntlet_C : public ABionicStego_Character_BP_Malfunctioned_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x2122(0x0006) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_GauntletDino_C* DinoCharacterStatus_BP_GauntletDino_C1;                   // 0x2128(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BionicStego_Character_BP_Malfunctioned_Gauntlet.BionicStego_Character_BP_Malfunctioned_Gauntlet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BionicStego_Character_BP_Malfunctioned_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
