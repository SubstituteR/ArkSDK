// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_TradeOption_Metal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_Metal.TradeOption_Metal_C.ExecuteUbergraph_TradeOption_Metal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_Metal_C::ExecuteUbergraph_TradeOption_Metal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_Metal.TradeOption_Metal_C.ExecuteUbergraph_TradeOption_Metal");

	UTradeOption_Metal_C_ExecuteUbergraph_TradeOption_Metal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
