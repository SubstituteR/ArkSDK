#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Retrieve_BogBulbs_Easy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_Retrieve_BogBulbs_Easy.MissionType_Retrieve_BogBulbs_Easy_C
// 0x0000 (0x1CA1 - 0x1CA1)
class AMissionType_Retrieve_BogBulbs_Easy_C : public AMissionType_Retrieve_BogBulbs_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_Retrieve_BogBulbs_Easy.MissionType_Retrieve_BogBulbs_Easy_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_Retrieve_BogBulbs_Easy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
