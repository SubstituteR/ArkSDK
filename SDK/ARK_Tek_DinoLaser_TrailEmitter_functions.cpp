// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Tek_DinoLaser_TrailEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tek_DinoLaser_TrailEmitter.Tek_DinoLaser_TrailEmitter_C.UserConstructionScript
// ()

void ATek_DinoLaser_TrailEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tek_DinoLaser_TrailEmitter.Tek_DinoLaser_TrailEmitter_C.UserConstructionScript");

	ATek_DinoLaser_TrailEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tek_DinoLaser_TrailEmitter.Tek_DinoLaser_TrailEmitter_C.ExecuteUbergraph_Tek_DinoLaser_TrailEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATek_DinoLaser_TrailEmitter_C::ExecuteUbergraph_Tek_DinoLaser_TrailEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tek_DinoLaser_TrailEmitter.Tek_DinoLaser_TrailEmitter_C.ExecuteUbergraph_Tek_DinoLaser_TrailEmitter");

	ATek_DinoLaser_TrailEmitter_C_ExecuteUbergraph_Tek_DinoLaser_TrailEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
