// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BTT_FindSpotNearTarget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTT_FindSpotNearTarget.BTT_FindSpotNearTarget_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_FindSpotNearTarget_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_FindSpotNearTarget.BTT_FindSpotNearTarget_C.ReceiveExecute");

	UBTT_FindSpotNearTarget_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_FindSpotNearTarget.BTT_FindSpotNearTarget_C.ExecuteUbergraph_BTT_FindSpotNearTarget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_FindSpotNearTarget_C::ExecuteUbergraph_BTT_FindSpotNearTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_FindSpotNearTarget.BTT_FindSpotNearTarget_C.ExecuteUbergraph_BTT_FindSpotNearTarget");

	UBTT_FindSpotNearTarget_C_ExecuteUbergraph_BTT_FindSpotNearTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
