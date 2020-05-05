// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MatineeValueInterpolationContainer_Gen1_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MatineeValueInterpolationContainer_Gen1.MatineeValueInterpolationContainer_Gen1_C.UserConstructionScript
// ()

void AMatineeValueInterpolationContainer_Gen1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatineeValueInterpolationContainer_Gen1.MatineeValueInterpolationContainer_Gen1_C.UserConstructionScript");

	AMatineeValueInterpolationContainer_Gen1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatineeValueInterpolationContainer_Gen1.MatineeValueInterpolationContainer_Gen1_C.ExecuteUbergraph_MatineeValueInterpolationContainer_Gen1
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMatineeValueInterpolationContainer_Gen1_C::ExecuteUbergraph_MatineeValueInterpolationContainer_Gen1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatineeValueInterpolationContainer_Gen1.MatineeValueInterpolationContainer_Gen1_C.ExecuteUbergraph_MatineeValueInterpolationContainer_Gen1");

	AMatineeValueInterpolationContainer_Gen1_C_ExecuteUbergraph_MatineeValueInterpolationContainer_Gen1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
