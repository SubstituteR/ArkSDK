#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemSkin_CandyClub_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_CandyClub.PrimalItemSkin_CandyClub_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemSkin_CandyClub_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_CandyClub.PrimalItemSkin_CandyClub_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_CandyClub(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
