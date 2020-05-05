// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MicrobeSwarmChar_BP_Escort_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MicrobeSwarmChar_BP_Escort.MicrobeSwarmChar_BP_Escort_C.UserConstructionScript
// ()

void AMicrobeSwarmChar_BP_Escort_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MicrobeSwarmChar_BP_Escort.MicrobeSwarmChar_BP_Escort_C.UserConstructionScript");

	AMicrobeSwarmChar_BP_Escort_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MicrobeSwarmChar_BP_Escort.MicrobeSwarmChar_BP_Escort_C.ExecuteUbergraph_MicrobeSwarmChar_BP_Escort
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMicrobeSwarmChar_BP_Escort_C::ExecuteUbergraph_MicrobeSwarmChar_BP_Escort(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MicrobeSwarmChar_BP_Escort.MicrobeSwarmChar_BP_Escort_C.ExecuteUbergraph_MicrobeSwarmChar_BP_Escort");

	AMicrobeSwarmChar_BP_Escort_C_ExecuteUbergraph_MicrobeSwarmChar_BP_Escort_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
