#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicRex_Character_BP_Malfunctioned_Hunt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BionicRex_Character_BP_Malfunctioned_Hunt.BionicRex_Character_BP_Malfunctioned_Hunt_C
// 0x000E (0x21F0 - 0x21E2)
class ABionicRex_Character_BP_Malfunctioned_Hunt_C : public ABionicRex_Character_BP_Malfunctioned_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x21E2(0x0006) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_Rex_Hunt_C* DinoCharacterStatus_BP_Rex_Hunt_C1;                       // 0x21E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BionicRex_Character_BP_Malfunctioned_Hunt.BionicRex_Character_BP_Malfunctioned_Hunt_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BionicRex_Character_BP_Malfunctioned_Hunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
