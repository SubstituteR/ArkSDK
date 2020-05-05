#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Emitter_HuntTeleport_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Emitter_HuntTeleport.Emitter_HuntTeleport_C
// 0x0000 (0x0510 - 0x0510)
class AEmitter_HuntTeleport_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Emitter_HuntTeleport.Emitter_HuntTeleport_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Emitter_HuntTeleport(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
