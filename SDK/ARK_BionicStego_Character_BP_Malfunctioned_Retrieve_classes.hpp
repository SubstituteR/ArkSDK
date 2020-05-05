#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicStego_Character_BP_Malfunctioned_Retrieve_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BionicStego_Character_BP_Malfunctioned_Retrieve.BionicStego_Character_BP_Malfunctioned_Retrieve_C
// 0x0000 (0x2122 - 0x2122)
class ABionicStego_Character_BP_Malfunctioned_Retrieve_C : public ABionicStego_Character_BP_Malfunctioned_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BionicStego_Character_BP_Malfunctioned_Retrieve.BionicStego_Character_BP_Malfunctioned_Retrieve_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BionicStego_Character_BP_Malfunctioned_Retrieve(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
