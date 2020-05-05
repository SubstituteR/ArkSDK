#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ChupaCabra_Anim_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ChupaCabra_Anim_BP.ChupaCabra_Anim_BP_C
// 0x0000 (0x1630 - 0x1630)
class UChupaCabra_Anim_BP_C : public UDinoBlueprintBase_RootBoneName_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ChupaCabra_Anim_BP.ChupaCabra_Anim_BP_C");
		return ptr;
	}


	void ExecuteUbergraph_ChupaCabra_Anim_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
