#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicRaptor_Character_BP_Malfunctioned_Retrieve_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BionicRaptor_Character_BP_Malfunctioned_Retrieve.BionicRaptor_Character_BP_Malfunctioned_Retrieve_C
// 0x0000 (0x24E2 - 0x24E2)
class ABionicRaptor_Character_BP_Malfunctioned_Retrieve_C : public ABionicRaptor_Character_BP_Malfunctioned_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BionicRaptor_Character_BP_Malfunctioned_Retrieve.BionicRaptor_Character_BP_Malfunctioned_Retrieve_C");
		return ptr;
	}


	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void UserConstructionScript();
	void ExecuteUbergraph_BionicRaptor_Character_BP_Malfunctioned_Retrieve(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
