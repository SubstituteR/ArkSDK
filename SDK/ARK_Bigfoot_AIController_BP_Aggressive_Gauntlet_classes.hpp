#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Bigfoot_AIController_BP_Aggressive_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bigfoot_AIController_BP_Aggressive_Gauntlet.Bigfoot_AIController_BP_Aggressive_Gauntlet_C
// 0x0000 (0x0911 - 0x0911)
class ABigfoot_AIController_BP_Aggressive_Gauntlet_C : public ABigfoot_AIController_BP_Aggressive_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bigfoot_AIController_BP_Aggressive_Gauntlet.Bigfoot_AIController_BP_Aggressive_Gauntlet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Bigfoot_AIController_BP_Aggressive_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
