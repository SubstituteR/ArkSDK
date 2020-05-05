// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_HLNA_TeleportPostProcess_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_HLNA_TeleportPostProcess.Buff_HLNA_TeleportPostProcess_C.UserConstructionScript
// ()

void ABuff_HLNA_TeleportPostProcess_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HLNA_TeleportPostProcess.Buff_HLNA_TeleportPostProcess_C.UserConstructionScript");

	ABuff_HLNA_TeleportPostProcess_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HLNA_TeleportPostProcess.Buff_HLNA_TeleportPostProcess_C.ExecuteUbergraph_Buff_HLNA_TeleportPostProcess
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HLNA_TeleportPostProcess_C::ExecuteUbergraph_Buff_HLNA_TeleportPostProcess(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HLNA_TeleportPostProcess.Buff_HLNA_TeleportPostProcess_C.ExecuteUbergraph_Buff_HLNA_TeleportPostProcess");

	ABuff_HLNA_TeleportPostProcess_C_ExecuteUbergraph_Buff_HLNA_TeleportPostProcess_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
