#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_TradeOption_Gunpowder_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TradeOption_Gunpowder.TradeOption_Gunpowder_C
// 0x0000 (0x0070 - 0x0070)
class UTradeOption_Gunpowder_C : public UHexagonTradableOption
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_Gunpowder.TradeOption_Gunpowder_C");
		return ptr;
	}


	void ExecuteUbergraph_TradeOption_Gunpowder(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
