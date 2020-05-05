#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Retrieve_DinoDrop_VolcanicTrike_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_Retrieve_DinoDrop_VolcanicTrike.MissionType_Retrieve_DinoDrop_VolcanicTrike_C
// 0x0000 (0x1E60 - 0x1E60)
class AMissionType_Retrieve_DinoDrop_VolcanicTrike_C : public AMissionType_Retrieve_DinoDrop_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_Retrieve_DinoDrop_VolcanicTrike.MissionType_Retrieve_DinoDrop_VolcanicTrike_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_Retrieve_DinoDrop_VolcanicTrike(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
