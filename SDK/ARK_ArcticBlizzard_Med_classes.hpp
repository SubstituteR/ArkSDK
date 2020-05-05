#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ArcticBlizzard_Med_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArcticBlizzard_Med.ArcticBlizzard_Med_C
// 0x0000 (0x0930 - 0x0930)
class AArcticBlizzard_Med_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArcticBlizzard_Med.ArcticBlizzard_Med_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ArcticBlizzard_Med(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
