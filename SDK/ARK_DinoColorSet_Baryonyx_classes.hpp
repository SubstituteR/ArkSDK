#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoColorSet_Baryonyx_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoColorSet_Baryonyx.DinoColorSet_Baryonyx_C
// 0x0000 (0x0268 - 0x0268)
class UDinoColorSet_Baryonyx_C : public UPrimalColorSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_Baryonyx.DinoColorSet_Baryonyx_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoColorSet_Baryonyx(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
