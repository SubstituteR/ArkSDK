#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoDeathHarvestingComponent_Corrupted_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDeathHarvestingComponent_Corrupted_Base.DinoDeathHarvestingComponent_Corrupted_Base_C
// 0x0000 (0x0240 - 0x0240)
class UDinoDeathHarvestingComponent_Corrupted_Base_C : public UDinoDeathHarvestingComponent_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Corrupted_Base.DinoDeathHarvestingComponent_Corrupted_Base_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDeathHarvestingComponent_Corrupted_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
