#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoEntry_Dodo_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_Dodo.DinoEntry_Dodo_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_Dodo_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Dodo.DinoEntry_Dodo_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_Dodo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
