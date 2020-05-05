#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionDispatcher_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionDispatcher_Gauntlet.MissionDispatcher_Gauntlet_C
// 0x0008 (0x0E38 - 0x0E30)
class AMissionDispatcher_Gauntlet_C : public AMissionDispatcher
{
public:
	struct FName                                       GauntletWaveTriggerKey;                                   // 0x0E30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionDispatcher_Gauntlet.MissionDispatcher_Gauntlet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionDispatcher_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
