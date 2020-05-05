// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Salmon_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Salmon_Character_BP.Salmon_Character_BP_C.UserConstructionScript
// ()

void ASalmon_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Salmon_Character_BP.Salmon_Character_BP_C.UserConstructionScript");

	ASalmon_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Salmon_Character_BP.Salmon_Character_BP_C.ExecuteUbergraph_Salmon_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASalmon_Character_BP_C::ExecuteUbergraph_Salmon_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Salmon_Character_BP.Salmon_Character_BP_C.ExecuteUbergraph_Salmon_Character_BP");

	ASalmon_Character_BP_C_ExecuteUbergraph_Salmon_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
