#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjMud_Chalico_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjMud_Chalico.ProjMud_Chalico_C
// 0x000C (0x0668 - 0x065C)
class AProjMud_Chalico_C : public AChalicoProj_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x065C(0x0004) MISSED OFFSET
	class UChildActorComponent*                        trail;                                                    // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjMud_Chalico.ProjMud_Chalico_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjMud_Chalico(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
