#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemSkin_TT_PilgrimHat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_TT_PilgrimHat.PrimalItemSkin_TT_PilgrimHat_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemSkin_TT_PilgrimHat_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_TT_PilgrimHat.PrimalItemSkin_TT_PilgrimHat_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_TT_PilgrimHat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
