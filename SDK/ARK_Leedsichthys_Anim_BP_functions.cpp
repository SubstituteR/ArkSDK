// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Leedsichthys_Anim_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Leedsichthys_Anim_BP.Leedsichthys_Anim_BP_C.ExecuteUbergraph_Leedsichthys_Anim_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULeedsichthys_Anim_BP_C::ExecuteUbergraph_Leedsichthys_Anim_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Leedsichthys_Anim_BP.Leedsichthys_Anim_BP_C.ExecuteUbergraph_Leedsichthys_Anim_BP");

	ULeedsichthys_Anim_BP_C_ExecuteUbergraph_Leedsichthys_Anim_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
