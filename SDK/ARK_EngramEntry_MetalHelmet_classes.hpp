#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_MetalHelmet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_MetalHelmet.EngramEntry_MetalHelmet_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_MetalHelmet_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_MetalHelmet.EngramEntry_MetalHelmet_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_MetalHelmet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
