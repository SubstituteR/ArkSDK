#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoDeathHarvestingComponent_Tiny_Chitin_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDeathHarvestingComponent_Tiny_Chitin.DinoDeathHarvestingComponent_Tiny_Chitin_C
// 0x0000 (0x0240 - 0x0240)
class UDinoDeathHarvestingComponent_Tiny_Chitin_C : public UDinoDeathHarvestingComponent_Tiny_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Tiny_Chitin.DinoDeathHarvestingComponent_Tiny_Chitin_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_Chitin(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
