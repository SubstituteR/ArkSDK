#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicTrike_Character_BP_Malfunctioned_Retrieve_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BionicTrike_Character_BP_Malfunctioned_Retrieve.BionicTrike_Character_BP_Malfunctioned_Retrieve_C
// 0x0000 (0x283A - 0x283A)
class ABionicTrike_Character_BP_Malfunctioned_Retrieve_C : public ABionicTrike_Character_BP_Malfunctioned_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BionicTrike_Character_BP_Malfunctioned_Retrieve.BionicTrike_Character_BP_Malfunctioned_Retrieve_C");
		return ptr;
	}


	void DoRamImpact(bool* HitSomething);
	void UserConstructionScript();
	void ExecuteUbergraph_BionicTrike_Character_BP_Malfunctioned_Retrieve(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
