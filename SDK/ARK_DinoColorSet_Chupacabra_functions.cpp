// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoColorSet_Chupacabra_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Chupacabra.DinoColorSet_Chupacabra_C.ExecuteUbergraph_DinoColorSet_Chupacabra
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Chupacabra_C::ExecuteUbergraph_DinoColorSet_Chupacabra(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Chupacabra.DinoColorSet_Chupacabra_C.ExecuteUbergraph_DinoColorSet_Chupacabra");

	UDinoColorSet_Chupacabra_C_ExecuteUbergraph_DinoColorSet_Chupacabra_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
