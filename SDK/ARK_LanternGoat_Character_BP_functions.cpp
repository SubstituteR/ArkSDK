// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_LanternGoat_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LanternGoat_Character_BP.LanternGoat_Character_BP_C.ReceiveBeginPlay
// ()

void ALanternGoat_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternGoat_Character_BP.LanternGoat_Character_BP_C.ReceiveBeginPlay");

	ALanternGoat_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternGoat_Character_BP.LanternGoat_Character_BP_C.UserConstructionScript
// ()

void ALanternGoat_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternGoat_Character_BP.LanternGoat_Character_BP_C.UserConstructionScript");

	ALanternGoat_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternGoat_Character_BP.LanternGoat_Character_BP_C.ExecuteUbergraph_LanternGoat_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALanternGoat_Character_BP_C::ExecuteUbergraph_LanternGoat_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternGoat_Character_BP.LanternGoat_Character_BP_C.ExecuteUbergraph_LanternGoat_Character_BP");

	ALanternGoat_Character_BP_C_ExecuteUbergraph_LanternGoat_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif