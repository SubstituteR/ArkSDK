#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Purlovia_Character_BP_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Purlovia_Character_BP_Gauntlet.Purlovia_Character_BP_Gauntlet_C
// 0x0008 (0x2900 - 0x28F8)
class APurlovia_Character_BP_Gauntlet_C : public APurlovia_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_GauntletDino_C* DinoCharacterStatus_BP_GauntletDino_C1;                   // 0x28F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Purlovia_Character_BP_Gauntlet.Purlovia_Character_BP_Gauntlet_C");
		return ptr;
	}


	void ShouldComeOut(bool* comeOut);
	void UserConstructionScript();
	void ExecuteUbergraph_Purlovia_Character_BP_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
