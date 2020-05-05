#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Bear_AIController_BP_Polar_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bear_AIController_BP_Polar_Gauntlet.Bear_AIController_BP_Polar_Gauntlet_C
// 0x0000 (0x0911 - 0x0911)
class ABear_AIController_BP_Polar_Gauntlet_C : public ABear_AIController_BP_Polar_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bear_AIController_BP_Polar_Gauntlet.Bear_AIController_BP_Polar_Gauntlet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Bear_AIController_BP_Polar_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
