// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Sarco_Character_BP_Hunt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Sarco_Character_BP_Hunt.Sarco_Character_BP_Hunt_C.Compute Allow Carry
// ()
// Parameters:
// class APrimalCharacter**       Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Allow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASarco_Character_BP_Hunt_C::Compute_Allow_Carry(class APrimalCharacter** Target, bool* Allow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP_Hunt.Sarco_Character_BP_Hunt_C.Compute Allow Carry");

	ASarco_Character_BP_Hunt_C_Compute_Allow_Carry_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allow != nullptr)
		*Allow = params.Allow;
}


// Function Sarco_Character_BP_Hunt.Sarco_Character_BP_Hunt_C.BPGetDragSocketDinoName
// ()
// Parameters:
// class APrimalDinoCharacter**   aGrabbedDino                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ASarco_Character_BP_Hunt_C::BPGetDragSocketDinoName(class APrimalDinoCharacter** aGrabbedDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP_Hunt.Sarco_Character_BP_Hunt_C.BPGetDragSocketDinoName");

	ASarco_Character_BP_Hunt_C_BPGetDragSocketDinoName_Params params;
	params.aGrabbedDino = aGrabbedDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Sarco_Character_BP_Hunt.Sarco_Character_BP_Hunt_C.BPGetDragSocketName
// ()
// Parameters:
// class APrimalCharacter**       DraggingChar                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ASarco_Character_BP_Hunt_C::BPGetDragSocketName(class APrimalCharacter** DraggingChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP_Hunt.Sarco_Character_BP_Hunt_C.BPGetDragSocketName");

	ASarco_Character_BP_Hunt_C_BPGetDragSocketName_Params params;
	params.DraggingChar = DraggingChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Sarco_Character_BP_Hunt.Sarco_Character_BP_Hunt_C.UserConstructionScript
// ()

void ASarco_Character_BP_Hunt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP_Hunt.Sarco_Character_BP_Hunt_C.UserConstructionScript");

	ASarco_Character_BP_Hunt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sarco_Character_BP_Hunt.Sarco_Character_BP_Hunt_C.ExecuteUbergraph_Sarco_Character_BP_Hunt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASarco_Character_BP_Hunt_C::ExecuteUbergraph_Sarco_Character_BP_Hunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP_Hunt.Sarco_Character_BP_Hunt_C.ExecuteUbergraph_Sarco_Character_BP_Hunt");

	ASarco_Character_BP_Hunt_C_ExecuteUbergraph_Sarco_Character_BP_Hunt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
