#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BPFX_EXT_WL_TreeA_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPFX_EXT_WL_TreeA.BPFX_EXT_WL_TreeA_C
// 0x0000 (0x0810 - 0x0810)
class UBPFX_EXT_WL_TreeA_C : public UParticleSystemComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPFX_EXT_WL_TreeA.BPFX_EXT_WL_TreeA_C");
		return ptr;
	}


	void ExecuteUbergraph_BPFX_EXT_WL_TreeA(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
