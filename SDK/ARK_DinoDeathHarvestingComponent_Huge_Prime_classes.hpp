#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoDeathHarvestingComponent_Huge_Prime_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDeathHarvestingComponent_Huge_Prime.DinoDeathHarvestingComponent_Huge_Prime_C
// 0x0000 (0x0240 - 0x0240)
class UDinoDeathHarvestingComponent_Huge_Prime_C : public UDinoDeathHarvestingComponent_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Huge_Prime.DinoDeathHarvestingComponent_Huge_Prime_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDeathHarvestingComponent_Huge_Prime(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
