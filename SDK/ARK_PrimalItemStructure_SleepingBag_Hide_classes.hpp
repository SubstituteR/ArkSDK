#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_SleepingBag_Hide_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_SleepingBag_Hide.PrimalItemStructure_SleepingBag_Hide_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_SleepingBag_Hide_C : public UPrimalItemStructure_SleepingBag_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_SleepingBag_Hide.PrimalItemStructure_SleepingBag_Hide_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_SleepingBag_Hide(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
