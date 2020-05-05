#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Wyvern_Character_BP_Lightning_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Wyvern_Character_BP_Lightning_Gauntlet.Wyvern_Character_BP_Lightning_Gauntlet_C
// 0x000C (0x2258 - 0x224C)
class AWyvern_Character_BP_Lightning_Gauntlet_C : public AWyvern_Character_BP_Lightning_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x224C(0x0004) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_GauntletDino_C* DinoCharacterStatus_BP_GauntletDino_C1;                   // 0x2250(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Wyvern_Character_BP_Lightning_Gauntlet.Wyvern_Character_BP_Lightning_Gauntlet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Wyvern_Character_BP_Lightning_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
