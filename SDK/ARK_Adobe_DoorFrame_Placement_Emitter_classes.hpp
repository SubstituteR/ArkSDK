#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Adobe_DoorFrame_Placement_Emitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Adobe_DoorFrame_Placement_Emitter.Adobe_DoorFrame_Placement_Emitter_C
// 0x0000 (0x0510 - 0x0510)
class AAdobe_DoorFrame_Placement_Emitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Adobe_DoorFrame_Placement_Emitter.Adobe_DoorFrame_Placement_Emitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Adobe_DoorFrame_Placement_Emitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
