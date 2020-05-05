// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjGiantRock_RockElemental_Fire_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjGiantRock_RockElemental_Fire.ProjGiantRock_RockElemental_Fire_C.ExplodeFireRock
// (NetReliable, NetRequest, Native, MulticastDelegate, NetServer, Const)

void AProjGiantRock_RockElemental_Fire_C::ExplodeFireRock()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGiantRock_RockElemental_Fire.ProjGiantRock_RockElemental_Fire_C.ExplodeFireRock");

	AProjGiantRock_RockElemental_Fire_C_ExplodeFireRock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGiantRock_RockElemental_Fire.ProjGiantRock_RockElemental_Fire_C.UserConstructionScript
// ()

void AProjGiantRock_RockElemental_Fire_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGiantRock_RockElemental_Fire.ProjGiantRock_RockElemental_Fire_C.UserConstructionScript");

	AProjGiantRock_RockElemental_Fire_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGiantRock_RockElemental_Fire.ProjGiantRock_RockElemental_Fire_C.ReceiveBeginPlay
// ()

void AProjGiantRock_RockElemental_Fire_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGiantRock_RockElemental_Fire.ProjGiantRock_RockElemental_Fire_C.ReceiveBeginPlay");

	AProjGiantRock_RockElemental_Fire_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjGiantRock_RockElemental_Fire.ProjGiantRock_RockElemental_Fire_C.ExecuteUbergraph_ProjGiantRock_RockElemental_Fire
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjGiantRock_RockElemental_Fire_C::ExecuteUbergraph_ProjGiantRock_RockElemental_Fire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjGiantRock_RockElemental_Fire.ProjGiantRock_RockElemental_Fire_C.ExecuteUbergraph_ProjGiantRock_RockElemental_Fire");

	AProjGiantRock_RockElemental_Fire_C_ExecuteUbergraph_ProjGiantRock_RockElemental_Fire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
