#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BoneModifiersContainer_ChibiMegatherium_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BoneModifiersContainer_ChibiMegatherium.BoneModifiersContainer_ChibiMegatherium_C
// 0x0000 (0x0038 - 0x0038)
class UBoneModifiersContainer_ChibiMegatherium_C : public UBoneModifiersContainer_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiMegatherium.BoneModifiersContainer_ChibiMegatherium_C");
		return ptr;
	}


	void ExecuteUbergraph_BoneModifiersContainer_ChibiMegatherium(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
