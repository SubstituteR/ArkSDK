#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalInventoryBP_TributeTerminal_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_TributeTerminal_Base.PrimalInventoryBP_TributeTerminal_Base_C
// 0x0000 (0x0570 - 0x0570)
class UPrimalInventoryBP_TributeTerminal_Base_C : public UPrimalInventoryComponent_Static
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_TributeTerminal_Base.PrimalInventoryBP_TributeTerminal_Base_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
