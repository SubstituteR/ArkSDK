#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Trike_AIController_BP_Aggressive_Gauntlet_Lunar_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Trike_AIController_BP_Aggressive_Gauntlet_Lunar.Trike_AIController_BP_Aggressive_Gauntlet_Lunar_C
// 0x0000 (0x0911 - 0x0911)
class ATrike_AIController_BP_Aggressive_Gauntlet_Lunar_C : public ATrike_AIController_BP_Aggressive_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trike_AIController_BP_Aggressive_Gauntlet_Lunar.Trike_AIController_BP_Aggressive_Gauntlet_Lunar_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Trike_AIController_BP_Aggressive_Gauntlet_Lunar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
