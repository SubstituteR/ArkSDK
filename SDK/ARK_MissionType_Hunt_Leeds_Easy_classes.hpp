#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Hunt_Leeds_Easy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_Hunt_Leeds_Easy.MissionType_Hunt_Leeds_Easy_C
// 0x0000 (0x150A - 0x150A)
class AMissionType_Hunt_Leeds_Easy_C : public AMissionType_Hunt_Leeds_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_Hunt_Leeds_Easy.MissionType_Hunt_Leeds_Easy_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_Hunt_Leeds_Easy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
