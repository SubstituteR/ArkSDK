#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BoaFrill_Character_BP_Escort_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BoaFrill_Character_BP_Escort.BoaFrill_Character_BP_Escort_C
// 0x0000 (0x22D4 - 0x22D4)
class ABoaFrill_Character_BP_Escort_C : public ABoaFrill_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BoaFrill_Character_BP_Escort.BoaFrill_Character_BP_Escort_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BoaFrill_Character_BP_Escort(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif