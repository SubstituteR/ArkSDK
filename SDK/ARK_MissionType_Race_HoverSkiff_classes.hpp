#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Race_HoverSkiff_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_Race_HoverSkiff.MissionType_Race_HoverSkiff_C
// 0x0000 (0x2610 - 0x2610)
class AMissionType_Race_HoverSkiff_C : public AMissionType_Race_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_Race_HoverSkiff.MissionType_Race_HoverSkiff_C");
		return ptr;
	}


	void OnMissionPhaseStarted(struct FName* OldPhase, struct FName* NewPhase);
	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_Race_HoverSkiff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
