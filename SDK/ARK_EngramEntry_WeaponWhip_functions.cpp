// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_WeaponWhip_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_WeaponWhip.EngramEntry_WeaponWhip_C.ExecuteUbergraph_EngramEntry_WeaponWhip
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_WeaponWhip_C::ExecuteUbergraph_EngramEntry_WeaponWhip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_WeaponWhip.EngramEntry_WeaponWhip_C.ExecuteUbergraph_EngramEntry_WeaponWhip");

	UEngramEntry_WeaponWhip_C_ExecuteUbergraph_EngramEntry_WeaponWhip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
