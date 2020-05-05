#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionCompanionData_Retrieve_Wait_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionCompanionData_Retrieve_Wait.MissionCompanionData_Retrieve_Wait_C
// 0x0000 (0x03A0 - 0x03A0)
class UMissionCompanionData_Retrieve_Wait_C : public UMissonCompanionData_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionCompanionData_Retrieve_Wait.MissionCompanionData_Retrieve_Wait_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
