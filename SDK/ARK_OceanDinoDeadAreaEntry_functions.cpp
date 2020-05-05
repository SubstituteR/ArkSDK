// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_OceanDinoDeadAreaEntry_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OceanDinoDeadAreaEntry.OceanDinoDeadAreaEntry_C.UserConstructionScript
// ()

void AOceanDinoDeadAreaEntry_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanDinoDeadAreaEntry.OceanDinoDeadAreaEntry_C.UserConstructionScript");

	AOceanDinoDeadAreaEntry_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanDinoDeadAreaEntry.OceanDinoDeadAreaEntry_C.ExecuteUbergraph_OceanDinoDeadAreaEntry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOceanDinoDeadAreaEntry_C::ExecuteUbergraph_OceanDinoDeadAreaEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanDinoDeadAreaEntry.OceanDinoDeadAreaEntry_C.ExecuteUbergraph_OceanDinoDeadAreaEntry");

	AOceanDinoDeadAreaEntry_C_ExecuteUbergraph_OceanDinoDeadAreaEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
