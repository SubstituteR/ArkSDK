#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_RecipeNote_Kibble_Baryonyx_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_RecipeNote_Kibble_Baryonyx.PrimalItem_RecipeNote_Kibble_Baryonyx_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItem_RecipeNote_Kibble_Baryonyx_C : public UPrimalItem_RecipeNote_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_RecipeNote_Kibble_Baryonyx.PrimalItem_RecipeNote_Kibble_Baryonyx_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Baryonyx(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
