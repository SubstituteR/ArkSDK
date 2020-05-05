// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Salmon_Character_BP_Escort_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Salmon_Character_BP_Escort.Salmon_Character_BP_Escort_C.BPCanNotifyTeamAggroAI
// ()
// Parameters:
// class APrimalDinoCharacter**   Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASalmon_Character_BP_Escort_C::BPCanNotifyTeamAggroAI(class APrimalDinoCharacter** Dino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Salmon_Character_BP_Escort.Salmon_Character_BP_Escort_C.BPCanNotifyTeamAggroAI");

	ASalmon_Character_BP_Escort_C_BPCanNotifyTeamAggroAI_Params params;
	params.Dino = Dino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Salmon_Character_BP_Escort.Salmon_Character_BP_Escort_C.UserConstructionScript
// ()

void ASalmon_Character_BP_Escort_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Salmon_Character_BP_Escort.Salmon_Character_BP_Escort_C.UserConstructionScript");

	ASalmon_Character_BP_Escort_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Salmon_Character_BP_Escort.Salmon_Character_BP_Escort_C.BPDinoPostBeginPlay
// ()

void ASalmon_Character_BP_Escort_C::BPDinoPostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Salmon_Character_BP_Escort.Salmon_Character_BP_Escort_C.BPDinoPostBeginPlay");

	ASalmon_Character_BP_Escort_C_BPDinoPostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Salmon_Character_BP_Escort.Salmon_Character_BP_Escort_C.ExecuteUbergraph_Salmon_Character_BP_Escort
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASalmon_Character_BP_Escort_C::ExecuteUbergraph_Salmon_Character_BP_Escort(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Salmon_Character_BP_Escort.Salmon_Character_BP_Escort_C.ExecuteUbergraph_Salmon_Character_BP_Escort");

	ASalmon_Character_BP_Escort_C_ExecuteUbergraph_Salmon_Character_BP_Escort_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
