// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Bee_Queen_Character_BP_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bee_Queen_Character_BP_Gauntlet.Bee_Queen_Character_BP_Gauntlet_C.UserConstructionScript
// ()

void ABee_Queen_Character_BP_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP_Gauntlet.Bee_Queen_Character_BP_Gauntlet_C.UserConstructionScript");

	ABee_Queen_Character_BP_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bee_Queen_Character_BP_Gauntlet.Bee_Queen_Character_BP_Gauntlet_C.OnDied_Event
// ()
// Parameters:
// class APrimalCharacter**       DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void ABee_Queen_Character_BP_Gauntlet_C::OnDied_Event(class APrimalCharacter** DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP_Gauntlet.Bee_Queen_Character_BP_Gauntlet_C.OnDied_Event");

	ABee_Queen_Character_BP_Gauntlet_C_OnDied_Event_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bee_Queen_Character_BP_Gauntlet.Bee_Queen_Character_BP_Gauntlet_C.ExecuteUbergraph_Bee_Queen_Character_BP_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABee_Queen_Character_BP_Gauntlet_C::ExecuteUbergraph_Bee_Queen_Character_BP_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bee_Queen_Character_BP_Gauntlet.Bee_Queen_Character_BP_Gauntlet_C.ExecuteUbergraph_Bee_Queen_Character_BP_Gauntlet");

	ABee_Queen_Character_BP_Gauntlet_C_ExecuteUbergraph_Bee_Queen_Character_BP_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
