#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionTrigger_RaceCheckpoint_Finish_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionTrigger_RaceCheckpoint_Finish.MissionTrigger_RaceCheckpoint_Finish_C
// 0x0000 (0x0978 - 0x0978)
class AMissionTrigger_RaceCheckpoint_Finish_C : public AMissionTrigger_RaceCheckpoint_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionTrigger_RaceCheckpoint_Finish.MissionTrigger_RaceCheckpoint_Finish_C");
		return ptr;
	}


	void OnCheckpointHit();
	void InitCheckpoint();
	void UserConstructionScript();
	void ExecuteUbergraph_MissionTrigger_RaceCheckpoint_Finish(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
