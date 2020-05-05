#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_TekSword_FPV_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass TekSword_FPV_AnimBP.TekSword_FPV_AnimBP_C
// 0x0000 (0x09B0 - 0x09B0)
class UTekSword_FPV_AnimBP_C : public UFPVMeleeWeaponAnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TekSword_FPV_AnimBP.TekSword_FPV_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_TekSword_FPV_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
