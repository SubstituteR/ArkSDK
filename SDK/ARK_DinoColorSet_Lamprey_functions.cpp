// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoColorSet_Lamprey_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Lamprey.DinoColorSet_Lamprey_C.ExecuteUbergraph_DinoColorSet_Lamprey
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Lamprey_C::ExecuteUbergraph_DinoColorSet_Lamprey(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Lamprey.DinoColorSet_Lamprey_C.ExecuteUbergraph_DinoColorSet_Lamprey");

	UDinoColorSet_Lamprey_C_ExecuteUbergraph_DinoColorSet_Lamprey_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
