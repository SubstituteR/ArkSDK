// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoEntry_GiantTurtle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_GiantTurtle.DinoEntry_GiantTurtle_C.ExecuteUbergraph_DinoEntry_GiantTurtle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_GiantTurtle_C::ExecuteUbergraph_DinoEntry_GiantTurtle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_GiantTurtle.DinoEntry_GiantTurtle_C.ExecuteUbergraph_DinoEntry_GiantTurtle");

	UDinoEntry_GiantTurtle_C_ExecuteUbergraph_DinoEntry_GiantTurtle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
