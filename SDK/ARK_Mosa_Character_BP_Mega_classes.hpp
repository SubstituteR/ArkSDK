#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Mosa_Character_BP_Mega_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mosa_Character_BP_Mega.Mosa_Character_BP_Mega_C
// 0x000F (0x2168 - 0x2159)
class AMosa_Character_BP_Mega_C : public AMosa_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x2159(0x0007) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_Mosasaur_Mega_C* DinoCharacterStatus_BP_Mosasaur_Mega_C1;                  // 0x2160(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mosa_Character_BP_Mega.Mosa_Character_BP_Mega_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Mosa_Character_BP_Mega(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
