#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_SpaceWhale_Character_BP_Brute_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpaceWhale_Character_BP_Brute.SpaceWhale_Character_BP_Brute_C
// 0x0008 (0x3310 - 0x3308)
class ASpaceWhale_Character_BP_Brute_C : public ASpaceWhale_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_SpaceWhale_Hunt_C* DinoCharacterStatus_BP_SpaceWhale_Hunt_C1;                // 0x3308(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpaceWhale_Character_BP_Brute.SpaceWhale_Character_BP_Brute_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SpaceWhale_Character_BP_Brute(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
