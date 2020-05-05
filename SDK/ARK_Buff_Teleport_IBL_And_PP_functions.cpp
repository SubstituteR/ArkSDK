// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Teleport_IBL_And_PP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Teleport_IBL_And_PP.Buff_Teleport_IBL_And_PP_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Teleport_IBL_And_PP_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Teleport_IBL_And_PP.Buff_Teleport_IBL_And_PP_C.BPDeactivated");

	ABuff_Teleport_IBL_And_PP_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Teleport_IBL_And_PP.Buff_Teleport_IBL_And_PP_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Teleport_IBL_And_PP_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Teleport_IBL_And_PP.Buff_Teleport_IBL_And_PP_C.BPActivated");

	ABuff_Teleport_IBL_And_PP_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Teleport_IBL_And_PP.Buff_Teleport_IBL_And_PP_C.UserConstructionScript
// ()

void ABuff_Teleport_IBL_And_PP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Teleport_IBL_And_PP.Buff_Teleport_IBL_And_PP_C.UserConstructionScript");

	ABuff_Teleport_IBL_And_PP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Teleport_IBL_And_PP.Buff_Teleport_IBL_And_PP_C.ExecuteUbergraph_Buff_Teleport_IBL_And_PP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Teleport_IBL_And_PP_C::ExecuteUbergraph_Buff_Teleport_IBL_And_PP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Teleport_IBL_And_PP.Buff_Teleport_IBL_And_PP_C.ExecuteUbergraph_Buff_Teleport_IBL_And_PP");

	ABuff_Teleport_IBL_And_PP_C_ExecuteUbergraph_Buff_Teleport_IBL_And_PP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
