#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoEntry_Iguanodon_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_Iguanodon.DinoEntry_Iguanodon_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_Iguanodon_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Iguanodon.DinoEntry_Iguanodon_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_Iguanodon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
