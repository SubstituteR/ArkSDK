#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_DoubleDoor_Greenhouse_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_DoubleDoor_Greenhouse.PrimalItemStructure_DoubleDoor_Greenhouse_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_DoubleDoor_Greenhouse_C : public UPrimalItemStructure_BaseGate_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_DoubleDoor_Greenhouse.PrimalItemStructure_DoubleDoor_Greenhouse_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_DoubleDoor_Greenhouse(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
