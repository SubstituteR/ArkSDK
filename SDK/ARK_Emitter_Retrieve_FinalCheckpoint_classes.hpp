#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Emitter_Retrieve_FinalCheckpoint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Emitter_Retrieve_FinalCheckpoint.Emitter_Retrieve_FinalCheckpoint_C
// 0x0000 (0x0510 - 0x0510)
class AEmitter_Retrieve_FinalCheckpoint_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Emitter_Retrieve_FinalCheckpoint.Emitter_Retrieve_FinalCheckpoint_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Emitter_Retrieve_FinalCheckpoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
