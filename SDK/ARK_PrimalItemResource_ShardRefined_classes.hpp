#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemResource_ShardRefined_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_ShardRefined.PrimalItemResource_ShardRefined_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemResource_ShardRefined_C : public UPrimalItemResourceGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_ShardRefined.PrimalItemResource_ShardRefined_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_ShardRefined(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
