#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DestroyedMeshBase_IgnoreSelf_FastFade_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DestroyedMeshBase_IgnoreSelf_FastFade.DestroyedMeshBase_IgnoreSelf_FastFade_C
// 0x0000 (0x0498 - 0x0498)
class ADestroyedMeshBase_IgnoreSelf_FastFade_C : public ADestroyedMeshBase_IgnoreSelf_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DestroyedMeshBase_IgnoreSelf_FastFade.DestroyedMeshBase_IgnoreSelf_FastFade_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DestroyedMeshBase_IgnoreSelf_FastFade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
