#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Xenomorph_Female_AIController_BP_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Xenomorph_Female_AIController_BP_Gauntlet.Xenomorph_Female_AIController_BP_Gauntlet_C
// 0x0000 (0x0932 - 0x0932)
class AXenomorph_Female_AIController_BP_Gauntlet_C : public AXenomorph_Female_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Xenomorph_Female_AIController_BP_Gauntlet.Xenomorph_Female_AIController_BP_Gauntlet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Xenomorph_Female_AIController_BP_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
