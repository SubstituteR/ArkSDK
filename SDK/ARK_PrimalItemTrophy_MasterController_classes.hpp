#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemTrophy_MasterController_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophy_MasterController.PrimalItemTrophy_MasterController_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemTrophy_MasterController_C : public UPrimalItemTrophyGenericWall_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_MasterController.PrimalItemTrophy_MasterController_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophy_MasterController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
