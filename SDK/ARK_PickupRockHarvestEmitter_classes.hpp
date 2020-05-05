#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PickupRockHarvestEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PickupRockHarvestEmitter.PickupRockHarvestEmitter_C
// 0x0000 (0x0510 - 0x0510)
class APickupRockHarvestEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PickupRockHarvestEmitter.PickupRockHarvestEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_PickupRockHarvestEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
