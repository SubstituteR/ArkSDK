#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Piranha_Character_BP_IceFishMission_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Piranha_Character_BP_IceFishMission.Piranha_Character_BP_IceFishMission_C
// 0x0000 (0x2110 - 0x2110)
class APiranha_Character_BP_IceFishMission_C : public APiranha_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Piranha_Character_BP_IceFishMission.Piranha_Character_BP_IceFishMission_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Piranha_Character_BP_IceFishMission(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
