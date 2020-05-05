// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemResource_RetrieveMegTooth_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_RetrieveMegTooth.PrimalItemResource_RetrieveMegTooth_C.ExecuteUbergraph_PrimalItemResource_RetrieveMegTooth
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_RetrieveMegTooth_C::ExecuteUbergraph_PrimalItemResource_RetrieveMegTooth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_RetrieveMegTooth.PrimalItemResource_RetrieveMegTooth_C.ExecuteUbergraph_PrimalItemResource_RetrieveMegTooth");

	UPrimalItemResource_RetrieveMegTooth_C_ExecuteUbergraph_PrimalItemResource_RetrieveMegTooth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
