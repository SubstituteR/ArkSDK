// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_TradeOption_BlackPearl_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_BlackPearl.TradeOption_BlackPearl_C.ExecuteUbergraph_TradeOption_BlackPearl
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_BlackPearl_C::ExecuteUbergraph_TradeOption_BlackPearl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_BlackPearl.TradeOption_BlackPearl_C.ExecuteUbergraph_TradeOption_BlackPearl");

	UTradeOption_BlackPearl_C_ExecuteUbergraph_TradeOption_BlackPearl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
