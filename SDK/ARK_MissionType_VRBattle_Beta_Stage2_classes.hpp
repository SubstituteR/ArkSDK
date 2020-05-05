#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_VRBattle_Beta_Stage2_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_VRBattle_Beta_Stage2.MissionType_VRBattle_Beta_Stage2_C
// 0x0000 (0x1CFA - 0x1CFA)
class AMissionType_VRBattle_Beta_Stage2_C : public AMissionType_VRBattle_Stage2_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_VRBattle_Beta_Stage2.MissionType_VRBattle_Beta_Stage2_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_VRBattle_Beta_Stage2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
