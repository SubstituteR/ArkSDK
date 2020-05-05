// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Pteroteuthis_Char_BP_HuntFollower_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Pteroteuthis_Char_BP_HuntFollower.Pteroteuthis_Char_BP_HuntFollower_C.UserConstructionScript
// ()

void APteroteuthis_Char_BP_HuntFollower_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP_HuntFollower.Pteroteuthis_Char_BP_HuntFollower_C.UserConstructionScript");

	APteroteuthis_Char_BP_HuntFollower_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP_HuntFollower.Pteroteuthis_Char_BP_HuntFollower_C.ExecuteUbergraph_Pteroteuthis_Char_BP_HuntFollower
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APteroteuthis_Char_BP_HuntFollower_C::ExecuteUbergraph_Pteroteuthis_Char_BP_HuntFollower(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP_HuntFollower.Pteroteuthis_Char_BP_HuntFollower_C.ExecuteUbergraph_Pteroteuthis_Char_BP_HuntFollower");

	APteroteuthis_Char_BP_HuntFollower_C_ExecuteUbergraph_Pteroteuthis_Char_BP_HuntFollower_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
