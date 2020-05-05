#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BogSpider_Character_BP_Race_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BogSpider_Character_BP_Race.BogSpider_Character_BP_Race_C
// 0x0000 (0x4487 - 0x4487)
class ABogSpider_Character_BP_Race_C : public ABogSpider_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BogSpider_Character_BP_Race.BogSpider_Character_BP_Race_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BogSpider_Character_BP_Race(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
