#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BASE_PrimalGameData_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BASE_PrimalGameData_BP.BASE_PrimalGameData_BP_C
// 0x0000 (0x1F58 - 0x1F58)
class UBASE_PrimalGameData_BP_C : public UCOREMEDIA_PrimalGameData_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BASE_PrimalGameData_BP.BASE_PrimalGameData_BP_C");
		return ptr;
	}


	void BPMergeModGameData(class UPrimalGameData* AnotherGameData);
	void ExecuteUbergraph_BASE_PrimalGameData_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
