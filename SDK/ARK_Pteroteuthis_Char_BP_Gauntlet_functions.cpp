// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Pteroteuthis_Char_BP_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Pteroteuthis_Char_BP_Gauntlet.Pteroteuthis_Char_BP_Gauntlet_C.CreateChargeManager
// ()

void APteroteuthis_Char_BP_Gauntlet_C::CreateChargeManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP_Gauntlet.Pteroteuthis_Char_BP_Gauntlet_C.CreateChargeManager");

	APteroteuthis_Char_BP_Gauntlet_C_CreateChargeManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP_Gauntlet.Pteroteuthis_Char_BP_Gauntlet_C.OverrideRandomWanderLocation
// ()
// Parameters:
// struct FVector                 originalDestination            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 inVec                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APteroteuthis_Char_BP_Gauntlet_C::OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP_Gauntlet.Pteroteuthis_Char_BP_Gauntlet_C.OverrideRandomWanderLocation");

	APteroteuthis_Char_BP_Gauntlet_C_OverrideRandomWanderLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (originalDestination != nullptr)
		*originalDestination = params.originalDestination;
	if (inVec != nullptr)
		*inVec = params.inVec;
}


// Function Pteroteuthis_Char_BP_Gauntlet.Pteroteuthis_Char_BP_Gauntlet_C.UserConstructionScript
// ()

void APteroteuthis_Char_BP_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP_Gauntlet.Pteroteuthis_Char_BP_Gauntlet_C.UserConstructionScript");

	APteroteuthis_Char_BP_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pteroteuthis_Char_BP_Gauntlet.Pteroteuthis_Char_BP_Gauntlet_C.ExecuteUbergraph_Pteroteuthis_Char_BP_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APteroteuthis_Char_BP_Gauntlet_C::ExecuteUbergraph_Pteroteuthis_Char_BP_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pteroteuthis_Char_BP_Gauntlet.Pteroteuthis_Char_BP_Gauntlet_C.ExecuteUbergraph_Pteroteuthis_Char_BP_Gauntlet");

	APteroteuthis_Char_BP_Gauntlet_C_ExecuteUbergraph_Pteroteuthis_Char_BP_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
