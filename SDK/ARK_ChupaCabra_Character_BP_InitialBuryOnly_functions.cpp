// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ChupaCabra_Character_BP_InitialBuryOnly_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChupaCabra_Character_BP_InitialBuryOnly.ChupaCabra_Character_BP_InitialBuryOnly_C.Has Relevant Target
// ()
// Parameters:
// bool                           relevant                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_InitialBuryOnly_C::Has_Relevant_Target(bool* relevant)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP_InitialBuryOnly.ChupaCabra_Character_BP_InitialBuryOnly_C.Has Relevant Target");

	AChupaCabra_Character_BP_InitialBuryOnly_C_Has_Relevant_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (relevant != nullptr)
		*relevant = params.relevant;
}


// Function ChupaCabra_Character_BP_InitialBuryOnly.ChupaCabra_Character_BP_InitialBuryOnly_C.OnDiveOut
// ()

void AChupaCabra_Character_BP_InitialBuryOnly_C::OnDiveOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP_InitialBuryOnly.ChupaCabra_Character_BP_InitialBuryOnly_C.OnDiveOut");

	AChupaCabra_Character_BP_InitialBuryOnly_C_OnDiveOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP_InitialBuryOnly.ChupaCabra_Character_BP_InitialBuryOnly_C.CanSpawnMinion
// ()
// Parameters:
// bool                           canSpawn                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_InitialBuryOnly_C::CanSpawnMinion(bool* canSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP_InitialBuryOnly.ChupaCabra_Character_BP_InitialBuryOnly_C.CanSpawnMinion");

	AChupaCabra_Character_BP_InitialBuryOnly_C_CanSpawnMinion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canSpawn != nullptr)
		*canSpawn = params.canSpawn;
}


// Function ChupaCabra_Character_BP_InitialBuryOnly.ChupaCabra_Character_BP_InitialBuryOnly_C.UserConstructionScript
// ()

void AChupaCabra_Character_BP_InitialBuryOnly_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP_InitialBuryOnly.ChupaCabra_Character_BP_InitialBuryOnly_C.UserConstructionScript");

	AChupaCabra_Character_BP_InitialBuryOnly_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP_InitialBuryOnly.ChupaCabra_Character_BP_InitialBuryOnly_C.ExecuteUbergraph_ChupaCabra_Character_BP_InitialBuryOnly
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_InitialBuryOnly_C::ExecuteUbergraph_ChupaCabra_Character_BP_InitialBuryOnly(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP_InitialBuryOnly.ChupaCabra_Character_BP_InitialBuryOnly_C.ExecuteUbergraph_ChupaCabra_Character_BP_InitialBuryOnly");

	AChupaCabra_Character_BP_InitialBuryOnly_C_ExecuteUbergraph_ChupaCabra_Character_BP_InitialBuryOnly_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
