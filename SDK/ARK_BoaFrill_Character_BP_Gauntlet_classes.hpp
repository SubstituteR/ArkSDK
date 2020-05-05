#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BoaFrill_Character_BP_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BoaFrill_Character_BP_Gauntlet.BoaFrill_Character_BP_Gauntlet_C
// 0x000C (0x22E0 - 0x22D4)
class ABoaFrill_Character_BP_Gauntlet_C : public ABoaFrill_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x22D4(0x0004) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_GauntletDino_C* DinoCharacterStatus_BP_GauntletDino_C1;                   // 0x22D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BoaFrill_Character_BP_Gauntlet.BoaFrill_Character_BP_Gauntlet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BoaFrill_Character_BP_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
