#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BoneModifiersContainer_ChibiDirebear_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BoneModifiersContainer_ChibiDirebear.BoneModifiersContainer_ChibiDirebear_C
// 0x0000 (0x0038 - 0x0038)
class UBoneModifiersContainer_ChibiDirebear_C : public UBoneModifiersContainer_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiDirebear.BoneModifiersContainer_ChibiDirebear_C");
		return ptr;
	}


	void ExecuteUbergraph_BoneModifiersContainer_ChibiDirebear(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
