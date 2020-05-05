#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Manta_Character_BP_Race_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Manta_Character_BP_Race.Manta_Character_BP_Race_C
// 0x000A (0x2220 - 0x2216)
class AManta_Character_BP_Race_C : public AManta_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x2216(0x0002) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_RaceDino_C* DinoCharacterStatus_BP_RaceDino_C1;                       // 0x2218(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Manta_Character_BP_Race.Manta_Character_BP_Race_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Manta_Character_BP_Race(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
