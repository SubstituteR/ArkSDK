#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapOneShotRifle_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapOneShotRifle_Gauntlet.WeapOneShotRifle_Gauntlet_C
// 0x0000 (0x0D88 - 0x0D88)
class AWeapOneShotRifle_Gauntlet_C : public AWeapOneShotRifle_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapOneShotRifle_Gauntlet.WeapOneShotRifle_Gauntlet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapOneShotRifle_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
