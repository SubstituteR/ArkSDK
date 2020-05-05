#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicPara_Character_BP_Malfunctioned_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BionicPara_Character_BP_Malfunctioned_Gauntlet.BionicPara_Character_BP_Malfunctioned_Gauntlet_C
// 0x000E (0x2320 - 0x2312)
class ABionicPara_Character_BP_Malfunctioned_Gauntlet_C : public ABionicPara_Character_BP_Malfunctioned_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x2312(0x0006) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_GauntletDino_C* DinoCharacterStatus_BP_GauntletDino_C1;                   // 0x2318(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BionicPara_Character_BP_Malfunctioned_Gauntlet.BionicPara_Character_BP_Malfunctioned_Gauntlet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BionicPara_Character_BP_Malfunctioned_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
