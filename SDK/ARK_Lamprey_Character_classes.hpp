#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Lamprey_Character_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Lamprey_Character.Lamprey_Character_C
// 0x0020 (0x2128 - 0x2108)
class ALamprey_Character_C : public AInsect_Character_Base_C
{
public:
	class UParticleSystemComponent*                    Effects;                                                  // 0x2108(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Leech_C*    DinoCharacterStatus_BP_Leech_C1;                          // 0x2110(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ChargeColor;                                              // 0x2118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Lamprey_Character.Lamprey_Character_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Lamprey_Character(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
