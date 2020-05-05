#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_CaveWolf_Character_BP_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CaveWolf_Character_BP_Gauntlet.CaveWolf_Character_BP_Gauntlet_C
// 0x0008 (0x27B0 - 0x27A8)
class ACaveWolf_Character_BP_Gauntlet_C : public ACaveWolf_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_GauntletDino_C* DinoCharacterStatus_BP_GauntletDino_C1;                   // 0x27A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CaveWolf_Character_BP_Gauntlet.CaveWolf_Character_BP_Gauntlet_C");
		return ptr;
	}


	void Can_Join_Pack(bool* Can_Join);
	void UserConstructionScript();
	void ExecuteUbergraph_CaveWolf_Character_BP_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
