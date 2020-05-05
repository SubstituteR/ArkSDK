#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoCharacterStatusComponent_BP_RockGolem_Hunt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoCharacterStatusComponent_BP_RockGolem_Hunt.DinoCharacterStatusComponent_BP_RockGolem_Hunt_C
// 0x0000 (0x1091 - 0x1091)
class UDinoCharacterStatusComponent_BP_RockGolem_Hunt_C : public UDinoCharacterStatusComponent_BP_RockGolem_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoCharacterStatusComponent_BP_RockGolem_Hunt.DinoCharacterStatusComponent_BP_RockGolem_Hunt_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoCharacterStatusComponent_BP_RockGolem_Hunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
