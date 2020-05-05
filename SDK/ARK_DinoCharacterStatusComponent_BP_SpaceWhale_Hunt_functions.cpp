// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoCharacterStatusComponent_BP_SpaceWhale_Hunt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_SpaceWhale_Hunt.DinoCharacterStatusComponent_BP_SpaceWhale_Hunt_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_SpaceWhale_Hunt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_SpaceWhale_Hunt_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_SpaceWhale_Hunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_SpaceWhale_Hunt.DinoCharacterStatusComponent_BP_SpaceWhale_Hunt_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_SpaceWhale_Hunt");

	UDinoCharacterStatusComponent_BP_SpaceWhale_Hunt_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_SpaceWhale_Hunt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
