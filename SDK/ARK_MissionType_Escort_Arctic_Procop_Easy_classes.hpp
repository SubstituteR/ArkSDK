#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Escort_Arctic_Procop_Easy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_Escort_Arctic_Procop_Easy.MissionType_Escort_Arctic_Procop_Easy_C
// 0x0000 (0x1B4C - 0x1B4C)
class AMissionType_Escort_Arctic_Procop_Easy_C : public AMissionType_Escort_Arctic_Procop_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_Escort_Arctic_Procop_Easy.MissionType_Escort_Arctic_Procop_Easy_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_Escort_Arctic_Procop_Easy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
