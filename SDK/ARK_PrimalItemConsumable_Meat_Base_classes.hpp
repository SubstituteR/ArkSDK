#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_Meat_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Meat_Base.PrimalItemConsumable_Meat_Base_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_Meat_Base_C : public UPrimalItemConsumableEatable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Meat_Base.PrimalItemConsumable_Meat_Base_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Meat_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
