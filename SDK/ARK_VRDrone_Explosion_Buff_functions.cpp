// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRDrone_Explosion_Buff_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VRDrone_Explosion_Buff.VRDrone_Explosion_Buff_C.ReceiveDestroyed
// ()

void AVRDrone_Explosion_Buff_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRDrone_Explosion_Buff.VRDrone_Explosion_Buff_C.ReceiveDestroyed");

	AVRDrone_Explosion_Buff_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRDrone_Explosion_Buff.VRDrone_Explosion_Buff_C.UserConstructionScript
// ()

void AVRDrone_Explosion_Buff_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRDrone_Explosion_Buff.VRDrone_Explosion_Buff_C.UserConstructionScript");

	AVRDrone_Explosion_Buff_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRDrone_Explosion_Buff.VRDrone_Explosion_Buff_C.ReceiveBeginPlay
// ()

void AVRDrone_Explosion_Buff_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRDrone_Explosion_Buff.VRDrone_Explosion_Buff_C.ReceiveBeginPlay");

	AVRDrone_Explosion_Buff_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRDrone_Explosion_Buff.VRDrone_Explosion_Buff_C.ExecuteUbergraph_VRDrone_Explosion_Buff
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVRDrone_Explosion_Buff_C::ExecuteUbergraph_VRDrone_Explosion_Buff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRDrone_Explosion_Buff.VRDrone_Explosion_Buff_C.ExecuteUbergraph_VRDrone_Explosion_Buff");

	AVRDrone_Explosion_Buff_C_ExecuteUbergraph_VRDrone_Explosion_Buff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
