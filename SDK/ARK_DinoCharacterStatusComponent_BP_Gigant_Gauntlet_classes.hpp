#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoCharacterStatusComponent_BP_Gigant_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoCharacterStatusComponent_BP_Gigant_Gauntlet.DinoCharacterStatusComponent_BP_Gigant_Gauntlet_C
// 0x0000 (0x1090 - 0x1090)
class UDinoCharacterStatusComponent_BP_Gigant_Gauntlet_C : public UDinoCharacterStatusComponent_BP_Gigant_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoCharacterStatusComponent_BP_Gigant_Gauntlet.DinoCharacterStatusComponent_BP_Gigant_Gauntlet_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoCharacterStatusComponent_BP_Gigant_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
