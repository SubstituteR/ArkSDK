#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_TreeSapTap_SM_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TreeSapTap_SM.TreeSapTap_SM_C
// 0x0008 (0x0DD8 - 0x0DD0)
class ATreeSapTap_SM_C : public AStructureItemContainerBaseBP_C
{
public:
	class UPrimalInventoryBP_TreeSapTap_C*             PrimalInventoryBP_TreeSapTap_C1;                          // 0x0DD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TreeSapTap_SM.TreeSapTap_SM_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_TreeSapTap_SM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
