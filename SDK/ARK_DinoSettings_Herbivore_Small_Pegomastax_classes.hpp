#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoSettings_Herbivore_Small_Pegomastax_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_Herbivore_Small_Pegomastax.DinoSettings_Herbivore_Small_Pegomastax_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_Herbivore_Small_Pegomastax_C : public UDinoSettings_Herbivore_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Herbivore_Small_Pegomastax.DinoSettings_Herbivore_Small_Pegomastax_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_Herbivore_Small_Pegomastax(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
