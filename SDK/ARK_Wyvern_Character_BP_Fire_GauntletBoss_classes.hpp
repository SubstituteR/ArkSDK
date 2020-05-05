#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Wyvern_Character_BP_Fire_GauntletBoss_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Wyvern_Character_BP_Fire_GauntletBoss.Wyvern_Character_BP_Fire_GauntletBoss_C
// 0x0008 (0x2248 - 0x2240)
class AWyvern_Character_BP_Fire_GauntletBoss_C : public AWyvern_Character_BP_Fire_C
{
public:
	class UDinoCharacterStatusComponent_BP_DragonBoss_Gauntlet_C* DinoCharacterStatus_BP_DragonBoss_Gauntlet_C1;            // 0x2240(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Wyvern_Character_BP_Fire_GauntletBoss.Wyvern_Character_BP_Fire_GauntletBoss_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Wyvern_Character_BP_Fire_GauntletBoss(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
