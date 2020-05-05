// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Genesis_Respawn_Intro_World_Rig_Child_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Genesis_Respawn_Intro_World_Rig_Child.Genesis_Respawn_Intro_World_Rig_Child_C.UserConstructionScript
// ()

void AGenesis_Respawn_Intro_World_Rig_Child_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Genesis_Respawn_Intro_World_Rig_Child.Genesis_Respawn_Intro_World_Rig_Child_C.UserConstructionScript");

	AGenesis_Respawn_Intro_World_Rig_Child_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Genesis_Respawn_Intro_World_Rig_Child.Genesis_Respawn_Intro_World_Rig_Child_C.ExecuteUbergraph_Genesis_Respawn_Intro_World_Rig_Child
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGenesis_Respawn_Intro_World_Rig_Child_C::ExecuteUbergraph_Genesis_Respawn_Intro_World_Rig_Child(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Genesis_Respawn_Intro_World_Rig_Child.Genesis_Respawn_Intro_World_Rig_Child_C.ExecuteUbergraph_Genesis_Respawn_Intro_World_Rig_Child");

	AGenesis_Respawn_Intro_World_Rig_Child_C_ExecuteUbergraph_Genesis_Respawn_Intro_World_Rig_Child_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
