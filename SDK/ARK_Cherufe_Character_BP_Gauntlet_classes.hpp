#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Cherufe_Character_BP_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cherufe_Character_BP_Gauntlet.Cherufe_Character_BP_Gauntlet_C
// 0x0008 (0x28F0 - 0x28E8)
class ACherufe_Character_BP_Gauntlet_C : public ACherufe_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_GauntletDino_C* DinoCharacterStatus_BP_GauntletDino_C1;                   // 0x28E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Cherufe_Character_BP_Gauntlet.Cherufe_Character_BP_Gauntlet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Cherufe_Character_BP_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
