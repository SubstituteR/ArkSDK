#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BogSpider_Character_BP_Hunt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BogSpider_Character_BP_Hunt.BogSpider_Character_BP_Hunt_C
// 0x0009 (0x4490 - 0x4487)
class ABogSpider_Character_BP_Hunt_C : public ABogSpider_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x4487(0x0001) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_BogSpider_Hunt_C* DinoCharacterStatus_BP_BogSpider_Hunt_C1;                 // 0x4488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BogSpider_Character_BP_Hunt.BogSpider_Character_BP_Hunt_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BogSpider_Character_BP_Hunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
