#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Fishing_OnlyNormalFishEndImmediately_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_Fishing_OnlyNormalFishEndImmediately.MissionType_Fishing_OnlyNormalFishEndImmediately_C
// 0x0000 (0x1A89 - 0x1A89)
class AMissionType_Fishing_OnlyNormalFishEndImmediately_C : public AMissionType_Fishing_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_Fishing_OnlyNormalFishEndImmediately.MissionType_Fishing_OnlyNormalFishEndImmediately_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_Fishing_OnlyNormalFishEndImmediately(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
