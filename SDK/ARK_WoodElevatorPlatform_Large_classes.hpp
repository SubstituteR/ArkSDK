#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WoodElevatorPlatform_Large_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WoodElevatorPlatform_Large.WoodElevatorPlatform_Large_C
// 0x0000 (0x0B78 - 0x0B78)
class AWoodElevatorPlatform_Large_C : public AWoodElevatorPlatform_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WoodElevatorPlatform_Large.WoodElevatorPlatform_Large_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WoodElevatorPlatform_Large(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
