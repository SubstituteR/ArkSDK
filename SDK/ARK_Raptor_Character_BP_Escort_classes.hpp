#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Raptor_Character_BP_Escort_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Raptor_Character_BP_Escort.Raptor_Character_BP_Escort_C
// 0x0000 (0x24C9 - 0x24C9)
class ARaptor_Character_BP_Escort_C : public ARaptor_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Raptor_Character_BP_Escort.Raptor_Character_BP_Escort_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Raptor_Character_BP_Escort(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
