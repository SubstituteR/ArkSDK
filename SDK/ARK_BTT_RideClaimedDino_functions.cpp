// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BTT_RideClaimedDino_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTT_RideClaimedDino.BTT_RideClaimedDino_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_RideClaimedDino_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_RideClaimedDino.BTT_RideClaimedDino_C.ReceiveExecute");

	UBTT_RideClaimedDino_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_RideClaimedDino.BTT_RideClaimedDino_C.ExecuteUbergraph_BTT_RideClaimedDino
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTT_RideClaimedDino_C::ExecuteUbergraph_BTT_RideClaimedDino(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_RideClaimedDino.BTT_RideClaimedDino_C.ExecuteUbergraph_BTT_RideClaimedDino");

	UBTT_RideClaimedDino_C_ExecuteUbergraph_BTT_RideClaimedDino_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
