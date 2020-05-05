// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_GlitchCounter_Ocean_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_GlitchCounter_Ocean.MissionType_GlitchCounter_Ocean_C.UserConstructionScript
// ()

void AMissionType_GlitchCounter_Ocean_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GlitchCounter_Ocean.MissionType_GlitchCounter_Ocean_C.UserConstructionScript");

	AMissionType_GlitchCounter_Ocean_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GlitchCounter_Ocean.MissionType_GlitchCounter_Ocean_C.ExecuteUbergraph_MissionType_GlitchCounter_Ocean
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_GlitchCounter_Ocean_C::ExecuteUbergraph_MissionType_GlitchCounter_Ocean(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GlitchCounter_Ocean.MissionType_GlitchCounter_Ocean_C.ExecuteUbergraph_MissionType_GlitchCounter_Ocean");

	AMissionType_GlitchCounter_Ocean_C_ExecuteUbergraph_MissionType_GlitchCounter_Ocean_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
