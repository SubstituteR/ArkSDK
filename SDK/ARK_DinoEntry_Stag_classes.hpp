#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoEntry_Stag_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_Stag.DinoEntry_Stag_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_Stag_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Stag.DinoEntry_Stag_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_Stag(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
