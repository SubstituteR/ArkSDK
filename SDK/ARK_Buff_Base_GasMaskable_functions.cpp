// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Base_GasMaskable_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Base_GasMaskable.Buff_Base_GasMaskable_C.UserConstructionScript
// ()

void ABuff_Base_GasMaskable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_GasMaskable.Buff_Base_GasMaskable_C.UserConstructionScript");

	ABuff_Base_GasMaskable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Base_GasMaskable.Buff_Base_GasMaskable_C.ExecuteUbergraph_Buff_Base_GasMaskable
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Base_GasMaskable_C::ExecuteUbergraph_Buff_Base_GasMaskable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_GasMaskable.Buff_Base_GasMaskable_C.ExecuteUbergraph_Buff_Base_GasMaskable");

	ABuff_Base_GasMaskable_C_ExecuteUbergraph_Buff_Base_GasMaskable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
