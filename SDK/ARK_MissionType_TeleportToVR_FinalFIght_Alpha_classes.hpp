#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_TeleportToVR_FinalFIght_Alpha_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_TeleportToVR_FinalFIght_Alpha.MissionType_TeleportToVR_FinalFIght_Alpha_C
// 0x0000 (0x0AF4 - 0x0AF4)
class AMissionType_TeleportToVR_FinalFIght_Alpha_C : public AMissionType_TeleportToVR_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_TeleportToVR_FinalFIght_Alpha.MissionType_TeleportToVR_FinalFIght_Alpha_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_TeleportToVR_FinalFIght_Alpha(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
