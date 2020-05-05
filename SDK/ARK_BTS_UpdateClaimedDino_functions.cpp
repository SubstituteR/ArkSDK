// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BTS_UpdateClaimedDino_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTS_UpdateClaimedDino.BTS_UpdateClaimedDino_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UBTS_UpdateClaimedDino_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_UpdateClaimedDino.BTS_UpdateClaimedDino_C.ReceiveTick");

	UBTS_UpdateClaimedDino_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTS_UpdateClaimedDino.BTS_UpdateClaimedDino_C.ExecuteUbergraph_BTS_UpdateClaimedDino
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTS_UpdateClaimedDino_C::ExecuteUbergraph_BTS_UpdateClaimedDino(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_UpdateClaimedDino.BTS_UpdateClaimedDino_C.ExecuteUbergraph_BTS_UpdateClaimedDino");

	UBTS_UpdateClaimedDino_C_ExecuteUbergraph_BTS_UpdateClaimedDino_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
