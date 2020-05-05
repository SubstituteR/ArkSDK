#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Ocean_Mosa_Character_BP_Hunt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ocean_Mosa_Character_BP_Hunt.Ocean_Mosa_Character_BP_Hunt_C
// 0x000F (0x2168 - 0x2159)
class AOcean_Mosa_Character_BP_Hunt_C : public AOcean_Mosa_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x2159(0x0007) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_Mosasaur_Hunt_C* DinoCharacterStatus_BP_Mosasaur_Hunt_C1;                  // 0x2160(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ocean_Mosa_Character_BP_Hunt.Ocean_Mosa_Character_BP_Hunt_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Ocean_Mosa_Character_BP_Hunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
