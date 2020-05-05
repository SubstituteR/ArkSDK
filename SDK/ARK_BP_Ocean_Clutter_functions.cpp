// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BP_Ocean_Clutter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Ocean_Clutter.BP_Ocean_Clutter_C.UserConstructionScript
// ()

void ABP_Ocean_Clutter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean_Clutter.BP_Ocean_Clutter_C.UserConstructionScript");

	ABP_Ocean_Clutter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ocean_Clutter.BP_Ocean_Clutter_C.ExecuteUbergraph_BP_Ocean_Clutter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ocean_Clutter_C::ExecuteUbergraph_BP_Ocean_Clutter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean_Clutter.BP_Ocean_Clutter_C.ExecuteUbergraph_BP_Ocean_Clutter");

	ABP_Ocean_Clutter_C_ExecuteUbergraph_BP_Ocean_Clutter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
