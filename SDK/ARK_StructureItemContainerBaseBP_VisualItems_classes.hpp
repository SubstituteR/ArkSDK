#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_StructureItemContainerBaseBP_VisualItems_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureItemContainerBaseBP_VisualItems.StructureItemContainerBaseBP_VisualItems_C
// 0x0008 (0x0E00 - 0x0DF8)
class AStructureItemContainerBaseBP_VisualItems_C : public APrimalStructureItemContainer_VisualItems
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0DF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureItemContainerBaseBP_VisualItems.StructureItemContainerBaseBP_VisualItems_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StructureItemContainerBaseBP_VisualItems(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
