#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemConsumable_UnlockHair_Facial_CurlyBeard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_UnlockHair_Facial_CurlyBeard.PrimalItemConsumable_UnlockHair_Facial_CurlyBeard_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_UnlockHair_Facial_CurlyBeard_C : public UPrimalItemConsumableGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_UnlockHair_Facial_CurlyBeard.PrimalItemConsumable_UnlockHair_Facial_CurlyBeard_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Facial_CurlyBeard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
