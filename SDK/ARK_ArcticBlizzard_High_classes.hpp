#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ArcticBlizzard_High_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArcticBlizzard_High.ArcticBlizzard_High_C
// 0x0000 (0x0930 - 0x0930)
class AArcticBlizzard_High_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArcticBlizzard_High.ArcticBlizzard_High_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ArcticBlizzard_High(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
