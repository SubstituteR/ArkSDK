#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemResource_Gem_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_Gem_Base.PrimalItemResource_Gem_Base_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemResource_Gem_Base_C : public UPrimalItemResourceGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_Gem_Base.PrimalItemResource_Gem_Base_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_Gem_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
