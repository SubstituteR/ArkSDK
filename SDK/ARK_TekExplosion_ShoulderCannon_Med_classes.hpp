#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_TekExplosion_ShoulderCannon_Med_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TekExplosion_ShoulderCannon_Med.TekExplosion_ShoulderCannon_Med_C
// 0x0000 (0x0510 - 0x0510)
class ATekExplosion_ShoulderCannon_Med_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TekExplosion_ShoulderCannon_Med.TekExplosion_ShoulderCannon_Med_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_TekExplosion_ShoulderCannon_Med(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
