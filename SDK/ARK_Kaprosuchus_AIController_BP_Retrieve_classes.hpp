#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Kaprosuchus_AIController_BP_Retrieve_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Kaprosuchus_AIController_BP_Retrieve.Kaprosuchus_AIController_BP_Retrieve_C
// 0x0000 (0x0911 - 0x0911)
class AKaprosuchus_AIController_BP_Retrieve_C : public AKaprosuchus_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Kaprosuchus_AIController_BP_Retrieve.Kaprosuchus_AIController_BP_Retrieve_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Kaprosuchus_AIController_BP_Retrieve(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
