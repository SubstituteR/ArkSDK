#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicRex_Character_BP_Malfunctioned_Adolescent_Hunt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BionicRex_Character_BP_Malfunctioned_Adolescent_Hunt.BionicRex_Character_BP_Malfunctioned_Adolescent_Hunt_C
// 0x0000 (0x21E4 - 0x21E4)
class ABionicRex_Character_BP_Malfunctioned_Adolescent_Hunt_C : public ABionicRex_Character_BP_Malfunctioned_Adolescent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BionicRex_Character_BP_Malfunctioned_Adolescent_Hunt.BionicRex_Character_BP_Malfunctioned_Adolescent_Hunt_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BionicRex_Character_BP_Malfunctioned_Adolescent_Hunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
