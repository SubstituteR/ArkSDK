#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Volcano_Trike_Character_BP_Retrieve_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Volcano_Trike_Character_BP_Retrieve.Volcano_Trike_Character_BP_Retrieve_C
// 0x0000 (0x2823 - 0x2823)
class AVolcano_Trike_Character_BP_Retrieve_C : public AVolcano_Trike_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Volcano_Trike_Character_BP_Retrieve.Volcano_Trike_Character_BP_Retrieve_C");
		return ptr;
	}


	void DoRamImpact(bool* HitSomething);
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void UserConstructionScript();
	void ExecuteUbergraph_Volcano_Trike_Character_BP_Retrieve(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
