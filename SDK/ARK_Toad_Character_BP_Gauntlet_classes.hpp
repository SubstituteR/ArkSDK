#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Toad_Character_BP_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Toad_Character_BP_Gauntlet.Toad_Character_BP_Gauntlet_C
// 0x0008 (0x2118 - 0x2110)
class AToad_Character_BP_Gauntlet_C : public AToad_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_GauntletDino_C* DinoCharacterStatus_BP_GauntletDino_C1;                   // 0x2110(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Toad_Character_BP_Gauntlet.Toad_Character_BP_Gauntlet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Toad_Character_BP_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
