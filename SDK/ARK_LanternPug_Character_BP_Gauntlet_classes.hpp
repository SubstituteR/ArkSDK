#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_LanternPug_Character_BP_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LanternPug_Character_BP_Gauntlet.LanternPug_Character_BP_Gauntlet_C
// 0x0008 (0x2448 - 0x2440)
class ALanternPug_Character_BP_Gauntlet_C : public ALanternPug_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_GauntletDino_C* DinoCharacterStatus_BP_GauntletDino_C1;                   // 0x2440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LanternPug_Character_BP_Gauntlet.LanternPug_Character_BP_Gauntlet_C");
		return ptr;
	}


	void CreateChargeManager();
	void UserConstructionScript();
	void ExecuteUbergraph_LanternPug_Character_BP_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
