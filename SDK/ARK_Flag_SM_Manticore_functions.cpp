// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Flag_SM_Manticore_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Flag_SM_Manticore.Flag_SM_Manticore_C.UserConstructionScript
// ()

void AFlag_SM_Manticore_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flag_SM_Manticore.Flag_SM_Manticore_C.UserConstructionScript");

	AFlag_SM_Manticore_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flag_SM_Manticore.Flag_SM_Manticore_C.ExecuteUbergraph_Flag_SM_Manticore
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFlag_SM_Manticore_C::ExecuteUbergraph_Flag_SM_Manticore(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Flag_SM_Manticore.Flag_SM_Manticore_C.ExecuteUbergraph_Flag_SM_Manticore");

	AFlag_SM_Manticore_C_ExecuteUbergraph_Flag_SM_Manticore_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
