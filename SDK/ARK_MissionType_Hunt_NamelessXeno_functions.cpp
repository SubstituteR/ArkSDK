// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Hunt_NamelessXeno_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Hunt_NamelessXeno.MissionType_Hunt_NamelessXeno_C.GetDinosToSpawnForStage
// (Event, NetMulticast, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// int*                           ForStage                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FDinoSetup>      DinosSetups                    (Parm, OutParm, ZeroConstructor)
// TArray<bool>                   IsMainTarget                   (Parm, OutParm, ZeroConstructor)

void AMissionType_Hunt_NamelessXeno_C::GetDinosToSpawnForStage(int* ForStage, TArray<struct FDinoSetup>* DinosSetups, TArray<bool>* IsMainTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt_NamelessXeno.MissionType_Hunt_NamelessXeno_C.GetDinosToSpawnForStage");

	AMissionType_Hunt_NamelessXeno_C_GetDinosToSpawnForStage_Params params;
	params.ForStage = ForStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DinosSetups != nullptr)
		*DinosSetups = params.DinosSetups;
	if (IsMainTarget != nullptr)
		*IsMainTarget = params.IsMainTarget;
}


// Function MissionType_Hunt_NamelessXeno.MissionType_Hunt_NamelessXeno_C.UserConstructionScript
// ()

void AMissionType_Hunt_NamelessXeno_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt_NamelessXeno.MissionType_Hunt_NamelessXeno_C.UserConstructionScript");

	AMissionType_Hunt_NamelessXeno_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt_NamelessXeno.MissionType_Hunt_NamelessXeno_C.ExecuteUbergraph_MissionType_Hunt_NamelessXeno
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_NamelessXeno_C::ExecuteUbergraph_MissionType_Hunt_NamelessXeno(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt_NamelessXeno.MissionType_Hunt_NamelessXeno_C.ExecuteUbergraph_MissionType_Hunt_NamelessXeno");

	AMissionType_Hunt_NamelessXeno_C_ExecuteUbergraph_MissionType_Hunt_NamelessXeno_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
