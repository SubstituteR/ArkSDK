// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_TradeOption_Berry_Tintoberry_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_Berry_Tintoberry.TradeOption_Berry_Tintoberry_C.ExecuteUbergraph_TradeOption_Berry_Tintoberry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_Berry_Tintoberry_C::ExecuteUbergraph_TradeOption_Berry_Tintoberry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_Berry_Tintoberry.TradeOption_Berry_Tintoberry_C.ExecuteUbergraph_TradeOption_Berry_Tintoberry");

	UTradeOption_Berry_Tintoberry_C_ExecuteUbergraph_TradeOption_Berry_Tintoberry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
