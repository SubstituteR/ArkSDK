#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_Kibble_Base_Large_EX_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Kibble_Base_Large_EX.PrimalItemConsumable_Kibble_Base_Large_EX_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_Kibble_Base_Large_EX_C : public UPrimalItemConsumable_Kibble_Base_Large_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Kibble_Base_Large_EX.PrimalItemConsumable_Kibble_Base_Large_EX_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Kibble_Base_Large_EX(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
