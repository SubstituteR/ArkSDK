#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MuzzleFlashEmitterTekTurret_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MuzzleFlashEmitterTekTurret.MuzzleFlashEmitterTekTurret_C
// 0x0000 (0x0510 - 0x0510)
class AMuzzleFlashEmitterTekTurret_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MuzzleFlashEmitterTekTurret.MuzzleFlashEmitterTekTurret_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MuzzleFlashEmitterTekTurret(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
