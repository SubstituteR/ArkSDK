#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Lystro_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Lystro_Character_BP.Lystro_Character_BP_C
// 0x0018 (0x2120 - 0x2108)
class ALystro_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Lystro_C*   DinoCharacterStatus_BP_Lystro_C1;                         // 0x2108(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        PetAnims;                                                 // 0x2110(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Lystro_Character_BP.Lystro_Character_BP_C");
		return ptr;
	}


	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	void Has_XPBuff(bool* Result);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void UserConstructionScript();
	void ExecuteUbergraph_Lystro_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
