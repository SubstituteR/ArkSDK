#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_WeapFlamethrower_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeapFlamethrower_Gauntlet.PrimalItem_WeapFlamethrower_Gauntlet_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItem_WeapFlamethrower_Gauntlet_C : public UPrimalItem_WeapFlamethrower_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeapFlamethrower_Gauntlet.PrimalItem_WeapFlamethrower_Gauntlet_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeapFlamethrower_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
