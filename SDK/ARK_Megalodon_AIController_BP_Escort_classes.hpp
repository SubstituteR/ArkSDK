#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Megalodon_AIController_BP_Escort_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Megalodon_AIController_BP_Escort.Megalodon_AIController_BP_Escort_C
// 0x0000 (0x0911 - 0x0911)
class AMegalodon_AIController_BP_Escort_C : public AMegalodon_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Megalodon_AIController_BP_Escort.Megalodon_AIController_BP_Escort_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Megalodon_AIController_BP_Escort(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
