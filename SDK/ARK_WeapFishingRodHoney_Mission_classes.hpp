#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapFishingRodHoney_Mission_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapFishingRodHoney_Mission.WeapFishingRodHoney_Mission_C
// 0x0000 (0x1118 - 0x1118)
class AWeapFishingRodHoney_Mission_C : public AWeapFishingRod_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapFishingRodHoney_Mission.WeapFishingRodHoney_Mission_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapFishingRodHoney_Mission(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
