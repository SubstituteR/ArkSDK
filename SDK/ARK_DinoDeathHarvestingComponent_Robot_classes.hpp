#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoDeathHarvestingComponent_Robot_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDeathHarvestingComponent_Robot.DinoDeathHarvestingComponent_Robot_C
// 0x0000 (0x0240 - 0x0240)
class UDinoDeathHarvestingComponent_Robot_C : public UDinoDeathHarvestingComponent_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Robot.DinoDeathHarvestingComponent_Robot_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDeathHarvestingComponent_Robot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
