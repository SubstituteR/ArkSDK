#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Xenomorph_Character_BP_Male_InitialBuryOnly_Escort_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Xenomorph_Character_BP_Male_InitialBuryOnly_Escort.Xenomorph_Character_BP_Male_InitialBuryOnly_Escort_C
// 0x0000 (0x28AA - 0x28AA)
class AXenomorph_Character_BP_Male_InitialBuryOnly_Escort_C : public AXenomorph_Character_BP_Male_InitialBuryOnly_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Xenomorph_Character_BP_Male_InitialBuryOnly_Escort.Xenomorph_Character_BP_Male_InitialBuryOnly_Escort_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Xenomorph_Character_BP_Male_InitialBuryOnly_Escort(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
