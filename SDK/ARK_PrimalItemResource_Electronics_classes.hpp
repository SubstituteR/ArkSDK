#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemResource_Electronics_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_Electronics.PrimalItemResource_Electronics_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemResource_Electronics_C : public UPrimalItemResource_Craftable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_Electronics.PrimalItemResource_Electronics_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_Electronics(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
