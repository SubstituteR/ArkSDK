#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_TekJumpPad_Placement_Emitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TekJumpPad_Placement_Emitter.TekJumpPad_Placement_Emitter_C
// 0x0000 (0x0510 - 0x0510)
class ATekJumpPad_Placement_Emitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TekJumpPad_Placement_Emitter.TekJumpPad_Placement_Emitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_TekJumpPad_Placement_Emitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
