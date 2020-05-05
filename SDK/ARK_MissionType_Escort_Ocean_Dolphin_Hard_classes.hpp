#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Escort_Ocean_Dolphin_Hard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_Escort_Ocean_Dolphin_Hard.MissionType_Escort_Ocean_Dolphin_Hard_C
// 0x0000 (0x1ADE - 0x1ADE)
class AMissionType_Escort_Ocean_Dolphin_Hard_C : public AMissionType_Escort_Ocean_Dolphin_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_Escort_Ocean_Dolphin_Hard.MissionType_Escort_Ocean_Dolphin_Hard_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_Escort_Ocean_Dolphin_Hard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
