#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_CryoFridge_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CryoFridge.CryoFridge_C
// 0x0008 (0x0DD8 - 0x0DD0)
class ACryoFridge_C : public AStructureItemContainerBaseBP_C
{
public:
	class UPrimalInventoryBP_CryoFridge_C*             PrimalInventoryBP_CryoFridge_C1;                          // 0x0DD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CryoFridge.CryoFridge_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_CryoFridge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
