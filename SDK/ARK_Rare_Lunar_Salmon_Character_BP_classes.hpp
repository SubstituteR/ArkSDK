#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Rare_Lunar_Salmon_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Rare_Lunar_Salmon_Character_BP.Rare_Lunar_Salmon_Character_BP_C
// 0x0000 (0x2110 - 0x2110)
class ARare_Lunar_Salmon_Character_BP_C : public ALunar_Salmon_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Rare_Lunar_Salmon_Character_BP.Rare_Lunar_Salmon_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Rare_Lunar_Salmon_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
