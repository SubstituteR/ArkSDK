#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ArcticBlizzard_Low_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArcticBlizzard_Low.ArcticBlizzard_Low_C
// 0x0000 (0x0930 - 0x0930)
class AArcticBlizzard_Low_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArcticBlizzard_Low.ArcticBlizzard_Low_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ArcticBlizzard_Low(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
