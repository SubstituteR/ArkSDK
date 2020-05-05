// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Gen_AreaBuff_Volcanic_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gen_AreaBuff_Volcanic.Gen_AreaBuff_Volcanic_C.Get Closest Active Volcano Locations
// ()
// Parameters:
// float                          locIntensity                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Volcanic_C::Get_Closest_Active_Volcano_Locations(float* locIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Volcanic.Gen_AreaBuff_Volcanic_C.Get Closest Active Volcano Locations");

	AGen_AreaBuff_Volcanic_C_Get_Closest_Active_Volcano_Locations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (locIntensity != nullptr)
		*locIntensity = params.locIntensity;
}


// Function Gen_AreaBuff_Volcanic.Gen_AreaBuff_Volcanic_C.LocalEffects
// ()

void AGen_AreaBuff_Volcanic_C::LocalEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Volcanic.Gen_AreaBuff_Volcanic_C.LocalEffects");

	AGen_AreaBuff_Volcanic_C_LocalEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Volcanic.Gen_AreaBuff_Volcanic_C.UserConstructionScript
// ()

void AGen_AreaBuff_Volcanic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Volcanic.Gen_AreaBuff_Volcanic_C.UserConstructionScript");

	AGen_AreaBuff_Volcanic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Volcanic.Gen_AreaBuff_Volcanic_C.Timeline_0__FinishedFunc
// ()

void AGen_AreaBuff_Volcanic_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Volcanic.Gen_AreaBuff_Volcanic_C.Timeline_0__FinishedFunc");

	AGen_AreaBuff_Volcanic_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Volcanic.Gen_AreaBuff_Volcanic_C.Timeline_0__UpdateFunc
// ()

void AGen_AreaBuff_Volcanic_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Volcanic.Gen_AreaBuff_Volcanic_C.Timeline_0__UpdateFunc");

	AGen_AreaBuff_Volcanic_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Volcanic.Gen_AreaBuff_Volcanic_C.Lerp Visuals
// ()

void AGen_AreaBuff_Volcanic_C::Lerp_Visuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Volcanic.Gen_AreaBuff_Volcanic_C.Lerp Visuals");

	AGen_AreaBuff_Volcanic_C_Lerp_Visuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Volcanic.Gen_AreaBuff_Volcanic_C.ExecuteUbergraph_Gen_AreaBuff_Volcanic
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Volcanic_C::ExecuteUbergraph_Gen_AreaBuff_Volcanic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Volcanic.Gen_AreaBuff_Volcanic_C.ExecuteUbergraph_Gen_AreaBuff_Volcanic");

	AGen_AreaBuff_Volcanic_C_ExecuteUbergraph_Gen_AreaBuff_Volcanic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
