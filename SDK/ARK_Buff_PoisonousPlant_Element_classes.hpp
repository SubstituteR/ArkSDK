#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_PoisonousPlant_Element_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_PoisonousPlant_Element.Buff_PoisonousPlant_Element_C
// 0x0010 (0x0954 - 0x0944)
class ABuff_PoisonousPlant_Element_C : public ABuff_PoisonousTrap_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0944(0x0004) MISSED OFFSET
	class UClass*                                      ChargeBuff;                                               // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaminaValueOnSetup;                                      // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_PoisonousPlant_Element.Buff_PoisonousPlant_Element_C");
		return ptr;
	}


	void BPSetupForInstigator(class AActor** ForInstigator);
	void BPActivated(class AActor** ForInstigator);
	float BPAdjustStatusValueModification(class UPrimalCharacterStatusComponent** ForComponent, TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* InAmount, class UClass** DamageTypeClass, bool* bManualModification);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_PoisonousPlant_Element(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
