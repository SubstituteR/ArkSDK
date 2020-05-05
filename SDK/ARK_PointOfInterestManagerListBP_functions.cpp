// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PointOfInterestManagerListBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PointOfInterestManagerListBP.PointOfInterestManagerListBP_C.UserConstructionScript
// ()

void APointOfInterestManagerListBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestManagerListBP.PointOfInterestManagerListBP_C.UserConstructionScript");

	APointOfInterestManagerListBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PointOfInterestManagerListBP.PointOfInterestManagerListBP_C.ExecuteUbergraph_PointOfInterestManagerListBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APointOfInterestManagerListBP_C::ExecuteUbergraph_PointOfInterestManagerListBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointOfInterestManagerListBP.PointOfInterestManagerListBP_C.ExecuteUbergraph_PointOfInterestManagerListBP");

	APointOfInterestManagerListBP_C_ExecuteUbergraph_PointOfInterestManagerListBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
