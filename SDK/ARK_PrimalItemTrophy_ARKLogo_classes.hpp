#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemTrophy_ARKLogo_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophy_ARKLogo.PrimalItemTrophy_ARKLogo_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemTrophy_ARKLogo_C : public UPrimalItemTrophyGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_ARKLogo.PrimalItemTrophy_ARKLogo_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophy_ARKLogo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
