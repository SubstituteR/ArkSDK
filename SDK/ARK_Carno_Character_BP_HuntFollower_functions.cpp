// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Carno_Character_BP_HuntFollower_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Carno_Character_BP_HuntFollower.Carno_Character_BP_HuntFollower_C.UserConstructionScript
// ()

void ACarno_Character_BP_HuntFollower_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Carno_Character_BP_HuntFollower.Carno_Character_BP_HuntFollower_C.UserConstructionScript");

	ACarno_Character_BP_HuntFollower_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Carno_Character_BP_HuntFollower.Carno_Character_BP_HuntFollower_C.ExecuteUbergraph_Carno_Character_BP_HuntFollower
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACarno_Character_BP_HuntFollower_C::ExecuteUbergraph_Carno_Character_BP_HuntFollower(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Carno_Character_BP_HuntFollower.Carno_Character_BP_HuntFollower_C.ExecuteUbergraph_Carno_Character_BP_HuntFollower");

	ACarno_Character_BP_HuntFollower_C_ExecuteUbergraph_Carno_Character_BP_HuntFollower_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
