// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Therizino_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Therizino_AnimBlueprint.Therizino_AnimBlueprint_C.ExecuteUbergraph_Therizino_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTherizino_AnimBlueprint_C::ExecuteUbergraph_Therizino_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Therizino_AnimBlueprint.Therizino_AnimBlueprint_C.ExecuteUbergraph_Therizino_AnimBlueprint");

	UTherizino_AnimBlueprint_C_ExecuteUbergraph_Therizino_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
