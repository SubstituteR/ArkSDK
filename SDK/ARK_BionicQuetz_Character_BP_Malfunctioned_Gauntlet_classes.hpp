#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicQuetz_Character_BP_Malfunctioned_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BionicQuetz_Character_BP_Malfunctioned_Gauntlet.BionicQuetz_Character_BP_Malfunctioned_Gauntlet_C
// 0x000E (0x2138 - 0x212A)
class ABionicQuetz_Character_BP_Malfunctioned_Gauntlet_C : public ABionicQuetz_Character_BP_Malfunctioned_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x212A(0x0006) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_GauntletDino_C* DinoCharacterStatus_BP_GauntletDino_C1;                   // 0x2130(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BionicQuetz_Character_BP_Malfunctioned_Gauntlet.BionicQuetz_Character_BP_Malfunctioned_Gauntlet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BionicQuetz_Character_BP_Malfunctioned_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
