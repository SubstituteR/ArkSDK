#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Escort_Volcano_Para_Easy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_Escort_Volcano_Para_Easy.MissionType_Escort_Volcano_Para_Easy_C
// 0x0000 (0x1F09 - 0x1F09)
class AMissionType_Escort_Volcano_Para_Easy_C : public AMissionType_Escort_Volcano_Para_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_Escort_Volcano_Para_Easy.MissionType_Escort_Volcano_Para_Easy_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_Escort_Volcano_Para_Easy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
