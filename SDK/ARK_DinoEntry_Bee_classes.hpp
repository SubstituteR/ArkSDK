#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoEntry_Bee_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_Bee.DinoEntry_Bee_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_Bee_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Bee.DinoEntry_Bee_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_Bee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
