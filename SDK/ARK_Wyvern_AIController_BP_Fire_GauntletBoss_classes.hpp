#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Wyvern_AIController_BP_Fire_GauntletBoss_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Wyvern_AIController_BP_Fire_GauntletBoss.Wyvern_AIController_BP_Fire_GauntletBoss_C
// 0x0000 (0x0911 - 0x0911)
class AWyvern_AIController_BP_Fire_GauntletBoss_C : public AWyvern_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Wyvern_AIController_BP_Fire_GauntletBoss.Wyvern_AIController_BP_Fire_GauntletBoss_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Wyvern_AIController_BP_Fire_GauntletBoss(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
