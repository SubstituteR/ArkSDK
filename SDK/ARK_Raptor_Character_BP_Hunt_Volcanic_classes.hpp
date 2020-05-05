#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Raptor_Character_BP_Hunt_Volcanic_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Raptor_Character_BP_Hunt_Volcanic.Raptor_Character_BP_Hunt_Volcanic_C
// 0x000F (0x24D8 - 0x24C9)
class ARaptor_Character_BP_Hunt_Volcanic_C : public ARaptor_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x24C9(0x0007) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_Raptor_Hunt_Volcanic_C* DinoCharacterStatus_BP_Raptor_Hunt_Volcanic_C1;           // 0x24D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Raptor_Character_BP_Hunt_Volcanic.Raptor_Character_BP_Hunt_Volcanic_C");
		return ptr;
	}


	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void UserConstructionScript();
	void ExecuteUbergraph_Raptor_Character_BP_Hunt_Volcanic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
