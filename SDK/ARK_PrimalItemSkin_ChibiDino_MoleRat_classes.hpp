#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemSkin_ChibiDino_MoleRat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_ChibiDino_MoleRat.PrimalItemSkin_ChibiDino_MoleRat_C
// 0x0000 (0x09C9 - 0x09C9)
class UPrimalItemSkin_ChibiDino_MoleRat_C : public UPrimalItemSkin_ChibiDino_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_ChibiDino_MoleRat.PrimalItemSkin_ChibiDino_MoleRat_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_ChibiDino_MoleRat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
