#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Moschops-Anim-Blueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Moschops-Anim-Blueprint.Moschops-Anim-Blueprint_C
// 0x0000 (0x1630 - 0x1630)
class UMoschops_Anim_Blueprint_C : public UDinoBlueprintBase_RootBoneName_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Moschops-Anim-Blueprint.Moschops-Anim-Blueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Moschops_Anim_Blueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
