#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_UnderwaterEgg_Toad_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_UnderwaterEgg_Toad.PrimalItemConsumable_UnderwaterEgg_Toad_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_UnderwaterEgg_Toad_C : public UPrimalItemConsumable_UnderwaterEgg_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_UnderwaterEgg_Toad.PrimalItemConsumable_UnderwaterEgg_Toad_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Toad(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
