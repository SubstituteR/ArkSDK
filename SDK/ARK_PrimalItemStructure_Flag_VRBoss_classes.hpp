#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_Flag_VRBoss_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_Flag_VRBoss.PrimalItemStructure_Flag_VRBoss_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_Flag_VRBoss_C : public UPrimalItemStructureGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_Flag_VRBoss.PrimalItemStructure_Flag_VRBoss_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_Flag_VRBoss(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
