#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoEntry_TerrorBird_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_TerrorBird.DinoEntry_TerrorBird_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_TerrorBird_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_TerrorBird.DinoEntry_TerrorBird_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_TerrorBird(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
