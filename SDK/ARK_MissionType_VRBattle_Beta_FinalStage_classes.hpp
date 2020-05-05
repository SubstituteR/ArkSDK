#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_VRBattle_Beta_FinalStage_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_VRBattle_Beta_FinalStage.MissionType_VRBattle_Beta_FinalStage_C
// 0x0000 (0x214D - 0x214D)
class AMissionType_VRBattle_Beta_FinalStage_C : public AMissionType_VRBattle_FinalStage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_VRBattle_Beta_FinalStage.MissionType_VRBattle_Beta_FinalStage_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_VRBattle_Beta_FinalStage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
