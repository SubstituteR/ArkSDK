#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemTrophy_EelBoss_Alpha_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophy_EelBoss_Alpha.PrimalItemTrophy_EelBoss_Alpha_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemTrophy_EelBoss_Alpha_C : public UPrimalItemTrophy_EelBoss_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_EelBoss_Alpha.PrimalItemTrophy_EelBoss_Alpha_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophy_EelBoss_Alpha(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
