#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly_Bog_Easy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly_Bog_Easy.MissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly_Bog_Easy_C
// 0x0000 (0x1B78 - 0x1B78)
class AMissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly_Bog_Easy_C : public AMissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly_Bog_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly_Bog_Easy.MissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly_Bog_Easy_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_Fishing_OnlyNormalFish_CoelPiranhaOnly_Bog_Easy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
