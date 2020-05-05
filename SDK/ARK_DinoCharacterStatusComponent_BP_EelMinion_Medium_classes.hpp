#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoCharacterStatusComponent_BP_EelMinion_Medium_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoCharacterStatusComponent_BP_EelMinion_Medium.DinoCharacterStatusComponent_BP_EelMinion_Medium_C
// 0x0000 (0x1090 - 0x1090)
class UDinoCharacterStatusComponent_BP_EelMinion_Medium_C : public UDinoCharacterStatusComponent_BP_EelMinion_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoCharacterStatusComponent_BP_EelMinion_Medium.DinoCharacterStatusComponent_BP_EelMinion_Medium_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoCharacterStatusComponent_BP_EelMinion_Medium(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
