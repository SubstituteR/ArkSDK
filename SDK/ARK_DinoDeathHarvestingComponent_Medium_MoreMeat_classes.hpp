#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoDeathHarvestingComponent_Medium_MoreMeat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDeathHarvestingComponent_Medium_MoreMeat.DinoDeathHarvestingComponent_Medium_MoreMeat_C
// 0x0000 (0x0240 - 0x0240)
class UDinoDeathHarvestingComponent_Medium_MoreMeat_C : public UDinoDeathHarvestingComponent_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Medium_MoreMeat.DinoDeathHarvestingComponent_Medium_MoreMeat_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDeathHarvestingComponent_Medium_MoreMeat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
