// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BoneModifiersContainer_ChibiDirewolf_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoneModifiersContainer_ChibiDirewolf.BoneModifiersContainer_ChibiDirewolf_C.ExecuteUbergraph_BoneModifiersContainer_ChibiDirewolf
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModifiersContainer_ChibiDirewolf_C::ExecuteUbergraph_BoneModifiersContainer_ChibiDirewolf(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiDirewolf.BoneModifiersContainer_ChibiDirewolf_C.ExecuteUbergraph_BoneModifiersContainer_ChibiDirewolf");

	UBoneModifiersContainer_ChibiDirewolf_C_ExecuteUbergraph_BoneModifiersContainer_ChibiDirewolf_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
