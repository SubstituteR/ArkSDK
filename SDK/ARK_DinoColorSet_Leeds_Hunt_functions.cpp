// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoColorSet_Leeds_Hunt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Leeds_Hunt.DinoColorSet_Leeds_Hunt_C.ExecuteUbergraph_DinoColorSet_Leeds_Hunt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Leeds_Hunt_C::ExecuteUbergraph_DinoColorSet_Leeds_Hunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Leeds_Hunt.DinoColorSet_Leeds_Hunt_C.ExecuteUbergraph_DinoColorSet_Leeds_Hunt");

	UDinoColorSet_Leeds_Hunt_C_ExecuteUbergraph_DinoColorSet_Leeds_Hunt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
