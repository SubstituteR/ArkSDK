#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_Bed_Simple_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_Bed_Simple.PrimalItemStructure_Bed_Simple_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_Bed_Simple_C : public UPrimalItemStructure_Bed_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_Bed_Simple.PrimalItemStructure_Bed_Simple_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_Bed_Simple(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
