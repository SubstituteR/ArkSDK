#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemTransGPSAmmo_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTransGPSAmmo.PrimalItemTransGPSAmmo_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemTransGPSAmmo_C : public UPrimalItemAmmo_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTransGPSAmmo.PrimalItemTransGPSAmmo_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTransGPSAmmo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
