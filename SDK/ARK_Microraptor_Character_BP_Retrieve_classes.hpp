#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Microraptor_Character_BP_Retrieve_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Microraptor_Character_BP_Retrieve.Microraptor_Character_BP_Retrieve_C
// 0x0000 (0x2362 - 0x2362)
class AMicroraptor_Character_BP_Retrieve_C : public AMicroraptor_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Microraptor_Character_BP_Retrieve.Microraptor_Character_BP_Retrieve_C");
		return ptr;
	}


	bool BPCanTargetCorpse();
	void UserConstructionScript();
	void ExecuteUbergraph_Microraptor_Character_BP_Retrieve(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
