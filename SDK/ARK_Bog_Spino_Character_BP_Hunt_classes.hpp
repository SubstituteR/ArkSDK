#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Bog_Spino_Character_BP_Hunt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bog_Spino_Character_BP_Hunt.Bog_Spino_Character_BP_Hunt_C
// 0x000D (0x2300 - 0x22F3)
class ABog_Spino_Character_BP_Hunt_C : public ABog_Spino_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x22F3(0x0005) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_Spino_Hunt_C* DinoCharacterStatus_BP_Spino_Hunt_C1;                     // 0x22F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bog_Spino_Character_BP_Hunt.Bog_Spino_Character_BP_Hunt_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Bog_Spino_Character_BP_Hunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
