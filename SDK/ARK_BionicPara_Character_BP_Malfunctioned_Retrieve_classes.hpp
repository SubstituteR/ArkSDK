#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicPara_Character_BP_Malfunctioned_Retrieve_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BionicPara_Character_BP_Malfunctioned_Retrieve.BionicPara_Character_BP_Malfunctioned_Retrieve_C
// 0x0000 (0x2312 - 0x2312)
class ABionicPara_Character_BP_Malfunctioned_Retrieve_C : public ABionicPara_Character_BP_Malfunctioned_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BionicPara_Character_BP_Malfunctioned_Retrieve.BionicPara_Character_BP_Malfunctioned_Retrieve_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BionicPara_Character_BP_Malfunctioned_Retrieve(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
