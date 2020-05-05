// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_RetrieveItem_Egg_Cherufe_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_RetrieveItem_Egg_Cherufe.MissionType_RetrieveItem_Egg_Cherufe_C.ExtraSpecificDinoSetup
// ()
// Parameters:
// class APrimalDinoCharacter**   Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// class AMissionServerSidePoint** Spawner                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAttackerDino                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_RetrieveItem_Egg_Cherufe_C::ExtraSpecificDinoSetup(class APrimalDinoCharacter** Dino, class AMissionServerSidePoint** Spawner, bool* IsAttackerDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_RetrieveItem_Egg_Cherufe.MissionType_RetrieveItem_Egg_Cherufe_C.ExtraSpecificDinoSetup");

	AMissionType_RetrieveItem_Egg_Cherufe_C_ExtraSpecificDinoSetup_Params params;
	params.Dino = Dino;
	params.Spawner = Spawner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAttackerDino != nullptr)
		*IsAttackerDino = params.IsAttackerDino;
}


// Function MissionType_RetrieveItem_Egg_Cherufe.MissionType_RetrieveItem_Egg_Cherufe_C.UserConstructionScript
// ()

void AMissionType_RetrieveItem_Egg_Cherufe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_RetrieveItem_Egg_Cherufe.MissionType_RetrieveItem_Egg_Cherufe_C.UserConstructionScript");

	AMissionType_RetrieveItem_Egg_Cherufe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_RetrieveItem_Egg_Cherufe.MissionType_RetrieveItem_Egg_Cherufe_C.ExecuteUbergraph_MissionType_RetrieveItem_Egg_Cherufe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_RetrieveItem_Egg_Cherufe_C::ExecuteUbergraph_MissionType_RetrieveItem_Egg_Cherufe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_RetrieveItem_Egg_Cherufe.MissionType_RetrieveItem_Egg_Cherufe_C.ExecuteUbergraph_MissionType_RetrieveItem_Egg_Cherufe");

	AMissionType_RetrieveItem_Egg_Cherufe_C_ExecuteUbergraph_MissionType_RetrieveItem_Egg_Cherufe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
