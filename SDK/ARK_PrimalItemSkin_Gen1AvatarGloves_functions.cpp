// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemSkin_Gen1AvatarGloves_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_Gen1AvatarGloves.PrimalItemSkin_Gen1AvatarGloves_C.ExecuteUbergraph_PrimalItemSkin_Gen1AvatarGloves
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_Gen1AvatarGloves_C::ExecuteUbergraph_PrimalItemSkin_Gen1AvatarGloves(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Gen1AvatarGloves.PrimalItemSkin_Gen1AvatarGloves_C.ExecuteUbergraph_PrimalItemSkin_Gen1AvatarGloves");

	UPrimalItemSkin_Gen1AvatarGloves_C_ExecuteUbergraph_PrimalItemSkin_Gen1AvatarGloves_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
