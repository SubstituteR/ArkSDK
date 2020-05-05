// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_StructureBP_WoodChair_Indestructible_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureBP_WoodChair_Indestructible.StructureBP_WoodChair_Indestructible_C.UserConstructionScript
// ()

void AStructureBP_WoodChair_Indestructible_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureBP_WoodChair_Indestructible.StructureBP_WoodChair_Indestructible_C.UserConstructionScript");

	AStructureBP_WoodChair_Indestructible_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureBP_WoodChair_Indestructible.StructureBP_WoodChair_Indestructible_C.ExecuteUbergraph_StructureBP_WoodChair_Indestructible
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructureBP_WoodChair_Indestructible_C::ExecuteUbergraph_StructureBP_WoodChair_Indestructible(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureBP_WoodChair_Indestructible.StructureBP_WoodChair_Indestructible_C.ExecuteUbergraph_StructureBP_WoodChair_Indestructible");

	AStructureBP_WoodChair_Indestructible_C_ExecuteUbergraph_StructureBP_WoodChair_Indestructible_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
