#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ExplosionEmitter_ScoutLauncher_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ExplosionEmitter_ScoutLauncher.ExplosionEmitter_ScoutLauncher_C
// 0x0000 (0x0510 - 0x0510)
class AExplosionEmitter_ScoutLauncher_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ExplosionEmitter_ScoutLauncher.ExplosionEmitter_ScoutLauncher_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ExplosionEmitter_ScoutLauncher(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
