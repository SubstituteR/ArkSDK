#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_JunctionSparksEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass JunctionSparksEmitter.JunctionSparksEmitter_C
// 0x0000 (0x0510 - 0x0510)
class AJunctionSparksEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass JunctionSparksEmitter.JunctionSparksEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_JunctionSparksEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
