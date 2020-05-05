// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoColorSet_Lightbug_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Lightbug.DinoColorSet_Lightbug_C.ExecuteUbergraph_DinoColorSet_Lightbug
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Lightbug_C::ExecuteUbergraph_DinoColorSet_Lightbug(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Lightbug.DinoColorSet_Lightbug_C.ExecuteUbergraph_DinoColorSet_Lightbug");

	UDinoColorSet_Lightbug_C_ExecuteUbergraph_DinoColorSet_Lightbug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
