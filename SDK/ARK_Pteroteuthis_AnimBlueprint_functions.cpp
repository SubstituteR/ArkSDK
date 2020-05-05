// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Pteroteuthis_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Pteroteuthis_AnimBlueprint.Pteroteuthis_AnimBlueprint_C.ExecuteUbergraph_Pteroteuthis_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPteroteuthis_AnimBlueprint_C::ExecuteUbergraph_Pteroteuthis_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_AnimBlueprint.Pteroteuthis_AnimBlueprint_C.ExecuteUbergraph_Pteroteuthis_AnimBlueprint");

	UPteroteuthis_AnimBlueprint_C_ExecuteUbergraph_Pteroteuthis_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
