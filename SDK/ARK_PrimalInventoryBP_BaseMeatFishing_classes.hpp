#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalInventoryBP_BaseMeatFishing_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_BaseMeatFishing.PrimalInventoryBP_BaseMeatFishing_C
// 0x0000 (0x0570 - 0x0570)
class UPrimalInventoryBP_BaseMeatFishing_C : public UPrimalInventoryComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_BaseMeatFishing.PrimalInventoryBP_BaseMeatFishing_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_BaseMeatFishing(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
