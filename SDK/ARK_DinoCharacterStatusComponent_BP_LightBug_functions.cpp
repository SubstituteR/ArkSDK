// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoCharacterStatusComponent_BP_LightBug_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_LightBug.DinoCharacterStatusComponent_BP_LightBug_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_LightBug
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_LightBug_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_LightBug(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_LightBug.DinoCharacterStatusComponent_BP_LightBug_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_LightBug");

	UDinoCharacterStatusComponent_BP_LightBug_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_LightBug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
