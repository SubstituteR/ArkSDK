#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicRaptor_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BionicRaptor_Character_BP.BionicRaptor_Character_BP_C
// 0x0000 (0x24C9 - 0x24C9)
class ABionicRaptor_Character_BP_C : public ARaptor_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BionicRaptor_Character_BP.BionicRaptor_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BionicRaptor_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
