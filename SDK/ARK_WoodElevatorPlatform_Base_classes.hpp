#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WoodElevatorPlatform_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WoodElevatorPlatform_Base.WoodElevatorPlatform_Base_C
// 0x0000 (0x0B78 - 0x0B78)
class AWoodElevatorPlatform_Base_C : public AElevatorPlatform_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WoodElevatorPlatform_Base.WoodElevatorPlatform_Base_C");
		return ptr;
	}


	void GetTopSwitch(class AWoodElevatorTopSwitch_C** Switch);
	void BPElevatorStopped(bool* bSwitchedDirection, TEnumAsByte<EPrimalStructureElevatorState>* NewDirection);
	void UserConstructionScript();
	void ExecuteUbergraph_WoodElevatorPlatform_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
