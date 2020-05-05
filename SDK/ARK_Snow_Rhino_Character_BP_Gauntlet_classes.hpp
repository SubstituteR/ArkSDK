#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Snow_Rhino_Character_BP_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Snow_Rhino_Character_BP_Gauntlet.Snow_Rhino_Character_BP_Gauntlet_C
// 0x000C (0x2120 - 0x2114)
class ASnow_Rhino_Character_BP_Gauntlet_C : public ASnow_Rhino_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x2114(0x0004) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_GauntletDino_C* DinoCharacterStatus_BP_GauntletDino_C1;                   // 0x2118(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Snow_Rhino_Character_BP_Gauntlet.Snow_Rhino_Character_BP_Gauntlet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Snow_Rhino_Character_BP_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
