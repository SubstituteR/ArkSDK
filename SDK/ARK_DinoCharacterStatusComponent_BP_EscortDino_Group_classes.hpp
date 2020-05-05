#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoCharacterStatusComponent_BP_EscortDino_Group_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoCharacterStatusComponent_BP_EscortDino_Group.DinoCharacterStatusComponent_BP_EscortDino_Group_C
// 0x0000 (0x1090 - 0x1090)
class UDinoCharacterStatusComponent_BP_EscortDino_Group_C : public UDinoCharacterStatusComponent_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoCharacterStatusComponent_BP_EscortDino_Group.DinoCharacterStatusComponent_BP_EscortDino_Group_C");
		return ptr;
	}


	float BPAdjustStatusValueModification(TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* amount, class UClass** DamageTypeClass, bool* bManualModification);
	void ExecuteUbergraph_DinoCharacterStatusComponent_BP_EscortDino_Group(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
