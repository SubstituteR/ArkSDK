#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Bookshelf_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bookshelf.Bookshelf_C
// 0x0008 (0x0DD8 - 0x0DD0)
class ABookshelf_C : public AStructureItemContainerBaseBP_C
{
public:
	class UPrimalInventoryBP_Bookshelf_C*              PrimalInventoryBP_Bookshelf_C1;                           // 0x0DD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bookshelf.Bookshelf_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Bookshelf(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
