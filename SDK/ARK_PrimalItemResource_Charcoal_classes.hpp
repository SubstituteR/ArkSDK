#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemResource_Charcoal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_Charcoal.PrimalItemResource_Charcoal_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemResource_Charcoal_C : public UPrimalItemResource_Craftable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_Charcoal.PrimalItemResource_Charcoal_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_Charcoal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
