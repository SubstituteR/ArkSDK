#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_UnderwaterEgg_Diplocaulus_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_UnderwaterEgg_Diplocaulus.PrimalItemConsumable_UnderwaterEgg_Diplocaulus_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_UnderwaterEgg_Diplocaulus_C : public UPrimalItemConsumable_UnderwaterEgg_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_UnderwaterEgg_Diplocaulus.PrimalItemConsumable_UnderwaterEgg_Diplocaulus_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Diplocaulus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
