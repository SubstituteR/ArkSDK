#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_LanternLizard_Anim_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass LanternLizard_Anim_BP.LanternLizard_Anim_BP_C
// 0x0000 (0x16B0 - 0x16B0)
class ULanternLizard_Anim_BP_C : public UDinoBlueprintBase_RootBoneName_Mounted_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass LanternLizard_Anim_BP.LanternLizard_Anim_BP_C");
		return ptr;
	}


	void ExecuteUbergraph_LanternLizard_Anim_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
