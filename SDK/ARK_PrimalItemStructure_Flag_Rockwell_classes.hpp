#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_Flag_Rockwell_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_Flag_Rockwell.PrimalItemStructure_Flag_Rockwell_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_Flag_Rockwell_C : public UPrimalItemStructureGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_Flag_Rockwell.PrimalItemStructure_Flag_Rockwell_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_Flag_Rockwell(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
