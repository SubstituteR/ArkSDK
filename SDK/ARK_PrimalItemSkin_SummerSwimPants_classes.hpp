#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemSkin_SummerSwimPants_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_SummerSwimPants.PrimalItemSkin_SummerSwimPants_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemSkin_SummerSwimPants_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_SummerSwimPants.PrimalItemSkin_SummerSwimPants_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_SummerSwimPants(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
