#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Sarco_Character_BP_Retrieve_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Sarco_Character_BP_Retrieve.Sarco_Character_BP_Retrieve_C
// 0x0000 (0x25EF - 0x25EF)
class ASarco_Character_BP_Retrieve_C : public ASarco_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sarco_Character_BP_Retrieve.Sarco_Character_BP_Retrieve_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Sarco_Character_BP_Retrieve(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
