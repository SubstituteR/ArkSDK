#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissonCompanionData_FishingSpotIndicator_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissonCompanionData_FishingSpotIndicator.MissonCompanionData_FishingSpotIndicator_C
// 0x0000 (0x03A0 - 0x03A0)
class UMissonCompanionData_FishingSpotIndicator_C : public UMissonCompanionData_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissonCompanionData_FishingSpotIndicator.MissonCompanionData_FishingSpotIndicator_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
