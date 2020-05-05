#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Quetz_AIController_BP_Aggressive_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Quetz_AIController_BP_Aggressive_Gauntlet.Quetz_AIController_BP_Aggressive_Gauntlet_C
// 0x0000 (0x0911 - 0x0911)
class AQuetz_AIController_BP_Aggressive_Gauntlet_C : public AQuetz_AIController_BP_Aggressive_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quetz_AIController_BP_Aggressive_Gauntlet.Quetz_AIController_BP_Aggressive_Gauntlet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Quetz_AIController_BP_Aggressive_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
