#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemAmmo_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemAmmo_Base.PrimalItemAmmo_Base_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemAmmo_Base_C : public UPrimalItem_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemAmmo_Base.PrimalItemAmmo_Base_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemAmmo_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
