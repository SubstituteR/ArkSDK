// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Metal_Roof_Placement_Emitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Metal_Roof_Placement_Emitter.Metal_Roof_Placement_Emitter_C.UserConstructionScript
// ()

void AMetal_Roof_Placement_Emitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Metal_Roof_Placement_Emitter.Metal_Roof_Placement_Emitter_C.UserConstructionScript");

	AMetal_Roof_Placement_Emitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Metal_Roof_Placement_Emitter.Metal_Roof_Placement_Emitter_C.ExecuteUbergraph_Metal_Roof_Placement_Emitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMetal_Roof_Placement_Emitter_C::ExecuteUbergraph_Metal_Roof_Placement_Emitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Metal_Roof_Placement_Emitter.Metal_Roof_Placement_Emitter_C.ExecuteUbergraph_Metal_Roof_Placement_Emitter");

	AMetal_Roof_Placement_Emitter_C_ExecuteUbergraph_Metal_Roof_Placement_Emitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
