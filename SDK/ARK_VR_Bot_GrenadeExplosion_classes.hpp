#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VR_Bot_GrenadeExplosion_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VR_Bot_GrenadeExplosion.VR_Bot_GrenadeExplosion_C
// 0x0000 (0x0510 - 0x0510)
class AVR_Bot_GrenadeExplosion_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VR_Bot_GrenadeExplosion.VR_Bot_GrenadeExplosion_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_VR_Bot_GrenadeExplosion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
