#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Race_HoverSkiff_Easy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_Race_HoverSkiff_Easy.MissionType_Race_HoverSkiff_Easy_C
// 0x0000 (0x2610 - 0x2610)
class AMissionType_Race_HoverSkiff_Easy_C : public AMissionType_Race_HoverSkiff_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_Race_HoverSkiff_Easy.MissionType_Race_HoverSkiff_Easy_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_Race_HoverSkiff_Easy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
