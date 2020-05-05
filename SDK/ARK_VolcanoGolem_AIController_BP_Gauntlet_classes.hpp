#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VolcanoGolem_AIController_BP_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VolcanoGolem_AIController_BP_Gauntlet.VolcanoGolem_AIController_BP_Gauntlet_C
// 0x0000 (0x0911 - 0x0911)
class AVolcanoGolem_AIController_BP_Gauntlet_C : public ARockGolem_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VolcanoGolem_AIController_BP_Gauntlet.VolcanoGolem_AIController_BP_Gauntlet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_VolcanoGolem_AIController_BP_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
