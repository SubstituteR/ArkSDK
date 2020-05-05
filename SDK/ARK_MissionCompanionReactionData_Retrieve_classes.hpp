#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionCompanionReactionData_Retrieve_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionCompanionReactionData_Retrieve.MissionCompanionReactionData_Retrieve_C
// 0x0000 (0x01F0 - 0x01F0)
class UMissionCompanionReactionData_Retrieve_C : public UPrimalStaticData_MissionCompanionReactionData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionCompanionReactionData_Retrieve.MissionCompanionReactionData_Retrieve_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
