// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ChildIBL_Ocean_Box_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChildIBL_Ocean_Box.ChildIBL_Ocean_Box_C.UserConstructionScript
// ()

void AChildIBL_Ocean_Box_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChildIBL_Ocean_Box.ChildIBL_Ocean_Box_C.UserConstructionScript");

	AChildIBL_Ocean_Box_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChildIBL_Ocean_Box.ChildIBL_Ocean_Box_C.ExecuteUbergraph_ChildIBL_Ocean_Box
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AChildIBL_Ocean_Box_C::ExecuteUbergraph_ChildIBL_Ocean_Box(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChildIBL_Ocean_Box.ChildIBL_Ocean_Box_C.ExecuteUbergraph_ChildIBL_Ocean_Box");

	AChildIBL_Ocean_Box_C_ExecuteUbergraph_ChildIBL_Ocean_Box_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
