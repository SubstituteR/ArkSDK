#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Salmon_Character_BP_IceFishMission_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Salmon_Character_BP_IceFishMission.Salmon_Character_BP_IceFishMission_C
// 0x0000 (0x2110 - 0x2110)
class ASalmon_Character_BP_IceFishMission_C : public ASalmon_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Salmon_Character_BP_IceFishMission.Salmon_Character_BP_IceFishMission_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Salmon_Character_BP_IceFishMission(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
