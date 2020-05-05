// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ForceFail_TK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ForceFail_TK.ForceFail_TK_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UForceFail_TK_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForceFail_TK.ForceFail_TK_C.ReceiveExecute");

	UForceFail_TK_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForceFail_TK.ForceFail_TK_C.ExecuteUbergraph_ForceFail_TK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UForceFail_TK_C::ExecuteUbergraph_ForceFail_TK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForceFail_TK.ForceFail_TK_C.ExecuteUbergraph_ForceFail_TK");

	UForceFail_TK_C_ExecuteUbergraph_ForceFail_TK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
