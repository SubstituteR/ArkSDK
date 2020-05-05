#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_VRBattle_Alpha_Stage3_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_VRBattle_Alpha_Stage3.MissionType_VRBattle_Alpha_Stage3_C
// 0x0000 (0x1D61 - 0x1D61)
class AMissionType_VRBattle_Alpha_Stage3_C : public AMissionType_VRBattle_Stage3_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_VRBattle_Alpha_Stage3.MissionType_VRBattle_Alpha_Stage3_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_VRBattle_Alpha_Stage3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
