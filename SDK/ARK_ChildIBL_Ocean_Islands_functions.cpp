// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ChildIBL_Ocean_Islands_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChildIBL_Ocean_Islands.ChildIBL_Ocean_Islands_C.UserConstructionScript
// ()

void AChildIBL_Ocean_Islands_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChildIBL_Ocean_Islands.ChildIBL_Ocean_Islands_C.UserConstructionScript");

	AChildIBL_Ocean_Islands_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChildIBL_Ocean_Islands.ChildIBL_Ocean_Islands_C.ExecuteUbergraph_ChildIBL_Ocean_Islands
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AChildIBL_Ocean_Islands_C::ExecuteUbergraph_ChildIBL_Ocean_Islands(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChildIBL_Ocean_Islands.ChildIBL_Ocean_Islands_C.ExecuteUbergraph_ChildIBL_Ocean_Islands");

	AChildIBL_Ocean_Islands_C_ExecuteUbergraph_ChildIBL_Ocean_Islands_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
