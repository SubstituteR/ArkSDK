#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemSkin_TT_SwimShirt_DodoPie_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_TT_SwimShirt_DodoPie.PrimalItemSkin_TT_SwimShirt_DodoPie_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemSkin_TT_SwimShirt_DodoPie_C : public UPrimalItemSkin_SummerSwimShirt_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_TT_SwimShirt_DodoPie.PrimalItemSkin_TT_SwimShirt_DodoPie_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_TT_SwimShirt_DodoPie(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
