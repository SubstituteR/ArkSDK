#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Megatherium_AIController_BP_Aggressive_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Megatherium_AIController_BP_Aggressive_Gauntlet.Megatherium_AIController_BP_Aggressive_Gauntlet_C
// 0x0000 (0x0918 - 0x0918)
class AMegatherium_AIController_BP_Aggressive_Gauntlet_C : public AMegatherium_AIController_BP_Aggressive_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Megatherium_AIController_BP_Aggressive_Gauntlet.Megatherium_AIController_BP_Aggressive_Gauntlet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Megatherium_AIController_BP_Aggressive_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
