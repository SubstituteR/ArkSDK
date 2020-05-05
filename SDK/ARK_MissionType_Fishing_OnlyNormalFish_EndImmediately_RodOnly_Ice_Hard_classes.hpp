#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_Hard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_Hard.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_Hard_C
// 0x0000 (0x1CD0 - 0x1CD0)
class AMissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_Hard_C : public AMissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_Hard.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_Hard_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_Hard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
