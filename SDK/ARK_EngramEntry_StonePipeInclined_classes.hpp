#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_StonePipeInclined_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_StonePipeInclined.EngramEntry_StonePipeInclined_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_StonePipeInclined_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_StonePipeInclined.EngramEntry_StonePipeInclined_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_StonePipeInclined(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
