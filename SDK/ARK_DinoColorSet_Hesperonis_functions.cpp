// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoColorSet_Hesperonis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Hesperonis.DinoColorSet_Hesperonis_C.ExecuteUbergraph_DinoColorSet_Hesperonis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Hesperonis_C::ExecuteUbergraph_DinoColorSet_Hesperonis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Hesperonis.DinoColorSet_Hesperonis_C.ExecuteUbergraph_DinoColorSet_Hesperonis");

	UDinoColorSet_Hesperonis_C_ExecuteUbergraph_DinoColorSet_Hesperonis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
