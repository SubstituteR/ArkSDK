// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Megalania_Character_BP_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Megalania_Character_BP_Gauntlet.Megalania_Character_BP_Gauntlet_C.UserConstructionScript
// ()

void AMegalania_Character_BP_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalania_Character_BP_Gauntlet.Megalania_Character_BP_Gauntlet_C.UserConstructionScript");

	AMegalania_Character_BP_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalania_Character_BP_Gauntlet.Megalania_Character_BP_Gauntlet_C.ExecuteUbergraph_Megalania_Character_BP_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMegalania_Character_BP_Gauntlet_C::ExecuteUbergraph_Megalania_Character_BP_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalania_Character_BP_Gauntlet.Megalania_Character_BP_Gauntlet_C.ExecuteUbergraph_Megalania_Character_BP_Gauntlet");

	AMegalania_Character_BP_Gauntlet_C_ExecuteUbergraph_Megalania_Character_BP_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
