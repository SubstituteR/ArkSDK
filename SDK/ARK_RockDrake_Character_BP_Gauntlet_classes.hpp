#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_RockDrake_Character_BP_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RockDrake_Character_BP_Gauntlet.RockDrake_Character_BP_Gauntlet_C
// 0x0008 (0x3800 - 0x37F8)
class ARockDrake_Character_BP_Gauntlet_C : public ARockDrake_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_GauntletDino_C* DinoCharacterStatus_BP_GauntletDino_C1;                   // 0x37F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RockDrake_Character_BP_Gauntlet.RockDrake_Character_BP_Gauntlet_C");
		return ptr;
	}


	void Can_Use_Camo(bool* isForStart, bool* Result);
	void UserConstructionScript();
	void ExecuteUbergraph_RockDrake_Character_BP_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
