// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoSettings_Gacha_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Gacha.DinoSettings_Gacha_C.ExecuteUbergraph_DinoSettings_Gacha
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Gacha_C::ExecuteUbergraph_DinoSettings_Gacha(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Gacha.DinoSettings_Gacha_C.ExecuteUbergraph_DinoSettings_Gacha");

	UDinoSettings_Gacha_C_ExecuteUbergraph_DinoSettings_Gacha_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
