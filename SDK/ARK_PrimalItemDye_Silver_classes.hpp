#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemDye_Silver_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemDye_Silver.PrimalItemDye_Silver_C
// 0x0000 (0x09D0 - 0x09D0)
class UPrimalItemDye_Silver_C : public UPrimalItemDyeGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemDye_Silver.PrimalItemDye_Silver_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemDye_Silver(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
