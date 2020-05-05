#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_VRBattle_Beta_Stage1_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_VRBattle_Beta_Stage1.MissionType_VRBattle_Beta_Stage1_C
// 0x0000 (0x1DD8 - 0x1DD8)
class AMissionType_VRBattle_Beta_Stage1_C : public AMissionType_VRBattle_Stage1_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_VRBattle_Beta_Stage1.MissionType_VRBattle_Beta_Stage1_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_VRBattle_Beta_Stage1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
