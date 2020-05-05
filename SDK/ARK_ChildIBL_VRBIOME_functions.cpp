// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ChildIBL_VRBIOME_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChildIBL_VRBIOME.ChildIBL_VRBIOME_C.UserConstructionScript
// ()

void AChildIBL_VRBIOME_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChildIBL_VRBIOME.ChildIBL_VRBIOME_C.UserConstructionScript");

	AChildIBL_VRBIOME_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChildIBL_VRBIOME.ChildIBL_VRBIOME_C.ExecuteUbergraph_ChildIBL_VRBIOME
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AChildIBL_VRBIOME_C::ExecuteUbergraph_ChildIBL_VRBIOME(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChildIBL_VRBIOME.ChildIBL_VRBIOME_C.ExecuteUbergraph_ChildIBL_VRBIOME");

	AChildIBL_VRBIOME_C_ExecuteUbergraph_ChildIBL_VRBIOME_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
