#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Direwolf_AIController_BP_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Direwolf_AIController_BP_Gauntlet.Direwolf_AIController_BP_Gauntlet_C
// 0x0000 (0x0911 - 0x0911)
class ADirewolf_AIController_BP_Gauntlet_C : public ADirewolf_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Direwolf_AIController_BP_Gauntlet.Direwolf_AIController_BP_Gauntlet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Direwolf_AIController_BP_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
