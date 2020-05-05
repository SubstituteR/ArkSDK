#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_StoneHarvestComponent_Ocean_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StoneHarvestComponent_Ocean.StoneHarvestComponent_Ocean_C
// 0x0000 (0x0240 - 0x0240)
class UStoneHarvestComponent_Ocean_C : public UAttackHarvestComponent_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StoneHarvestComponent_Ocean.StoneHarvestComponent_Ocean_C");
		return ptr;
	}


	void ExecuteUbergraph_StoneHarvestComponent_Ocean(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
