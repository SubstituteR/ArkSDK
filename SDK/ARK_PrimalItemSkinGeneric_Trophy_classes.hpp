#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemSkinGeneric_Trophy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkinGeneric_Trophy.PrimalItemSkinGeneric_Trophy_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemSkinGeneric_Trophy_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkinGeneric_Trophy.PrimalItemSkinGeneric_Trophy_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkinGeneric_Trophy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
