// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Hunt_Spino_Hard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Hunt_Spino_Hard.MissionType_Hunt_Spino_Hard_C.UserConstructionScript
// ()

void AMissionType_Hunt_Spino_Hard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt_Spino_Hard.MissionType_Hunt_Spino_Hard_C.UserConstructionScript");

	AMissionType_Hunt_Spino_Hard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt_Spino_Hard.MissionType_Hunt_Spino_Hard_C.ExecuteUbergraph_MissionType_Hunt_Spino_Hard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_Spino_Hard_C::ExecuteUbergraph_MissionType_Hunt_Spino_Hard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt_Spino_Hard.MissionType_Hunt_Spino_Hard_C.ExecuteUbergraph_MissionType_Hunt_Spino_Hard");

	AMissionType_Hunt_Spino_Hard_C_ExecuteUbergraph_MissionType_Hunt_Spino_Hard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
