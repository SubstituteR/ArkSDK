// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Genesis_Intro_World_Rig_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Genesis_Intro_World_Rig.Genesis_Intro_World_Rig_C.ReceiveBeginPlay
// ()

void AGenesis_Intro_World_Rig_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Genesis_Intro_World_Rig.Genesis_Intro_World_Rig_C.ReceiveBeginPlay");

	AGenesis_Intro_World_Rig_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Genesis_Intro_World_Rig.Genesis_Intro_World_Rig_C.UserConstructionScript
// ()

void AGenesis_Intro_World_Rig_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Genesis_Intro_World_Rig.Genesis_Intro_World_Rig_C.UserConstructionScript");

	AGenesis_Intro_World_Rig_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Genesis_Intro_World_Rig.Genesis_Intro_World_Rig_C.ExecuteUbergraph_Genesis_Intro_World_Rig
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGenesis_Intro_World_Rig_C::ExecuteUbergraph_Genesis_Intro_World_Rig(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Genesis_Intro_World_Rig.Genesis_Intro_World_Rig_C.ExecuteUbergraph_Genesis_Intro_World_Rig");

	AGenesis_Intro_World_Rig_C_ExecuteUbergraph_Genesis_Intro_World_Rig_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
