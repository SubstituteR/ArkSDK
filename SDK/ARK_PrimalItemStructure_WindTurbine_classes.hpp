#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_WindTurbine_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_WindTurbine.PrimalItemStructure_WindTurbine_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_WindTurbine_C : public UPrimalItemStructure_BaseStonePipe_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_WindTurbine.PrimalItemStructure_WindTurbine_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_WindTurbine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
